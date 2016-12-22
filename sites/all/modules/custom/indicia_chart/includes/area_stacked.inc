<?php

class area_stacked extends indicia_chart {

  function include_libarary($cache) {
    if ($cache) {
      return '<script type="text/javascript" src="' . base_path() . libraries_get_path('highcharts') . '/js/modules/exporting.js"></script>';
    }
    else {
      drupal_add_js(libraries_get_path('highcharts') . '/js/modules/exporting.js');
    }
  }


  function set_chart_options() {
    $chartOptions = array(
      'chart' => array(
        'type' => 'area'
      ),
      'title' => array(
        'text' => $this->title,
      ),
      'tooltip' => array(
        'shared' => TRUE,
      ),
      'plotOptions' => array(
        'area' => array(
          'stacking' => 'normal',
          'lineColor' => '#666666',
          'lineWidth' => 1,
          'marker' => array(
            'lineWidth' => 1,
            'lineColor' => '#666666',
          ),
        ),
      ),
      'series' => $this->data,
    );

    return $chartOptions;
  }
}