<?php
/**
 * @file
 * features_settings_sitemap.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function features_settings_sitemap_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access site map'.
  $permissions['access site map'] = array(
    'name' => 'access site map',
    'roles' => array(
      'Administrator' => 'Administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'site_map',
  );

  return $permissions;
}
