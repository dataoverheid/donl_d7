<?php
/**
 * @file
 * dgu_user.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function dgu_user_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_contact|taxonomy_term|overheidsorganisatie|default';
  $field_group->group_name = 'group_contact';
  $field_group->entity_type = 'taxonomy_term';
  $field_group->bundle = 'overheidsorganisatie';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contact',
    'weight' => '2',
    'children' => array(
      0 => 'field_dataverzoek_email',
      1 => 'field_website',
      2 => 'field_telefoon_open_data_desk',
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
        'classes' => 'group-contact field-group-div',
        'id' => '',
      ),
    ),
  );
  $export['group_contact|taxonomy_term|overheidsorganisatie|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_contact|taxonomy_term|overheidsorganisatie|form';
  $field_group->group_name = 'group_contact';
  $field_group->entity_type = 'taxonomy_term';
  $field_group->bundle = 'overheidsorganisatie';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contact',
    'weight' => '2',
    'children' => array(
      0 => 'field_dataverzoek_email',
      1 => 'field_website',
      2 => 'field_telefoon_open_data_desk',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => 'group-contact field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_contact|taxonomy_term|overheidsorganisatie|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_id|taxonomy_term|overheidsorganisatie|default';
  $field_group->group_name = 'group_id';
  $field_group->entity_type = 'taxonomy_term';
  $field_group->bundle = 'overheidsorganisatie';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Identificatie',
    'weight' => '1',
    'children' => array(
      0 => 'field_almanak_uri',
      1 => 'field_uri',
      2 => 'description',
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
        'classes' => 'group-id field-group-div',
        'id' => '',
      ),
    ),
  );
  $export['group_id|taxonomy_term|overheidsorganisatie|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_id|taxonomy_term|overheidsorganisatie|form';
  $field_group->group_name = 'group_id';
  $field_group->entity_type = 'taxonomy_term';
  $field_group->bundle = 'overheidsorganisatie';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Identificatie',
    'weight' => '3',
    'children' => array(
      0 => 'field_almanak_uri',
      1 => 'field_uri',
      2 => 'field_bpr_code',
      3 => 'field_kvk_code',
      4 => 'field_owms_uri',
      5 => 'field_sisa_code_cbs',
      6 => 'path',
      7 => 'description',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => 'group-id field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_id|taxonomy_term|overheidsorganisatie|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_items|taxonomy_term|overheidsorganisatie|default';
  $field_group->group_name = 'group_items';
  $field_group->entity_type = 'taxonomy_term';
  $field_group->bundle = 'overheidsorganisatie';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Dataverzoeken en feedback bij organisatie',
    'weight' => '4',
    'children' => array(
      0 => 'field_klaar_voor_dataverzoeken',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Dataverzoeken en feedback bij organisatie',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-status field-group-div fieldset fieldset-background-blue2',
        'description' => 'Indien beschikbaar worden onderstaand dataverzoeken en/of feedback getoond die aan deze organisatie zijn gekoppeld. ',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_items|taxonomy_term|overheidsorganisatie|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_koppeling|user|user|form';
  $field_group->group_name = 'group_koppeling';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Alleen voor data eigenaren (gebruikers die data mogen aanmelden)',
    'weight' => '8',
    'children' => array(
      0 => 'field_pr_organisatienaam',
      1 => 'field_pr_telefoonnummer',
      2 => 'field_dv_data_eigenaar',
      3 => 'field_verstrekker',
      4 => 'field_catalogus_invoer',
      5 => 'field_pr_toegang_ckan_storage',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Alleen voor data eigenaren (gebruikers die data mogen aanmelden)',
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
  $export['group_koppeling|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_optioneel|user|user|form';
  $field_group->group_name = 'group_optioneel';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Optionele velden',
    'weight' => '7',
    'children' => array(
      0 => 'field_pr_adres_organisatie',
      1 => 'field_pr_afdeling',
      2 => 'field_pr_algemeen_email',
      3 => 'field_pr_catalogusbeheerder',
      4 => 'field_pr_functie',
      5 => 'field_pr_persoonlijke_email',
      6 => 'field_pr_registratiehouder',
      7 => 'field_pr_verstrekker',
      8 => 'field_pr_organisatienaam_plat',
      9 => 'field_pr_naam',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Optionele velden',
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
  $export['group_optioneel|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_organisatie|taxonomy_term|overheidsorganisatie|default';
  $field_group->group_name = 'group_organisatie';
  $field_group->entity_type = 'taxonomy_term';
  $field_group->bundle = 'overheidsorganisatie';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Organisatie',
    'weight' => '0',
    'children' => array(
      0 => 'field_thema',
      1 => 'field_soort_organisatie',
      2 => 'field_data_eigenaar',
      3 => 'field_valt_onder',
      4 => 'field_formele_naam',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Organisatie',
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
  $export['group_organisatie|taxonomy_term|overheidsorganisatie|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_organisatie|taxonomy_term|overheidsorganisatie|form';
  $field_group->group_name = 'group_organisatie';
  $field_group->entity_type = 'taxonomy_term';
  $field_group->bundle = 'overheidsorganisatie';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Organisatie',
    'weight' => '0',
    'children' => array(
      0 => 'field_formele_naam',
      1 => 'field_alt_naam',
      2 => 'name',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => 'group-organisatie field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_organisatie|taxonomy_term|overheidsorganisatie|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_relatie|taxonomy_term|overheidsorganisatie|form';
  $field_group->group_name = 'group_relatie';
  $field_group->entity_type = 'taxonomy_term';
  $field_group->bundle = 'overheidsorganisatie';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Relaties',
    'weight' => '1',
    'children' => array(
      0 => 'field_thema',
      1 => 'field_soort_organisatie',
      2 => 'field_valt_onder',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => 'group-relatie field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_relatie|taxonomy_term|overheidsorganisatie|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_status|taxonomy_term|overheidsorganisatie|default';
  $field_group->group_name = 'group_status';
  $field_group->entity_type = 'taxonomy_term';
  $field_group->bundle = 'overheidsorganisatie';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Status',
    'weight' => '3',
    'children' => array(
      0 => 'field_rekenkamer',
      1 => 'field_deprecated',
      2 => 'field_catalogus_houder_data_over',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Status',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-id field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_status|taxonomy_term|overheidsorganisatie|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_status|taxonomy_term|overheidsorganisatie|form';
  $field_group->group_name = 'group_status';
  $field_group->entity_type = 'taxonomy_term';
  $field_group->bundle = 'overheidsorganisatie';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Status',
    'weight' => '4',
    'children' => array(
      0 => 'field_rekenkamer',
      1 => 'field_deprecated',
      2 => 'field_data_eigenaar',
      3 => 'field_catalogus_houder_data_over',
      4 => 'field_klaar_voor_dataverzoeken',
      5 => 'field_overheidsorganisatie',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => 'group-status field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_status|taxonomy_term|overheidsorganisatie|form'] = $field_group;

  return $export;
}
