<?php
/**
 * @file
 * features_content_type_dataverzoek.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function features_content_type_dataverzoek_taxonomy_default_vocabularies() {
  return array(
    'dataverzoeken_status' => array(
      'name' => 'Dataverzoeken fase',
      'machine_name' => 'dataverzoeken_status',
      'description' => 'De mogelijke status van een dataverzoek',
      'hierarchy' => 1,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'taxonomiebeleidsagenda' => array(
      'name' => 'TaxonomieBeleidsagenda',
      'machine_name' => 'taxonomiebeleidsagenda',
      'description' => 'Lijst met onderwerpen (waardelijst TaxonomieBeleidsagenda)',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 1,
    ),
  );
}
