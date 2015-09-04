<?php
/**
 * @file
 * features_content_type_dataverzoek.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function features_content_type_dataverzoek_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function features_content_type_dataverzoek_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function features_content_type_dataverzoek_node_info() {
  $items = array(
    'dataverzoek' => array(
      'name' => t('Dataverzoek'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Titel dataverzoek'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
