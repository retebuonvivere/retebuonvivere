<?php
/**
 * @file
 * rbv_project.features.og_features_permission.inc
 */

/**
 * Implements hook_og_features_default_permissions().
 */
function rbv_project_og_features_default_permissions() {
  $permissions = array();

  // Exported og permission: 'node:org:create project content'
  $permissions['node:org:create project content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'editor member' => 'editor member',
    ),
  );

  // Exported og permission: 'node:org:delete any project content'
  $permissions['node:org:delete any project content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:org:delete own project content'
  $permissions['node:org:delete own project content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:org:update any project content'
  $permissions['node:org:update any project content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'editor member' => 'editor member',
    ),
  );

  // Exported og permission: 'node:org:update og_group_ref field'
  $permissions['node:org:update og_group_ref field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'editor member' => 'editor member',
    ),
  );

  // Exported og permission: 'node:org:update own project content'
  $permissions['node:org:update own project content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'editor member' => 'editor member',
    ),
  );

  // Exported og permission: 'node:org:view og_group_ref field'
  $permissions['node:org:view og_group_ref field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'editor member' => 'editor member',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  return $permissions;
}
