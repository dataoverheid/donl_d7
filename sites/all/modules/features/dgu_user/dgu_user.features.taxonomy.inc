<?php
/**
 * @file
 * dgu_user.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function dgu_user_taxonomy_default_vocabularies() {
  return array(
    'overheidsorganisatie' => array(
      'name' => 'Overheidsorganisatie',
      'machine_name' => 'overheidsorganisatie',
      'description' => '',
      'hierarchy' => 1,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
