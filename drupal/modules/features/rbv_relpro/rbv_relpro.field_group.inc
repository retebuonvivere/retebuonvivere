<?php
/**
 * @file
 * rbv_relpro.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function rbv_relpro_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_relpro_data|node|collaboration|form';
  $field_group->group_name = 'group_relpro_data';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'collaboration';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Dati',
    'weight' => '3',
    'children' => array(
      0 => 'group_relpro_description',
      1 => 'group_relpro_relation',
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
        'id' => 'node_collaboration_form_group_relpro_data',
      ),
    ),
  );
  $field_groups['group_relpro_data|node|collaboration|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_relpro_description|node|collaboration|form';
  $field_group->group_name = 'group_relpro_description';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'collaboration';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_relpro_data';
  $field_group->data = array(
    'label' => 'Descrizione',
    'weight' => '5',
    'children' => array(
      0 => 'field_com_date',
      1 => 'field_com_description',
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
  $field_groups['group_relpro_description|node|collaboration|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_relpro_dis_description|node|collaboration|default';
  $field_group->group_name = 'group_relpro_dis_description';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'collaboration';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Descrizione',
    'weight' => '1',
    'children' => array(
      0 => 'field_com_date',
      1 => 'field_com_description',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-relpro-dis-description field-group-fieldset',
      ),
    ),
  );
  $field_groups['group_relpro_dis_description|node|collaboration|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_relpro_dis_relation|node|collaboration|default';
  $field_group->group_name = 'group_relpro_dis_relation';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'collaboration';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Collaborazione',
    'weight' => '0',
    'children' => array(
      0 => 'field_rel_categories',
      1 => 'field_rel_source',
      2 => 'field_relpro_project',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Collaborazione',
      'instance_settings' => array(
        'classes' => 'group-relpro-dis-relation field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_relpro_dis_relation|node|collaboration|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_relpro_relation|node|collaboration|form';
  $field_group->group_name = 'group_relpro_relation';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'collaboration';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_relpro_data';
  $field_group->data = array(
    'label' => 'Collaborazione',
    'weight' => '4',
    'children' => array(
      0 => 'field_rel_categories',
      1 => 'field_rel_source',
      2 => 'field_relpro_project',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Collaborazione',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'wellrbv',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_relpro_relation|node|collaboration|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Collaborazione');
  t('Dati');
  t('Descrizione');

  return $field_groups;
}
