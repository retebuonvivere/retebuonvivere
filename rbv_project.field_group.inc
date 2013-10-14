<?php
/**
 * @file
 * rbv_project.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function rbv_project_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_project_contacts|node|project|form';
  $field_group->group_name = 'group_project_contacts';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'project';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_project_dati';
  $field_group->data = array(
    'label' => 'Contatti',
    'weight' => '5',
    'children' => array(
      0 => 'field_com_location',
      1 => 'field_com_email',
      2 => 'field_com_phone',
      3 => 'field_com_more_contacts',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-project-contacts field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_project_contacts|node|project|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_project_dati|node|project|form';
  $field_group->group_name = 'group_project_dati';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'project';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Dati',
    'weight' => '2',
    'children' => array(
      0 => 'group_project_info',
      1 => 'group_project_description',
      2 => 'group_project_contacts',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-project-dati field-group-tabs',
      ),
    ),
  );
  $export['group_project_dati|node|project|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_project_description|node|project|form';
  $field_group->group_name = 'group_project_description';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'project';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_project_dati';
  $field_group->data = array(
    'label' => 'Descrizione',
    'weight' => '4',
    'children' => array(
      0 => 'field_com_description',
      1 => 'field_com_categories',
      2 => 'field_com_mission',
      3 => 'field_com_history',
      4 => 'field_com_tags',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_project_description|node|project|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_project_info|node|project|form';
  $field_group->group_name = 'group_project_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'project';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_project_dati';
  $field_group->data = array(
    'label' => 'Info',
    'weight' => '3',
    'children' => array(
      0 => 'field_com_logo',
      1 => 'field_com_tagline',
      2 => 'field_com_foundingdate',
      3 => 'title',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_project_info|node|project|form'] = $field_group;

  return $export;
}
