<?php

function donl_dashboard_get_linkcheck_data($catalogus, $thema, $data_eigenaar) {
  // Retrieve the total amount of datasets available.
  $status_datasets_url = '/monitor/datasets';
  $datasets_with_status_unknown = 0;
  $status_datasets_query = array();

  $fq = 'state:active';

  // Add the specific catalogus to the search query
  if (isset($catalogus)) {
    $fq .= '+organization:' . $catalogus;
  }
  // Add the specific theme to the search query
  elseif (isset($thema)) {
    $fq .= '+theme_facet:"' . donl_dashboard_get_uri_theme($thema) . '"';
  }
  // Add the specific data maintainer to the search query
  elseif (isset($data_eigenaar)) {
    $fq .= '+maintainer_displayname:"' . urlencode($data_eigenaar) . '"';

  }

  $result = donl_dashboard_make_ckan_call('package_search?fq=' . $fq);
  if ($result->success) {
    $datasets_with_status_unknown = $result->result->count;
  }


  // Get the total count for each status
  $query = db_select('donl_dashboard_link_check_datasets', 'ddlcd');
  $query->fields('ddlcd', array('dataset_state'));
  $query->addExpression("COUNT(dataset_state)", 'count');
  if (isset($catalogus)) {
    $query->condition('dataset_catalog', $catalogus, '=');
  }
  if (isset($thema)) {
    $query->condition('dataset_theme', $thema, '=');
  }
  if (isset($data_eigenaar)) {
    $query->condition('dataset_maintainer', $data_eigenaar, '=');
  }
  $query->condition('dataset_state', 0, '!=');
  $query->groupBy('ddlcd.dataset_state');
  $query->orderBy('dataset_state');
  $result = $query->execute();

  $values = array();
  while ($record = $result->fetchAssoc()) {
    $values[$record['dataset_state']] = (int) $record['count'];
    $datasets_with_status_unknown -= (int) $record['count'];
  }
  if (isset($values[1]) || isset($values[2]) || isset($values[3])) {
    if (isset($data_eigenaar)) {
      $status_datasets_query = array("donl_maintainer_select" => $data_eigenaar);
    }
    if (isset($thema)) {
      $status_datasets_query = array("dataset_theme" => $thema);
    }
    if (isset($catalogus)) {
      $status_datasets_query = array("dataset_catalog" => $catalogus);
    }
  }

  $data = array(
    array(
      'Alles werkt: <strong>' . (isset($values[1]) ? $values[1] : 0) . '</strong>',
      (isset($values[1]) ? $values[1] : 0)
    ),
    array(
      'Sommige werken niet: <strong>' . (isset($values[2]) ? $values[2] : 0) . '</strong>',
      (isset($values[2]) ? $values[2] : 0)
    ),
    array(
      'Niets werkt: <strong>' . (isset($values[3]) ? $values[3] : 0) . '</strong>',
      (isset($values[3]) ? $values[3] : 0)
    ),
    array(
      'Nog niet gecontroleerd: <strong>' . ($datasets_with_status_unknown > 0 ? $datasets_with_status_unknown : 0) . '</strong>',
      ($datasets_with_status_unknown > 0 ? $datasets_with_status_unknown : 0)
    ),
  );

  $noscript_data = array(
    array('Alles werkt: ', (isset($values[1]) ? $values[1] : 0)),
    array('Sommige werken niet: ', (isset($values[2]) ? $values[2] : 0)),
    array('Niets werkt: ', (isset($values[3]) ? $values[3] : 0)),
    array(
      'Nog niet gecontroleerd: ',
      ($datasets_with_status_unknown > 0 ? $datasets_with_status_unknown : 0)
    ),
  );

  $options = array(
    'colors' => array(
      '#39870c',
      '#ffb612',
      '#d52b1e',
      '#b4b4b4',
    ),
    'legend' => array(
      'itemStyle' => array(
        "fontWeight" => '400',
      ),
      'layout' => 'vertical',
    ),
    'tooltip' => array(
      'headerFormat' => '',
      'pointFormat' => '{point.name}',
    ),
    'chart' => array(
      'style' => array(
        'fontFamily' => 'RijksOverheidSans',
      ),
    ),
  );

  require_once(drupal_get_path('module', 'indicia_chart') . '/includes/pie_semi_circle.inc');
  $chart = new pie_semi_circle(NULL, $data, $options);
  $html = $chart->create_chart(TRUE);
  $html .= '<noscript>';
  foreach ($noscript_data as $v) {
    $html .= $v[0] . ' <span>' . $v[1] . '</span><br />';
  }
  $html .= '</noscript>';

  return array(
    'class' => 'kwaliteit pie',
    'title' => l(t('Kwaliteit'), $status_datasets_url, array('query' => $status_datasets_query)),
    'content' => $html,
  );
}