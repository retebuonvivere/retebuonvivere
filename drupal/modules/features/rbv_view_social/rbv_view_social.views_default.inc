<?php
/**
 * @file
 * rbv_view_social.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function rbv_view_social_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'rbv_view_fb';
  $view->description = '';
  $view->tag = 'RBV';
  $view->base_table = 'node';
  $view->human_name = 'rbv facebook';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Facebook';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: link facebook */
  $handler->display->display_options['fields']['field_com_ln_fb']['id'] = 'field_com_ln_fb';
  $handler->display->display_options['fields']['field_com_ln_fb']['table'] = 'field_data_field_com_ln_fb';
  $handler->display->display_options['fields']['field_com_ln_fb']['field'] = 'field_com_ln_fb';
  $handler->display->display_options['fields']['field_com_ln_fb']['label'] = '';
  $handler->display->display_options['fields']['field_com_ln_fb']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_com_ln_fb']['alter']['text'] = '<div class="fb-page" data-href="[field_com_ln_fb-url]" data-tabs="timeline, events, messages" data-small-header="false" data-adapt-container-width="true" data-hide-cover="false" data-show-facepile="true"><div class="fb-xfbml-parse-ignore"><blockquote cite="[field_com_ln_fb-url]"><a href="[field_com_ln_fb-url]">[title]</a></blockquote></div></div>';
  $handler->display->display_options['fields']['field_com_ln_fb']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_com_ln_fb']['click_sort_column'] = 'url';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Tutti';
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
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'org' => 'org',
    'project' => 'project',
  );

  /* Display: facebook page plugin */
  $handler = $view->new_display('panel_pane', 'facebook page plugin', 'panel_pane_1');
  $handler->display->display_options['pane_category']['name'] = 'RBV social';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 0;
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['allow']['panopoly_magic_display_type'] = 0;

  /* Display: facebook like button */
  $handler = $view->new_display('panel_pane', 'facebook like button', 'panel_pane_2');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: link facebook */
  $handler->display->display_options['fields']['field_com_ln_fb']['id'] = 'field_com_ln_fb';
  $handler->display->display_options['fields']['field_com_ln_fb']['table'] = 'field_data_field_com_ln_fb';
  $handler->display->display_options['fields']['field_com_ln_fb']['field'] = 'field_com_ln_fb';
  $handler->display->display_options['fields']['field_com_ln_fb']['label'] = '';
  $handler->display->display_options['fields']['field_com_ln_fb']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_com_ln_fb']['alter']['text'] = '<div class="fb-like" data-href="[field_com_ln_fb-url]" data-layout="box_count" data-action="like" data-show-faces="false" data-share="true"></div>';
  $handler->display->display_options['fields']['field_com_ln_fb']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_com_ln_fb']['click_sort_column'] = 'url';
  $handler->display->display_options['pane_category']['name'] = 'RBV social';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 0;
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['allow']['panopoly_magic_display_type'] = 0;
  $translatables['rbv_view_fb'] = array(
    t('Master'),
    t('Facebook'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('<div class="fb-page" data-href="[field_com_ln_fb-url]" data-tabs="timeline, events, messages" data-small-header="false" data-adapt-container-width="true" data-hide-cover="false" data-show-facepile="true"><div class="fb-xfbml-parse-ignore"><blockquote cite="[field_com_ln_fb-url]"><a href="[field_com_ln_fb-url]">[title]</a></blockquote></div></div>'),
    t('Tutti'),
    t('facebook page plugin'),
    t('RBV social'),
    t('facebook like button'),
    t('<div class="fb-like" data-href="[field_com_ln_fb-url]" data-layout="box_count" data-action="like" data-show-faces="false" data-share="true"></div>'),
  );
  $export['rbv_view_fb'] = $view;

  return $export;
}
