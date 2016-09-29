<?php
/**
 * @file
 * rbv_project.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function rbv_project_field_group_info() {
  $field_groups = array();

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
      2 => 'field_com_telephone',
      3 => 'field_com_more',
      4 => 'field_quick_links_links',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Contatti',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'wellrbv',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_project_contacts|node|project|form'] = $field_group;

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
        'id' => 'node_project_form_group_project_dati',
      ),
    ),
  );
  $field_groups['group_project_dati|node|project|form'] = $field_group;

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
      3 => 'field_com_scope',
      4 => 'field_com_tags',
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
  $field_groups['group_project_description|node|project|form'] = $field_group;

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
      2 => 'field_com_telephone',
      3 => 'field_com_more',
      4 => 'field_quick_links_links',
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
  $field_groups['group_project_dis_contacts|node|project|default'] = $field_group;

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
      3 => 'field_com_scope',
      4 => 'field_com_tags',
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
  $field_groups['group_project_dis_description|node|project|default'] = $field_group;

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
      0 => 'field_com_date',
      1 => 'field_com_history',
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
  $field_groups['group_project_dis_history|node|project|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_project_dis_private_og|node|project|default';
  $field_group->group_name = 'group_project_dis_private_og';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'project';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Bacheca interna gruppo',
    'weight' => '19',
    'children' => array(
      0 => 'field_com_private_og',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-project-dis-private-og field-group-fieldset',
      ),
    ),
  );
  $field_groups['group_project_dis_private_og|node|project|default'] = $field_group;

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
      1 => 'field_com_social_links',
      2 => 'field_com_tagline',
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
  $field_groups['group_project_display_info|node|project|default'] = $field_group;

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
      0 => 'field_com_date',
      1 => 'field_com_history',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Storia',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'wellrbv',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_project_history|node|project|form'] = $field_group;

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
      1 => 'field_com_social_links',
      2 => 'field_com_tagline',
      3 => 'title',
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
  $field_groups['group_project_info|node|project|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_project_private_og|node|project|form';
  $field_group->group_name = 'group_project_private_og';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'project';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Dati privati gruppo',
    'weight' => '25',
    'children' => array(
      0 => 'field_com_private_og',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Dati privati gruppo',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'wellrbv private-og',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_project_private_og|node|project|form'] = $field_group;

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
      1 => 'field_com_date',
      2 => 'field_com_logo',
      3 => 'field_com_tagline',
      4 => 'og_group_ref',
    ),
    'format_type' => 'hidden',
    'format_settings' => array(
      'label' => 'vmode group content',
      'instance_settings' => array(
        'classes' => 'group-vmode-group-content field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'id' => 'node_project_vmode_group_content_group_vmode_group_content',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_vmode_group_content|node|project|vmode_group_content'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Bacheca interna gruppo');
  t('Contatti');
  t('Dati');
  t('Dati privati gruppo');
  t('Descrizione');
  t('Info');
  t('Storia');
  t('vmode group content');

  return $field_groups;
}
