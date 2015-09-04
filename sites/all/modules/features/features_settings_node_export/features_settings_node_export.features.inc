<?php
/**
 * @file
 * features_settings_node_export.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function features_settings_node_export_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
