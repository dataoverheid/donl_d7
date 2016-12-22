<?php

module_load_include('inc', 'donl_dashboard', 'includes/dashboard.data_requests');
module_load_include('inc', 'donl_dashboard', 'includes/dashboard.datasets_per_catalogus');
module_load_include('inc', 'donl_dashboard', 'includes/dashboard.datasets_per_catalogus_chart');
module_load_include('inc', 'donl_dashboard', 'includes/dashboard.datasets_per_owner');
module_load_include('inc', 'donl_dashboard', 'includes/dashboard.datasets_per_theme');
module_load_include('inc', 'donl_dashboard', 'includes/dashboard.feedback');
module_load_include('inc', 'donl_dashboard', 'includes/dashboard.linkcheck_data');
module_load_include('inc', 'donl_dashboard', 'includes/dashboard.most_viewed_datasets');
module_load_include('inc', 'donl_dashboard', 'includes/dashboard.total_stats');
module_load_include('inc', 'donl_dashboard', 'includes/dashboard.owner_info');
module_load_include('inc', 'donl_dashboard', 'includes/dashboard.planned_datasets');
module_load_include('inc', 'donl_dashboard', 'includes/dashboard.owner_hierarchy');


function donl_dashboard_page() {
  $catalogus = NULL;
  $thema = NULL;
  $data_eigenaar = NULL;
  $cache_key = 'pagina';
  $enable_caching = TRUE;

  if (isset($_GET['catalogus'])) {
    $catalogus = check_plain($_GET['catalogus']);
    $cache_key .= '_catalogus:' . $catalogus;
  }
  elseif (isset($_GET['thema'])) {
    $thema = check_plain($_GET['thema']);
    $cache_key .= '_thema:' . $thema;
  }
  elseif (isset($_GET['data_eigenaar'])) {
    $data_eigenaar = check_plain($_GET['data_eigenaar']);
    $cache_key .= '_data_eigenaar:' . $data_eigenaar;
  }

  // Check if we have a cached version
  $html = '';

  // Enable caching.
  if ($enable_caching) {
    $cache = cache_get($cache_key, 'cache_donl_dashboard');
    if (!empty($cache) && time() < $cache->expire) {
      $html = $cache->data;
    }
  }

  if (empty($html)) {

    $thinblocks = array();
    $wideblocks = array();
    $blockgroups = array();
    $h2 = '';
    $h3 = NULL;

    // For each scenario we'll have to show/hide some of the blocks
    if (!empty($catalogus)) {
      $h2 = 'Catalogus: ' . donl_dashboard_get_catalogus_display_name($catalogus);
      $h3 = '';

      $thinblocks[] = donl_dashboard_get_total_stats($catalogus, $thema, $data_eigenaar);
      $wideblocks[] = donl_dashboard_get_datasets_per_catalogus_chart($catalogus, $thema);
      $thinblocks[] = donl_dashboard_get_linkcheck_data($catalogus, $thema, $data_eigenaar);
      $wideblocks[] = donl_dashboard_get_datasets_per_owner($catalogus, $thema);
      // datasets_per_catalogus
      $thinblocks[] = donl_dashboard_get_datasets_per_theme($catalogus, $data_eigenaar);
      $wideblocks[] = donl_dashboard_get_most_viewed_datasets($catalogus, $thema, $data_eigenaar);
      $wideblocks[] = donl_dashboard_get_planned_datasets($catalogus, $thema, $data_eigenaar);
      $blockgroups[] = array(
        'thin' => $thinblocks,
        'wide' => $wideblocks,
        'title' => 'Datasets'
      );
      // data_requests
      // feedback
    }
    elseif (!empty($thema)) {
      $h2 = 'Thema: ' . $thema;
      // $h3 = $thema;

      $thinblocks[] = donl_dashboard_get_total_stats($catalogus, $thema, $data_eigenaar);
      $wideblocks[] = donl_dashboard_get_datasets_per_catalogus_chart($catalogus, $thema);
      $thinblocks[] = donl_dashboard_get_linkcheck_data($catalogus, $thema, $data_eigenaar);
      $wideblocks[] = donl_dashboard_get_datasets_per_owner($catalogus, $thema);

      $thinblocks[] = donl_dashboard_get_datasets_per_catalogus($thema, $data_eigenaar);

      // datasets_per_thema
      $wideblocks[] = donl_dashboard_get_most_viewed_datasets($catalogus, $thema, $data_eigenaar);
      $wideblocks[] = donl_dashboard_get_planned_datasets($catalogus, $thema, $data_eigenaar);
      $blockgroups[] = array(
        'thin' => $thinblocks,
        'wide' => $wideblocks,
        'title' => 'Datasets'
      );
      $thinblocks = array();
      $wideblocks = array();
      $thinblocks[] = donl_dashboard_get_data_requests($thema, $data_eigenaar);
      $blockgroups[] = array(
        'thin' => $thinblocks,
        'wide' => $wideblocks,
        'title' => 'Vraag en aanbod'
      );
      // feedback
      menu_set_active_item('monitor/themas');
    }
    elseif (!empty($data_eigenaar)) {
      $h3 = '';
      $exploded = explode('| ', $data_eigenaar);
      $h2 = $exploded[0];
      if (isset($exploded[1])) {
        $h2 = $exploded[1];
      }
      $wideblocks[] = donl_dashboard_get_owner_hierarchy($data_eigenaar);
      $blockgroups[] = array(
        'thin' => $thinblocks,
        'wide' => $wideblocks,
        'title' => '',
      );
      $thinblocks = array();
      $wideblocks = array();
      $thinblocks[] = donl_dashboard_get_total_stats($catalogus, $thema, $data_eigenaar);
      $wideblocks[] = donl_dashboard_get_most_viewed_datasets($catalogus, $thema, $data_eigenaar);
      $wideblocks[] = donl_dashboard_get_planned_datasets($catalogus, $thema, $data_eigenaar);
      $thinblocks[] = donl_dashboard_get_linkcheck_data($catalogus, $thema, $data_eigenaar);
      $thinblocks[] = donl_dashboard_get_datasets_per_theme($catalogus, $data_eigenaar);
      $wideblocks[] = donl_dashboard_get_datasets_per_catalogus($thema, $data_eigenaar);
      $blockgroups[] = array(
        'thin' => $thinblocks,
        'wide' => $wideblocks,
        'title' => 'Datasets',
      );
      $thinblocks = array();
      $wideblocks = array();
      $thinblocks[] = donl_dashboard_get_data_requests($thema, $data_eigenaar);
      $wideblocks[] = donl_dashboard_get_feedback($data_eigenaar);
      $blockgroups[] = array(
        'thin' => $thinblocks,
        'wide' => $wideblocks,
        'title' => 'Vraag en aanbod',
      );
      $thinblocks = array();
      $wideblocks = array();
      $wideblocks[] = donl_dashboard_get_owner_info($data_eigenaar);
      $blockgroups[] = array(
        'thin' => $thinblocks,
        'wide' => $wideblocks,
        'title' => 'Over de organisatie',
      );
      menu_set_active_item('monitor/organisaties');
    }
    else {

      $thinblocks[] = donl_dashboard_get_total_stats($catalogus, $thema, $data_eigenaar);
      $wideblocks[] = donl_dashboard_get_datasets_per_catalogus_chart($catalogus, $thema);
      $thinblocks[] = donl_dashboard_get_linkcheck_data($catalogus, $thema, $data_eigenaar);
      $wideblocks[] = donl_dashboard_get_datasets_per_owner($catalogus, $thema);
      $thinblocks[] = donl_dashboard_get_datasets_per_theme($catalogus, $data_eigenaar);
      $wideblocks[] = donl_dashboard_get_most_viewed_datasets($catalogus, $thema, $data_eigenaar);
      $wideblocks[] = donl_dashboard_get_planned_datasets($catalogus, $thema, $data_eigenaar);
      $thinblocks[] = donl_dashboard_get_datasets_per_catalogus($thema, $data_eigenaar);
      $blockgroups[] = array(
        'thin' => $thinblocks,
        'wide' => $wideblocks,
        'title' => 'Datasets'
      );
      $thinblocks = array();
      $wideblocks = array();
      $thinblocks[] = donl_dashboard_get_data_requests($thema, $data_eigenaar);


      $wideblocks[] = donl_dashboard_get_feedback($data_eigenaar);
      $blockgroups[] = array(
        'thin' => $thinblocks,
        'wide' => $wideblocks,
        'title' => 'Vraag en aanbod'
      );

      menu_set_active_item('monitor/overzicht');
    }

    $html = '<h2>' . $h2 . '</h2><div class="dash-wrapper">' . (isset($h3) ? '<h3>' . $h3 . '</h3>' : '');
    $i = 0;
    foreach ($blockgroups as $blockgroup) {
      $thinblocks = $blockgroup['thin'];
      $wideblocks = $blockgroup['wide'];
      if (isset($blockgroup['title'])) {
        $html .= '<h3>' . $blockgroup['title'] . '</h3>';
      }
      $html .= '<div class="blockgroup-wrapper">';
      $fullwidthclass = 'pure-u-md-1-3';
      if (count($wideblocks) == 0) {
        $fullwidthclass = 'pure-u-md-3-3';
      }
      if (count($thinblocks)) {
        $html .= '<div class="thin ' . $fullwidthclass . '">';
      }
      foreach ($thinblocks as $block) {

        $html .= '<div class="dash dash-' . $i . ' ' . $block['class'] . '">';
        $html .= '<h2>' . $block['title'] . '</h2>';
        $html .= $block['content'];
        $html .= '</div>';

        $i++;
      }
      $fullwidthclass = 'pure-u-md-2-3';
      if (count($thinblocks) == 0) {
        $fullwidthclass = 'pure-u-md-3-3';
      }
      if (count($thinblocks)) {
        $html .= '</div>';
      }
      if (count($wideblocks)) {
        $html .= '<div class="wide ' . $fullwidthclass . '">';
      }
      foreach ($wideblocks as $block) {

        $html .= '<div class="dash dash-' . $i . ' ' . $block['class'] . '">';
        $html .= '<h2>' . $block['title'] . '</h2>';
        $html .= $block['content'];
        $html .= '</div>';
        $i++;
      }
      if (count($wideblocks)) {
        $html .= '</div>';
        $html .= '</div>';
      }
    }
    $html .= '</div>';

    // Store the data in the cache till at least the 5AM for the next day.
    if ($enable_caching) {
      cache_set($cache_key, $html, 'cache_donl_dashboard', strtotime('today + 29 hours'));
    }
  }
  return $html;
}


