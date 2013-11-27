<?php
/**
 * @file
 * rbv_com_fields.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function rbv_com_fields_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'delete terms in categories'.
  $permissions['delete terms in categories'] = array(
    'name' => 'delete terms in categories',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in org_types'.
  $permissions['delete terms in org_types'] = array(
    'name' => 'delete terms in org_types',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in relation_categories'.
  $permissions['delete terms in relation_categories'] = array(
    'name' => 'delete terms in relation_categories',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in categories'.
  $permissions['edit terms in categories'] = array(
    'name' => 'edit terms in categories',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in org_types'.
  $permissions['edit terms in org_types'] = array(
    'name' => 'edit terms in org_types',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in relation_categories'.
  $permissions['edit terms in relation_categories'] = array(
    'name' => 'edit terms in relation_categories',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  return $permissions;
}
