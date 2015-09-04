<?php
/**
 * @file
 * features_content_type_evenementen.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function features_content_type_evenementen_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function features_content_type_evenementen_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function features_content_type_evenementen_node_info() {
  $items = array(
    'evenement' => array(
      'name' => t('Evenement'),
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
