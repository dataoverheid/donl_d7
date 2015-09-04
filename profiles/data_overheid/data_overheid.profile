<?php
/** 
 * Implements hook_form_FORM_ID_alter(). 
 *  Alter the site configuration form. 
 * 
 * @param array : $form 
 * @param array : $form_state 
 */ 
function data_overheid_form_install_configure_form_alter(&$form, $form_state) {
  // Pre-populate the site name 
  $form['site_information']['site_name']['#default_value'] = 'Rijksoverheid';
  // Pre-popu4late default country 
  $form['server_settings']['site_default_country']['#default_value'] = 'NL'; 
  // Pre-populate default time-zone 
  $form['server_settings']['date_default_timezone']['#default_value'] = 'Europe/Berlin';
}


 
/** 
 * Implements hook_install_tasks(). 
 */ 
function data_overheid_install_tasks() { 
 
  $tasks = array( 
    'data_overheid_import_settings' => array( 
      'display_name' => st('Import settings'), 
    ),
    /* 'data_overheid_create_page_content_types' => array(
      'display_name' => st('Create page content type'),
    ), */
    'data_overheid_features_batch' => array( 
      'display_name' => st('Install features'), 
      'display' => TRUE, 
      'type' => 'batch', 
    ), 
    'data_overheid_features_revert_batch' => array( 
      'display_name' => st('Revert features'), 
      'display' => TRUE, 
      'type' => 'batch', 
    ),
    'data_overheid_create_roles' => array(),
    'data_overheid_rebuilding_access_rights' => array(
      'display_name' => st('Rebuilding access rights'),
      'display' => TRUE,
      'type' => 'normal',
      'function' => 'data_overheid_rebuilding_access_rights',
    ),
  ); 
  return $tasks; 
} 
 
/** 
 * data_overheid_import_settings() 
 *  setting the default theme and disable bartik 
 *  adding extra date formats 
 *  
 *  @param Pointer object : &$install_state 
 *    - Not yet checked the contents of this object - 
 */ 
function data_overheid_import_settings(&$install_state) { 
  $theme = array( 
    'theme_default' => 'koop2',
    'admin_theme' => 'seven',
  ); 
  theme_enable($theme); 
  foreach ($theme as $var => $theme) { 
    if (!is_numeric($var)) { 
      variable_set($var, $theme); 
    } 
  } 
  // Disable the default Bartik theme 
  theme_disable(array('bartik')); 
  variable_set('node_admin_theme', '1');
  
  // Add date formats 
  db_insert('date_formats')
    ->fields(array('format', 'type', 'locked'))
    ->values(array(
      'format' => 'd-m-Y H:i', 
      'type' => 'custom', 
      'locked' => '0', 
    ))
    ->values(array( 
      'format' => 'd M Y H:i', 
      'type' => 'custom', 
      'locked' => '0', 
    ))
    ->values(array( 
      'format' => 'l, d F Y - H:i', 
      'type' => 'custom', 
      'locked' => '0', 
    ))
    ->execute();
  
  variable_set('date_format_short', 'd-m-Y H:i');
  variable_set('date_format_medium', 'd M Y H:i');
  variable_set('date_format_long', 'l, d F Y - H:i');
  
  // Do not show error messages. 
  variable_set('error_level', ERROR_REPORTING_HIDE); 
 
  // Users do not change their own timezone. 
  variable_set('configurable_timezones', 0); 
 
  // Users are allowed to register, if activated. 
  variable_set('user_register', 0); 
  
  variable_set('site_frontpage', 'home');
  variable_set('site_name', 'Rijksoverheid');
  variable_set('site_slogan', 'Data.overheid.nl: het open dataportaal van de Nederlandse overheid');
} 
 
/** 
 * data_overheid_features_batch() 
 * 
 *  Installing features 
 * 
 *  @param Pointer object : &$install_state 
 *    - Not yet checked the contents of this object - 
 */ 
function data_overheid_features_batch(&$install_state) { 
  $features = features_get_features(NULL, TRUE); 
 
  $operations = array(); 
  foreach ($features as $feature) { 
    if (strpos($feature->name, 'example') || (isset($feature->info['hidden']) && $feature->info['hidden'])) { 
      continue; 
    } 
    $operations[] = array('data_overheid_batch_features_install', array($feature, $feature->info['name'])); 
  } 
 
  $batch = array( 
    'title' => t('Installation of features'), 
    'operations' => $operations, 
  ); 
  return $batch; 
} 
 
