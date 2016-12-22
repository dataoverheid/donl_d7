<?php

function donl_dashboard_get_most_viewed_datasets($catalogus, $thema, $data_eigenaar) {
  global $base_url;

  $fq = 'state:active';
  if (isset($catalogus)) {
    $fq .= '+organization:' . $catalogus;
  }
  elseif (isset($thema)) {
    $fq .= '+theme_facet:"' . donl_dashboard_get_uri_theme($thema) . '"';
  }
  elseif (isset($data_eigenaar)) {
    $fq .= '+maintainer_displayname:"' . urlencode($data_eigenaar) . '"';
  }

  $dataset = array();
  $result = donl_dashboard_make_ckan_call('package_search?fq=' . $fq . '&sort=views_recent%20desc&rows=5');
  if ($result->success) {
    if (isset($result->result->results)) {
      foreach ($result->result->results as $record) {
        $dataset[] = array(
          'name' => $record->title,
          'link' => $base_url . '/data/dataset/' . $record->name,
        );
      }
    }
  }

  $html = '<ul>';
  foreach ($dataset as $k => $v) {
    $html .= '<li>' . l($v['name'], $v['link']) . '</li>';
  }
  $html .= '</ul>';

  return array(
    'class' => 'lijst meest-bekeken',
    'title' => 'Meest recent bekeken datasets',
    'content' => $html,
  );
}