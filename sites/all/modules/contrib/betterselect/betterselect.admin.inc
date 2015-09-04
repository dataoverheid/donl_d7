<?php

/**
 * Build settings form().
 */
function betterselect_admin_settings() {
  $form['betterselect_general'] = array(
    '#type' => 'fieldset',
    '#title' => t('General options'),
  );

  $form['betterselect_general']['betterselect_scroll'] = array(
    '#type' => 'checkbox',
    '#title' => t('Scrollable div'),
    '#description' => t('Place options in a scrollable div'),
    '#default_value' => variable_get('betterselect_scroll', FALSE),
  );

  $form['betterselect_general']['betterselect_node_form_only'] = array(
    '#type' => 'checkbox',
    '#title' => t('Node form only'),
    '#description' => t('Only convert select lists on node forms'),
    '#default_value' => variable_get('betterselect_node_form_only', FALSE),
  );

  $form['betterselect_general']['betterselect_scroll_to_first_checked'] = array(
    '#type' => 'checkbox',
    '#title' => t('Scroll to the first selected item.'),
    '#description' => t('On page load, automatically scroll scrollable divs to the first enabled option.  Requires !scrollable_div above.', array('!scrollable_div' => '<em>' . t('Scrollable div') . '</em>')),
    '#default_value' => variable_get('betterselect_scroll_to_first_checked', FALSE),
  );

  $form['betterselect_taxonomy'] = array(
    '#type' => 'fieldset',
    '#title' => t('Taxonomy options'),
  );

  $form['betterselect_taxonomy']['betterselect_save_lineage'] = array(
    '#type' => 'checkbox',
    '#title' => t('Save lineage'),
    '#description' => t('If a user selects a child term when saving a node, automatically save the parent term too.'),
    '#default_value' => variable_get('betterselect_save_lineage', FALSE),
  );

  $form['betterselect_taxonomy']['betterselect_add_depth_classes'] = array(
    '#type' => 'checkbox',
    '#title' => t('Add depth classes'),
    '#description' => t('Add an extra div to each betterselect option, with a class indicating depth in taxonomy hierarchy. Good for styling parent/child.'),
    '#default_value' => variable_get('betterselect_add_depth_classes', FALSE),
  );
  
  $form['betterselect_content_types_group'] = array(
    '#type' => 'fieldset',
    '#title' => t('Content type options'),
  );

  $node_types = node_type_get_names();
  $all_types = array_combine(array_keys($node_types), array_keys($node_types));
  $form['betterselect_content_types_group']['betterselect_content_types'] = array(
    '#type' => 'checkboxes',
    '#options' => array_map('check_plain', $node_types),
    '#title' => t('Enabled for content types'),
    '#description' => t('Select the content types for which to enable better select.  Defaults to enabled for all types, even types created in the future.'),
    '#default_value' => variable_get('betterselect_content_types', array()) + $all_types,
    '#checkall' => TRUE,
  );

  return system_settings_form($form);
}