function donl_dashboard_get_catalogus_display_name($name) {
  $result = donl_dashboard_make_ckan_call('organization_show?id=' . $name);
  if ($result->success) {
    if (isset($result->result->display_name)) {
      return $result->result->display_name;
    }
  }
  return $name;
}


/**
 * Helper function to get the uri of a given theme
 */
function donl_dashboard_get_uri_theme($thema) {
  $terms = taxonomy_get_term_by_name(check_plain($thema), 'taxonomiebeleidsagenda');
  $term = reset($terms);

  // @todo: Legacy code is such a beautiful thing
  if (isset($term->field_uri[LANGUAGE_NONE][0]['value'])) {
    $uri = $term->field_uri[LANGUAGE_NONE][0]['value'];
  }
  else {
    $uri = strip_tags(str_replace(array(
      "\n",
      "\r\n",
      "\r"
    ), '', $term->description));
  }

  return $uri;
}


/**
 * Helper function which returns a list of all the themes in the system.
 * key => The uri of the theme
 * value => The human readable name of the theme
 */
function donl_dashboard_get_themes() {
  $vocabulary = taxonomy_vocabulary_machine_name_load('taxonomiebeleidsagenda');
  $tree = taxonomy_get_tree($vocabulary->vid, 0, 1);

  $themes = array();
  foreach ($tree as $term) {
    // @todo: Legacy code is such a beautiful thing
    if (isset($term->field_uri[LANGUAGE_NONE][0]['value'])) {
      $uri = $term->field_uri[LANGUAGE_NONE][0]['value'];
    }
    else {
      $uri = strip_tags(str_replace(array(
        "\n",
        "\r\n",
        "\r"
      ), '', $term->description));
    }

    $themes[$uri] = $term->name;
  }

  return $themes;
}

