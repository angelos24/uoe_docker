<?php
/**
 * @file
 * uoe_profile.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function uoe_profile_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create uoe_profile content'.
  $permissions['create uoe_profile content'] = array(
    'name' => 'create uoe_profile content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'moderate uoe_profile state from draft to published'.
  $permissions['moderate uoe_profile state from draft to published'] = array(
    'name' => 'moderate uoe_profile state from draft to published',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate uoe_profile state from published to draft'.
  $permissions['moderate uoe_profile state from published to draft'] = array(
    'name' => 'moderate uoe_profile state from published to draft',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'uoe manage profiles'.
  $permissions['uoe manage profiles'] = array(
    'name' => 'uoe manage profiles',
    'roles' => array(
      'cms operative' => 'cms operative',
    ),
    'module' => 'uoe_profile',
  );

  // Exported permission: 'use text format uoe_profile_format'.
  $permissions['use text format uoe_profile_format'] = array(
    'name' => 'use text format uoe_profile_format',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use text format uoe_profile_biography_format'.
  $permissions['use text format uoe_profile_biography_format'] = array(
    'name' => 'use text format uoe_profile_biography_format',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'filter',
  );

  return $permissions;
}
