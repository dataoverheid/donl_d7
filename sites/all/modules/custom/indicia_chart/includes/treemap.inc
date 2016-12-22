<?php

class treemap extends indicia_chart {

  function include_libarary($cache) {
    if ($cache) {
      return '<script type="text/javascript" src="' . base_path() . libraries_get_path('highcharts') . '/js/modules/treemap.js"></script>';
    }
    else {
      drupal_add_js(libraries_get_path('highcharts') . '/js/modules/treemap.js');
    }
  }


  function set_chart_options() {
    $chartOptions = array(
      'series' => array(
        array(
          'type' => 'treemap',
          'layoutAlgorithm' => 'stripes',
          'alternateStartingDirection' => true,
          'levels' => array(
            array(
              'level' => 1,
              'layoutAlgorithm' => 'sliceAndDice',
              'dataLabels' => array(
                'enabled' => true,
                'align' => 'left',
                'verticalAlign' => 'top',
                'style' => array(
                  'fontSize' => '15px',
                  'fontWeight' => 'bold',
                ),
              ),
            ),
          ),
          'data' => $this->data,
        ),
      ),
      'title' => array(
        'text' => $this->title,
      ),
    );

    return $chartOptions;
  }
}