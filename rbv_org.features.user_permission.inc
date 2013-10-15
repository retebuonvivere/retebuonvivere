<?php
/**
 * @file
 * rbv_org.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function rbv_org_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create org content'.
  $permissions['create org content'] = array(
    'name' => 'create org content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any org content'.
  $permissions['delete any org content'] = array(
    'name' => 'delete any org content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own org content'.
  $permissions['delete own org content'] = array(
    'name' => 'delete own org content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any org content'.
  $permissions['edit any org content'] = array(
    'name' => 'edit any org content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own org content'.
  $permissions['edit own org content'] = array(
    'name' => 'edit own org content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  return $permissions;
}
