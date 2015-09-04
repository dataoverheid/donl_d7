<?php
/**
 * @file
 * features_content_type_feedback_dataset.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function features_content_type_feedback_dataset_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function features_content_type_feedback_dataset_node_info() {
  $items = array(
    'feedback_dataset' => array(
      'name' => t('Feedback dataset'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
