<?php

function donl_dashboard_get_datasets_per_catalogus_chart($catalogus, $thema) {
  $keys = array();
  $query = db_select('donl_dashboard_stats_datasets', 'ddsd');
  $query->distinct();
  $query->fields('ddsd', array('timestamp'));
  $query->orderBy('timestamp', 'DESC');
  $query->range(0, 10);
  $result = $query->execute();
  while ($record = $result->fetchAssoc()) {
    $keys[$record['timestamp']] = $record['timestamp'];
  }

  $labels = array();
  foreach(array_reverse($keys) as $v) {
    $labels[$v] = date('d-m-Y', $v);
  }
  unset($keys);

  $values = array();
  foreach(array_keys($labels) as $timestamp) {
    $query = db_select('donl_dashboard_stats_datasets', 'ddsd');
    $query->join('donl_dashboard_catalogus', 'ddc', 'ddc.catalogus_id = ddsd.catalogus_id');
    $query->fields('ddc', array('catalogus_name_human'));
    $query->addExpression("SUM(open)", 'open');
    $query->addExpression("SUM(closed)", 'closed');
    $query->condition('timestamp', $timestamp, '=');
    if (isset($thema)) {
      $query->condition('theme', $thema);
    }
    if (isset($catalogus)) {
      $query->condition('catalogus_name', $catalogus, '=');
    }
    $query->groupBy('ddsd.catalogus_id');
    $result = $query->execute();
    while ($record = $result->fetchAssoc()) {
      $values[$record['catalogus_name_human']][$timestamp] = (int) ($record['open'] + $record['closed']);
    }
  }

  $data = array();
  foreach ($values as $k => $v) {
    $tmp = array();
    foreach (array_keys($labels) as $tmp_k) {
      $tmp[] = (isset($v[$tmp_k]) ? $v[$tmp_k] : NULL);
    }

    $data[] = array(
      'name' => $k,
      'data' => $tmp,
    );
  }

  $options = array(
    'xAxis' => array(
      'categories' => array_values($labels),
    ),
    'yAxis' => array(
      'title' => array(
        'text' => 'Aantal datasets',
      ),
    ),
    'colors' => array(
      '#b2d7ee',
      '#e5b2cf',
      '#c3dbb6',
      '#ffb612',
      '#76d2b6',
      '#efb2ce',
      '#8fcae7',
      '#a90061',
      '#275937',
      '#ca005d',
      '#42145f',
      '#e17000',
    ),
    'legend' => array(
      'itemStyle' => array(
        "fontWeight" => '400',
      ),
      'layout' => 'vertical',
    ),
  );

  require_once(drupal_get_path('module', 'indicia_chart') . '/includes/area_stacked.inc');
  $chart = new area_stacked(NULL, $data, $options);
  $html = $chart->create_chart(TRUE);
  $html .= '<noscript>';

  $html .= '<table><thead><tr><th>catalogus</th>';
  foreach ($labels as $v) {
    $html .= '<th>' . $v . '</th>';
  }
  $html .= '</tr></thead>';

  $html .= '<tbody>';
  foreach($data as $dataset) {
    $html .= '<tr><td>' . $dataset['name'] . '</td>';
    foreach ($dataset as $value) {
      foreach ($value as $v) {
        $html .= '<td>' . $v . '</td>';
      }
    }
    $html .= '</tr>';
  }
  $html .= '</tbody></table>';

  $html .= '</noscript>';

  return array(
    'class' => 'cataloguschart stack',
    'title' => 'Datasets in de tijd',
    'content' => $html,
  );
}