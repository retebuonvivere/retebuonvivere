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
  $field_group->parent_name = 'group_org_dati';
  $field_group->data = array(
    'label' => 'Contatti',
    'weight' => '5',
    'children' => array(
      0 => 'field_com_email',
      1 => 'field_com_location',
      2 => 'field_com_more_contacts',
      3 => 'field_com_telephone',
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
  $export['group_org_contacts|node|org|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_org_dati|node|org|form';
  $field_group->group_name = 'group_org_dati';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'org';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Dati',
    'weight' => '2',
    'children' => array(
      0 => 'group_org_contacts',
      1 => 'group_org_description',
      2 => 'group_org_history',
      3 => 'group_org_info',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-org-dati field-group-tabs',
      ),
    ),
  );
  $export['group_org_dati|node|org|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_org_description|node|org|form';
  $field_group->group_name = 'group_org_description';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'org';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_org_dati';
  $field_group->data = array(
    'label' => 'Descrizione',
    'weight' => '3',
    'children' => array(
      0 => 'field_com_categories',
      1 => 'field_com_description',
      2 => 'field_com_mission',
      3 => 'field_com_tags',
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
  $export['group_org_description|node|org|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_org_display_contacts|node|org|default';
  $field_group->group_name = 'group_org_display_contacts';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'org';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contatti',
    'weight' => '4',
    'children' => array(
      0 => 'field_com_email',
      1 => 'field_com_location',
      2 => 'field_com_more_contacts',
      3 => 'field_com_telephone',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-org-display-contacts field-group-fieldset',
      ),
    ),
  );
  $export['group_org_display_contacts|node|org|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_org_display_description|node|org|default';
  $field_group->group_name = 'group_org_display_description';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'org';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Descrizione',
    'weight' => '2',
    'children' => array(
      0 => 'field_com_categories',
      1 => 'field_com_description',
      2 => 'field_com_mission',
      3 => 'field_com_tags',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-org-display-description field-group-fieldset',
      ),
    ),
  );
  $export['group_org_display_description|node|org|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_org_display_history|node|org|default';
  $field_group->group_name = 'group_org_display_history';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'org';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Storia',
    'weight' => '3',
    'children' => array(
      0 => 'field_com_foundingdate',
      1 => 'field_com_history',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-org-display-history field-group-fieldset',
      ),
    ),
  );
  $export['group_org_display_history|node|org|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_org_display_info|node|org|default';
  $field_group->group_name = 'group_org_display_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'org';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Info',
    'weight' => '1',
    'children' => array(
      0 => 'field_com_logo',
      1 => 'field_com_tagline',
      2 => 'field_org_type',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-org-display-info field-group-fieldset',
      ),
    ),
  );
  $export['group_org_display_info|node|org|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_org_history|node|org|form';
  $field_group->group_name = 'group_org_history';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'org';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_org_dati';
  $field_group->data = array(
    'label' => 'Storia',
    'weight' => '4',
    'children' => array(
      0 => 'field_com_foundingdate',
      1 => 'field_com_history',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-org-history field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_org_history|node|org|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_org_info|node|org|form';
  $field_group->group_name = 'group_org_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'org';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_org_dati';
  $field_group->data = array(
    'label' => 'Info',
    'weight' => '2',
    'children' => array(
      0 => 'field_com_logo',
      1 => 'field_com_tagline',
      2 => 'field_org_type',
      3 => 'title',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Info',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_org_info|node|org|form'] = $field_group;

  return $export;
}
