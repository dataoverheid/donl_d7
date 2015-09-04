<?php
/**
 * @file
 * features_settings_profiel.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function features_settings_profiel_taxonomy_default_vocabularies() {
  return array(
    'profile_organisaties' => array(
      'name' => 'Profiel Organisaties',
      'machine_name' => 'profile_organisaties',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
