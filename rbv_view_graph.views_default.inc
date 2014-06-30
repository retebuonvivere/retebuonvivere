<?php
/**
 * @file
 * rbv_view_graph.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function rbv_view_graph_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'rbv_view_graph';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'RBV graph';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Insieme siamo una rete';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Ripristina';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'graphapi_style';
  $handler->display->display_options['style_options']['engine'] = 'd3';
  $handler->display->display_options['style_options']['d3'] = array(
    'library' => 'module_dependencies',
    'fields' => array(
      'nid' => 'from:id',
      'title' => 'from:label',
      'path' => 'from:URI',
      'nid_1' => 'to:id',
      'title_1' => 'to:label',
      'path_1' => 'to:URI',
      'field_rel_categories' => 'link:color',
    ),
  );
  $handler->display->display_options['style_options']['graphapi']['width'] = '950';
  $handler->display->display_options['style_options']['graphapi']['height'] = '610';
  $handler->display->display_options['style_options']['graphapi']['background-color'] = 'ffffff';
  /* Piè di pagina: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['label'] = 'footer';
  $handler->display->display_options['footer']['area']['empty'] = TRUE;
  $handler->display->display_options['footer']['area']['content'] = '<dl>
 <dt><strong>Una rete</strong></dt>
 <dd><p>Questa pagina mostra la rete risultante dalle relazioni di collaborazione tra le organizzazioni della società civile e dell\'economia solidale di Verona. Le organizzazioni collaborano sulla base di progetti e attività specifici, per prendersi cura del bene comune.</p></dd>
 <dd><p>La rete è disegnata in base ai dati inseriti in retebuonvivere, per questo <strong>è davvero importante la partecipazione di tutti nell\'inserimento dei dati</strong>.</p></dd>
 <dd><p>Vengono visualizzate per il momento soltanto le organizzazioni connesse tramite almeno una collaborazione. Per questo tutte le organizzazioni di retebuonvivere che non hanno ancora inserito un progetto/attività o una collaborazione, non vengono visualizzate. Questo è soltanto un limite tecnico e chi fosse interessato può <a href="discussioni/unirsi-al-gruppo-di-sviluppo">unirsi al gruppo di sviluppo</a> e trovare una soluzione insieme per superare questo limite!</p></dd>
 <dd><p>Questa visualizzazione inoltre non permette ancora di tenere conto della temporalità delle collaborazioni. Allo stesso tempo, disegnando le organizzazioni e i progetti come cerchi e le relazioni come collegamenti, porta l\'attenzione sull\'identità delle organizzazioni. Per introdurre la dimensione del tempo e spostare l\'attenzione sulle relazioni è stato proposto un metodo. Chi è interessato può partecipare o seguire la discussione <a href="discussioni/inserire-la-dimensione-del-tempo">"inserire la dimensione del tempo"</a>.</p></dd>
 <dd>
  <svg width="120" height="49">
   <g class="data">
    <g class="node" transform="translate(10,12)">
     <circle class="node" r="9" style="fill: #ABDC0A; stroke: #fff; stroke-width: 4px;"></circle>
     <text class="nodetext" dx="10" dy="1" font-size="13">Organizzazione</text>
    </g>
    <g class="node" transform="translate(10,36)">
     <circle class="node" r="8" style="fill: #378722; stroke: #fff; stroke-width: 0px;"></circle>
     <text class="nodetext" dx="10" dy="1" font-size="13">Progetto/attività</text>
   </g>
   </g>
  </svg>
 </dd>
</dl>';
  $handler->display->display_options['footer']['area']['format'] = 'rbv_full_html';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_rel_source_target_id']['id'] = 'field_rel_source_target_id';
  $handler->display->display_options['relationships']['field_rel_source_target_id']['table'] = 'field_data_field_rel_source';
  $handler->display->display_options['relationships']['field_rel_source_target_id']['field'] = 'field_rel_source_target_id';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_relpro_project_target_id']['id'] = 'field_relpro_project_target_id';
  $handler->display->display_options['relationships']['field_relpro_project_target_id']['table'] = 'field_data_field_relpro_project';
  $handler->display->display_options['relationships']['field_relpro_project_target_id']['field'] = 'field_relpro_project_target_id';
  /* Campo: Contenuto: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'field_rel_source_target_id';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Campo: Contenuto: Titolo */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_rel_source_target_id';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Campo: Contenuto: Percorso */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['relationship'] = 'field_rel_source_target_id';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Campo: Contenuto: Nid */
  $handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['fields']['nid_1']['table'] = 'node';
  $handler->display->display_options['fields']['nid_1']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['relationship'] = 'field_relpro_project_target_id';
  $handler->display->display_options['fields']['nid_1']['label'] = '';
  $handler->display->display_options['fields']['nid_1']['element_label_colon'] = FALSE;
  /* Campo: Contenuto: Titolo */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'field_relpro_project_target_id';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['link_to_node'] = FALSE;
  /* Campo: Contenuto: Percorso */
  $handler->display->display_options['fields']['path_1']['id'] = 'path_1';
  $handler->display->display_options['fields']['path_1']['table'] = 'node';
  $handler->display->display_options['fields']['path_1']['field'] = 'path';
  $handler->display->display_options['fields']['path_1']['relationship'] = 'field_relpro_project_target_id';
  $handler->display->display_options['fields']['path_1']['label'] = '';
  $handler->display->display_options['fields']['path_1']['element_label_colon'] = FALSE;
  /* Campo: Contenuto: Tipo di collaborazione */
  $handler->display->display_options['fields']['field_rel_categories']['id'] = 'field_rel_categories';
  $handler->display->display_options['fields']['field_rel_categories']['table'] = 'field_data_field_rel_categories';
  $handler->display->display_options['fields']['field_rel_categories']['field'] = 'field_rel_categories';
  $handler->display->display_options['fields']['field_rel_categories']['label'] = '';
  $handler->display->display_options['fields']['field_rel_categories']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_rel_categories']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_rel_categories']['delta_offset'] = '0';
  /* Filter criterion: Contenuto: Pubblicato */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Page: graph main */
  $handler = $view->new_display('page', 'Page: graph main', 'page_2');
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
  $handler->display->display_options['path'] = 'rete';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Vedi la rete';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'Vedi la rete';
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: Page: ER graph */
  $handler = $view->new_display('page', 'Page: ER graph', 'page');
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
  $handler->display->display_options['path'] = 'rete/collaborazioni';
  $handler->display->display_options['menu']['type'] = 'default tab';
  $handler->display->display_options['menu']['title'] = 'Collaborazioni';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['title'] = 'Vedi la rete';
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: Page: relation graph */
  $handler = $view->new_display('page', 'Page: relation graph', 'page_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'graphapi_style';
  $handler->display->display_options['style_options']['engine'] = 'd3';
  $handler->display->display_options['style_options']['d3'] = array(
    'library' => 'forcedirected',
    'fields' => array(
      'nid' => 'from:id',
      'title' => 'from:label',
      'nid_1' => 'to:id',
      'title_1' => 'to:label',
    ),
  );
  $handler->display->display_options['style_options']['graphapi']['width'] = '800';
  $handler->display->display_options['style_options']['graphapi']['height'] = '600';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Contenuto: Relation: coopera con (node ↔ node) */
  $handler->display->display_options['relationships']['relation_cooperates_with_node']['id'] = 'relation_cooperates_with_node';
  $handler->display->display_options['relationships']['relation_cooperates_with_node']['table'] = 'node';
  $handler->display->display_options['relationships']['relation_cooperates_with_node']['field'] = 'relation_cooperates_with_node';
  $handler->display->display_options['relationships']['relation_cooperates_with_node']['required'] = TRUE;
  $handler->display->display_options['relationships']['relation_cooperates_with_node']['entity_deduplication_left'] = 0;
  $handler->display->display_options['relationships']['relation_cooperates_with_node']['entity_deduplication_right'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Contenuto: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Campo: Contenuto: Titolo */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Campo: Contenuto: Nid */
  $handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['fields']['nid_1']['table'] = 'node';
  $handler->display->display_options['fields']['nid_1']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['relationship'] = 'relation_cooperates_with_node';
  $handler->display->display_options['fields']['nid_1']['label'] = '';
  $handler->display->display_options['fields']['nid_1']['element_label_colon'] = FALSE;
  /* Campo: Contenuto: Titolo */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'relation_cooperates_with_node';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['link_to_node'] = FALSE;
  $handler->display->display_options['path'] = 'rete/relazioni';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Relazioni';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: pane: ER graph */
  $handler = $view->new_display('panel_pane', 'pane: ER graph', 'panel_pane_1');
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'graphapi_style';
  $handler->display->display_options['style_options']['engine'] = 'd3';
  $handler->display->display_options['style_options']['d3'] = array(
    'library' => 'module_dependencies',
    'fields' => array(
      'nid' => 'from:id',
      'title' => 'from:label',
      'nid_1' => 'to:id',
      'title_1' => 'to:label',
    ),
  );
  $handler->display->display_options['style_options']['graphapi']['width'] = '800';
  $handler->display->display_options['style_options']['graphapi']['height'] = '600';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Contenuto: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'field_rel_source_target_id';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Campo: Contenuto: Titolo */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_rel_source_target_id';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Campo: Contenuto: Nid */
  $handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['fields']['nid_1']['table'] = 'node';
  $handler->display->display_options['fields']['nid_1']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['relationship'] = 'field_relpro_project_target_id';
  $handler->display->display_options['fields']['nid_1']['label'] = '';
  $handler->display->display_options['fields']['nid_1']['element_label_colon'] = FALSE;
  /* Campo: Contenuto: Titolo */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'field_relpro_project_target_id';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['link_to_node'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Contenuto: Pubblicato */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  $handler->display->display_options['inherit_panels_path'] = '0';

  /* Display: pane: relation graph */
  $handler = $view->new_display('panel_pane', 'pane: relation graph', 'panel_pane_2');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'graphapi_style';
  $handler->display->display_options['style_options']['engine'] = 'd3';
  $handler->display->display_options['style_options']['d3'] = array(
    'library' => 'module_dependencies',
    'fields' => array(
      'nid' => 'from:id',
      'title' => 'from:label',
      'nid_1' => 'to:id',
      'title_1' => 'to:label',
    ),
  );
  $handler->display->display_options['style_options']['graphapi']['width'] = '800';
  $handler->display->display_options['style_options']['graphapi']['height'] = '600';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Contenuto: Relation: coopera con (node ↔ node) */
  $handler->display->display_options['relationships']['relation_cooperates_with_node']['id'] = 'relation_cooperates_with_node';
  $handler->display->display_options['relationships']['relation_cooperates_with_node']['table'] = 'node';
  $handler->display->display_options['relationships']['relation_cooperates_with_node']['field'] = 'relation_cooperates_with_node';
  $handler->display->display_options['relationships']['relation_cooperates_with_node']['required'] = TRUE;
  $handler->display->display_options['relationships']['relation_cooperates_with_node']['entity_deduplication_left'] = 0;
  $handler->display->display_options['relationships']['relation_cooperates_with_node']['entity_deduplication_right'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Contenuto: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'field_rel_source_target_id';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Campo: Contenuto: Titolo */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_rel_source_target_id';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Campo: Contenuto: Nid */
  $handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['fields']['nid_1']['table'] = 'node';
  $handler->display->display_options['fields']['nid_1']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['relationship'] = 'relation_cooperates_with_node';
  $handler->display->display_options['fields']['nid_1']['label'] = '';
  $handler->display->display_options['fields']['nid_1']['element_label_colon'] = FALSE;
  /* Campo: Contenuto: Titolo */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'relation_cooperates_with_node';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['link_to_node'] = FALSE;
  $translatables['rbv_view_graph'] = array(
    t('Master'),
    t('Insieme siamo una rete'),
    t('more'),
    t('Apply'),
    t('Ripristina'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('footer'),
    t('<dl>
 <dt><strong>Una rete</strong></dt>
 <dd><p>Questa pagina mostra la rete risultante dalle relazioni di collaborazione tra le organizzazioni della società civile e dell\'economia solidale di Verona. Le organizzazioni collaborano sulla base di progetti e attività specifici, per prendersi cura del bene comune.</p></dd>
 <dd><p>La rete è disegnata in base ai dati inseriti in retebuonvivere, per questo <strong>è davvero importante la partecipazione di tutti nell\'inserimento dei dati</strong>.</p></dd>
 <dd><p>Vengono visualizzate per il momento soltanto le organizzazioni connesse tramite almeno una collaborazione. Per questo tutte le organizzazioni di retebuonvivere che non hanno ancora inserito un progetto/attività o una collaborazione, non vengono visualizzate. Questo è soltanto un limite tecnico e chi fosse interessato può <a href="discussioni/unirsi-al-gruppo-di-sviluppo">unirsi al gruppo di sviluppo</a> e trovare una soluzione insieme per superare questo limite!</p></dd>
 <dd><p>Questa visualizzazione inoltre non permette ancora di tenere conto della temporalità delle collaborazioni. Allo stesso tempo, disegnando le organizzazioni e i progetti come cerchi e le relazioni come collegamenti, porta l\'attenzione sull\'identità delle organizzazioni. Per introdurre la dimensione del tempo e spostare l\'attenzione sulle relazioni è stato proposto un metodo. Chi è interessato può partecipare o seguire la discussione <a href="discussioni/inserire-la-dimensione-del-tempo">"inserire la dimensione del tempo"</a>.</p></dd>
 <dd>
  <svg width="120" height="49">
   <g class="data">
    <g class="node" transform="translate(10,12)">
     <circle class="node" r="9" style="fill: #ABDC0A; stroke: #fff; stroke-width: 4px;"></circle>
     <text class="nodetext" dx="10" dy="1" font-size="13">Organizzazione</text>
    </g>
    <g class="node" transform="translate(10,36)">
     <circle class="node" r="8" style="fill: #378722; stroke: #fff; stroke-width: 0px;"></circle>
     <text class="nodetext" dx="10" dy="1" font-size="13">Progetto/attività</text>
   </g>
   </g>
  </svg>
 </dd>
</dl>'),
    t('Contenuto entity referenced from field_rel_source'),
    t('Contenuto entity referenced from field_relpro_project'),
    t('Page: graph main'),
    t('Page: ER graph'),
    t('Page: relation graph'),
    t('coopera con'),
    t('pane: ER graph'),
    t('View panes'),
    t('pane: relation graph'),
  );
  $export['rbv_view_graph'] = $view;

  return $export;
}
