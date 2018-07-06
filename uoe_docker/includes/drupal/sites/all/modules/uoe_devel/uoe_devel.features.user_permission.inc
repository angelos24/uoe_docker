<?php
/**
 * @file
 * uoe_devel.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function uoe_devel_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access devel information'.
  $permissions['access devel information'] = array(
    'name' => 'access devel information',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'devel',
  );

  // Exported permission: 'switch users'.
  $permissions['switch users'] = array(
    'name' => 'switch users',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'devel',
  );

  // Exported permission: 'view devel_node_access information'.
  $permissions['view devel_node_access information'] = array(
    'name' => 'view devel_node_access information',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'devel_node_access',
  );

  return $permissions;
}
