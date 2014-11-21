<?php
/**
 * @file
 * rbv_relpro.features.og_features_role.inc
 */

/**
 * Implements hook_og_features_default_roles().
 */
function rbv_relpro_og_features_default_roles() {
  $roles = array();

  // Exported OG Role: 'node:org:editor member'.
  $roles['node:org:editor member'] = array(
    'gid' => 0,
    'group_type' => 'node',
    'group_bundle' => 'org',
    'name' => 'editor member',
  );

  return $roles;
}
