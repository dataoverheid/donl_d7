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
    'taxonomiebeleidsagenda' => array(
      'name' => 'TaxonomieBeleidsagenda',
      'machine_name' => 'taxonomiebeleidsagenda',
      'description' => 'Lijst met onderwerpen (waardelijst TaxonomieBeleidsagenda)',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
