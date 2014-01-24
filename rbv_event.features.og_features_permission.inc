<?php
/**
 * @file
 * rbv_event.features.og_features_permission.inc
 */

/**
 * Implements hook_og_features_default_permissions().
 */
function rbv_event_og_features_default_permissions() {
  $permissions = array();

  // Exported og permission: 'node:org:create event content'
  $permissions['node:org:create event content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'editor member' => 'editor member',
    ),
  );

  // Exported og permission: 'node:org:delete any event content'
  $permissions['node:org:delete any event content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:org:delete own event content'
  $permissions['node:org:delete own event content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:org:update any event content'
  $permissions['node:org:update any event content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'editor member' => 'editor member',
    ),
  );

  // Exported og permission: 'node:org:update field_event_date field'
  $permissions['node:org:update field_event_date field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'editor member' => 'editor member',
    ),
  );

  // Exported og permission: 'node:org:update own event content'
  $permissions['node:org:update own event content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'editor member' => 'editor member',
    ),
  );

  // Exported og permission: 'node:org:view field_event_date field'
  $permissions['node:org:view field_event_date field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'editor member' => 'editor member',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  return $permissions;
}
