<?php
/**
 * @file
 * rbv_networkadmin.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function rbv_networkadmin_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'rbv_netadmview_joined';
  $view->description = '';
  $view->tag = 'RBV';
  $view->base_table = 'node';
  $view->human_name = 'rbv netadmview joined';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Network admin - elenco delle organizzazioni che partecipano';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    5 => '5',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Ripristina';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['row_options']['separator'] = ', ';
  /* Piè di pagina: Global: Result summary */
  $handler->display->display_options['footer']['result']['id'] = 'result';
  $handler->display->display_options['footer']['result']['table'] = 'views';
  $handler->display->display_options['footer']['result']['field'] = 'result';
  $handler->display->display_options['footer']['result']['label'] = 'total';
  $handler->display->display_options['footer']['result']['content'] = 'Totale organizzazioni partecipanti: <strong>@total</strong>';
  /* Campo: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
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
  );
  /* Filter criterion: Content: Author uid */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'node';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['operator'] = 'not in';
  $handler->display->display_options['filters']['uid']['value'] = array(
    0 => 0,
  );

  /* Display: Page: partecipano già */
  $handler = $view->new_display('page', 'Page: partecipano già', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Network admin - elenco organizzazioni partecipanti a RBV';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_com_categories' => 'field_com_categories',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_com_categories' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Nome';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Campo: Content: Settori */
  $handler->display->display_options['fields']['field_com_categories']['id'] = 'field_com_categories';
  $handler->display->display_options['fields']['field_com_categories']['table'] = 'field_data_field_com_categories';
  $handler->display->display_options['fields']['field_com_categories']['field'] = 'field_com_categories';
  $handler->display->display_options['fields']['field_com_categories']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_com_categories']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['path'] = 'networkadmin/hanno-aderito';

  /* Display: pane: partecipano già */
  $handler = $view->new_display('panel_pane', 'pane: partecipano già', 'panel_pane_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Partecipano già';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['pane_category']['name'] = 'RBV stats';
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
  $handler->display->display_options['allow']['panopoly_magic_display_type'] = 0;

  /* Display: pane: partecipanti count */
  $handler = $view->new_display('panel_pane', 'pane: partecipanti count', 'panel_pane_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['group_type'] = 'count';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = '<span class="badge badge-participant" title="Totale organizzazioni partecipanti (iscritte a rbv)">[nid]</span> <a href="esplora?type%5B%5D=org">org. partecipanti</a>.';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
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

  /* Display: pane: adesioni data */
  $handler = $view->new_display('panel_pane', 'pane: adesioni data', 'panel_pane_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Data adesioni';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'created' => 'created',
  );
  $handler->display->display_options['style_options']['default'] = 'created';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Organizzazione';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Campo: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Data di adesione';
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'Y-m-d';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'panopoly_time';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;

  /* Display: Allegato: nominate */
  $handler = $view->new_display('attachment', 'Allegato: nominate', 'attachment_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Elenco organizzazioni nominate come collaboratori';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Intestazione: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h1>Elenco organizzazioni nominate come collaboratori</h1>';
  $handler->display->display_options['header']['area']['format'] = 'panopoly_html_text';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Piè di pagina: Global: Result summary */
  $handler->display->display_options['footer']['result']['id'] = 'result';
  $handler->display->display_options['footer']['result']['table'] = 'views';
  $handler->display->display_options['footer']['result']['field'] = 'result';
  $handler->display->display_options['footer']['result']['label'] = 'total';
  $handler->display->display_options['footer']['result']['content'] = 'Totale organizzazioni nominate: <strong>@total</strong>';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Nome';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
  );
  /* Filter criterion: Content: Author uid */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'node';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['value'] = array(
    0 => 0,
  );
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
    'panel_pane_1' => 0,
    'panel_pane_2' => 0,
    'panel_pane_3' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';

  /* Display: pane: adesioni data */
  $handler = $view->new_display('panel_pane', 'pane: adesioni data', 'panel_pane_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Data adesioni';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'created' => 'created',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Organizzazione';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Data di adesione';
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'Y-m-d';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'panopoly_time';
  $handler->display->display_options['pane_category']['name'] = 'View stats';
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

  /* Display: Contenuti per tipo */
  $handler = $view->new_display('panel_pane', 'Contenuti per tipo', 'panel_pane_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Contenuti per categoria';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'd3_style';
  $handler->display->display_options['style_options']['library'] = 'd3.piechart';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = 'Tipo di contenuti';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['nid']['label'] = 'Totale';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Nid */
  $handler->display->display_options['sorts']['nid']['id'] = 'nid';
  $handler->display->display_options['sorts']['nid']['table'] = 'node';
  $handler->display->display_options['sorts']['nid']['field'] = 'nid';
  $handler->display->display_options['sorts']['nid']['group_type'] = 'count_distinct';
  $handler->display->display_options['sorts']['nid']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  $handler->display->display_options['pane_category']['name'] = 'RBV charts';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Contenuti per utente */
  $handler = $view->new_display('panel_pane', 'Contenuti per utente', 'panel_pane_6');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Contenuti per creator';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'd3_style';
  $handler->display->display_options['style_options']['library'] = 'd3.columnchart';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['label'] = 'Info';
  $handler->display->display_options['footer']['area']['content'] = 'Utenti che hanno inserito almeno un contenuto (oltre l\'Organizzazione), escluso il gruppo di redazione di RBV.';
  $handler->display->display_options['footer']['area']['format'] = 'panopoly_wysiwyg_text';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'Utente';
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['group_type'] = 'count_distinct';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Nid */
  $handler->display->display_options['sorts']['nid']['id'] = 'nid';
  $handler->display->display_options['sorts']['nid']['table'] = 'node';
  $handler->display->display_options['sorts']['nid']['field'] = 'nid';
  $handler->display->display_options['sorts']['nid']['group_type'] = 'count_distinct';
  $handler->display->display_options['sorts']['nid']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'all' => 'all',
    'collaboration' => 'collaboration',
    'panopoly_page' => 'panopoly_page',
    'forum' => 'forum',
    'event' => 'event',
    'panopoly_landing_page' => 'panopoly_landing_page',
    'org' => 'org',
    'project' => 'project',
  );
  /* Filter criterion: Content: Author uid */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'node';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['operator'] = 'not in';
  $handler->display->display_options['filters']['uid']['value'] = array(
    0 => 0,
  );
  /* Filter criterion: User: Roles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['relationship'] = 'uid';
  $handler->display->display_options['filters']['rid']['operator'] = 'not';
  $handler->display->display_options['filters']['rid']['value'] = array(
    3 => '3',
    4 => '4',
    5 => '5',
  );
  /* Filter criterion: Content: Nid */
  $handler->display->display_options['filters']['nid']['id'] = 'nid';
  $handler->display->display_options['filters']['nid']['table'] = 'node';
  $handler->display->display_options['filters']['nid']['field'] = 'nid';
  $handler->display->display_options['filters']['nid']['group_type'] = 'count_distinct';
  $handler->display->display_options['filters']['nid']['operator'] = '>';
  $handler->display->display_options['filters']['nid']['value']['value'] = '1';
  $handler->display->display_options['pane_category']['name'] = 'RBV stats';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Contenuti per admin */
  $handler = $view->new_display('panel_pane', 'Contenuti per admin', 'panel_pane_7');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Contenuti per admin';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'd3_style';
  $handler->display->display_options['style_options']['library'] = 'd3.columnchart';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['label'] = 'Info';
  $handler->display->display_options['footer']['area']['content'] = 'Gruppo di redazione';
  $handler->display->display_options['footer']['area']['format'] = 'panopoly_wysiwyg_text';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'Utente';
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['group_type'] = 'count_distinct';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Nid */
  $handler->display->display_options['sorts']['nid']['id'] = 'nid';
  $handler->display->display_options['sorts']['nid']['table'] = 'node';
  $handler->display->display_options['sorts']['nid']['field'] = 'nid';
  $handler->display->display_options['sorts']['nid']['group_type'] = 'count_distinct';
  $handler->display->display_options['sorts']['nid']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'all' => 'all',
    'collaboration' => 'collaboration',
    'panopoly_page' => 'panopoly_page',
    'forum' => 'forum',
    'event' => 'event',
    'panopoly_landing_page' => 'panopoly_landing_page',
    'org' => 'org',
    'project' => 'project',
  );
  /* Filter criterion: Content: Author uid */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'node';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['operator'] = 'not in';
  $handler->display->display_options['filters']['uid']['value'] = array(
    0 => 0,
  );
  /* Filter criterion: User: Roles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['relationship'] = 'uid';
  $handler->display->display_options['filters']['rid']['value'] = array(
    3 => '3',
    4 => '4',
    5 => '5',
  );
  $handler->display->display_options['pane_category']['name'] = 'RBV stats';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Contenuti per utente per data */
  $handler = $view->new_display('panel_pane', 'Contenuti per utente per data', 'panel_pane_8');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Contenuti per utente per data';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'name' => 'name',
    'created' => 'created',
    'type' => 'type',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'type' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'Utente';
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'Y-m-d';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'panopoly_time';
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = 'Tipo';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'all' => 'all',
    'collaboration' => 'collaboration',
    'panopoly_page' => 'panopoly_page',
    'forum' => 'forum',
    'event' => 'event',
    'panopoly_landing_page' => 'panopoly_landing_page',
    'org' => 'org',
    'project' => 'project',
  );
  /* Filter criterion: Content: Author uid */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'node';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['operator'] = 'not in';
  $handler->display->display_options['filters']['uid']['value'] = array(
    0 => 0,
  );
  $handler->display->display_options['pane_category']['name'] = 'RBV stats';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Partecipanti details */
  $handler = $view->new_display('panel_pane', 'Partecipanti details', 'panel_pane_9');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Org. partecipanti - dettagli';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Logo */
  $handler->display->display_options['fields']['field_com_logo']['id'] = 'field_com_logo';
  $handler->display->display_options['fields']['field_com_logo']['table'] = 'field_data_field_com_logo';
  $handler->display->display_options['fields']['field_com_logo']['field'] = 'field_com_logo';
  $handler->display->display_options['fields']['field_com_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_com_logo']['settings'] = array(
    'image_style' => 'rbv_image_icon',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Nome';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Settori */
  $handler->display->display_options['fields']['field_com_categories']['id'] = 'field_com_categories';
  $handler->display->display_options['fields']['field_com_categories']['table'] = 'field_data_field_com_categories';
  $handler->display->display_options['fields']['field_com_categories']['field'] = 'field_com_categories';
  $handler->display->display_options['fields']['field_com_categories']['delta_offset'] = '0';
  /* Field: Content: Slogan */
  $handler->display->display_options['fields']['field_com_tagline']['id'] = 'field_com_tagline';
  $handler->display->display_options['fields']['field_com_tagline']['table'] = 'field_data_field_com_tagline';
  $handler->display->display_options['fields']['field_com_tagline']['field'] = 'field_com_tagline';
  $handler->display->display_options['fields']['field_com_tagline']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_com_tagline']['alter']['text'] = '<i class="fa fa-check fa-lg"></i>';
  $handler->display->display_options['fields']['field_com_tagline']['settings'] = array(
    'trim_link' => '0',
    'trim_length' => '50',
    'trim_type' => 'chars',
    'trim_suffix' => '...',
    'more_link' => '0',
    'more_text' => 'Read more',
    'trim_options' => array(
      'text' => 'text',
    ),
    'trim_preserve_tags' => '',
  );
  /* Field: Field: Descrizione */
  $handler->display->display_options['fields']['field_com_description']['id'] = 'field_com_description';
  $handler->display->display_options['fields']['field_com_description']['table'] = 'field_data_field_com_description';
  $handler->display->display_options['fields']['field_com_description']['field'] = 'field_com_description';
  $handler->display->display_options['fields']['field_com_description']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_com_description']['alter']['text'] = '<i class="fa fa-check fa-lg"></i>';
  $handler->display->display_options['fields']['field_com_description']['settings'] = array(
    'trim_link' => '0',
    'trim_length' => '80',
    'trim_type' => 'chars',
    'trim_suffix' => '...',
    'more_link' => '0',
    'more_text' => 'Read more',
    'summary_handler' => 'full',
    'trim_options' => array(
      'text' => 'text',
    ),
    'trim_preserve_tags' => '',
  );
  /* Field: Content: Mission */
  $handler->display->display_options['fields']['field_com_mission']['id'] = 'field_com_mission';
  $handler->display->display_options['fields']['field_com_mission']['table'] = 'field_data_field_com_mission';
  $handler->display->display_options['fields']['field_com_mission']['field'] = 'field_com_mission';
  $handler->display->display_options['fields']['field_com_mission']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_com_mission']['alter']['text'] = '<i class="fa fa-check fa-lg"></i>';
  $handler->display->display_options['fields']['field_com_mission']['settings'] = array(
    'trim_link' => '0',
    'trim_length' => '80',
    'trim_type' => 'chars',
    'trim_suffix' => '...',
    'more_link' => '0',
    'more_text' => 'Read more',
    'summary_handler' => 'full',
    'trim_options' => array(
      'text' => 'text',
    ),
    'trim_preserve_tags' => '',
  );
  /* Field: Content: Storia */
  $handler->display->display_options['fields']['field_com_history']['id'] = 'field_com_history';
  $handler->display->display_options['fields']['field_com_history']['table'] = 'field_data_field_com_history';
  $handler->display->display_options['fields']['field_com_history']['field'] = 'field_com_history';
  $handler->display->display_options['fields']['field_com_history']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_com_history']['alter']['text'] = '<i class="fa fa-check fa-lg"></i>';
  $handler->display->display_options['fields']['field_com_history']['settings'] = array(
    'trim_link' => '0',
    'trim_length' => '50',
    'trim_type' => 'chars',
    'trim_suffix' => '...',
    'more_link' => '0',
    'more_text' => 'Read more',
    'summary_handler' => 'full',
    'trim_options' => array(
      'text' => 'text',
    ),
    'trim_preserve_tags' => '',
  );
  /* Field: Content: Pagina facebook */
  $handler->display->display_options['fields']['field_com_ln_fb']['id'] = 'field_com_ln_fb';
  $handler->display->display_options['fields']['field_com_ln_fb']['table'] = 'field_data_field_com_ln_fb';
  $handler->display->display_options['fields']['field_com_ln_fb']['field'] = 'field_com_ln_fb';
  $handler->display->display_options['fields']['field_com_ln_fb']['click_sort_column'] = 'url';
  $handler->display->display_options['pane_category']['name'] = 'RBV stats';
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
  $handler->display->display_options['allow']['panopoly_magic_display_type'] = 0;
  $translatables['rbv_netadmview_joined'] = array(
    t('Master'),
    t('Network admin - elenco delle organizzazioni che partecipano'),
    t('more'),
    t('Apply'),
    t('Ripristina'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('total'),
    t('Totale organizzazioni partecipanti: <strong>@total</strong>'),
    t('Page: partecipano già'),
    t('Network admin - elenco organizzazioni partecipanti a RBV'),
    t('Nome'),
    t('Settori'),
    t('pane: partecipano già'),
    t('Partecipano già'),
    t('RBV stats'),
    t('pane: partecipanti count'),
    t('<span class="badge badge-participant" title="Totale organizzazioni partecipanti (iscritte a rbv)">[nid]</span> <a href="esplora?type%5B%5D=org">org. partecipanti</a>.'),
    t('RBV count'),
    t('pane: adesioni data'),
    t('Data adesioni'),
    t('Organizzazione'),
    t('Data di adesione'),
    t('View panes'),
    t('Allegato: nominate'),
    t('Elenco organizzazioni nominate come collaboratori'),
    t('<h1>Elenco organizzazioni nominate come collaboratori</h1>'),
    t('Totale organizzazioni nominate: <strong>@total</strong>'),
    t('View stats'),
    t('Contenuti per tipo'),
    t('Contenuti per categoria'),
    t('Tipo di contenuti'),
    t('Totale'),
    t('RBV charts'),
    t('Contenuti per utente'),
    t('Contenuti per creator'),
    t('Info'),
    t('Utenti che hanno inserito almeno un contenuto (oltre l\'Organizzazione), escluso il gruppo di redazione di RBV.'),
    t('author'),
    t('Utente'),
    t('Nid'),
    t('Contenuti per admin'),
    t('Gruppo di redazione'),
    t('Contenuti per utente per data'),
    t('Post date'),
    t('Tipo'),
    t('Partecipanti details'),
    t('Org. partecipanti - dettagli'),
    t('Logo'),
    t('Slogan'),
    t('<i class="fa fa-check fa-lg"></i>'),
    t('Descrizione'),
    t('Mission'),
    t('Storia'),
    t('Pagina facebook'),
  );
  $export['rbv_netadmview_joined'] = $view;

  $view = new view();
  $view->name = 'rbv_netadmview_organon';
  $view->description = 'Organizzazioni nominate a cui inviare una mail';
  $view->tag = 'RBV';
  $view->base_table = 'node';
  $view->human_name = 'rbv netadmview organon';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'network admin - Elenco organizzazioni nominate nelle collaborazioni';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    5 => '5',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Ripristina';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_rel_source' => 'field_rel_source',
    'og_group_ref' => 'og_group_ref',
    'views_bulk_operations' => 'views_bulk_operations',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_rel_source' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'og_group_ref' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_rel_source_target_id']['id'] = 'field_rel_source_target_id';
  $handler->display->display_options['relationships']['field_rel_source_target_id']['table'] = 'field_data_field_rel_source';
  $handler->display->display_options['relationships']['field_rel_source_target_id']['field'] = 'field_rel_source_target_id';
  $handler->display->display_options['relationships']['field_rel_source_target_id']['label'] = 'e referenced from field_rel_source';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_relpro_project_target_id']['id'] = 'field_relpro_project_target_id';
  $handler->display->display_options['relationships']['field_relpro_project_target_id']['table'] = 'field_data_field_relpro_project';
  $handler->display->display_options['relationships']['field_relpro_project_target_id']['field'] = 'field_relpro_project_target_id';
  $handler->display->display_options['relationships']['field_relpro_project_target_id']['label'] = 'e referenced from field_relpro_project';
  /* Campo: Content: Soggetto */
  $handler->display->display_options['fields']['field_rel_source']['id'] = 'field_rel_source';
  $handler->display->display_options['fields']['field_rel_source']['table'] = 'field_data_field_rel_source';
  $handler->display->display_options['fields']['field_rel_source']['field'] = 'field_rel_source';
  $handler->display->display_options['fields']['field_rel_source']['label'] = 'L\'organizzazione';
  $handler->display->display_options['fields']['field_rel_source']['settings'] = array(
    'link' => 1,
  );
  /* Campo: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'il giorno';
  $handler->display->display_options['fields']['created']['date_format'] = 'panopoly_day';
  /* Campo: Content: Organizzazione promotrice */
  $handler->display->display_options['fields']['og_group_ref']['id'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['table'] = 'og_membership';
  $handler->display->display_options['fields']['og_group_ref']['field'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['relationship'] = 'field_relpro_project_target_id';
  $handler->display->display_options['fields']['og_group_ref']['label'] = 'è stata inserita da';
  $handler->display->display_options['fields']['og_group_ref']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['og_group_ref']['delta_offset'] = '0';
  /* Campo: Content: Progetto */
  $handler->display->display_options['fields']['field_relpro_project']['id'] = 'field_relpro_project';
  $handler->display->display_options['fields']['field_relpro_project']['table'] = 'field_data_field_relpro_project';
  $handler->display->display_options['fields']['field_relpro_project']['field'] = 'field_relpro_project';
  $handler->display->display_options['fields']['field_relpro_project']['label'] = 'tra i collaboratori del progetto';
  $handler->display->display_options['fields']['field_relpro_project']['settings'] = array(
    'link' => 1,
  );
  /* Campo: Content: Tipo di collaborazione */
  $handler->display->display_options['fields']['field_rel_categories']['id'] = 'field_rel_categories';
  $handler->display->display_options['fields']['field_rel_categories']['table'] = 'field_data_field_rel_categories';
  $handler->display->display_options['fields']['field_rel_categories']['field'] = 'field_rel_categories';
  $handler->display->display_options['fields']['field_rel_categories']['label'] = 'con il ruolo di';
  $handler->display->display_options['fields']['field_rel_categories']['delta_offset'] = '0';
  /* Campo: Field: Descrizione */
  $handler->display->display_options['fields']['field_com_description']['id'] = 'field_com_description';
  $handler->display->display_options['fields']['field_com_description']['table'] = 'field_data_field_com_description';
  $handler->display->display_options['fields']['field_com_description']['field'] = 'field_com_description';
  $handler->display->display_options['fields']['field_com_description']['label'] = 'e la descrizione';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
    'collaboration' => 'collaboration',
  );
  /* Filter criterion: Content: Author uid */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'node';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['relationship'] = 'field_rel_source_target_id';
  $handler->display->display_options['filters']['uid']['value'] = array(
    0 => 0,
  );
  $handler->display->display_options['filters']['uid']['expose']['operator_id'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['label'] = 'Author uid';
  $handler->display->display_options['filters']['uid']['expose']['operator'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['identifier'] = 'uid';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'networkadmin/organizzazioni-nominate';

  /* Display: pane organiz nominate */
  $handler = $view->new_display('panel_pane', 'pane organiz nominate', 'panel_pane_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Elenco organizzazioni nominate nelle collaborazioni';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pane_category']['name'] = 'RBV stats';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['allow']['panopoly_magic_display_type'] = 0;
  $translatables['rbv_netadmview_organon'] = array(
    t('Master'),
    t('network admin - Elenco organizzazioni nominate nelle collaborazioni'),
    t('more'),
    t('Apply'),
    t('Ripristina'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('author'),
    t('e referenced from field_rel_source'),
    t('e referenced from field_relpro_project'),
    t('L\'organizzazione'),
    t('il giorno'),
    t('è stata inserita da'),
    t('tra i collaboratori del progetto'),
    t('con il ruolo di'),
    t('e la descrizione'),
    t('Author uid'),
    t('Page'),
    t('pane organiz nominate'),
    t('Elenco organizzazioni nominate nelle collaborazioni'),
    t('RBV stats'),
  );
  $export['rbv_netadmview_organon'] = $view;

  return $export;
}
