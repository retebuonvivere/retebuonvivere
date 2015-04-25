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
  $view->name = 'rbv_view_explore';
  $view->description = 'Lista di tutte le organizzazioni, i progetti e gli eventi.';
  $view->tag = 'RBV';
  $view->base_table = 'node';
  $view->human_name = 'RBV explore';
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
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Applica filtro';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Ripristina filtro';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Ordina per';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Disc';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page'] = TRUE;
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Contentuti per pagina';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options'] = '3, 5, 10, 20, 40, 60';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = TRUE;
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Tutti -';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« prima';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ precedente';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'successiva ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'ultima »';
  $handler->display->display_options['style_plugin'] = 'masonry_views';
  $handler->display->display_options['style_options']['row_class'] = 'col-xs-12 col-sm-6 col-md-4 col-lg-3';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['masonry_gutter_width'] = '';
  $handler->display->display_options['style_options']['masonry_resizable'] = TRUE;
  $handler->display->display_options['style_options']['masonry_animated'] = TRUE;
  $handler->display->display_options['style_options']['masonry_fit_width'] = FALSE;
  $handler->display->display_options['style_options']['masonry_rtl'] = FALSE;
  $handler->display->display_options['style_options']['masonry_images_first'] = TRUE;
  $handler->display->display_options['row_plugin'] = 'node';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Nessun risultato trovato. Riprovare con altre impostazioni.';
  $handler->display->display_options['empty']['area']['format'] = 'panopoly_wysiwyg_text';
  /* Campo: Contenuto: Titolo */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Contenuto: Updated/commented date */
  $handler->display->display_options['sorts']['last_updated']['id'] = 'last_updated';
  $handler->display->display_options['sorts']['last_updated']['table'] = 'node_comment_statistics';
  $handler->display->display_options['sorts']['last_updated']['field'] = 'last_updated';
  $handler->display->display_options['sorts']['last_updated']['order'] = 'DESC';
  $handler->display->display_options['sorts']['last_updated']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['last_updated']['expose']['label'] = 'Data aggiornamento';
  /* Sort criterion: Contenuto: Tipo */
  $handler->display->display_options['sorts']['type']['id'] = 'type';
  $handler->display->display_options['sorts']['type']['table'] = 'node';
  $handler->display->display_options['sorts']['type']['field'] = 'type';
  $handler->display->display_options['sorts']['type']['order'] = 'DESC';
  $handler->display->display_options['sorts']['type']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['type']['expose']['label'] = 'Tipo di contenuti';
  /* Sort criterion: Contenuto: Titolo */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['title']['expose']['label'] = 'Nome (alfabetico)';
  /* Sort criterion: Contenuto: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['created']['expose']['label'] = 'Quando è entrato in rbv.org';
  /* Filter criterion: Contenuto: Tipo */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'node';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'event' => 'event',
    'org' => 'org',
    'project' => 'project',
  );
  $handler->display->display_options['filters']['type_1']['group'] = 1;
  /* Filter criterion: Contenuto: Pubblicato */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Contenuto: Tipo */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
    'org' => 'org',
    'project' => 'project',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['exposed'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Tipo di contenuti';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    6 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['type']['expose']['reduce'] = TRUE;
  $handler->display->display_options['filters']['type']['group_info']['label'] = 'Tipo';
  $handler->display->display_options['filters']['type']['group_info']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['type']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );
  /* Filter criterion: Contenuto: Settori (field_com_categories) */
  $handler->display->display_options['filters']['field_com_categories_tid']['id'] = 'field_com_categories_tid';
  $handler->display->display_options['filters']['field_com_categories_tid']['table'] = 'field_data_field_com_categories';
  $handler->display->display_options['filters']['field_com_categories_tid']['field'] = 'field_com_categories_tid';
  $handler->display->display_options['filters']['field_com_categories_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_com_categories_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_com_categories_tid']['expose']['operator_id'] = 'field_com_categories_tid_op';
  $handler->display->display_options['filters']['field_com_categories_tid']['expose']['label'] = 'Settori';
  $handler->display->display_options['filters']['field_com_categories_tid']['expose']['operator'] = 'field_com_categories_tid_op';
  $handler->display->display_options['filters']['field_com_categories_tid']['expose']['identifier'] = 'field_com_categories_tid';
  $handler->display->display_options['filters']['field_com_categories_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_com_categories_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    6 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_com_categories_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_com_categories_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_com_categories_tid']['vocabulary'] = 'categories';
  /* Filter criterion: Contenuto: Tipologia (field_org_type) */
  $handler->display->display_options['filters']['field_org_type_tid']['id'] = 'field_org_type_tid';
  $handler->display->display_options['filters']['field_org_type_tid']['table'] = 'field_data_field_org_type';
  $handler->display->display_options['filters']['field_org_type_tid']['field'] = 'field_org_type_tid';
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
    6 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_org_type_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_org_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_org_type_tid']['vocabulary'] = 'org_types';
  $handler->display->display_options['filters']['field_org_type_tid']['error_message'] = FALSE;
  /* Filter criterion: Contenuto: Parole chiave (field_com_tags) */
  $handler->display->display_options['filters']['field_com_tags_tid']['id'] = 'field_com_tags_tid';
  $handler->display->display_options['filters']['field_com_tags_tid']['table'] = 'field_data_field_com_tags';
  $handler->display->display_options['filters']['field_com_tags_tid']['field'] = 'field_com_tags_tid';
  $handler->display->display_options['filters']['field_com_tags_tid']['operator'] = 'and';
  $handler->display->display_options['filters']['field_com_tags_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_com_tags_tid']['expose']['operator_id'] = 'field_com_tags_tid_op';
  $handler->display->display_options['filters']['field_com_tags_tid']['expose']['label'] = 'Parole chiave';
  $handler->display->display_options['filters']['field_com_tags_tid']['expose']['operator'] = 'field_com_tags_tid_op';
  $handler->display->display_options['filters']['field_com_tags_tid']['expose']['identifier'] = 'field_com_tags_tid';
  $handler->display->display_options['filters']['field_com_tags_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_com_tags_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    6 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_com_tags_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_com_tags_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_com_tags_tid']['vocabulary'] = 'tags';
  $handler->display->display_options['filters']['field_com_tags_tid']['error_message'] = FALSE;
  /* Filter criterion: Contenuto: Author uid */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'node';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['operator'] = 'not in';
  $handler->display->display_options['filters']['uid']['value'] = array(
    0 => 0,
  );

  /* Display: pane: esplora la rete */
  $handler = $view->new_display('panel_pane', 'pane: esplora la rete', 'panel_pane_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Filtri';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['inherit_panels_path'] = '1';
  $translatables['rbv_view_explore'] = array(
    t('Master'),
    t('Esplora la rete'),
    t('more'),
    t('Applica filtro'),
    t('Ripristina filtro'),
    t('Ordina per'),
    t('Asc'),
    t('Disc'),
    t('Contentuti per pagina'),
    t('- Tutti -'),
    t('Offset'),
    t('« prima'),
    t('‹ precedente'),
    t('successiva ›'),
    t('ultima »'),
    t('Nessun risultato trovato. Riprovare con altre impostazioni.'),
    t('Data aggiornamento'),
    t('Tipo di contenuti'),
    t('Nome (alfabetico)'),
    t('Quando è entrato in rbv.org'),
    t('Tipo'),
    t('Settori'),
    t('Tipo di organizzazione'),
    t('Parole chiave'),
    t('pane: esplora la rete'),
    t('Filtri'),
    t('View panes'),
  );
  $export['rbv_view_explore'] = $view;

  $view = new view();
  $view->name = 'rbv_view_lists';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'RBV content lists';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Content lists';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Applica';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Ripristina';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Ordina per';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Disc';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Contenuti per pagina';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« prima';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ precedente';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'successiva ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'ultima »';
  $handler->display->display_options['style_plugin'] = 'masonry_views';
  $handler->display->display_options['style_options']['row_class'] = 'col-xs-12 col-sm-12 col-md-4 col-lg-4';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['masonry_resizable'] = TRUE;
  $handler->display->display_options['style_options']['masonry_animated'] = TRUE;
  $handler->display->display_options['style_options']['masonry_fit_width'] = FALSE;
  $handler->display->display_options['style_options']['masonry_rtl'] = FALSE;
  $handler->display->display_options['style_options']['masonry_images_first'] = TRUE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'vmode_group_content';
  /* Piè di pagina: Global: Result summary */
  $handler->display->display_options['footer']['result']['id'] = 'result';
  $handler->display->display_options['footer']['result']['table'] = 'views';
  $handler->display->display_options['footer']['result']['field'] = 'result';
  $handler->display->display_options['footer']['result']['label'] = 'total';
  $handler->display->display_options['footer']['result']['content'] = '<p>Ci sono <strong>@total</strong> contenuti in totale.</p>';
  /* Campo: Contenuto: Titolo */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Contenuto: Updated date */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'node';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  $handler->display->display_options['sorts']['changed']['order'] = 'DESC';
  /* Filter criterion: Contenuto: Pubblicato */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: pane: upcoming */
  $handler = $view->new_display('panel_pane', 'pane: upcoming', 'panel_pane_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Prossimi eventi';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'vedi tutto';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page'] = TRUE;
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Eventi per pagina';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options'] = '3, 5, 10, 20';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« prima';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ precedente';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'successiva ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'ultima »';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'vmode_group_content';
  $handler->display->display_options['row_options']['links'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Piè di pagina: Global: Result summary */
  $handler->display->display_options['footer']['result']['id'] = 'result';
  $handler->display->display_options['footer']['result']['table'] = 'views';
  $handler->display->display_options['footer']['result']['field'] = 'result';
  $handler->display->display_options['footer']['result']['label'] = 'total';
  $handler->display->display_options['footer']['result']['content'] = '<p>Ci sono <strong>@total</strong> eventi in programmazione.<br />
Vedi <a href="calendario/eventi">tutti gli <i class="fa fa-calendar fa-lg"></i> eventi</a>.</p>';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Contenuto: Quando -  start date (field_event_date) */
  $handler->display->display_options['sorts']['field_event_date_value']['id'] = 'field_event_date_value';
  $handler->display->display_options['sorts']['field_event_date_value']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['sorts']['field_event_date_value']['field'] = 'field_event_date_value';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Contenuto: Pubblicato */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Contenuto: Tipo */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
  );
  /* Filter criterion: Contenuto: Quando -  start date (field_event_date) */
  $handler->display->display_options['filters']['field_event_date_value']['id'] = 'field_event_date_value';
  $handler->display->display_options['filters']['field_event_date_value']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['filters']['field_event_date_value']['field'] = 'field_event_date_value';
  $handler->display->display_options['filters']['field_event_date_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_event_date_value']['granularity'] = 'minute';
  $handler->display->display_options['filters']['field_event_date_value']['default_date'] = 'now';
  $handler->display->display_options['allow']['use_pager'] = 'use_pager';
  $handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 'more_link';
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 0;
  $handler->display->display_options['allow']['exposed_form'] = 'exposed_form';
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['inherit_panels_path'] = '0';

  /* Display: pane: nuovi progetti */
  $handler = $view->new_display('panel_pane', 'pane: nuovi progetti', 'panel_pane_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Progetti/attività più visti di oggi';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page'] = TRUE;
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Eventi per pagina';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options'] = '3, 5, 10, 20';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« prima';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ precedente';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'successiva ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'ultima »';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'vmode_group_content';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Piè di pagina: Global: Result summary */
  $handler->display->display_options['footer']['result']['id'] = 'result';
  $handler->display->display_options['footer']['result']['table'] = 'views';
  $handler->display->display_options['footer']['result']['field'] = 'result';
  $handler->display->display_options['footer']['result']['label'] = 'total';
  $handler->display->display_options['footer']['result']['content'] = '<p>Ci sono <strong>@total</strong> progetti. <br /> 
Vedi <a href="progetti">tutti i <i class="fa fa-leaf fa-lg"></i> progetti</a>.</p>';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content statistics: Visualizzazioni oggi */
  $handler->display->display_options['sorts']['daycount']['id'] = 'daycount';
  $handler->display->display_options['sorts']['daycount']['table'] = 'node_counter';
  $handler->display->display_options['sorts']['daycount']['field'] = 'daycount';
  $handler->display->display_options['sorts']['daycount']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Contenuto: Pubblicato */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Contenuto: Tipo */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'project' => 'project',
  );
  $handler->display->display_options['allow']['use_pager'] = 'use_pager';
  $handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 'more_link';
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 'exposed_form';
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['inherit_panels_path'] = '0';

  /* Display: pane: search */
  $handler = $view->new_display('panel_pane', 'pane: search', 'panel_pane_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Cerca';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Contenuto: Pubblicato */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Cerca: Search Terms */
  $handler->display->display_options['filters']['keys']['id'] = 'keys';
  $handler->display->display_options['filters']['keys']['table'] = 'search_index';
  $handler->display->display_options['filters']['keys']['field'] = 'keys';
  $handler->display->display_options['filters']['keys']['exposed'] = TRUE;
  $handler->display->display_options['filters']['keys']['expose']['operator_id'] = 'keys_op';
  $handler->display->display_options['filters']['keys']['expose']['label'] = 'Cerca';
  $handler->display->display_options['filters']['keys']['expose']['operator'] = 'keys_op';
  $handler->display->display_options['filters']['keys']['expose']['identifier'] = 'keys';
  $handler->display->display_options['filters']['keys']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    6 => 0,
    5 => 0,
  );

  /* Display: pane: discussion search */
  $handler = $view->new_display('panel_pane', 'pane: discussion search', 'panel_pane_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Tutte le discussioni';
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Cerca';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Ripristina';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Piè di pagina: Global: Result summary */
  $handler->display->display_options['footer']['result']['id'] = 'result';
  $handler->display->display_options['footer']['result']['table'] = 'views';
  $handler->display->display_options['footer']['result']['field'] = 'result';
  $handler->display->display_options['footer']['result']['label'] = 'total';
  $handler->display->display_options['footer']['result']['content'] = '<p>Ci sono <strong>@total</strong> discussioni. <br /> 
Vedi <a href="discussioni">tutte le <i class="fa fa-comments fa-lg"></i> discussioni</a>.</p>';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Cerca: Score */
  $handler->display->display_options['sorts']['score']['id'] = 'score';
  $handler->display->display_options['sorts']['score']['table'] = 'search_index';
  $handler->display->display_options['sorts']['score']['field'] = 'score';
  $handler->display->display_options['sorts']['score']['order'] = 'DESC';
  /* Sort criterion: Contenuto: Updated/commented date */
  $handler->display->display_options['sorts']['last_updated']['id'] = 'last_updated';
  $handler->display->display_options['sorts']['last_updated']['table'] = 'node_comment_statistics';
  $handler->display->display_options['sorts']['last_updated']['field'] = 'last_updated';
  $handler->display->display_options['sorts']['last_updated']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Contenuto: Pubblicato */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Contenuto: Tipo */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'forum' => 'forum',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Cerca: Search Terms */
  $handler->display->display_options['filters']['keys']['id'] = 'keys';
  $handler->display->display_options['filters']['keys']['table'] = 'search_index';
  $handler->display->display_options['filters']['keys']['field'] = 'keys';
  $handler->display->display_options['filters']['keys']['group'] = 1;
  $handler->display->display_options['filters']['keys']['exposed'] = TRUE;
  $handler->display->display_options['filters']['keys']['expose']['operator_id'] = 'keys_op';
  $handler->display->display_options['filters']['keys']['expose']['label'] = 'Cerca discussione';
  $handler->display->display_options['filters']['keys']['expose']['operator'] = 'keys_op';
  $handler->display->display_options['filters']['keys']['expose']['identifier'] = 'keys';
  $handler->display->display_options['filters']['keys']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    6 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['keys']['remove_score'] = TRUE;

  /* Display: pane: organizzazioni */
  $handler = $view->new_display('panel_pane', 'pane: organizzazioni', 'panel_pane_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Organizzazioni della rete';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page'] = TRUE;
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Contenuti per pagina';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options'] = '5, 10, 20, 40, 60, 100';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = TRUE;
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Tutti -';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« prima';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ precedente';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'successiva ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'ultima »';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Piè di pagina: Global: Result summary */
  $handler->display->display_options['footer']['result']['id'] = 'result';
  $handler->display->display_options['footer']['result']['table'] = 'views';
  $handler->display->display_options['footer']['result']['field'] = 'result';
  $handler->display->display_options['footer']['result']['label'] = 'total';
  $handler->display->display_options['footer']['result']['content'] = '<p>Ci sono <strong>@total</strong> organizzazioni in totale.</p>';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Contenuto: Pubblicato */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Contenuto: Tipo */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'org' => 'org',
  );
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['inherit_panels_path'] = '1';

  /* Display: pane: progetti */
  $handler = $view->new_display('panel_pane', 'pane: progetti', 'panel_pane_6');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Progetti/attività della rete';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page'] = TRUE;
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Contenuti per pagina';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options'] = '5, 10, 20, 40, 60, 100';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = TRUE;
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Tutti -';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« prima';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ precedente';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'successiva ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'ultima »';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Piè di pagina: Global: Result summary */
  $handler->display->display_options['footer']['result']['id'] = 'result';
  $handler->display->display_options['footer']['result']['table'] = 'views';
  $handler->display->display_options['footer']['result']['field'] = 'result';
  $handler->display->display_options['footer']['result']['label'] = 'total';
  $handler->display->display_options['footer']['result']['content'] = '<p>Ci sono <strong>@total</strong> progetti/attività in totale.</p>';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Contenuto: Pubblicato */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Contenuto: Tipo */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'project' => 'project',
  );
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['inherit_panels_path'] = '1';

  /* Display: pane: collaborazioni */
  $handler = $view->new_display('panel_pane', 'pane: collaborazioni', 'panel_pane_7');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Collaborazioni nella rete';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page'] = TRUE;
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Contenuti per pagina';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options'] = '5, 10, 20, 40, 60, 100';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = TRUE;
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Tutti -';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« prima';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ precedente';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'successiva ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'ultima »';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_rel_source' => 'field_rel_source',
    'view_node' => 'view_node',
    'field_rel_categories' => 'view_node',
    'field_com_date' => 'view_node',
    'field_relpro_project' => 'field_relpro_project',
    'field_com_date_1' => 'field_relpro_project',
    'field_com_date_2' => 'field_rel_source',
  );
  $handler->display->display_options['style_options']['default'] = 'field_relpro_project';
  $handler->display->display_options['style_options']['info'] = array(
    'field_rel_source' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => ' ',
      'empty_column' => 0,
    ),
    'view_node' => array(
      'align' => '',
      'separator' => ' ',
      'empty_column' => 0,
    ),
    'field_rel_categories' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_com_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_relpro_project' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => ' ',
      'empty_column' => 0,
    ),
    'field_com_date_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_com_date_2' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['sticky'] = TRUE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Piè di pagina: Global: Result summary */
  $handler->display->display_options['footer']['result']['id'] = 'result';
  $handler->display->display_options['footer']['result']['table'] = 'views';
  $handler->display->display_options['footer']['result']['field'] = 'result';
  $handler->display->display_options['footer']['result']['label'] = 'total';
  $handler->display->display_options['footer']['result']['content'] = '<p>Ci sono <strong>@total</strong> collaborazioni in totale.</p>';
  /* Piè di pagina: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<p>La rappresentazione grafica della rete di collaborazioni si trova su <a href="rete"><i class="fa fa-eye fa-lg"></i> Vedi la rete</a></p>';
  $handler->display->display_options['footer']['area']['format'] = 'panopoly_html_text';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_relpro_project_target_id']['id'] = 'field_relpro_project_target_id';
  $handler->display->display_options['relationships']['field_relpro_project_target_id']['table'] = 'field_data_field_relpro_project';
  $handler->display->display_options['relationships']['field_relpro_project_target_id']['field'] = 'field_relpro_project_target_id';
  $handler->display->display_options['relationships']['field_relpro_project_target_id']['label'] = 'entity referenced from field_relpro_project';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_rel_source_target_id']['id'] = 'field_rel_source_target_id';
  $handler->display->display_options['relationships']['field_rel_source_target_id']['table'] = 'field_data_field_rel_source';
  $handler->display->display_options['relationships']['field_rel_source_target_id']['field'] = 'field_rel_source_target_id';
  $handler->display->display_options['relationships']['field_rel_source_target_id']['label'] = 'entity referenced from field_rel_source';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Contenuto: Soggetto */
  $handler->display->display_options['fields']['field_rel_source']['id'] = 'field_rel_source';
  $handler->display->display_options['fields']['field_rel_source']['table'] = 'field_data_field_rel_source';
  $handler->display->display_options['fields']['field_rel_source']['field'] = 'field_rel_source';
  $handler->display->display_options['fields']['field_rel_source']['label'] = 'Organizzazione';
  $handler->display->display_options['fields']['field_rel_source']['settings'] = array(
    'link' => 1,
  );
  /* Campo: Campo: Date */
  $handler->display->display_options['fields']['field_com_date_2']['id'] = 'field_com_date_2';
  $handler->display->display_options['fields']['field_com_date_2']['table'] = 'field_data_field_com_date';
  $handler->display->display_options['fields']['field_com_date_2']['field'] = 'field_com_date';
  $handler->display->display_options['fields']['field_com_date_2']['relationship'] = 'field_rel_source_target_id';
  $handler->display->display_options['fields']['field_com_date_2']['label'] = 'Data';
  $handler->display->display_options['fields']['field_com_date_2']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Campo: Contenuto: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = 'collaborazione';
  $handler->display->display_options['fields']['view_node']['text'] = 'collabora a ';
  /* Campo: Contenuto: Tipo di collaborazione */
  $handler->display->display_options['fields']['field_rel_categories']['id'] = 'field_rel_categories';
  $handler->display->display_options['fields']['field_rel_categories']['table'] = 'field_data_field_rel_categories';
  $handler->display->display_options['fields']['field_rel_categories']['field'] = 'field_rel_categories';
  $handler->display->display_options['fields']['field_rel_categories']['label'] = 'tipo';
  $handler->display->display_options['fields']['field_rel_categories']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_rel_categories']['alter']['text'] = '([field_rel_categories])';
  $handler->display->display_options['fields']['field_rel_categories']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_rel_categories']['delta_offset'] = '0';
  /* Campo: Campo: Date */
  $handler->display->display_options['fields']['field_com_date']['id'] = 'field_com_date';
  $handler->display->display_options['fields']['field_com_date']['table'] = 'field_data_field_com_date';
  $handler->display->display_options['fields']['field_com_date']['field'] = 'field_com_date';
  $handler->display->display_options['fields']['field_com_date']['label'] = 'Periodo';
  $handler->display->display_options['fields']['field_com_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Campo: Contenuto: Progetto */
  $handler->display->display_options['fields']['field_relpro_project']['id'] = 'field_relpro_project';
  $handler->display->display_options['fields']['field_relpro_project']['table'] = 'field_data_field_relpro_project';
  $handler->display->display_options['fields']['field_relpro_project']['field'] = 'field_relpro_project';
  $handler->display->display_options['fields']['field_relpro_project']['label'] = 'Progetto/attività';
  $handler->display->display_options['fields']['field_relpro_project']['settings'] = array(
    'link' => 1,
  );
  /* Campo: Campo: Date */
  $handler->display->display_options['fields']['field_com_date_1']['id'] = 'field_com_date_1';
  $handler->display->display_options['fields']['field_com_date_1']['table'] = 'field_data_field_com_date';
  $handler->display->display_options['fields']['field_com_date_1']['field'] = 'field_com_date';
  $handler->display->display_options['fields']['field_com_date_1']['relationship'] = 'field_relpro_project_target_id';
  $handler->display->display_options['fields']['field_com_date_1']['label'] = 'Data';
  $handler->display->display_options['fields']['field_com_date_1']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Campo: Contenuto: Titolo */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_relpro_project_target_id';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Contenuto: Pubblicato */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Contenuto: Tipo */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'collaboration' => 'collaboration',
  );
  /* Filter criterion: Contenuto: Titolo */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['relationship'] = 'field_relpro_project_target_id';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Progetto';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    6 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['title']['expose']['autocomplete_filter'] = 1;
  $handler->display->display_options['filters']['title']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['title']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['title']['expose']['autocomplete_field'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['title']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['title']['expose']['autocomplete_dependent'] = 0;
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['inherit_panels_path'] = '1';

  /* Display: pane: organizzazioni count */
  $handler = $view->new_display('panel_pane', 'pane: organizzazioni count', 'panel_pane_8');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'vmode_group_content';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Piè di pagina: Global: Result summary */
  $handler->display->display_options['footer']['result']['id'] = 'result';
  $handler->display->display_options['footer']['result']['table'] = 'views';
  $handler->display->display_options['footer']['result']['field'] = 'result';
  $handler->display->display_options['footer']['result']['label'] = 'total';
  $handler->display->display_options['footer']['result']['content'] = '<span class="badge badge-org" title="Totale organizzazioni nominate">@total</span> organizzazioni.';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Contenuto: Pubblicato */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Contenuto: Tipo */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'org' => 'org',
  );
  $handler->display->display_options['pane_category']['name'] = 'RBV count';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['inherit_panels_path'] = '1';

  /* Display: pane: progetti count */
  $handler = $view->new_display('panel_pane', 'pane: progetti count', 'panel_pane_9');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'vmode_group_content';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Piè di pagina: Global: Result summary */
  $handler->display->display_options['footer']['result']['id'] = 'result';
  $handler->display->display_options['footer']['result']['table'] = 'views';
  $handler->display->display_options['footer']['result']['field'] = 'result';
  $handler->display->display_options['footer']['result']['label'] = 'total';
  $handler->display->display_options['footer']['result']['content'] = '<span class="badge badge-project" title="Totale progetti/attività">@total</span> progetti/attività.';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Contenuto: Pubblicato */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Contenuto: Tipo */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'project' => 'project',
  );
  $handler->display->display_options['pane_category']['name'] = 'RBV count';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['inherit_panels_path'] = '1';

  /* Display: pane: collaborazioni count */
  $handler = $view->new_display('panel_pane', 'pane: collaborazioni count', 'panel_pane_10');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Piè di pagina: Global: Result summary */
  $handler->display->display_options['footer']['result']['id'] = 'result';
  $handler->display->display_options['footer']['result']['table'] = 'views';
  $handler->display->display_options['footer']['result']['field'] = 'result';
  $handler->display->display_options['footer']['result']['label'] = 'total';
  $handler->display->display_options['footer']['result']['content'] = '<span class="badge badge-collaboration" title="Totale collaborazioni">@total</span> collaborazioni.';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Contenuto: Soggetto */
  $handler->display->display_options['fields']['field_rel_source']['id'] = 'field_rel_source';
  $handler->display->display_options['fields']['field_rel_source']['table'] = 'field_data_field_rel_source';
  $handler->display->display_options['fields']['field_rel_source']['field'] = 'field_rel_source';
  $handler->display->display_options['fields']['field_rel_source']['label'] = 'Organizzazione';
  $handler->display->display_options['fields']['field_rel_source']['settings'] = array(
    'link' => 1,
  );
  /* Campo: Campo: Date */
  $handler->display->display_options['fields']['field_com_date_2']['id'] = 'field_com_date_2';
  $handler->display->display_options['fields']['field_com_date_2']['table'] = 'field_data_field_com_date';
  $handler->display->display_options['fields']['field_com_date_2']['field'] = 'field_com_date';
  $handler->display->display_options['fields']['field_com_date_2']['relationship'] = 'field_rel_source_target_id';
  $handler->display->display_options['fields']['field_com_date_2']['label'] = 'Data';
  $handler->display->display_options['fields']['field_com_date_2']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Campo: Contenuto: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = 'collaborazione';
  $handler->display->display_options['fields']['view_node']['text'] = 'collabora a ';
  /* Campo: Contenuto: Tipo di collaborazione */
  $handler->display->display_options['fields']['field_rel_categories']['id'] = 'field_rel_categories';
  $handler->display->display_options['fields']['field_rel_categories']['table'] = 'field_data_field_rel_categories';
  $handler->display->display_options['fields']['field_rel_categories']['field'] = 'field_rel_categories';
  $handler->display->display_options['fields']['field_rel_categories']['label'] = 'tipo';
  $handler->display->display_options['fields']['field_rel_categories']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_rel_categories']['alter']['text'] = '([field_rel_categories])';
  $handler->display->display_options['fields']['field_rel_categories']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_rel_categories']['delta_offset'] = '0';
  /* Campo: Campo: Date */
  $handler->display->display_options['fields']['field_com_date']['id'] = 'field_com_date';
  $handler->display->display_options['fields']['field_com_date']['table'] = 'field_data_field_com_date';
  $handler->display->display_options['fields']['field_com_date']['field'] = 'field_com_date';
  $handler->display->display_options['fields']['field_com_date']['label'] = 'Periodo';
  $handler->display->display_options['fields']['field_com_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Campo: Contenuto: Progetto */
  $handler->display->display_options['fields']['field_relpro_project']['id'] = 'field_relpro_project';
  $handler->display->display_options['fields']['field_relpro_project']['table'] = 'field_data_field_relpro_project';
  $handler->display->display_options['fields']['field_relpro_project']['field'] = 'field_relpro_project';
  $handler->display->display_options['fields']['field_relpro_project']['label'] = 'Progetto/attività';
  $handler->display->display_options['fields']['field_relpro_project']['settings'] = array(
    'link' => 1,
  );
  /* Campo: Campo: Date */
  $handler->display->display_options['fields']['field_com_date_1']['id'] = 'field_com_date_1';
  $handler->display->display_options['fields']['field_com_date_1']['table'] = 'field_data_field_com_date';
  $handler->display->display_options['fields']['field_com_date_1']['field'] = 'field_com_date';
  $handler->display->display_options['fields']['field_com_date_1']['relationship'] = 'field_relpro_project_target_id';
  $handler->display->display_options['fields']['field_com_date_1']['label'] = 'Data';
  $handler->display->display_options['fields']['field_com_date_1']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Campo: Contenuto: Titolo */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_relpro_project_target_id';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Contenuto: Pubblicato */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Contenuto: Tipo */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'collaboration' => 'collaboration',
  );
  $handler->display->display_options['pane_category']['name'] = 'RBV count';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['inherit_panels_path'] = '1';

  /* Display: pane: eventi count */
  $handler = $view->new_display('panel_pane', 'pane: eventi count', 'panel_pane_11');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'vedi tutto';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'vmode_group_content';
  $handler->display->display_options['row_options']['links'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Piè di pagina: Global: Result summary */
  $handler->display->display_options['footer']['result']['id'] = 'result';
  $handler->display->display_options['footer']['result']['table'] = 'views';
  $handler->display->display_options['footer']['result']['field'] = 'result';
  $handler->display->display_options['footer']['result']['label'] = 'total';
  $handler->display->display_options['footer']['result']['content'] = '<span class="badge badge-event" title="Totale eventi">@total</span> eventi.';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Contenuto: Pubblicato */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Contenuto: Tipo */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
  );
  $handler->display->display_options['pane_category']['name'] = 'RBV count';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['inherit_panels_path'] = '0';

  /* Display: pane: discussions count */
  $handler = $view->new_display('panel_pane', 'pane: discussions count', 'panel_pane_12');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Cerca';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Ripristina';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Piè di pagina: Global: Result summary */
  $handler->display->display_options['footer']['result']['id'] = 'result';
  $handler->display->display_options['footer']['result']['table'] = 'views';
  $handler->display->display_options['footer']['result']['field'] = 'result';
  $handler->display->display_options['footer']['result']['label'] = 'total';
  $handler->display->display_options['footer']['result']['content'] = '<span class="badge badge-discussion" title="Totale discussioni">@total</span> discussioni.';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Contenuto: Pubblicato */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Contenuto: Tipo */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'forum' => 'forum',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['pane_category']['name'] = 'RBV count';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $translatables['rbv_view_lists'] = array(
    t('Master'),
    t('Content lists'),
    t('more'),
    t('Applica'),
    t('Ripristina'),
    t('Ordina per'),
    t('Asc'),
    t('Disc'),
    t('Contenuti per pagina'),
    t('- All -'),
    t('Offset'),
    t('« prima'),
    t('‹ precedente'),
    t('successiva ›'),
    t('ultima »'),
    t('total'),
    t('<p>Ci sono <strong>@total</strong> contenuti in totale.</p>'),
    t('pane: upcoming'),
    t('Prossimi eventi'),
    t('vedi tutto'),
    t('Eventi per pagina'),
    t('<p>Ci sono <strong>@total</strong> eventi in programmazione.<br />
Vedi <a href="calendario/eventi">tutti gli <i class="fa fa-calendar fa-lg"></i> eventi</a>.</p>'),
    t('View panes'),
    t('pane: nuovi progetti'),
    t('Progetti/attività più visti di oggi'),
    t('<p>Ci sono <strong>@total</strong> progetti. <br /> 
Vedi <a href="progetti">tutti i <i class="fa fa-leaf fa-lg"></i> progetti</a>.</p>'),
    t('pane: search'),
    t('Cerca'),
    t('pane: discussion search'),
    t('Tutte le discussioni'),
    t('Sort by'),
    t('Desc'),
    t('<p>Ci sono <strong>@total</strong> discussioni. <br /> 
Vedi <a href="discussioni">tutte le <i class="fa fa-comments fa-lg"></i> discussioni</a>.</p>'),
    t('Cerca discussione'),
    t('pane: organizzazioni'),
    t('Organizzazioni della rete'),
    t('- Tutti -'),
    t('<p>Ci sono <strong>@total</strong> organizzazioni in totale.</p>'),
    t('pane: progetti'),
    t('Progetti/attività della rete'),
    t('<p>Ci sono <strong>@total</strong> progetti/attività in totale.</p>'),
    t('pane: collaborazioni'),
    t('Collaborazioni nella rete'),
    t('<p>Ci sono <strong>@total</strong> collaborazioni in totale.</p>'),
    t('<p>La rappresentazione grafica della rete di collaborazioni si trova su <a href="rete"><i class="fa fa-eye fa-lg"></i> Vedi la rete</a></p>'),
    t('entity referenced from field_relpro_project'),
    t('entity referenced from field_rel_source'),
    t('Organizzazione'),
    t('Data'),
    t('collaborazione'),
    t('collabora a '),
    t('tipo'),
    t('([field_rel_categories])'),
    t('Periodo'),
    t('Progetto/attività'),
    t('Progetto'),
    t('pane: organizzazioni count'),
    t('<span class="badge badge-org" title="Totale organizzazioni nominate">@total</span> organizzazioni.'),
    t('RBV count'),
    t('pane: progetti count'),
    t('<span class="badge badge-project" title="Totale progetti/attività">@total</span> progetti/attività.'),
    t('pane: collaborazioni count'),
    t('<span class="badge badge-collaboration" title="Totale collaborazioni">@total</span> collaborazioni.'),
    t('pane: eventi count'),
    t('<span class="badge badge-event" title="Totale eventi">@total</span> eventi.'),
    t('pane: discussions count'),
    t('<span class="badge badge-discussion" title="Totale discussioni">@total</span> discussioni.'),
  );
  $export['rbv_view_lists'] = $view;

  return $export;
}
