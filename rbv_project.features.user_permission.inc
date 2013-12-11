<?php
/**
 * @file
 * rbv_project.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function rbv_project_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer panelizer node project breadcrumbs'.
  $permissions['administer panelizer node project breadcrumbs'] = array(
    'name' => 'administer panelizer node project breadcrumbs',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node project content'.
  $permissions['administer panelizer node project content'] = array(
    'name' => 'administer panelizer node project content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node project context'.
  $permissions['administer panelizer node project context'] = array(
    'name' => 'administer panelizer node project context',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node project defaults'.
  $permissions['administer panelizer node project defaults'] = array(
    'name' => 'administer panelizer node project defaults',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node project layout'.
  $permissions['administer panelizer node project layout'] = array(
    'name' => 'administer panelizer node project layout',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node project overview'.
  $permissions['administer panelizer node project overview'] = array(
    'name' => 'administer panelizer node project overview',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node project settings'.
  $permissions['administer panelizer node project settings'] = array(
    'name' => 'administer panelizer node project settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'create project content'.
  $permissions['create project content'] = array(
    'name' => 'create project content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any project content'.
  $permissions['delete any project content'] = array(
    'name' => 'delete any project content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own project content'.
  $permissions['delete own project content'] = array(
    'name' => 'delete own project content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any project content'.
  $permissions['edit any project content'] = array(
    'name' => 'edit any project content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own project content'.
  $permissions['edit own project content'] = array(
    'name' => 'edit own project content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  return $permissions;
}
