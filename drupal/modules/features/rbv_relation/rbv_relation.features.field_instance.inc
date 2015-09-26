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
            'node' => 'vmode_group_content',
          ),
        ),
        'type' => 'relation_endpoint_full',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'relation',
    'field_name' => 'endpoints',
    'label' => 'Organizzazioni',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'relation_endpoint',
      'settings' => array(),
      'type' => 'relation_endpoint',
      'weight' => 0,
    ),
  );

  // Exported field_instance:
  // 'relation-cooperates_with-field_rel_collaborations'
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
    'label' => 'Collaborano ai progetti',
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
  t('Collaborano ai progetti');
  t('Organizzazioni');

  return $field_instances;
}
