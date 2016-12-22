<?php

class pie_semi_circle extends indicia_chart {

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
        'plotBackgroundColor' => null,
        'plotBorderWith' => 0,
        'plotShadow' => FALSE,
      ),
      'title' => array(
        'text' => $this->title,
        'align' => 'center',
        'verticalAlign' => 'middle',
        'y' => 40,
      ),
      'tooltip' => array(
        'pointFormat' => '<b>{point.percentage:.1f}%</b>',
      ),
      'plotOptions' => array(
        'pie' => array(
          'dataLabels' => array(
            'enabled' => FALSE,
          ),
          'showInLegend' => TRUE,
          'startAngle' => -90,
          'endAngle' => 90,
          'center' => array(
            '50%',
            '75%',
          ),
        ),
      ),
      'series' => array(
        array(
          'type' => 'pie',
          'name' => $this->title,
          'innerSize' => '50%',
          'data' => $this->data,
        ),
      ),
    );

    return $chartOptions;
  }
}