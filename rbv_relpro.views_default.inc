<?php
/**
 * @file
 * rbv_relpro.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function rbv_relpro_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'rbv_view_projectcollaborations';
  $view->description = 'Modified clone of OG_content, displaying collaborators of a project.';
  $view->tag = 'RBV';
  $view->base_table = 'node';
  $view->human_name = 'RBV project collaborations';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Collaboratori';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '6';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_relpro_project_node']['id'] = 'reverse_field_relpro_project_node';
  $handler->display->display_options['relationships']['reverse_field_relpro_project_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_relpro_project_node']['field'] = 'reverse_field_relpro_project_node';
  /* Field: Content: Soggetto 1 */
  $handler->display->display_options['fields']['field_rel_source']['id'] = 'field_rel_source';
  $handler->display->display_options['fields']['field_rel_source']['table'] = 'field_data_field_rel_source';
  $handler->display->display_options['fields']['field_rel_source']['field'] = 'field_rel_source';
  $handler->display->display_options['fields']['field_rel_source']['relationship'] = 'reverse_field_relpro_project_node';
  $handler->display->display_options['fields']['field_rel_source']['label'] = '';
  $handler->display->display_options['fields']['field_rel_source']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_rel_source']['settings'] = array(
    'link' => 1,
  );
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Pane: collaboratori */
  $handler = $view->new_display('panel_pane', 'Pane: collaboratori', 'panel_pane_1');
  $handler->display->display_options['inherit_panels_path'] = '1';
  $export['rbv_view_projectcollaborations'] = $view;

  return $export;
}
