<?php
/**
 * @file
 * features_content_type_feedback_dataset.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function features_content_type_feedback_dataset_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_beheerder|node|feedback_dataset|form';
  $field_group->group_name = 'group_beheerder';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'feedback_dataset';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Voor de beheerder',
    'weight' => '3',
    'children' => array(
      0 => 'field_gepubliceerd',
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
        'classes' => 'group-beheerder field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_beheerder|node|feedback_dataset|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_dataset|node|feedback_dataset|form';
  $field_group->group_name = 'group_dataset';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'feedback_dataset';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Dataset gegevens (niet aan te passen)',
    'weight' => '0',
    'children' => array(
      0 => 'field_fd_data_eigenaar',
      1 => 'field_fd_link_dataset',
      2 => 'field_fd_titel_dataset',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Dataset gegevens (niet aan te passen)',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => '',
        'description' => 'De gegevens van de dataset waarover u een opmerking wilt versturen',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_dataset|node|feedback_dataset|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_opmerking|node|feedback_dataset|form';
  $field_group->group_name = 'group_opmerking';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'feedback_dataset';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Uw opmerking',
    'weight' => '2',
    'children' => array(
      0 => 'field_fd_feedback',
      1 => 'title',
      2 => 'group_persoonlijk',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Uw opmerking',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-opmerking field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_opmerking|node|feedback_dataset|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_persoonlijk|node|feedback_dataset|form';
  $field_group->group_name = 'group_persoonlijk';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'feedback_dataset';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_opmerking';
  $field_group->data = array(
    'label' => 'Uw gegevens (worden niet gepubliceerd)',
    'weight' => '5',
    'children' => array(
      0 => 'field_fd_email',
      1 => 'field_fd_naam',
      2 => 'field_fd_telefoon',
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
        'classes' => 'group-persoonlijk field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_persoonlijk|node|feedback_dataset|form'] = $field_group;

  return $export;
}
