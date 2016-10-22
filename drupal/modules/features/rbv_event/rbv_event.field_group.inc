<?php
/**
 * @file
 * rbv_event.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function rbv_event_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_event_dati|node|event|form';
  $field_group->group_name = 'group_event_dati';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Dati',
    'weight' => '4',
    'children' => array(
      0 => 'group_event_description',
      1 => 'group_event_info',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => '',
        'required_fields' => 1,
        'id' => 'node_event_form_group_event_dati',
      ),
    ),
  );
  $field_groups['group_event_dati|node|event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_event_description|node|event|form';
  $field_group->group_name = 'group_event_description';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_event_dati';
  $field_group->data = array(
    'label' => 'Descrizione',
    'weight' => '6',
    'children' => array(
      0 => 'field_com_categories',
      1 => 'field_com_description',
      2 => 'field_com_tags',
      3 => 'field_relpro_project',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Descrizione',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'wellrbv',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_event_description|node|event|form'] = $field_group;

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
  $field_groups['group_event_dis_description|node|event|default'] = $field_group;

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
      1 => 'field_com_logo',
      2 => 'field_com_social_links',
      3 => 'field_event_date',
      4 => 'field_com_cover',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Info',
      'instance_settings' => array(
        'classes' => 'group-event-display-info field-group-fieldset info-fieldgroup',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_event_display_info|node|event|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_event_info|node|event|form';
  $field_group->group_name = 'group_event_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_event_dati';
  $field_group->data = array(
    'label' => 'Info',
    'weight' => '5',
    'children' => array(
      0 => 'field_com_location',
      1 => 'field_com_logo',
      2 => 'field_com_social_links',
      3 => 'field_event_date',
      4 => 'field_quick_links_links',
      5 => 'field_com_cover',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Info',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'wellrbv',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_event_info|node|event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_vmode_group_content|node|event|vmode_group_content';
  $field_group->group_name = 'group_vmode_group_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'vmode_group_content';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'vmode group content',
    'weight' => '0',
    'children' => array(),
    'format_type' => 'hidden',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(),
    ),
  );
  $field_groups['group_vmode_group_content|node|event|vmode_group_content'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Dati');
  t('Descrizione');
  t('Info');
  t('vmode group content');

  return $field_groups;
}
