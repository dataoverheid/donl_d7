<?php

function donl_dashboard_get_datasets_per_theme($catalogus, $data_eigenaar) {
  $fq = 'state:active';
  if (isset($catalogus)) {
    $fq .= '+organization:' . $catalogus;
  }
  // Add the specific theme to the search query
  elseif (isset($data_eigenaar)) {
    $fq .= '+maintainer_displayname:"' . urlencode($data_eigenaar) . '"';
  }

  $count = array();
  $link = array();
  $themes = donl_dashboard_get_themes();

  $result = donl_dashboard_make_ckan_call('package_search?fq='. $fq . '&facet.field=["theme_facet"]&rows=0');
  if ($result->success) {
    if (isset($result->result->search_facets->theme_facet->items)) {
      foreach ($result->result->search_facets->theme_facet->items as $record) {
        if (isset($themes[$record->display_name])) {
          $thema_name = $themes[$record->display_name];
          $count[$thema_name] = $record->count;
          $link[$thema_name] = array('query' => array('thema' => $thema_name));
        }
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
    'class'=>'thema lijst',
    'title' => l(t('Per thema'), 'monitor/themas'),
    'content' => $html,
  );
}