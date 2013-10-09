<?php
/**
 * @file
 * rbv_org.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function rbv_org_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_org_contacts|node|org|form';
  $field_group->group_name = 'group_org_contacts';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'org';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contatti',
    'weight' => '3',
    'children' => array(
      0 => 'field_com_location',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-org-contacts field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_org_contacts|node|org|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_org_info|node|org|form';
  $field_group->group_name = 'group_org_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'org';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Info',
    'weight' => '2',
    'children' => array(
      0 => 'field_com_logo',
      1 => 'field_org_type',
      2 => 'title',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-org-info field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_org_info|node|org|form'] = $field_group;

  return $export;
}
