<?php
/**
 * @file
 * dgu_user.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function dgu_user_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'anonymous';
  $strongarm->value = 'Visitor';
  $export['anonymous'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ckan_publisher_role';
  $strongarm->value = '2';
  $export['ckan_publisher_role'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_user__user';
  $strongarm->value = array(
    'view_modes' => array(
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'account' => array(
          'weight' => '1',
        ),
        'timezone' => array(
          'weight' => '2',
        ),
        'overlay_control' => array(
          'weight' => '2',
        ),
        'googleanalytics' => array(
          'weight' => '14',
        ),
        'redirect' => array(
          'weight' => '13',
        ),
        'contact' => array(
          'weight' => '1',
        ),
        'wysiwyg' => array(
          'weight' => '12',
        ),
        'ckeditor' => array(
          'weight' => '4',
        ),
        'locale' => array(
          'weight' => '3',
        ),
      ),
      'display' => array(
        'summary' => array(
          'default' => array(
            'weight' => '1',
            'visible' => TRUE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_user__user'] = $strongarm;

  return $export;
}
