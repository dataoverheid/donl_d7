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
    'catalogus' => array(
      'name' => 'Catalogi',
      'machine_name' => 'catalogus',
      'description' => 'catalogushouders',
      'hierarchy' => 1,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'donl_catalogi' => array(
      'name' => 'DONL catalogi',
      'machine_name' => 'donl_catalogi',
      'description' => 'Catalogi die zijn opgenomen op DONL met URI',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'overheidsorganisatie' => array(
      'name' => 'Overheidsorganisatie',
      'machine_name' => 'overheidsorganisatie',
      'description' => '',
      'hierarchy' => 1,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'soort_organisatie' => array(
      'name' => 'Soort organisatie',
      'machine_name' => 'soort_organisatie',
      'description' => 'Lijst met soort organisatie',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'verantwoordelijke_organisaties' => array(
      'name' => 'Verantwoordelijke organisaties',
      'machine_name' => 'verantwoordelijke_organisaties',
      'description' => 'Lijst met verantwoordelijke organisaties ',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
