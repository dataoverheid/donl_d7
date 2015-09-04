<?php
/**
 * @file
 * features_settings_profiel.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function features_settings_profiel_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'profile2-main-field_profile_naam'
  $field_instances['profile2-main-field_profile_naam'] = array(
    'bundle' => 'main',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_profile_naam',
    'label' => 'Naam',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'profile2-main-field_profile_organisatienaam'
  $field_instances['profile2-main-field_profile_organisatienaam'] = array(
    'bundle' => 'main',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_profile_organisatienaam',
    'label' => 'Organisatienaam',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'profile2-main-field_profile_profiel'
  $field_instances['profile2-main-field_profile_profiel'] = array(
    'bundle' => 'main',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Graag een korte introductie over wie je bent en vanuit welke functie/rol je datasets aanlevert. Deze informatie is alleen zichtbaar voor de beheerders van data.overheid.nl.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_profile_profiel',
    'label' => 'Profiel',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'profile2-main-field_profile_telefoonnummer'
  $field_instances['profile2-main-field_profile_telefoonnummer'] = array(
    'bundle' => 'main',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_profile_telefoonnummer',
    'label' => 'telefoonnummer',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 2,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Graag een korte introductie over wie je bent en vanuit welke functie/rol je datasets aanlevert. Deze informatie is alleen zichtbaar voor de beheerders van data.overheid.nl.');
  t('Naam');
  t('Organisatienaam');
  t('Profiel');
  t('telefoonnummer');

  return $field_instances;
}
