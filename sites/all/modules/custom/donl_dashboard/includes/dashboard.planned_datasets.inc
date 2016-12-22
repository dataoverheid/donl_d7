<?php

function donl_dashboard_get_planned_datasets($catalogus, $thema, $data_eigenaar) {
  global $base_url;

  $fq = 'state:active';
  $calendar_query = array();
  if (isset($catalogus)) {
    $fq .= '+organization:' . $catalogus;
    $calendar_query = array("dataset_catalog" => $catalogus);
  }
  // Add the specific theme to the search query
  elseif (isset($thema)) {
    $calendar_query = array("dataset_theme" => $thema);
    $fq .= '+theme_facet:"' . donl_dashboard_get_uri_theme($thema) . '"';
  }
  // Add the specific theme to the search query
  elseif (isset($data_eigenaar)) {
    $calendar_query = array("donl_maintainer_select" => $data_eigenaar);
    $fq .= '+maintainer_displayname:"' . urlencode($data_eigenaar) . '"';
  }

  // Get all datasets with the status "gepland" or "in_onderzoek" we'll do 2 calls for this.
  $dataset = array();
  $result = donl_dashboard_make_ckan_call('package_search?fq=' . $fq . '+dataset_status:"http://data.overheid.nl/status/gepland"');
  if ($result->success) {
    if (isset($result->result->results)) {
      foreach ($result->result->results as $record) {
        $datasets[] = array(
          'name' => $record->title,
          'link' => $base_url . '/data/dataset/' . $record->name,
        );
      }
    }
  }
  $result = donl_dashboard_make_ckan_call('package_search?fq=' . $fq . '+dataset_status:"http://data.overheid.nl/status/in_onderzoek"');
  if ($result->success) {
    if (isset($result->result->results)) {
      foreach ($result->result->results as $record) {
        $datasets[] = array(
          'name' => $record->title,
          'link' => $base_url . '/data/dataset/' . $record->name,
        );
      }
    }
  }

  $html = t('No planned datasets found.');
  if (!empty($datasets)) {
    $html = '';
    $count = count($datasets);
    if ($count > 5) {
      $html .= t('@i datasets of the @count', array(
          '@i' => 5,
          '@count' => $count
        )) . ': <br />';
    }
    elseif ($count != 1) {
      $html .= $count . ' datasets: <br />';
    }
    else {
      echo gettype($count);
      $html .= '1 dataset: <br/>';
    }

    // We want to show a random sample and just the first 5
    shuffle($dataset);
    $datasets = array_slice($datasets, 0, 5);

    $html .= '<ul>';
    foreach ($datasets as $k => $v) {
      $html .= '<li>' . l($v['name'], $v['link']) . '</li>';
    }
    $html .= '</ul>';
  }

  return array(
    'class' => 'planned lijst',
    'title' => l(t('Planned datasets'), 'monitor/datakalender', array('query' => $calendar_query)),
    'content' => $html,
  );
}