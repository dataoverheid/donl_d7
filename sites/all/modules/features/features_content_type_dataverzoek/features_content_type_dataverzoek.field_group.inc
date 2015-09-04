<?php
/**
 * @file
 * features_content_type_dataverzoek.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function features_content_type_dataverzoek_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_bron|node|dataverzoek|default';
  $field_group->group_name = 'group_bron';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'dataverzoek';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Mogelijke bron van de data',
    'weight' => '4',
    'children' => array(
      0 => 'field_dv_mogelijke_beheers_org',
      1 => 'field_dv_problemen_gehad',
      2 => 'field_dv_verklaring_probleem',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => 'group-bron field-group-div',
        'id' => '',
      ),
    ),
  );
  $export['group_bron|node|dataverzoek|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_bron|node|dataverzoek|form';
  $field_group->group_name = 'group_bron';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'dataverzoek';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Weet u de mogelijke bron van de data?',
    'weight' => '3',
    'children' => array(
      0 => 'field_dv_mogelijke_beheers_org',
      1 => 'field_dv_problemen_gehad',
      2 => 'field_dv_verklaring_probleem',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Weet u de mogelijke bron van de data?',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => '',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_bron|node|dataverzoek|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_dataverzoek|node|dataverzoek|default';
  $field_group->group_name = 'group_dataverzoek';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'dataverzoek';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Welke data is gevraagd',
    'weight' => '3',
    'children' => array(
      0 => 'field_dv_betreft_periode',
      1 => 'field_dv_gevraagde_data',
      2 => 'field_dv_thema',
      3 => 'field_dv_gewenste_dataformaat',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => 'group-dataverzoek field-group-div',
        'id' => '',
      ),
    ),
  );
  $export['group_dataverzoek|node|dataverzoek|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_dataverzoek|node|dataverzoek|form';
  $field_group->group_name = 'group_dataverzoek';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'dataverzoek';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Welke data zoekt u? ',
    'weight' => '2',
    'children' => array(
      0 => 'field_dv_betreft_periode',
      1 => 'field_dv_gevraagde_data',
      2 => 'field_dv_thema',
      3 => 'field_dv_gewenste_dataformaat',
      4 => 'title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Welke data zoekt u? ',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => '',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_dataverzoek|node|dataverzoek|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_gebruik|node|dataverzoek|default';
  $field_group->group_name = 'group_gebruik';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'dataverzoek';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Waar wordt de data voor gebruikt',
    'weight' => '5',
    'children' => array(
      0 => 'field_dv_denkt_geld_te_verdienen',
      1 => 'field_dv_gebruik_dataset',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => 'group-gebruik field-group-div',
        'id' => '',
      ),
    ),
  );
  $export['group_gebruik|node|dataverzoek|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_gebruik|node|dataverzoek|form';
  $field_group->group_name = 'group_gebruik';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'dataverzoek';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Waar wilt u de data voor gebruiken? ',
    'weight' => '5',
    'children' => array(
      0 => 'field_dv_denkt_geld_te_verdienen',
      1 => 'field_dv_gebruik_dataset',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Waar wilt u de data voor gebruiken? ',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => '',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_gebruik|node|dataverzoek|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_gegevens|node|dataverzoek|default';
  $field_group->group_name = 'group_gegevens';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'dataverzoek';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Gegevens aanvrager [alleen zichtbaar voor beheerder]',
    'weight' => '2',
    'children' => array(
      0 => 'field_dv_emailadres',
      1 => 'field_dv_naam',
      2 => 'field_dv_organisatie',
      3 => 'field_dv_telefoonnummer',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Gegevens aanvrager [alleen zichtbaar voor beheerder]',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-gegevens field-group-div fieldset-background-orange2',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_gegevens|node|dataverzoek|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_gegevens|node|dataverzoek|form';
  $field_group->group_name = 'group_gegevens';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'dataverzoek';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Uw gegevens (deze gegevens worden NIET publiek zichtbaar)',
    'weight' => '1',
    'children' => array(
      0 => 'field_dv_emailadres',
      1 => 'field_dv_naam',
      2 => 'field_dv_organisatie',
      3 => 'field_dv_telefoonnummer',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Uw gegevens (deze gegevens worden NIET publiek zichtbaar)',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => '',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_gegevens|node|dataverzoek|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_status|node|dataverzoek|default';
  $field_group->group_name = 'group_status';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'dataverzoek';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Status',
    'weight' => '0',
    'children' => array(
      0 => 'field_dv_status',
      1 => 'field_dv_datum',
      2 => 'field_dv_toelichting_status',
      3 => 'field_dv_data_eigenaar',
      4 => 'field_dv_url_naar_dataset',
      5 => 'field_dv_fase',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Status',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-status field-group-div fieldset fieldset-background-blue2',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_status|node|dataverzoek|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_status|node|dataverzoek|form';
  $field_group->group_name = 'group_status';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'dataverzoek';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Alleen voor beheerders: status en toelichting',
    'weight' => '6',
    'children' => array(
      0 => 'field_dv_status',
      1 => 'field_dv_datum',
      2 => 'field_dv_toelichting_status',
      3 => 'field_dv_data_eigenaar',
      4 => 'field_dv_url_naar_dataset',
      5 => 'field_dv_fase',
      6 => 'field_gepubliceerd',
      7 => 'path',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Alleen voor beheerders: status en toelichting',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-status field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_status|node|dataverzoek|form'] = $field_group;

  return $export;
}
