<?php

function donl_dashboard_get_total_stats($catalogus, $thema, $data_eigenaar) {
  // Retrieve the total amount of datasets available.
  $statistics = array(
    'total_datasets' => 0,
    'available' => 0,
    'planned' => 0,
    'considered' => 0,
    'unavailable' => 0,
  );

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
    $q='package_id:';
    $result=donl_dashboard_make_ckan_call('resource_search?query='.$q.'&limit=1');
    if ($result->success) {
      $statistics['total_resources'] = $result->result->count;
    }
  }
  else{
    $q='url:';
    $result=donl_dashboard_make_ckan_call('resource_search?query='.$q.'&limit=1');
    if ($result->success) {
      $statistics['total_resources'] = $result->result->count;
    }
  }

  $result = donl_dashboard_make_ckan_call('package_search?fq=' . $fq);
  if ($result->success) {
    $statistics['total_datasets'] = $result->result->count;
  }



  // Retrieve the datasets with an open license (either cc-Zero or Public Domain)
  $statistics['datasets_with_open_licence'] = 0;
  foreach (unserialize(DONL_DATASET_OPEN_LICENCE) as $license) {
    $result = donl_dashboard_make_ckan_call('package_search?fq=' . $fq . '+license_id:' . $license);
    if ($result->success) {
      $statistics['datasets_with_open_licence'] += $result->result->count;
    }
  }

  $result= donl_dashboard_make_ckan_call('package_search?fq=' . $fq . '+dataset_status:"http://data.overheid.nl/status/beschikbaar"');
  if ($result->success) {
    $statistics['available'] = $result->result->count;
  }
  $result= donl_dashboard_make_ckan_call('package_search?fq=' . $fq . '+dataset_status:"http://data.overheid.nl/status/niet_beschikbaar"');
  if ($result->success) {
    $statistics['unavailable'] = $result->result->count;
  }
  $result= donl_dashboard_make_ckan_call('package_search?fq=' . $fq . '+dataset_status:"http://data.overheid.nl/status/gepland"');
  if ($result->success) {
    $statistics['planned'] = $result->result->count;
  }
  $result= donl_dashboard_make_ckan_call('package_search?fq=' . $fq . '+dataset_status:"http://data.overheid.nl/status/in_onderzoek"');
  if ($result->success) {
    $statistics['considered'] = $result->result->count;
  }

  $html = 'Datasets: <span>' . $statistics['total_datasets'] . '</span><br/>';
  $html .= 'Open: <span>' . $statistics['datasets_with_open_licence'] . '</span><br />';
  $html .= 'Anders: <span>' . ($statistics['total_datasets'] - $statistics['datasets_with_open_licence']) . '</span><br />';

  $html .= 'Beschikbaar: <span>' . $statistics['available'] . '</span><br/>';
  $html .= 'Niet beschikbaar: <span>' . $statistics['unavailable'] . '</span><br/>';
  $html .= 'Gepland: <span>' . $statistics['planned'] . '</span><br/>';
  $html .= 'In onderzoek: <span>' . $statistics['considered'] . '</span><br/>';
  if(isset($statistics['total_resources'])) {
    $html .= 'Databronnen: <span>' . $statistics['total_resources'] . '</span><br/>';
  }
  return array(
    'title' => 'Totaal',
    'class' => 'totaal lijst',
    'content' => $html,
  );
}