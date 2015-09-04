<?php
/**
 * @file
 * dgu_user.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function dgu_user_user_default_roles() {
  $roles = array();

  // Exported role: Contentbeheerder.
  $roles['Contentbeheerder'] = array(
    'name' => 'Contentbeheerder',
    'weight' => 8,
  );

  // Exported role: Leverancier van data.
  $roles['Leverancier van data'] = array(
    'name' => 'Leverancier van data',
    'weight' => 7,
  );

  // Exported role: Reageerder/volger.
  $roles['Reageerder/volger'] = array(
    'name' => 'Reageerder/volger',
    'weight' => 9,
  );

  return $roles;
}
