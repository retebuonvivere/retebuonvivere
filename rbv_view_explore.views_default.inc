<?php
/**
 * @file
 * rbv_view_explore.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function rbv_view_explore_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'organizzazioni';
  $view->description = 'LIsta di tutte le organizzazioni e i progetti';
  $view->tag = 'explore';
  $view->base_table = 'node';
  $view->human_name = 'Esplora la rete';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Esplora la rete';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'node';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'org' => 'org',
    'project' => 'project',
  );
  $handler->display->display_options['filters']['type_1']['group'] = 1;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'org' => 'org',
    'project' => 'project',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['exposed'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Tipo di contenuto';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['type']['expose']['reduce'] = TRUE;
  /* Filter criterion: Content: Tipologia (field_org_type) */
  $handler->display->display_options['filters']['field_org_type_tid']['id'] = 'field_org_type_tid';
  $handler->display->display_options['filters']['field_org_type_tid']['table'] = 'field_data_field_org_type';
  $handler->display->display_options['filters']['field_org_type_tid']['field'] = 'field_org_type_tid';
  $handler->display->display_options['filters']['field_org_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_org_type_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_org_type_tid']['expose']['operator_id'] = 'field_org_type_tid_op';
  $handler->display->display_options['filters']['field_org_type_tid']['expose']['label'] = 'Tipo di organizzazione';
  $handler->display->display_options['filters']['field_org_type_tid']['expose']['operator'] = 'field_org_type_tid_op';
  $handler->display->display_options['filters']['field_org_type_tid']['expose']['identifier'] = 'field_org_type_tid';
  $handler->display->display_options['filters']['field_org_type_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_org_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_org_type_tid']['group_info']['label'] = 'Tipologia (field_org_type)';
  $handler->display->display_options['filters']['field_org_type_tid']['group_info']['identifier'] = 'field_org_type_tid';
  $handler->display->display_options['filters']['field_org_type_tid']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['field_org_type_tid']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );
  $handler->display->display_options['filters']['field_org_type_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_org_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_org_type_tid']['vocabulary'] = 'org_types';
  /* Filter criterion: Content: Settori di impatto (field_com_categories) */
  $handler->display->display_options['filters']['field_com_categories_tid']['id'] = 'field_com_categories_tid';
  $handler->display->display_options['filters']['field_com_categories_tid']['table'] = 'field_data_field_com_categories';
  $handler->display->display_options['filters']['field_com_categories_tid']['field'] = 'field_com_categories_tid';
  $handler->display->display_options['filters']['field_com_categories_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_com_categories_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_com_categories_tid']['expose']['operator_id'] = 'field_com_categories_tid_op';
  $handler->display->display_options['filters']['field_com_categories_tid']['expose']['label'] = 'Settori di impatto';
  $handler->display->display_options['filters']['field_com_categories_tid']['expose']['operator'] = 'field_com_categories_tid_op';
  $handler->display->display_options['filters']['field_com_categories_tid']['expose']['identifier'] = 'field_com_categories_tid';
  $handler->display->display_options['filters']['field_com_categories_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_com_categories_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_com_categories_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_com_categories_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_com_categories_tid']['vocabulary'] = 'categories';

  /* Display: Page: all org and projets */
  $handler = $view->new_display('page', 'Page: all org and projets', 'page');
  $handler->display->display_options['path'] = 'esplora-la-rete';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Esplora la rete';
  $handler->display->display_options['menu']['description'] = 'Visualizza tutte le organizzazioni e i progetti della società civile';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['organizzazioni'] = $view;

  return $export;
}
