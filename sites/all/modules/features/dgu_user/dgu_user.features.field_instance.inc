<?php
/**
 * @file
 * dgu_user.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function dgu_user_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'taxonomy_term-catalogus-field_beheer'.
  $field_instances['taxonomy_term-catalogus-field_beheer'] = array(
    'bundle' => 'catalogus',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_beheer',
    'label' => 'Beheerder register',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'content_taxonomy_autocomplete_new_terms' => 'allow',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'taxonomy_term-catalogus-field_beheerder'.
  $field_instances['taxonomy_term-catalogus-field_beheerder'] = array(
    'bundle' => 'catalogus',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_beheerder',
    'label' => 'Andere beheerders',
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
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'taxonomy_term-catalogus-field_catalogus'.
  $field_instances['taxonomy_term-catalogus-field_catalogus'] = array(
    'bundle' => 'catalogus',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 8,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_catalogus',
    'label' => 'Catalogus',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 0,
      ),
      'type' => 'options_onoff',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'taxonomy_term-catalogus-field_ckan_catalogus'.
  $field_instances['taxonomy_term-catalogus-field_ckan_catalogus'] = array(
    'bundle' => 'catalogus',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 9,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_ckan_catalogus',
    'label' => 'CKAN catalogus',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 0,
      ),
      'type' => 'options_onoff',
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'taxonomy_term-catalogus-field_eigenaar'.
  $field_instances['taxonomy_term-catalogus-field_eigenaar'] = array(
    'bundle' => 'catalogus',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_eigenaar',
    'label' => 'Eigenaar register',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'content_taxonomy_autocomplete_new_terms' => 'allow',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 5,
    ),
  );

  // Exported field_instance:
  // 'taxonomy_term-catalogus-field_handmatig_op_data_overheid'.
  $field_instances['taxonomy_term-catalogus-field_handmatig_op_data_overheid'] = array(
    'bundle' => 'catalogus',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 7,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_handmatig_op_data_overheid',
    'label' => 'Handmatig op data.overheid.nl',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 0,
      ),
      'type' => 'options_onoff',
      'weight' => 13,
    ),
  );

  // Exported field_instance: 'taxonomy_term-catalogus-field_nationaal'.
  $field_instances['taxonomy_term-catalogus-field_nationaal'] = array(
    'bundle' => 'catalogus',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_nationaal',
    'label' => 'Nationaal',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 0,
      ),
      'type' => 'options_onoff',
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'taxonomy_term-catalogus-field_op_data_overheid_nl'.
  $field_instances['taxonomy_term-catalogus-field_op_data_overheid_nl'] = array(
    'bundle' => 'catalogus',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 6,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_op_data_overheid_nl',
    'label' => 'Op data.overheid.nl',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 0,
      ),
      'type' => 'options_onoff',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'taxonomy_term-catalogus-field_uri_catalogus'.
  $field_instances['taxonomy_term-catalogus-field_uri_catalogus'] = array(
    'bundle' => 'catalogus',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_uri_catalogus',
    'label' => 'URI catalogus op DONL',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 1,
      'attributes' => array(
        'class' => '',
        'configurable_class' => 0,
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'none',
      'title_label_use_field_label' => 0,
      'title_maxlength' => 128,
      'title_value' => 'Link',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'taxonomy_term-catalogus-field_url_catalogus'.
  $field_instances['taxonomy_term-catalogus-field_url_catalogus'] = array(
    'bundle' => 'catalogus',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_url_catalogus',
    'label' => 'URL catalogus',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 1,
      'attributes' => array(
        'class' => '',
        'configurable_class' => 0,
        'configurable_title' => 0,
        'rel' => '',
        'target' => '_blank',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'none',
      'title_label_use_field_label' => 0,
      'title_maxlength' => 128,
      'title_value' => 'link',
      'url' => 'optional',
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 4,
    ),
  );

  // Exported field_instance:
  // 'taxonomy_term-catalogus-field_via_ngr_op_data_overheid_n'.
  $field_instances['taxonomy_term-catalogus-field_via_ngr_op_data_overheid_n'] = array(
    'bundle' => 'catalogus',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 10,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_via_ngr_op_data_overheid_n',
    'label' => 'Via NGR op data.overheid.nl',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 0,
      ),
      'type' => 'options_onoff',
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'taxonomy_term-donl_catalogi-field_eigenaar'.
  $field_instances['taxonomy_term-donl_catalogi-field_eigenaar'] = array(
    'bundle' => 'donl_catalogi',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_eigenaar',
    'label' => 'Eigenaar register',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'content_taxonomy_autocomplete_new_terms' => 'allow',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 32,
    ),
  );

  // Exported field_instance:
  // 'taxonomy_term-donl_catalogi-field_in_registerlijst'.
  $field_instances['taxonomy_term-donl_catalogi-field_in_registerlijst'] = array(
    'bundle' => 'donl_catalogi',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_in_registerlijst',
    'label' => 'In registerlijst',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'content_taxonomy_autocomplete_new_terms' => 'allow',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 33,
    ),
  );

  // Exported field_instance: 'taxonomy_term-donl_catalogi-field_uri'.
  $field_instances['taxonomy_term-donl_catalogi-field_uri'] = array(
    'bundle' => 'donl_catalogi',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_uri',
    'label' => 'URI',
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
      'weight' => -2,
    ),
  );

  // Exported field_instance:
  // 'taxonomy_term-overheidsorganisatie-field_almanak_uri'.
  $field_instances['taxonomy_term-overheidsorganisatie-field_almanak_uri'] = array(
    'bundle' => 'overheidsorganisatie',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_almanak_uri',
    'label' => 'Almanak URI',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 1,
      'attributes' => array(
        'class' => '',
        'configurable_class' => 0,
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'value',
      'title_label_use_field_label' => 0,
      'title_maxlength' => 255,
      'title_value' => 'Organisatie in de Almanak op overheid.nl',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 6,
    ),
  );

  // Exported field_instance:
  // 'taxonomy_term-overheidsorganisatie-field_alt_naam'.
  $field_instances['taxonomy_term-overheidsorganisatie-field_alt_naam'] = array(
    'bundle' => 'overheidsorganisatie',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 15,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_alt_naam',
    'label' => 'Alternatieve naam',
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
      'weight' => 10,
    ),
  );

  // Exported field_instance:
  // 'taxonomy_term-overheidsorganisatie-field_bpr_code'.
  $field_instances['taxonomy_term-overheidsorganisatie-field_bpr_code'] = array(
    'bundle' => 'overheidsorganisatie',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 16,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_bpr_code',
    'label' => 'BPR-code',
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
      'weight' => 8,
    ),
  );

  // Exported field_instance:
  // 'taxonomy_term-overheidsorganisatie-field_catalogus_houder_data_over'.
  $field_instances['taxonomy_term-overheidsorganisatie-field_catalogus_houder_data_over'] = array(
    'bundle' => 'overheidsorganisatie',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 9,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_catalogus_houder_data_over',
    'label' => 'Catalogus houder data.overheid.nl',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 0,
      ),
      'type' => 'options_onoff',
      'weight' => 7,
    ),
  );

  // Exported field_instance:
  // 'taxonomy_term-overheidsorganisatie-field_data_eigenaar'.
  $field_instances['taxonomy_term-overheidsorganisatie-field_data_eigenaar'] = array(
    'bundle' => 'overheidsorganisatie',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 14,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_data_eigenaar',
    'label' => 'Data eigenaar',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 0,
      ),
      'type' => 'options_onoff',
      'weight' => 6,
    ),
  );

  // Exported field_instance:
  // 'taxonomy_term-overheidsorganisatie-field_dataverzoek_email'.
  $field_instances['taxonomy_term-overheidsorganisatie-field_dataverzoek_email'] = array(
    'bundle' => 'overheidsorganisatie',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Geef een emailadres waar dataverzoeken voor deze organisatie naar kunnen worden verstuurd. ',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'email',
        'settings' => array(),
        'type' => 'email_default',
        'weight' => 7,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_dataverzoek_email',
    'label' => 'Dataverzoek email',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'email',
      'settings' => array(
        'size' => 80,
      ),
      'type' => 'email_textfield',
      'weight' => 4,
    ),
  );

  // Exported field_instance:
  // 'taxonomy_term-overheidsorganisatie-field_deprecated'.
  $field_instances['taxonomy_term-overheidsorganisatie-field_deprecated'] = array(
    'bundle' => 'overheidsorganisatie',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => 'Deze organisatie is vervallen. De naam is niet meer in gebruik maar kan nog wel als actor worden gebruikt. ',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 7,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_deprecated',
    'label' => 'Vervallen',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 0,
      ),
      'type' => 'options_onoff',
      'weight' => 5,
    ),
  );

  // Exported field_instance:
  // 'taxonomy_term-overheidsorganisatie-field_formele_naam'.
  $field_instances['taxonomy_term-overheidsorganisatie-field_formele_naam'] = array(
    'bundle' => 'overheidsorganisatie',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 10,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_formele_naam',
    'label' => 'Formele naam',
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
      'weight' => 8,
    ),
  );

  // Exported field_instance:
  // 'taxonomy_term-overheidsorganisatie-field_klaar_voor_dataverzoeken'.
  $field_instances['taxonomy_term-overheidsorganisatie-field_klaar_voor_dataverzoeken'] = array(
    'bundle' => 'overheidsorganisatie',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 14,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_klaar_voor_dataverzoeken',
    'label' => 'Kan dataverzoeken ontvangen',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 8,
    ),
  );

  // Exported field_instance:
  // 'taxonomy_term-overheidsorganisatie-field_kvk_code'.
  $field_instances['taxonomy_term-overheidsorganisatie-field_kvk_code'] = array(
    'bundle' => 'overheidsorganisatie',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 17,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_kvk_code',
    'label' => 'kvk-code',
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
      'weight' => 9,
    ),
  );

  // Exported field_instance:
  // 'taxonomy_term-overheidsorganisatie-field_overheidsorganisatie'.
  $field_instances['taxonomy_term-overheidsorganisatie-field_overheidsorganisatie'] = array(
    'bundle' => 'overheidsorganisatie',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 18,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_overheidsorganisatie',
    'label' => 'Overheidsorganisatie',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 0,
      ),
      'type' => 'options_onoff',
      'weight' => 9,
    ),
  );

  // Exported field_instance:
  // 'taxonomy_term-overheidsorganisatie-field_owms_uri'.
  $field_instances['taxonomy_term-overheidsorganisatie-field_owms_uri'] = array(
    'bundle' => 'overheidsorganisatie',
    'default_value' => array(
      0 => array(
        'value' => 'http://standaarden.overheid.nl/owms/terms/',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 19,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_owms_uri',
    'label' => 'OWMS URI',
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
      'weight' => 5,
    ),
  );

  // Exported field_instance:
  // 'taxonomy_term-overheidsorganisatie-field_rekenkamer'.
  $field_instances['taxonomy_term-overheidsorganisatie-field_rekenkamer'] = array(
    'bundle' => 'overheidsorganisatie',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 6,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_rekenkamer',
    'label' => 'Rekenkamer',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 0,
      ),
      'type' => 'options_onoff',
      'weight' => 10,
    ),
  );

  // Exported field_instance:
  // 'taxonomy_term-overheidsorganisatie-field_sisa_code_cbs'.
  $field_instances['taxonomy_term-overheidsorganisatie-field_sisa_code_cbs'] = array(
    'bundle' => 'overheidsorganisatie',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 20,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_sisa_code_cbs',
    'label' => 'Sisa code CBS',
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
      'weight' => 7,
    ),
  );

  // Exported field_instance:
  // 'taxonomy_term-overheidsorganisatie-field_soort_organisatie'.
  $field_instances['taxonomy_term-overheidsorganisatie-field_soort_organisatie'] = array(
    'bundle' => 'overheidsorganisatie',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 11,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_soort_organisatie',
    'label' => 'Soort organisatie',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'content_taxonomy_autocomplete_new_terms' => 'deny',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 12,
    ),
  );

  // Exported field_instance:
  // 'taxonomy_term-overheidsorganisatie-field_telefoon_open_data_desk'.
  $field_instances['taxonomy_term-overheidsorganisatie-field_telefoon_open_data_desk'] = array(
    'bundle' => 'overheidsorganisatie',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 6,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_telefoon_open_data_desk',
    'label' => 'Telefoon open data desk',
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
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'taxonomy_term-overheidsorganisatie-field_thema'.
  $field_instances['taxonomy_term-overheidsorganisatie-field_thema'] = array(
    'bundle' => 'overheidsorganisatie',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 12,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_thema',
    'label' => 'Thema',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'content_taxonomy_autocomplete_new_terms' => 'allow',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 14,
    ),
  );

  // Exported field_instance: 'taxonomy_term-overheidsorganisatie-field_uri'.
  $field_instances['taxonomy_term-overheidsorganisatie-field_uri'] = array(
    'bundle' => 'overheidsorganisatie',
    'default_value' => array(
      0 => array(
        'value' => 'http://data.overheid.nl/organisatie/',
      ),
    ),
    'deleted' => 0,
    'description' => 'Deze URI wordt op data.overheid.nl gebruikt om een "actor" aan te duiden, bijvoorbeeld als data-eigenaar, verstrekker of catalogushouder. ',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_uri',
    'label' => 'URI Actor data.overheid.nl',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 80,
      ),
      'type' => 'text_textfield',
      'weight' => 3,
    ),
  );

  // Exported field_instance:
  // 'taxonomy_term-overheidsorganisatie-field_valt_onder'.
  $field_instances['taxonomy_term-overheidsorganisatie-field_valt_onder'] = array(
    'bundle' => 'overheidsorganisatie',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 13,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_valt_onder',
    'label' => 'Valt onder',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'content_taxonomy_autocomplete_new_terms' => 'deny',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 13,
    ),
  );

  // Exported field_instance:
  // 'taxonomy_term-overheidsorganisatie-field_website'.
  $field_instances['taxonomy_term-overheidsorganisatie-field_website'] = array(
    'bundle' => 'overheidsorganisatie',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_website',
    'label' => 'Website',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 1,
      'attributes' => array(
        'class' => '',
        'configurable_class' => 0,
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'value',
      'title_label_use_field_label' => 0,
      'title_maxlength' => 255,
      'title_value' => 'Website organisatie',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'taxonomy_term-soort_organisatie-field_uri'.
  $field_instances['taxonomy_term-soort_organisatie-field_uri'] = array(
    'bundle' => 'soort_organisatie',
    'default_value' => array(
      0 => array(
        'value' => 'http://data.overheid.nl/organisatiesoort/',
      ),
    ),
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
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_uri',
    'label' => 'URI',
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

  // Exported field_instance:
  // 'taxonomy_term-verantwoordelijke_organisaties-field_organisatie_in_lijst'.
  $field_instances['taxonomy_term-verantwoordelijke_organisaties-field_organisatie_in_lijst'] = array(
    'bundle' => 'verantwoordelijke_organisaties',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_organisatie_in_lijst',
    'label' => 'Organisatie in lijst',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'content_taxonomy_autocomplete_new_terms' => 'allow',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 31,
    ),
  );

  // Exported field_instance: 'user-user-field_catalogus_invoer'.
  $field_instances['user-user-field_catalogus_invoer'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 17,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_catalogus_invoer',
    'label' => 'Catalogus',
    'required' => 0,
    'settings' => array(
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'user-user-field_dv_data_eigenaar'.
  $field_instances['user-user-field_dv_data_eigenaar'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 15,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_dv_data_eigenaar',
    'label' => 'Data-eigenaar',
    'required' => 0,
    'settings' => array(
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'content_taxonomy_autocomplete_new_terms' => 'moderate',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'user-user-field_pr_adres_organisatie'.
  $field_instances['user-user-field_pr_adres_organisatie'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Vul de adresgegevens van het gebouw waarin u werkt.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_pr_adres_organisatie',
    'label' => 'Adres organisatie',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'user-user-field_pr_afdeling'.
  $field_instances['user-user-field_pr_afdeling'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Voor welke afdeling werkt u.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_pr_afdeling',
    'label' => 'Afdeling',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'user-user-field_pr_algemeen_email'.
  $field_instances['user-user-field_pr_algemeen_email'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Voor een algemeen, niet persoonijk, emailadres in. Dit is bijvoorbeeld het emailadres van uw afdeling die open data vragen beantwoord, bijvoorbeeld "opendata@rijksoverheid.nl". ',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'email',
        'settings' => array(),
        'type' => 'email_default',
        'weight' => 12,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_pr_algemeen_email',
    'label' => 'Algemeen emailadres afdeling',
    'required' => 0,
    'settings' => array(
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'email',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'email_textfield',
      'weight' => 15,
    ),
  );

  // Exported field_instance: 'user-user-field_pr_catalogusbeheerder'.
  $field_instances['user-user-field_pr_catalogusbeheerder'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Wie (organsiatie) is de beheerder van waar de dataset te vinden is? Bijvoorbeeld gemeenten zelf of een externe partij zoals Colomby.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 8,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_pr_catalogusbeheerder',
    'label' => 'Catalogusbeheerder',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 13,
    ),
  );

  // Exported field_instance: 'user-user-field_pr_foto'.
  $field_instances['user-user-field_pr_foto'] = array(
    'bundle' => 'user',
    'deleted' => 0,
    'description' => 'U kunt een profiel foto plaatsen als u dit wil. Dit is niet verplicht.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 11,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_pr_foto',
    'label' => 'Foto',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '128 KB',
      'max_resolution' => '200x200',
      'min_resolution' => '200x200',
      'title_field' => 0,
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 16,
    ),
  );

  // Exported field_instance: 'user-user-field_pr_functie'.
  $field_instances['user-user-field_pr_functie'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Welke functie heeft u bij uw organisatie?',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_pr_functie',
    'label' => 'Uw functie',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'user-user-field_pr_naam'.
  $field_instances['user-user-field_pr_naam'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 18,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_pr_naam',
    'label' => 'Uw naam',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 19,
    ),
  );

  // Exported field_instance: 'user-user-field_pr_organisatienaam'.
  $field_instances['user-user-field_pr_organisatienaam'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Alleen voor data eigenaren en beheerders. Begin met tikken van uw organisatienaam. Kies vervolgens uit de waardelijst uw organisatie. Dit is de organisatie die na goedkeuring wordt gekoppeld aan uw account. Staat uw organisatie er niet bij? Laat dit veld dan leeg en geef uw organisatienaam bij de optionele velden. ',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_pr_organisatienaam',
    'label' => 'Organisatienaam',
    'required' => 0,
    'settings' => array(
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'content_taxonomy_autocomplete_new_terms' => 'moderate',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'user-user-field_pr_organisatienaam_plat'.
  $field_instances['user-user-field_pr_organisatienaam_plat'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 14,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_pr_organisatienaam_plat',
    'label' => 'Organisatienaam tekst',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'user-user-field_pr_persoonlijke_email'.
  $field_instances['user-user-field_pr_persoonlijke_email'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Voor een persoonlijke emailadres in, aanvullend op een algemeen emailadres dat u eerder hebt ingevoerd. Bijvoorbeeld: jan.koopmans@gemeenteamsterdam.nl',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'email',
        'settings' => array(),
        'type' => 'email_default',
        'weight' => 9,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_pr_persoonlijke_email',
    'label' => 'Persoonlijke email',
    'required' => 0,
    'settings' => array(
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'email',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'email_textfield',
      'weight' => 14,
    ),
  );

  // Exported field_instance: 'user-user-field_pr_registratiehouder'.
  $field_instances['user-user-field_pr_registratiehouder'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Uw eigen naam.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_pr_registratiehouder',
    'label' => 'Uw naam',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'user-user-field_pr_telefoonnummer'.
  $field_instances['user-user-field_pr_telefoonnummer'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Voer hier u telefoonnummer in zodat uw aanmelding door data.overheid.nl kan worden geverifieerd indien nodig.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_pr_telefoonnummer',
    'label' => 'Telefoonnummer',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'user-user-field_pr_toegang_ckan_storage'.
  $field_instances['user-user-field_pr_toegang_ckan_storage'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 19,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_pr_toegang_ckan_storage',
    'label' => 'Toegang ckan storage',
    'required' => 0,
    'settings' => array(
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'content_taxonomy_opt_groups' => FALSE,
      ),
      'type' => 'options_select',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'user-user-field_pr_verstrekker'.
  $field_instances['user-user-field_pr_verstrekker'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Wie heeft de dataset aangemeld? (orgisatie) Bijvoorbeeld NGR, Colomby of en overheidsorganisatie zelf',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 6,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_pr_verstrekker',
    'label' => 'Verstrekker',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'user-user-field_verstrekker'.
  $field_instances['user-user-field_verstrekker'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 16,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_verstrekker',
    'label' => 'Verstrekker',
    'required' => 0,
    'settings' => array(
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'content_taxonomy_autocomplete_new_terms' => 'allow',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 5,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Adres organisatie');
  t('Afdeling');
  t('Algemeen emailadres afdeling');
  t('Alleen voor data eigenaren en beheerders. Begin met tikken van uw organisatienaam. Kies vervolgens uit de waardelijst uw organisatie. Dit is de organisatie die na goedkeuring wordt gekoppeld aan uw account. Staat uw organisatie er niet bij? Laat dit veld dan leeg en geef uw organisatienaam bij de optionele velden. ');
  t('Almanak URI');
  t('Alternatieve naam');
  t('Andere beheerders');
  t('BPR-code');
  t('Beheerder register');
  t('CKAN catalogus');
  t('Catalogus');
  t('Catalogus houder data.overheid.nl');
  t('Catalogusbeheerder');
  t('Data eigenaar');
  t('Data-eigenaar');
  t('Dataverzoek email');
  t('Deze URI wordt op data.overheid.nl gebruikt om een "actor" aan te duiden, bijvoorbeeld als data-eigenaar, verstrekker of catalogushouder. ');
  t('Deze organisatie is vervallen. De naam is niet meer in gebruik maar kan nog wel als actor worden gebruikt. ');
  t('Eigenaar register');
  t('Formele naam');
  t('Foto');
  t('Geef een emailadres waar dataverzoeken voor deze organisatie naar kunnen worden verstuurd. ');
  t('Handmatig op data.overheid.nl');
  t('In registerlijst');
  t('Kan dataverzoeken ontvangen');
  t('Nationaal');
  t('OWMS URI');
  t('Op data.overheid.nl');
  t('Organisatie in lijst');
  t('Organisatienaam');
  t('Organisatienaam tekst');
  t('Overheidsorganisatie');
  t('Persoonlijke email');
  t('Rekenkamer');
  t('Sisa code CBS');
  t('Soort organisatie');
  t('Telefoon open data desk');
  t('Telefoonnummer');
  t('Thema');
  t('Toegang ckan storage');
  t('U kunt een profiel foto plaatsen als u dit wil. Dit is niet verplicht.');
  t('URI');
  t('URI Actor data.overheid.nl');
  t('URI catalogus op DONL');
  t('URL catalogus');
  t('Uw eigen naam.');
  t('Uw functie');
  t('Uw naam');
  t('Valt onder');
  t('Verstrekker');
  t('Vervallen');
  t('Via NGR op data.overheid.nl');
  t('Voer hier u telefoonnummer in zodat uw aanmelding door data.overheid.nl kan worden geverifieerd indien nodig.');
  t('Voor een algemeen, niet persoonijk, emailadres in. Dit is bijvoorbeeld het emailadres van uw afdeling die open data vragen beantwoord, bijvoorbeeld "opendata@rijksoverheid.nl". ');
  t('Voor een persoonlijke emailadres in, aanvullend op een algemeen emailadres dat u eerder hebt ingevoerd. Bijvoorbeeld: jan.koopmans@gemeenteamsterdam.nl');
  t('Voor welke afdeling werkt u.');
  t('Vul de adresgegevens van het gebouw waarin u werkt.');
  t('Website');
  t('Welke functie heeft u bij uw organisatie?');
  t('Wie (organsiatie) is de beheerder van waar de dataset te vinden is? Bijvoorbeeld gemeenten zelf of een externe partij zoals Colomby.');
  t('Wie heeft de dataset aangemeld? (orgisatie) Bijvoorbeeld NGR, Colomby of en overheidsorganisatie zelf');
  t('kvk-code');

  return $field_instances;
}
