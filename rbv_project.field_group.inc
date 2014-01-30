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
    'weight' => '6',
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
    'weight' => '3',
    'children' => array(
      0 => 'group_project_contacts',
      1 => 'group_project_description',
      2 => 'group_project_history',
      3 => 'group_project_info',
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
      0 => 'field_com_categories',
      1 => 'field_com_description',
      2 => 'field_com_mission',
      3 => 'field_com_tags',
      4 => 'field_com_scope',
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
  $field_group->identifier = 'group_project_dis_contacts|node|project|default';
  $field_group->group_name = 'group_project_dis_contacts';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'project';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contatti',
    'weight' => '3',
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
        'classes' => 'group-project-dis-contacts field-group-fieldset',
      ),
    ),
  );
  $export['group_project_dis_contacts|node|project|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_project_dis_description|node|project|default';
  $field_group->group_name = 'group_project_dis_description';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'project';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Descrizione',
    'weight' => '1',
    'children' => array(
      0 => 'field_com_categories',
      1 => 'field_com_description',
      2 => 'field_com_mission',
      3 => 'field_com_tags',
      4 => 'field_com_scope',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-project-dis-description field-group-fieldset',
      ),
    ),
  );
  $export['group_project_dis_description|node|project|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_project_dis_history|node|project|default';
  $field_group->group_name = 'group_project_dis_history';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'project';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Storia',
    'weight' => '2',
    'children' => array(
      0 => 'field_com_history',
      1 => 'field_com_date',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-project-dis-history field-group-fieldset',
      ),
    ),
  );
  $export['group_project_dis_history|node|project|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_project_display_info|node|project|default';
  $field_group->group_name = 'group_project_display_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'project';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Info',
    'weight' => '0',
    'children' => array(
      0 => 'field_com_logo',
      1 => 'field_com_tagline',
      2 => 'field_com_social_links',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Info',
      'instance_settings' => array(
        'classes' => 'group-project-display-info field-group-fieldset info-fieldgroup',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_project_display_info|node|project|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_project_history|node|project|form';
  $field_group->group_name = 'group_project_history';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'project';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_project_dati';
  $field_group->data = array(
    'label' => 'Storia',
    'weight' => '5',
    'children' => array(
      0 => 'field_com_history',
      1 => 'field_com_date',
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
  $export['group_project_history|node|project|form'] = $field_group;

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
      2 => 'field_com_social_links',
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

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_vmode_group_content|node|project|vmode_group_content';
  $field_group->group_name = 'group_vmode_group_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'project';
  $field_group->mode = 'vmode_group_content';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'vmode group content',
    'weight' => '0',
    'children' => array(
      0 => 'field_com_categories',
      1 => 'field_com_logo',
      2 => 'field_com_tagline',
      3 => 'og_group_ref',
      4 => 'field_com_date',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'vmode group content',
      'instance_settings' => array(
        'classes' => 'group-vmode-group-content field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_vmode_group_content|node|project|vmode_group_content'] = $field_group;

  return $export;
}
