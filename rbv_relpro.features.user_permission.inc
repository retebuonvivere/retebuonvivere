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

  // Exported permission: 'administer panelizer node collaboration breadcrumbs'.
  $permissions['administer panelizer node collaboration breadcrumbs'] = array(
    'name' => 'administer panelizer node collaboration breadcrumbs',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node collaboration content'.
  $permissions['administer panelizer node collaboration content'] = array(
    'name' => 'administer panelizer node collaboration content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node collaboration context'.
  $permissions['administer panelizer node collaboration context'] = array(
    'name' => 'administer panelizer node collaboration context',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node collaboration defaults'.
  $permissions['administer panelizer node collaboration defaults'] = array(
    'name' => 'administer panelizer node collaboration defaults',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node collaboration layout'.
  $permissions['administer panelizer node collaboration layout'] = array(
    'name' => 'administer panelizer node collaboration layout',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node collaboration overview'.
  $permissions['administer panelizer node collaboration overview'] = array(
    'name' => 'administer panelizer node collaboration overview',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node collaboration settings'.
  $permissions['administer panelizer node collaboration settings'] = array(
    'name' => 'administer panelizer node collaboration settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

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