/** 
 * data_overheid_batch_features_install() 
 *  Install an feature 
 *   
 * @param Object : $feature 
 * @param String : $title 
 * @param Object : &$context 
 */ 
function data_overheid_batch_features_install($feature, $title, &$context) { 
  module_load_include('inc', 'variable_features'); 
  features_install_modules(array($feature->name)); 
 
  $context['message'] = t('Installed <em>@title</em> feature.', array('@title' => $title)); 
} 
 
/** 
 *  
 */ 
function data_overheid_features_revert_batch(&$install_state) { 
  drupal_flush_all_caches(); 
  $features = features_get_features(NULL, TRUE); 
 
  $operations = array(); 
  foreach ($features as $feature) { 
    if (!$feature->status) { 
      continue; 
    } 
    $operations[] = array('data_overheid_batch_features_revert', array($feature, $feature->info['name'])); 
  } 
 
  $batch = array( 
    'title' => t('Revert of features'), 
    'operations' => $operations, 
  ); 
  return $batch; 
} 
 
/* 
 * Batch process features revert 
 */ 
function data_overheid_batch_features_revert($feature, $title, &$context) { 
  module_load_include('inc', 'features', 'includes/features.ctools'); 
  module_load_include('inc', 'variable_features', 'variable_features'); 
  features_rebuild(); 
  $components = array(); 
   
  foreach (array_keys($feature->info['features']) as $component) { 
    if (features_hook($component, 'features_revert')) { 
      $components[] = $component; 
    } 
  } 
 
  if (!empty($components)) { 
    foreach ($components as $component) { 
      features_revert(array($feature->name => array($component))); 
      features_rebuild(array($feature->name => array($component))); 
    } 
  } 
 
  $context['message'] = t('Reverted <em>@title</em> feature.', array('@title' => $title));  
} 



function data_overheid_create_page_content_types(&$install_state) {
  $t = get_t();
  $node_example = array(
    'type' => 'page',
    'name' => $t('Page'),
    'base' => 'node_content',
    'description' => $t('Default page.'),
    'locked' => FALSE,
    'disabled' => FALSE,
    'has_title' => TRUE,
    'title_label' => 'Title',
  );
  $content_type = node_type_set_defaults($node_example);
  node_add_body_field($content_type);
  $status = node_type_save($content_type);
  $t_args = array('%name' => $content_type->name);
  if ($status == SAVED_UPDATED) {
    drupal_set_message($t('The content type %name has been updated.', $t_args));
  } 
  elseif ($status == SAVED_NEW) {
    drupal_set_message($t('The content type %name has been added.', $t_args));
    watchdog('node', 'Added content type %name.', $t_args, WATCHDOG_NOTICE, l($t('view'), 'admin/structure/types')); 
  }
  variable_set('node_submitted_' . $content_type->name, 0);
  variable_set('node_options_' . $content_type->name, array(0 => 'status'));
  variable_set('node_preview_' . $content_type->name, '1');
}



/** 
 * data_overheid_create_roles().
 */ 
function data_overheid_create_roles(&$install_state) { 
   
  // Annonymous user 
  user_role_grant_permissions(1, array('access content')); 
   
  // Authenticated user 
  user_role_grant_permissions(2, array('access content')); 
  
  // Create a default role for site administrators, with all available 
  // permissions assigned. 
  $admin_role = new stdClass(); 
  $admin_role->name = 'Administrator'; 
  $admin_role->weight = 2; 
  user_role_save($admin_role); 
  user_role_grant_permissions($admin_role->rid, array_keys(module_invoke_all('permission'))); 
  // Set this as the administrator role. 
  variable_set('user_admin_role', $admin_role->rid);
  
  // Assign user 1 the "administrator" role. 
  db_insert('users_roles') 
    ->fields(array('uid' => 1, 'rid' => $admin_role->rid)) 
    ->execute();
}



function data_overheid_rebuilding_access_rights (&$install_state) {
  node_access_rebuild();
}