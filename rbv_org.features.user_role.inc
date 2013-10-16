<?php
/**
 * @file
 * rbv_org.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function rbv_org_user_default_roles() {
  $roles = array();

  // Exported role: organization member.
  $roles['organization member'] = array(
    'name' => 'organization member',
    'weight' => 3,
  );

  return $roles;
}
