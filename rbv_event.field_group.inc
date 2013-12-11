<?php
/**
 * @file
 * rbv_event.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function rbv_event_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_event_description|node|event|form';
  $field_group->group_name = 'group_event_description';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Descrizione',
    'weight' => '5',
    'children' => array(
      0 => 'field_com_categories',
      1 => 'field_com_description',
      2 => 'field_com_tags',
      3 => 'field_quick_links_links',
      4 => 'field_relpro_project',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-event-description field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_event_description|node|event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_event_dis_description|node|event|default';
  $field_group->group_name = 'group_event_dis_description';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Descrizione',
    'weight' => '3',
    'children' => array(
      0 => 'field_com_categories',
      1 => 'field_com_description',
      2 => 'field_com_tags',
      3 => 'field_quick_links_links',
      4 => 'field_relpro_project',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-event-dis-description field-group-fieldset',
      ),
    ),
  );
  $export['group_event_dis_description|node|event|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_event_display_info|node|event|default';
  $field_group->group_name = 'group_event_display_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Info',
    'weight' => '2',
    'children' => array(
      0 => 'field_com_location',
      1 => 'field_event_date',
      2 => 'field_com_logo',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-event-display-info field-group-fieldset',
      ),
    ),
  );
  $export['group_event_display_info|node|event|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_event_info|node|event|form';
  $field_group->group_name = 'group_event_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Info',
    'weight' => '4',
    'children' => array(
      0 => 'field_com_location',
      1 => 'field_event_date',
      2 => 'field_com_logo',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-event-info field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_event_info|node|event|form'] = $field_group;

  return $export;
}
