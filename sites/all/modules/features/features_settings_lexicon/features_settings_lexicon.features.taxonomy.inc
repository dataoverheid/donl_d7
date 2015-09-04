<?php
/**
 * @file
 * features_settings_lexicon.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function features_settings_lexicon_taxonomy_default_vocabularies() {
  return array(
    'afkortingen' => array(
      'name' => 'Afkortingen',
      'machine_name' => 'afkortingen',
      'description' => 'Lijst met afkortingen en hun betekenis',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
