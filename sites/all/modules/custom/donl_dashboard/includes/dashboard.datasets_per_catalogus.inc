<?php

function donl_dashboard_get_datasets_per_catalogus($thema, $data_eigenaar) {
  $fq = 'state:active';
  // Add the specific theme to the search query
  if (isset($thema)) {
    $fq .= '+theme_facet:"' . donl_dashboard_get_uri_theme($thema) . '"';
  }
  // Add the specific theme to the search query
  elseif (isset($data_eigenaar)) {
    $fq .= '+maintainer_displayname:"' . urlencode($data_eigenaar) . '"';
  }

  $count = array();
  $link = array();

  $result = donl_dashboard_make_ckan_call('package_search?fq='. $fq . '&facet.field=["organization"]&rows=0');
  if ($result->success) {
    if (isset($result->result->search_facets->organization->items)) {
      foreach ($result->result->search_facets->organization->items as $record) {
        $count[$record->display_name] = $record->count;
        $link[$record->display_name] = array('query' => array('catalogus' => $record->name));
      }
    }
  }

  arsort($count);

  $html = '<ul>';
  foreach ($count as $k => $v) {
    $html .= '<li>' . l($k . ': ' . $v, 'monitor', $link[$k]) . '</li>';
  }
  $html .= '</ul>';

  return array(
    'class'=>'catalogus lijst',
    'title' => 'Per catalogus',
    'content' => $html,
  );
}