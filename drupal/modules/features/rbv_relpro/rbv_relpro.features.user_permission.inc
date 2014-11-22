<?php
/**
 * @file
 * rbv_relpro.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function rbv_relpro_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create collaboration content'.
  $permissions['create collaboration content'] = array(
    'name' => 'create collaboration content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any collaboration content'.
  $permissions['delete any collaboration content'] = array(
    'name' => 'delete any collaboration content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own collaboration content'.
  $permissions['delete own collaboration content'] = array(
    'name' => 'delete own collaboration content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any collaboration content'.
  $permissions['edit any collaboration content'] = array(
    'name' => 'edit any collaboration content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own collaboration content'.
  $permissions['edit own collaboration content'] = array(
    'name' => 'edit own collaboration content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  return $permissions;
}
