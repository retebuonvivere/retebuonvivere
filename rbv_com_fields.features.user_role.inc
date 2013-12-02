<?php
/**
 * @file
 * rbv_com_fields.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function rbv_com_fields_user_default_roles() {
  $roles = array();

  // Exported role: network admin.
  $roles['network admin'] = array(
    'name' => 'network admin',
    'weight' => 4,
  );

  // Exported role: organization member.
  $roles['organization member'] = array(
    'name' => 'organization member',
    'weight' => 3,
  );

  return $roles;
}
