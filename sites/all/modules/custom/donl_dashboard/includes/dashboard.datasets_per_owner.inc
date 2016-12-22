<?php

function donl_dashboard_get_datasets_per_owner($catalogus, $thema) {
  $fq = 'state:active';
  if (isset($catalogus)) {
    $fq .= '+organization:' . $catalogus;
  }
  // Add the specific theme to the search query
  elseif (isset($thema)) {
    $fq .= '+theme_facet:"' . donl_dashboard_get_uri_theme($thema) . '"';
  }


  $count = array();
  $link = array();

  $result = donl_dashboard_make_ckan_call('package_search?fq='. $fq . '&facet.field=["maintainer_displayname"]&rows=0');
  if ($result->success) {
    if (isset($result->result->search_facets->maintainer_displayname->items)) {
      foreach ($result->result->search_facets->maintainer_displayname->items as $record) {
        $count[$record->display_name] = $record->count;
        $link[$record->display_name] = array('query' => array('data_eigenaar' => $record->display_name));
      }
    }
  }

  arsort($count);

  $html = '';
  if(count($count)>10) {
    $html .= 'Top 10 van ' . count($count) . ' eigenaren: <br />';
  }elseif(count($count)!=1){
    $html .= count($count) . ' eigenaren: <br />';
  }else{
    $html .= '1 eigenaar: <br/>';
  }
  $html .= '<ol>';
  for ($i = 0; $i < 10; $i++) {
    $k = key($count);
    $v = current($count);

    if (empty($k)) {
      break;
    }

    $html .= '<li>' . l($k . ': ' . $v, 'monitor', $link[$k]) . '</li>';
    next($count);
  }
  $html .= '</ol>';

  return array(
    'class'=>'eigenaar lijst',
    'title' => l(t('Per data-eigenaar'), 'monitor/organisaties'),
    'content' => $html,
  );
}