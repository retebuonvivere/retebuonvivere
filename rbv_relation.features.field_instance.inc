<?php
/**
 * @file
 * rbv_relation.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function rbv_relation_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'relation-cooperates_with-endpoints'
  $field_instances['relation-cooperates_with-endpoints'] = array(
    'bundle' => 'cooperates_with',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'relation_endpoint',
        'settings' => array(
          'view_modes' => array(
            'comment' => 'default',
            'fieldable_panels_pane' => 'default',
            'file' => 'default',
            'node' => 'default',
            'og_membership' => 'default',
            'og_membership_type' => 'default',
            'relation' => 'default',
            'rules_config' => 'default',
            'search_api_index' => 'default',
            'search_api_server' => 'default',
            'taxonomy_term' => 'default',
            'taxonomy_vocabulary' => 'default',
            'user' => 'default',
            'wysiwyg_profile' => 'default',
          ),
        ),
        'type' => 'relation_endpoint',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'relation',
    'field_name' => 'endpoints',
    'label' => 'endpoints',
    'required' => FALSE,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'relation_endpoint',
      'settings' => array(),
      'type' => 'relation_endpoint',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'relation-cooperates_with-field_rel_collaborations'
  $field_instances['relation-cooperates_with-field_rel_collaborations'] = array(
    'bundle' => 'cooperates_with',
    'default_value' => NULL,
    'default_value_function' => '',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'links' => 1,
          'view_mode' => 'vmode_group_content',
        ),
        'type' => 'entityreference_entity_view',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'relation',
    'field_name' => 'field_rel_collaborations',
    'label' => 'Collaborazioni',
    'required' => 0,
    'settings' => array(
      'behaviors' => array(
        'prepopulate' => array(
          'status' => 0,
        ),
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'entityreference_autocreate' => array(
          'active' => 0,
          'author' => '',
          'author_current_user' => 1,
        ),
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete_tags',
      'weight' => 1,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Collaborazioni');
  t('endpoints');

  return $field_instances;
}
