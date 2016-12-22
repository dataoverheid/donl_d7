<?php

class pie_donut extends indicia_chart {

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
        'type' => 'pie'
      ),
      'title' => array(
       'text' => $this->title,
      ),
      'plotOptions' => array(
        'pie' => array(
          'shadow' => FALSE,
          'center' => array(
            '50%',
            '50%',
          ),
        ),
      ),
      'tooltip' => array(
        'valueSuffix' => '%',
      ),

    );

    return $chartOptions;
  }
}