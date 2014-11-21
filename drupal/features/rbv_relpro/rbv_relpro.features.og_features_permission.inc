<?php
/**
 * @file
 * rbv_relpro.features.og_features_permission.inc
 */

/**
 * Implements hook_og_features_default_permissions().
 */
function rbv_relpro_og_features_default_permissions() {
  $permissions = array();

  // Exported og permission: 'node:org:create collaboration content'
  $permissions['node:org:create collaboration content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'editor member' => 'editor member',
    ),
  );

  // Exported og permission: 'node:org:delete any collaboration content'
  $permissions['node:org:delete any collaboration content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:org:delete own collaboration content'
  $permissions['node:org:delete own collaboration content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:org:update any collaboration content'
  $permissions['node:org:update any collaboration content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'editor member' => 'editor member',
    ),
  );

  // Exported og permission: 'node:org:update own collaboration content'
  $permissions['node:org:update own collaboration content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'editor member' => 'editor member',
    ),
  );

  return $permissions;
}
