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

  // Exported permission: 'administer panelizer node org breadcrumbs'.
  $permissions['administer panelizer node org breadcrumbs'] = array(
    'name' => 'administer panelizer node org breadcrumbs',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node org content'.
  $permissions['administer panelizer node org content'] = array(
    'name' => 'administer panelizer node org content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node org context'.
  $permissions['administer panelizer node org context'] = array(
    'name' => 'administer panelizer node org context',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node org defaults'.
  $permissions['administer panelizer node org defaults'] = array(
    'name' => 'administer panelizer node org defaults',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node org layout'.
  $permissions['administer panelizer node org layout'] = array(
    'name' => 'administer panelizer node org layout',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node org overview'.
  $permissions['administer panelizer node org overview'] = array(
    'name' => 'administer panelizer node org overview',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node org settings'.
  $permissions['administer panelizer node org settings'] = array(
    'name' => 'administer panelizer node org settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'create org content'.
  $permissions['create org content'] = array(
    'name' => 'create org content',
    'roles' => array(
      'administrator' => 'administrator',
      'network admin' => 'network admin',
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
