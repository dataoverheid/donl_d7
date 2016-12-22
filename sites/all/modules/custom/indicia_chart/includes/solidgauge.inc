<?php

class solidgauge extends indicia_chart {

  function include_libarary($cache) {
    if ($cache) {
      return '<script type="text/javascript" src="' . base_path() . libraries_get_path('highcharts') . '/js/modules/solid-gauge.js"></script>';
    }
    else {
      drupal_add_js(libraries_get_path('highcharts') . '/js/modules/solid-gauge..js');
    }
  }


  function set_chart_options() {
    $chartOptions = array(
      'chart' => array(
        'type' => 'solidgauge',
      ),
      'series' => array(
        array(
          'data' => array($this->data),
          'dataLabels' => array(
            'format' => '<div style="text-align: center"><span style="font-size:25px;color:black">' . $this->data . '%<br />Up-to-date</span></div>'
          ),
        ),
      ),
      'title' => $this->title,
      'pane' => array(
        'center' => array(
          '50%',
          '85%'
        ),
        'size' => '100%',
        'startAngle' => -90,
        'endAngle' => 90,
        'background' => array(
          'backgroundColor' => '#EEE',
          'innerRadius' => '60%',
          'outerRadius' => '100%',
          'shape' => 'arc',
        )
      ),
      'tooltip' => array(
        'enabled' => FALSE,
      ),
      'yAxis' => array(
        'stops' => array(
          array('0.4', '#ff0000'),
          array('0.6', '#ffcf73'),
          array('0.9', '#008000'),
        ),
        'lineWidth' => 0,
        'mirorTickInterval' => NULL,
        'tickPixelInterval' => 400,
        'tickWidth' => 0,
        'title' => array(
          'text' => NULL,
          'y' => -70,
        ),
        'labels' => array(
          'y' => 16,
        ),
        'min' => 0,
        'max' => 100,
      ),
      'plotOptions' => array(
        'solidgauge' => array(
          'dataLabels' => array(
            'y' => 5,
            'borderWidth' => 0,
            'useHTML' => TRUE,
          ),
        ),
      ),
    );


    return $chartOptions;
  }
}