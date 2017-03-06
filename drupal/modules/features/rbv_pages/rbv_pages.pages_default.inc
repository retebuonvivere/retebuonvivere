<?php
/**
 * @file
 * rbv_pages.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function rbv_pages_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'rbv_calendar_add_event';
  $page->task = 'page';
  $page->admin_title = 'rbv calendar add event';
  $page->admin_description = '';
  $page->path = 'calendario/add-event';
  $page->access = array(
    'plugins' => array(
      1 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 3,
            1 => 6,
            2 => 5,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'action',
    'title' => 'Aggiungi evento',
    'name' => 'navigation',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page__redirect8';
  $handler->task = 'page';
  $handler->subtask = 'rbv_calendar_add_event';
  $handler->handler = 'http_response';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'redirect8',
    'contexts' => array(),
    'relationships' => array(),
    'code' => '301',
    'destination' => 'node/add/event?destination=calendario',
    'access' => array(
      'plugins' => array(),
      'logic' => 'and',
    ),
    'name' => 'redirect8',
  );
  $page->default_handlers[$handler->name] = $handler;
  $pages['rbv_calendar_add_event'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'rbv_events_add_event';
  $page->task = 'page';
  $page->admin_title = 'rbv events add event';
  $page->admin_description = '';
  $page->path = 'calendario/elenco/add-event';
  $page->access = array(
    'plugins' => array(
      1 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 3,
            1 => 6,
            2 => 5,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'action',
    'title' => 'Aggiungi evento',
    'name' => 'navigation',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page__redirect9';
  $handler->task = 'page';
  $handler->subtask = 'rbv_events_add_event';
  $handler->handler = 'http_response';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'redirect9',
    'contexts' => array(),
    'relationships' => array(),
    'code' => '301',
    'destination' => 'node/add/event?destination=calendario/elenco',
    'access' => array(
      'plugins' => array(),
      'logic' => 'and',
    ),
    'name' => 'redirect9',
  );
  $page->default_handlers[$handler->name] = $handler;
  $pages['rbv_events_add_event'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'rbv_graph';
  $page->task = 'page';
  $page->admin_title = 'Graph';
  $page->admin_description = '';
  $page->path = 'rete';
  $page->access = array(
    'logic' => 'and',
    'plugins' => array(),
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Vedi la rete',
    'name' => 'main-menu',
    'weight' => '0',
    'parent' => array(
      'type' => 'normal',
      'title' => 'Vedi la rete',
      'name' => 'main-menu',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_rbv_graph_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'rbv_graph';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'page-graph',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'logic' => 'and',
    ),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'Vedi la rete
Collaborazioni',
    'panels_breadcrumbs_paths' => 'rete',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'radix_boxton';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'contentmain' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '97b38f62-0e99-40ff-b2e5-4f3bbf4a8ec8';
  $display->content = array();
  $display->panels = array();
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['rbv_graph'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'rbv_graph_er';
  $page->task = 'page';
  $page->admin_title = 'Graph er';
  $page->admin_description = '';
  $page->path = 'rete/collaborazioni';
  $page->access = array(
    'logic' => 'and',
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'default tab',
    'title' => 'Collaborazioni',
    'name' => 'navigation',
    'weight' => '0',
    'parent' => array(
      'type' => 'normal',
      'title' => 'Vedi la rete',
      'name' => 'main-menu',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_rbv_graph_er_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'rbv_graph_er';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'page-graph',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'logic' => 'and',
    ),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'Vedi la rete
Collaborazioni',
    'panels_breadcrumbs_paths' => 'rete',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'radix_brenham_flipped';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'contentmain' => NULL,
      'header' => NULL,
      'sidebar' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '97b38f62-0e99-40ff-b2e5-4f3bbf4a8ec8';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-52ba7bbd-18e8-4799-b602-8b4e7fcb106c';
  $pane->panel = 'contentmain';
  $pane->type = 'fieldable_panels_pane';
  $pane->subtype = 'fpid:23';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_mode' => 'full',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '52ba7bbd-18e8-4799-b602-8b4e7fcb106c';
  $display->content['new-52ba7bbd-18e8-4799-b602-8b4e7fcb106c'] = $pane;
  $display->panels['contentmain'][0] = 'new-52ba7bbd-18e8-4799-b602-8b4e7fcb106c';
  $pane = new stdClass();
  $pane->pid = 'new-04f43ddf-2225-4860-8f74-5cbc4fd996d4';
  $pane->panel = 'header';
  $pane->type = 'views_panes';
  $pane->subtype = 'rbv_view_graph-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_settings' => 'fields',
    'header_type' => 'none',
    'view_mode' => 'teaser',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '04f43ddf-2225-4860-8f74-5cbc4fd996d4';
  $display->content['new-04f43ddf-2225-4860-8f74-5cbc4fd996d4'] = $pane;
  $display->panels['header'][0] = 'new-04f43ddf-2225-4860-8f74-5cbc4fd996d4';
  $pane = new stdClass();
  $pane->pid = 'new-9ead19b5-5a93-4ba3-8805-9d8b8a10e3b4';
  $pane->panel = 'header';
  $pane->type = 'fieldable_panels_pane';
  $pane->subtype = 'fpid:26';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_mode' => 'full',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '9ead19b5-5a93-4ba3-8805-9d8b8a10e3b4';
  $display->content['new-9ead19b5-5a93-4ba3-8805-9d8b8a10e3b4'] = $pane;
  $display->panels['header'][1] = 'new-9ead19b5-5a93-4ba3-8805-9d8b8a10e3b4';
  $pane = new stdClass();
  $pane->pid = 'new-9be68ad4-36d0-4e27-baff-e80d0d1f08b1';
  $pane->panel = 'sidebar';
  $pane->type = 'fieldable_panels_pane';
  $pane->subtype = 'fpid:28';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_mode' => 'full',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '9be68ad4-36d0-4e27-baff-e80d0d1f08b1';
  $display->content['new-9be68ad4-36d0-4e27-baff-e80d0d1f08b1'] = $pane;
  $display->panels['sidebar'][0] = 'new-9be68ad4-36d0-4e27-baff-e80d0d1f08b1';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['rbv_graph_er'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'rbv_graph_meshwork';
  $page->task = 'page';
  $page->admin_title = 'Graph meshwork';
  $page->admin_description = '';
  $page->path = 'rete/meshwork';
  $page->access = array(
    'logic' => 'and',
    'plugins' => array(),
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'tab',
    'title' => 'La rete nel tempo',
    'name' => 'navigation',
    'weight' => '1',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_rbv_graph_meshwork_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'rbv_graph_meshwork';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'page-graph-meshwork',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'logic' => 'and',
    ),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'Vedi la rete
La rete nel tempo',
    'panels_breadcrumbs_paths' => 'rete',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'radix_brenham_flipped';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'contentmain' => NULL,
      'header' => NULL,
      'sidebar' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '037678fd-8196-44d8-88a6-82281885d920';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-7c7db9b4-29a6-4872-aa59-299defeb4cc7';
  $pane->panel = 'contentmain';
  $pane->type = 'fieldable_panels_pane';
  $pane->subtype = 'fpid:25';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_mode' => 'full',
    'fieldable_panels_pane' => (object) array(
      'timestamp' => 1443887577,
      'uid' => '1',
      'title' => '',
      'log' => '',
      'vuuid' => '',
      'fpid' => '25',
      'bundle' => 'text',
      'link' => 0,
      'path' => '',
      'reusable' => 0,
      'admin_title' => '',
      'admin_description' => '',
      'category' => 'Reusable Content',
      'view_access' => NULL,
      'edit_access' => NULL,
      'created' => '1411324731',
      'changed' => 1443887577,
      'uuid' => '',
      'language' => '',
      'current_vid' => '1593',
      'field_basic_text_text' => array(
        'und' => array(
          0 => array(
            'value' => '<div class="callout callout-info">
    <h4>La rete nel tempo</h4>
    <p>Per prendersi cura dei beni comuni, le organizzazioni della società civile e dell\'economia solidale collaborano spesso sulla base di progetti e attività specifiche. In questa pagina organizzazioni e progetti/attività sono disegnati come linee nel tempo per mostrare la temporalità delle collaborazioni.</p>
</div>
<div class="callout callout-warning">
    <h4>I dati</h4>
    <p>La rete è disegnata in base ai dati inseriti in retebuonvivere, per questo <strong>è davvero importante la partecipazione di tutti nell\'inserimento dei dati</strong>.</p>
</div>

<svg width="120" height="80">
    <g>
        <g transform="translate(10,12)">
            <line x1="10" y1="12" x2="100" y2="12" style="stroke: #ABDC0A; stroke-width: 4px;"></line>
            <text dx="10" dy="1" font-size="13">Organizzazione</text>
        </g>
        <g transform="translate(10,36)">
            <line x1="10" y1="30" x2="100" y2="30"  style="stroke: #378722; stroke-width: 4px;"></line>
            <text dx="10" dy="18" font-size="13">Progetto/attività</text>
        </g>
    </g>
</svg>',
            'format' => 'rbv_full_html',
          ),
        ),
      ),
      'rdf_mapping' => array(),
      'revision' => 1,
      'is_new' => FALSE,
      'original' => (object) array(
        'vid' => '1593',
        'timestamp' => '1443887558',
        'uid' => '1',
        'title' => '',
        'log' => '',
        'vuuid' => '',
        'fpid' => '25',
        'bundle' => 'text',
        'link' => '0',
        'path' => '',
        'reusable' => '0',
        'admin_title' => '',
        'admin_description' => '',
        'category' => 'Reusable Content',
        'view_access' => NULL,
        'edit_access' => NULL,
        'created' => '1411324731',
        'changed' => '1443887558',
        'uuid' => '',
        'language' => '',
        'current_vid' => '1593',
        'field_basic_text_text' => array(
          'und' => array(
            0 => array(
              'value' => '<div class="callout callout-info">
    <h4>La rete nel tempo</h4>
    <p>Per prendersi cura dei beni comuni, le organizzazioni della società civile e dell\'economia solidale collaborano spesso sulla base di progetti e attività specifiche. In questa pagina organizzazioni e progetti/attività sono disegnati come linee nel tempo per mostrare la temporalità delle collaborazioni.</p>
</div>
<div class="callout callout-warning">
    <h4>I dati</h4>
    <p>La rete è disegnata in base ai dati inseriti in retebuonvivere, per questo <strong>è davvero importante la partecipazione di tutti nell\'inserimento dei dati</strong>.</p>
</div>

<svg width="120" height="80">
    <g>
        <g transform="translate(10,12)">
            <line x1="10" y1="12" x2="100" y2="12" style="stroke: #ABDC0A; stroke-width: 5px;"></line>
            <text dx="10" dy="1" font-size="13">Organizzazione</text>
        </g>
        <g transform="translate(10,36)">
            <line x1="10" y1="30" x2="100" y2="30"  style="stroke: #378722; stroke-width: 5px;"></line>
            <text dx="10" dy="18" font-size="13">Progetto/attività</text>
        </g>
    </g>
</svg>',
              'format' => 'rbv_full_html',
              'safe_value' => '<div class="callout callout-info">
    <h4>La rete nel tempo</h4>
    <p>Per prendersi cura dei beni comuni, le organizzazioni della società civile e dell\'economia solidale collaborano spesso sulla base di progetti e attività specifiche. In questa pagina organizzazioni e progetti/attività sono disegnati come linee nel tempo per mostrare la temporalità delle collaborazioni.</p>
</div>
<div class="callout callout-warning">
    <h4>I dati</h4>
    <p>La rete è disegnata in base ai dati inseriti in retebuonvivere, per questo <strong>è davvero importante la partecipazione di tutti nell\'inserimento dei dati</strong>.</p>
</div>

<svg width="120" height="80">
    <g>
        <g transform="translate(10,12)">
            <line x1="10" y1="12" x2="100" y2="12" style="stroke: #ABDC0A; stroke-width: 5px;"></line>
            <text dx="10" dy="1" font-size="13">Organizzazione</text>
        </g>
        <g transform="translate(10,36)">
            <line x1="10" y1="30" x2="100" y2="30"  style="stroke: #378722; stroke-width: 5px;"></line>
            <text dx="10" dy="18" font-size="13">Progetto/attività</text>
        </g>
    </g>
</svg>',
            ),
          ),
        ),
        'rdf_mapping' => array(),
      ),
      'old_vid' => '1593',
      'vid' => '1594',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '7c7db9b4-29a6-4872-aa59-299defeb4cc7';
  $display->content['new-7c7db9b4-29a6-4872-aa59-299defeb4cc7'] = $pane;
  $display->panels['contentmain'][0] = 'new-7c7db9b4-29a6-4872-aa59-299defeb4cc7';
  $pane = new stdClass();
  $pane->pid = 'new-64890f5d-75e3-4aee-810a-857c265cc5ff';
  $pane->panel = 'header';
  $pane->type = 'fieldable_panels_pane';
  $pane->subtype = 'fpid:22';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_mode' => 'full',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => array(
      'devices' => array(
        'hidden-xs' => 0,
        'hidden-sm' => 0,
        'hidden-md' => 0,
        'hidden-lg' => 0,
      ),
      'pane_style' => array(
        'clearfix' => 'clearfix',
        'pull-left' => 0,
        'pull-right' => 0,
        'jumbotron' => 0,
        'well' => 0,
      ),
    ),
    'style' => 'kalacustomize',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '64890f5d-75e3-4aee-810a-857c265cc5ff';
  $display->content['new-64890f5d-75e3-4aee-810a-857c265cc5ff'] = $pane;
  $display->panels['header'][0] = 'new-64890f5d-75e3-4aee-810a-857c265cc5ff';
  $pane = new stdClass();
  $pane->pid = 'new-8b8e0888-dcbd-42ad-be92-b2e58e5def06';
  $pane->panel = 'sidebar';
  $pane->type = 'fieldable_panels_pane';
  $pane->subtype = 'fpid:27';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_mode' => 'full',
  );
  $pane->cache = array();
  $pane->style = array(
    'style' => 'default',
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '8b8e0888-dcbd-42ad-be92-b2e58e5def06';
  $display->content['new-8b8e0888-dcbd-42ad-be92-b2e58e5def06'] = $pane;
  $display->panels['sidebar'][0] = 'new-8b8e0888-dcbd-42ad-be92-b2e58e5def06';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['rbv_graph_meshwork'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'rbv_graph_relation';
  $page->task = 'page';
  $page->admin_title = 'Graph relation';
  $page->admin_description = '';
  $page->path = 'rete/collaboratori';
  $page->access = array(
    'logic' => 'and',
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'tab',
    'title' => 'Collaboratori',
    'name' => 'navigation',
    'weight' => '2',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_rbv_graph_relation_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'rbv_graph_relation';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'page-graph-relation',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'logic' => 'and',
    ),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'Vedi la rete
Collaboratori',
    'panels_breadcrumbs_paths' => 'rete',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'radix_brenham_flipped';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'contentmain' => NULL,
      'header' => NULL,
      'sidebar' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '18794b56-3422-4540-8c2e-326fd13f6c67';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-bb96666e-8d0f-490a-bf47-a2a980d617ca';
  $pane->panel = 'contentmain';
  $pane->type = 'fieldable_panels_pane';
  $pane->subtype = 'fpid:24';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_mode' => 'full',
    'fieldable_panels_pane' => (object) array(
      'timestamp' => 1442583052,
      'uid' => '1',
      'title' => '',
      'log' => '',
      'vuuid' => '',
      'fpid' => '24',
      'bundle' => 'text',
      'link' => 0,
      'path' => '',
      'reusable' => 0,
      'admin_title' => '',
      'admin_description' => '',
      'category' => 'Reusable Content',
      'view_access' => NULL,
      'edit_access' => NULL,
      'created' => '1411324543',
      'changed' => 1442583052,
      'uuid' => '',
      'language' => '',
      'current_vid' => '1590',
      'field_basic_text_text' => array(
        'und' => array(
          0 => array(
            'value' => '<div class="callout callout-info">
    <h4>Una rete</h4>
    <p>Questa pagina mostra la rete di collaborazioni tra le organizzazioni della società civile e dell\'economia solidale. Se due organizzazioni collaborano ad uno stesso progetto/attività, viene tracciata una linea che le collega: sono cioè considerate collaboratrici.</p>
    <p>
	    <svg width="300" height="30">
		  <g>
		    <g transform="translate(10,12)">
		      <circle r="9" style="fill: #ABDC0A; stroke: #fff; stroke-width: 4px;"></circle>
		      <text dx="10" dy="1" font-size="13">Organizzazione</text>
		    </g>
		  </g>
	    </svg>
	</p>
	<p><strong>Frequenza/intensità</strong></p>
    <p>
	    <svg width="420" height="60">
	      <g>
	        <g transform="translate(10,12)">
		      <line class="link" stroke="#999" stroke-width="0.9" style="stroke-opacity: 0.2;" x1="0" y1="5" x2="50" y2="0"></line>
		      <line class="link" stroke="#999" stroke-width="5" style="stroke-opacity: 0.5;" x1="0" y1="20" x2="50" y2="15"></line>
		      <line class="link" stroke="#999" stroke-width="10" style="stroke-opacity: 1;" x1="0" y1="40" x2="50" y2="35"></line>
		      <text dx="60" dy="13" font-size="13">Relazione di collaborazione</text>
		      <text dx="60" dy="33" font-size="13">Spessore linea = numero di progetti/attività in comune</text>
		    </g>
		  </g>
	    </svg>
    </p>
</div>
<div class="callout callout-warning">
    <h4>I dati</h4>
    <p>La rete è disegnata in base ai dati inseriti in retebuonvivere, per questo <strong>è davvero importante la partecipazione di tutti nell\'inserimento dei dati</strong>.</p>
</div>',
            'format' => 'rbv_full_html',
          ),
        ),
      ),
      'rdf_mapping' => array(),
      'revision' => 1,
      'is_new' => FALSE,
      'original' => (object) array(
        'vid' => '1590',
        'timestamp' => '1442582188',
        'uid' => '1',
        'title' => '',
        'log' => '',
        'vuuid' => '',
        'fpid' => '24',
        'bundle' => 'text',
        'link' => '0',
        'path' => '',
        'reusable' => '0',
        'admin_title' => '',
        'admin_description' => '',
        'category' => 'Reusable Content',
        'view_access' => NULL,
        'edit_access' => NULL,
        'created' => '1411324543',
        'changed' => '1442582188',
        'uuid' => '',
        'language' => '',
        'current_vid' => '1590',
        'field_basic_text_text' => array(
          'und' => array(
            0 => array(
              'value' => '<div class="callout callout-info">
    <h4>Una rete</h4>
    <p>Questa pagina mostra la rete di collaborazioni tra le organizzazioni della società civile e dell\'economia solidale. Se due organizzazioni collaborano ad uno stesso progetto/attività, viene tracciata una linea che le collega: sono cioè considerate collaboratrici.</p>
</div>
<div class="callout callout-warning">
    <h4>I dati</h4>
    <p>La rete è disegnata in base ai dati inseriti in retebuonvivere, per questo <strong>è davvero importante la partecipazione di tutti nell\'inserimento dei dati</strong>.</p>
</div>
<p>Vengono visualizzate soltanto le organizzazioni connesse tramite almeno una collaborazione. Per questo tutte le organizzazioni di retebuonvivere che non hanno ancora inserito un progetto/attività o una collaborazione, non vengono visualizzate.</p>

  <svg width="300" height="200">
   <g>
    <g transform="translate(10,12)">
     <circle r="9" style="fill: #ABDC0A; stroke: #fff; stroke-width: 4px;"></circle>
     <text dx="10" dy="1" font-size="13">Organizzazione</text>
     <line class="link" stroke="#999" stroke-width="0.9" style="stroke-opacity: 0.2;" x1="0" y1="25" x2="50" y2="25"></line>
     <line class="link" stroke="#999" stroke-width="5" style="stroke-opacity: 0.5;" x1="0" y1="40" x2="50" y2="40"></line>
     <line class="link" stroke="#999" stroke-width="10" style="stroke-opacity: 1;" x1="0" y1="60" x2="50" y2="60"></line>
     <text dx="60" dy="40" font-size="13">Relazione di collaborazione</text>
     <text dx="60" dy="60" font-size="13">Spessore linea = numero di progetti/attività in comune</text>
    </g>
    </g>
   </g>
  </svg>',
              'format' => 'rbv_full_html',
              'safe_value' => '<div class="callout callout-info">
    <h4>Una rete</h4>
    <p>Questa pagina mostra la rete di collaborazioni tra le organizzazioni della società civile e dell\'economia solidale. Se due organizzazioni collaborano ad uno stesso progetto/attività, viene tracciata una linea che le collega: sono cioè considerate collaboratrici.</p>
</div>
<div class="callout callout-warning">
    <h4>I dati</h4>
    <p>La rete è disegnata in base ai dati inseriti in retebuonvivere, per questo <strong>è davvero importante la partecipazione di tutti nell\'inserimento dei dati</strong>.</p>
</div>
<p>Vengono visualizzate soltanto le organizzazioni connesse tramite almeno una collaborazione. Per questo tutte le organizzazioni di retebuonvivere che non hanno ancora inserito un progetto/attività o una collaborazione, non vengono visualizzate.</p>

  <svg width="300" height="200">
   <g>
    <g transform="translate(10,12)">
     <circle r="9" style="fill: #ABDC0A; stroke: #fff; stroke-width: 4px;"></circle>
     <text dx="10" dy="1" font-size="13">Organizzazione</text>
     <line class="link" stroke="#999" stroke-width="0.9" style="stroke-opacity: 0.2;" x1="0" y1="25" x2="50" y2="25"></line>
     <line class="link" stroke="#999" stroke-width="5" style="stroke-opacity: 0.5;" x1="0" y1="40" x2="50" y2="40"></line>
     <line class="link" stroke="#999" stroke-width="10" style="stroke-opacity: 1;" x1="0" y1="60" x2="50" y2="60"></line>
     <text dx="60" dy="40" font-size="13">Relazione di collaborazione</text>
     <text dx="60" dy="60" font-size="13">Spessore linea = numero di progetti/attività in comune</text>
    </g>
    </g>
   </g>
  </svg>',
            ),
          ),
        ),
        'rdf_mapping' => array(),
      ),
      'old_vid' => '1590',
      'vid' => '1591',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'bb96666e-8d0f-490a-bf47-a2a980d617ca';
  $display->content['new-bb96666e-8d0f-490a-bf47-a2a980d617ca'] = $pane;
  $display->panels['contentmain'][0] = 'new-bb96666e-8d0f-490a-bf47-a2a980d617ca';
  $pane = new stdClass();
  $pane->pid = 'new-7bc5a57d-45bc-4bd7-882e-623587a7d77a';
  $pane->panel = 'header';
  $pane->type = 'views_panes';
  $pane->subtype = 'rbv_view_graph-panel_pane_2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_settings' => 'fields',
    'header_type' => 'none',
    'view_mode' => 'teaser',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '7bc5a57d-45bc-4bd7-882e-623587a7d77a';
  $display->content['new-7bc5a57d-45bc-4bd7-882e-623587a7d77a'] = $pane;
  $display->panels['header'][0] = 'new-7bc5a57d-45bc-4bd7-882e-623587a7d77a';
  $pane = new stdClass();
  $pane->pid = 'new-10b98e57-b996-4929-930a-86befb3db113';
  $pane->panel = 'header';
  $pane->type = 'fieldable_panels_pane';
  $pane->subtype = 'fpid:26';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_mode' => 'full',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '10b98e57-b996-4929-930a-86befb3db113';
  $display->content['new-10b98e57-b996-4929-930a-86befb3db113'] = $pane;
  $display->panels['header'][1] = 'new-10b98e57-b996-4929-930a-86befb3db113';
  $pane = new stdClass();
  $pane->pid = 'new-4eac88bd-12b7-4f73-80cb-ba18b705e569';
  $pane->panel = 'sidebar';
  $pane->type = 'fieldable_panels_pane';
  $pane->subtype = 'fpid:28';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_mode' => 'full',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '4eac88bd-12b7-4f73-80cb-ba18b705e569';
  $display->content['new-4eac88bd-12b7-4f73-80cb-ba18b705e569'] = $pane;
  $display->panels['sidebar'][0] = 'new-4eac88bd-12b7-4f73-80cb-ba18b705e569';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-7bc5a57d-45bc-4bd7-882e-623587a7d77a';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['rbv_graph_relation'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'rbv_group_calendar';
  $page->task = 'page';
  $page->admin_title = 'RBV group calendar';
  $page->admin_description = '';
  $page->path = 'node/%node/eventi';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'node_type',
        'settings' => array(
          'type' => array(
            'org' => 'org',
          ),
        ),
        'context' => 'argument_entity_id:node_1',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'tab',
    'title' => 'Eventi',
    'name' => 'navigation',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array(
    'node' => array(
      'id' => 1,
      'identifier' => 'Node: ID',
      'name' => 'entity_id:node',
      'settings' => array(),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_rbv_group_calendar_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'rbv_group_calendar';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel group calendar',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(),
      'logic' => 'and',
    ),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'organizzazioni
%node
eventi
calendario',
    'panels_breadcrumbs_paths' => 'organizzazioni
%node:url',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'burr_flipped';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'contentmain' => NULL,
      'sidebar' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '750e4fe8-ed56-4f98-a679-ea4a938fa79a';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-2ed37283-a440-43fb-bf0c-7aacc81b0648';
  $pane->panel = 'contentmain';
  $pane->type = 'views_panes';
  $pane->subtype = 'rbv_view_calendar-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => array(
      0 => 'argument_entity_id:node_1',
    ),
    'view_settings' => 'fields',
    'header_type' => 'none',
    'view_mode' => 'teaser',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '2ed37283-a440-43fb-bf0c-7aacc81b0648';
  $display->content['new-2ed37283-a440-43fb-bf0c-7aacc81b0648'] = $pane;
  $display->panels['contentmain'][0] = 'new-2ed37283-a440-43fb-bf0c-7aacc81b0648';
  $pane = new stdClass();
  $pane->pid = 'new-5132e499-9dd0-4ac2-9bcc-c43a0f87c8c0';
  $pane->panel = 'sidebar';
  $pane->type = 'views_panes';
  $pane->subtype = 'rbv_view_group_content-panel_pane_2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'use_pager' => 1,
    'pager_id' => '0',
    'items_per_page' => '4',
    'context' => array(
      0 => 'argument_entity_id:node_1',
    ),
    'view_mode' => 'vmode_group_content',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '5132e499-9dd0-4ac2-9bcc-c43a0f87c8c0';
  $display->content['new-5132e499-9dd0-4ac2-9bcc-c43a0f87c8c0'] = $pane;
  $display->panels['sidebar'][0] = 'new-5132e499-9dd0-4ac2-9bcc-c43a0f87c8c0';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['rbv_group_calendar'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'rbv_group_calendar_add';
  $page->task = 'page';
  $page->admin_title = 'rbv group calendar add';
  $page->admin_description = '';
  $page->path = 'node/%node/eventi/add';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'node_type',
        'settings' => array(
          'type' => array(
            'org' => 'org',
          ),
        ),
        'context' => 'argument_entity_id:node_1',
        'not' => FALSE,
      ),
      1 => array(
        'name' => 'og_perm',
        'settings' => array(
          'perm' => 'create event content',
        ),
        'context' => array(
          0 => 'logged-in-user',
          1 => 'argument_entity_id:node_1',
        ),
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'action',
    'title' => 'Aggiungi evento',
    'name' => 'navigation',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array(
    'node' => array(
      'id' => 1,
      'identifier' => 'Node: ID',
      'name' => 'entity_id:node',
      'settings' => array(),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_rbv_group_calendar_add_http_response';
  $handler->task = 'page';
  $handler->subtask = 'rbv_group_calendar_add';
  $handler->handler = 'http_response';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'HTTP response code',
    'contexts' => array(),
    'relationships' => array(),
    'code' => '301',
    'destination' => 'node/add/event?og_group_ref=%node:nid&destination=node/%node:nid/eventi',
    'access' => array(
      'plugins' => array(),
      'logic' => 'and',
    ),
  );
  $page->default_handlers[$handler->name] = $handler;
  $pages['rbv_group_calendar_add'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'rbv_group_calendar_full';
  $page->task = 'page';
  $page->admin_title = 'rbv group calendar full';
  $page->admin_description = '';
  $page->path = 'node/%node/eventi/calendario';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'node_type',
        'settings' => array(
          'type' => array(
            'org' => 'org',
          ),
        ),
        'context' => 'argument_entity_id:node_1',
        'not' => FALSE,
      ),
      1 => array(
        'name' => 'php',
        'settings' => array(
          'description' => 'empty view',
          'php' => '$vista = views_get_view_result(\'rbv_view_calendar\',\'panel_pane_1\',$contexts[\'argument_entity_id:node_1\']->data->nid);
return empty($vista);',
        ),
        'not' => TRUE,
      ),
    ),
    'logic' => 'and',
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'default tab',
    'title' => 'Calendario',
    'name' => 'navigation',
    'weight' => '0',
    'parent' => array(
      'type' => 'tab',
      'title' => 'Eventi',
      'name' => 'navigation',
      'weight' => '4',
    ),
  );
  $page->arguments = array(
    'node' => array(
      'id' => 1,
      'identifier' => 'Node: ID',
      'name' => 'entity_id:node',
      'settings' => array(),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_rbv_group_calendar_full_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'rbv_group_calendar_full';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel group calendar',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(),
      'logic' => 'and',
    ),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'organizzazioni
%node
eventi
calendario',
    'panels_breadcrumbs_paths' => 'organizzazioni
%node:url
%node:url/eventi',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'radix_burr_flipped';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'sidebar' => NULL,
      'contentmain' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'e760bc41-21b9-4e8a-878a-61431d6f815b';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-92f83d58-9f6a-4b0d-9f38-cb2a1ff5ff37';
  $pane->panel = 'contentmain';
  $pane->type = 'views_panes';
  $pane->subtype = 'rbv_view_calendar-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_settings' => 'fields',
    'header_type' => 'none',
    'view_mode' => 'teaser',
    'arguments' => array(
      'gid' => '1',
    ),
    'context' => array(
      0 => 'argument_entity_id:node_1',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '92f83d58-9f6a-4b0d-9f38-cb2a1ff5ff37';
  $display->content['new-92f83d58-9f6a-4b0d-9f38-cb2a1ff5ff37'] = $pane;
  $display->panels['contentmain'][0] = 'new-92f83d58-9f6a-4b0d-9f38-cb2a1ff5ff37';
  $pane = new stdClass();
  $pane->pid = 'new-558b77e0-7289-4cd0-b8b0-709105d0e16a';
  $pane->panel = 'sidebar';
  $pane->type = 'views_panes';
  $pane->subtype = 'rbv_view_group_content-panel_pane_2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'items_per_page' => '3',
    'context' => array(
      0 => 'argument_entity_id:node_1',
    ),
    'view_mode' => 'vmode_group_content',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '558b77e0-7289-4cd0-b8b0-709105d0e16a';
  $display->content['new-558b77e0-7289-4cd0-b8b0-709105d0e16a'] = $pane;
  $display->panels['sidebar'][0] = 'new-558b77e0-7289-4cd0-b8b0-709105d0e16a';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-92f83d58-9f6a-4b0d-9f38-cb2a1ff5ff37';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['rbv_group_calendar_full'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'rbv_group_calendar_list';
  $page->task = 'page';
  $page->admin_title = 'rbv group calendar list';
  $page->admin_description = '';
  $page->path = 'node/%node/eventi/elenco';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'node_type',
        'settings' => array(
          'type' => array(
            'org' => 'org',
          ),
        ),
        'context' => 'argument_entity_id:node_1',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'tab',
    'title' => 'Elenco',
    'name' => 'navigation',
    'weight' => '1',
    'parent' => array(
      'type' => 'tab',
      'title' => 'eventi',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array(
    'node' => array(
      'id' => 1,
      'identifier' => 'Node: ID',
      'name' => 'entity_id:node',
      'settings' => array(),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_rbv_group_calendar_list_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'rbv_group_calendar_list';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel group calendar',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(),
      'logic' => 'and',
    ),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'organizzazioni
%node
eventi
elenco',
    'panels_breadcrumbs_paths' => 'organizzazioni
%node:url
%node:url/eventi',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'boxton';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'sidebar' => NULL,
      'contentmain' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'e1f2ebef-b803-418f-bd2a-f0e7ea75eeab';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-ea841d30-0cf1-479e-9950-84e883f574c9';
  $pane->panel = 'contentmain';
  $pane->type = 'views_panes';
  $pane->subtype = 'rbv_view_group_content-panel_pane_3';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'more_link' => 1,
    'items_per_page' => '2',
    'context' => array(
      0 => 'argument_entity_id:node_1',
    ),
    'view_mode' => 'teaser',
    'override_title' => '',
    'override_title_text' => '',
    'widget_title' => 'Tutti gli eventi',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'ea841d30-0cf1-479e-9950-84e883f574c9';
  $display->content['new-ea841d30-0cf1-479e-9950-84e883f574c9'] = $pane;
  $display->panels['contentmain'][0] = 'new-ea841d30-0cf1-479e-9950-84e883f574c9';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['rbv_group_calendar_list'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'rbv_group_events_add';
  $page->task = 'page';
  $page->admin_title = 'rbv group events add';
  $page->admin_description = '';
  $page->path = 'node/%node/eventi/elenco/add';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'node_type',
        'settings' => array(
          'type' => array(
            'org' => 'org',
          ),
        ),
        'context' => 'argument_entity_id:node_1',
        'not' => FALSE,
      ),
      1 => array(
        'name' => 'og_perm',
        'settings' => array(
          'perm' => 'create event content',
        ),
        'context' => array(
          0 => 'logged-in-user',
          1 => 'argument_entity_id:node_1',
        ),
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'action',
    'title' => 'Aggiungi evento',
    'name' => 'navigation',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array(
    'node' => array(
      'id' => 1,
      'identifier' => 'Node: ID',
      'name' => 'entity_id:node',
      'settings' => array(),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page__redirect';
  $handler->task = 'page';
  $handler->subtask = 'rbv_group_events_add';
  $handler->handler = 'http_response';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'HTTP response code',
    'contexts' => array(),
    'relationships' => array(),
    'code' => '301',
    'destination' => 'node/add/event?og_group_ref=%node:nid&destination=node/%node:nid/eventi/elenco',
    'access' => array(
      'plugins' => array(),
      'logic' => 'and',
    ),
    'name' => 'redirect',
  );
  $page->default_handlers[$handler->name] = $handler;
  $pages['rbv_group_events_add'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'rbv_group_forum';
  $page->task = 'page';
  $page->admin_title = 'rbv group forum';
  $page->admin_description = '';
  $page->path = 'node/%node/forum';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'node_type',
        'settings' => array(
          'type' => array(
            'org' => 'org',
          ),
        ),
        'context' => 'argument_entity_id:node_1',
        'not' => FALSE,
      ),
      1 => array(
        'name' => 'php',
        'settings' => array(
          'description' => 'empty view',
          'php' => '$vista = views_get_view_result(\'rbv_group_taxonomy\',\'panel_pane_1\',$contexts[\'argument_entity_id:node_1\']->data->nid);
return empty($vista);',
        ),
        'not' => TRUE,
      ),
    ),
    'logic' => 'and',
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'tab',
    'title' => 'Discussioni',
    'name' => 'navigation',
    'weight' => '1',
    'parent' => array(
      'type' => 'tab',
      'title' => 'Eventi',
      'name' => 'navigation',
      'weight' => '4',
    ),
  );
  $page->arguments = array(
    'node' => array(
      'id' => 1,
      'identifier' => 'Node: ID',
      'name' => 'entity_id:node',
      'settings' => array(),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_rbv_group_forum__panel_context_354fb601-567b-4f27-9e23-68eced8086b2';
  $handler->task = 'page';
  $handler->subtask = 'rbv_group_forum';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel group forum',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(),
      'logic' => 'and',
    ),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'organizzazioni
%node
discussioni',
    'panels_breadcrumbs_paths' => 'organizzazioni
%node:url
%node:url/discussioni',
    'panels_breadcrumbs_home' => 1,
    'name' => '',
  );
  $display = new panels_display();
  $display->layout = 'radix_burr_flipped';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'sidebar' => NULL,
      'contentmain' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'e760bc41-21b9-4e8a-878a-61431d6f815b';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-4d1ce6ef-424a-4251-a8c8-fa4e99d46f66';
  $pane->panel = 'contentmain';
  $pane->type = 'views_panes';
  $pane->subtype = 'rbv_view_group_content-panel_pane_7';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => array(
      0 => 'argument_entity_id:node_1',
    ),
    'view_settings' => 'rendered_entity',
    'header_type' => 'none',
    'view_mode' => 'vmode_group_content',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '4d1ce6ef-424a-4251-a8c8-fa4e99d46f66';
  $display->content['new-4d1ce6ef-424a-4251-a8c8-fa4e99d46f66'] = $pane;
  $display->panels['contentmain'][0] = 'new-4d1ce6ef-424a-4251-a8c8-fa4e99d46f66';
  $pane = new stdClass();
  $pane->pid = 'new-d61bc637-b15a-4556-8639-a6f020dd20e7';
  $pane->panel = 'sidebar';
  $pane->type = 'views_panes';
  $pane->subtype = 'rbv_group_taxonomy-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => array(
      0 => 'argument_entity_id:node_1',
    ),
    'view_settings' => 'fields',
    'header_type' => 'none',
    'view_mode' => 'full',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'd61bc637-b15a-4556-8639-a6f020dd20e7';
  $display->content['new-d61bc637-b15a-4556-8639-a6f020dd20e7'] = $pane;
  $display->panels['sidebar'][0] = 'new-d61bc637-b15a-4556-8639-a6f020dd20e7';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['rbv_group_forum'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'rbv_group_own_proj_add';
  $page->task = 'page';
  $page->admin_title = 'rbv group own proj add';
  $page->admin_description = '';
  $page->path = 'node/%node/progetti/propri/add';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'node_type',
        'settings' => array(
          'type' => array(
            'org' => 'org',
          ),
        ),
        'context' => 'argument_entity_id:node_1',
        'not' => FALSE,
      ),
      1 => array(
        'name' => 'og_perm',
        'settings' => array(
          'perm' => 'create project content',
        ),
        'context' => array(
          0 => 'logged-in-user',
          1 => 'argument_entity_id:node_1',
        ),
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'action',
    'title' => 'Aggiungi progetto/attività',
    'name' => 'navigation',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array(
    'node' => array(
      'id' => 1,
      'identifier' => 'Node: ID',
      'name' => 'entity_id:node',
      'settings' => array(),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page__redirect4';
  $handler->task = 'page';
  $handler->subtask = 'rbv_group_own_proj_add';
  $handler->handler = 'http_response';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'redirect4',
    'contexts' => array(),
    'relationships' => array(),
    'code' => '301',
    'destination' => 'node/add/project?og_group_ref=%node:nid&destination=node/%node:nid/progetti/propri',
    'access' => array(
      'plugins' => array(),
      'logic' => 'and',
    ),
    'name' => 'redirect4',
  );
  $page->default_handlers[$handler->name] = $handler;
  $pages['rbv_group_own_proj_add'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'rbv_group_projects_add';
  $page->task = 'page';
  $page->admin_title = 'rbv group projects add';
  $page->admin_description = '';
  $page->path = 'node/%node/progetti/add';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'node_type',
        'settings' => array(
          'type' => array(
            'org' => 'org',
          ),
        ),
        'context' => 'argument_entity_id:node_1',
        'not' => FALSE,
      ),
      1 => array(
        'name' => 'og_perm',
        'settings' => array(
          'perm' => 'create project content',
        ),
        'context' => array(
          0 => 'logged-in-user',
          1 => 'argument_entity_id:node_1',
        ),
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'action',
    'title' => 'Aggiungi progetto/attività',
    'name' => 'navigation',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array(
    'node' => array(
      'id' => 1,
      'identifier' => 'Node: ID',
      'name' => 'entity_id:node',
      'settings' => array(),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page__http_response_code';
  $handler->task = 'page';
  $handler->subtask = 'rbv_group_projects_add';
  $handler->handler = 'http_response';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'HTTP response code',
    'contexts' => array(),
    'relationships' => array(),
    'code' => '301',
    'destination' => 'node/add/project?og_group_ref=%node:nid&destination=node/%node:nid/progetti',
    'access' => array(
      'plugins' => array(),
      'logic' => 'and',
    ),
    'name' => 'http_response_code',
  );
  $page->default_handlers[$handler->name] = $handler;
  $pages['rbv_group_projects_add'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'rbv_group_projects_add_col';
  $page->task = 'page';
  $page->admin_title = 'rbv group projects add col';
  $page->admin_description = '';
  $page->path = 'node/%node/progetti/add-collaboration';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'node_type',
        'settings' => array(
          'type' => array(
            'org' => 'org',
          ),
        ),
        'context' => 'argument_entity_id:node_1',
        'not' => FALSE,
      ),
      1 => array(
        'name' => 'og_perm',
        'settings' => array(
          'perm' => 'create collaboration content',
        ),
        'context' => array(
          0 => 'logged-in-user',
          1 => 'argument_entity_id:node_1',
        ),
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'action',
    'title' => 'Aggiungi collaborazione',
    'name' => 'navigation',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array(
    'node' => array(
      'id' => 1,
      'identifier' => 'Node: ID',
      'name' => 'entity_id:node',
      'settings' => array(),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page__redirect3';
  $handler->task = 'page';
  $handler->subtask = 'rbv_group_projects_add_col';
  $handler->handler = 'http_response';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'redirect3',
    'contexts' => array(),
    'relationships' => array(),
    'code' => '301',
    'destination' => 'node/add/collaboration?og_group_ref=%node:nid&field_rel_source=%node:nid&destination=node/%node:nid/progetti',
    'access' => array(
      'plugins' => array(),
      'logic' => 'and',
    ),
    'name' => 'redirect3',
  );
  $page->default_handlers[$handler->name] = $handler;
  $pages['rbv_group_projects_add_col'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'rbv_group_projects_collaborations';
  $page->task = 'page';
  $page->admin_title = 'rbv group projects collaborations';
  $page->admin_description = '';
  $page->path = 'node/%node/progetti/collaborazioni';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'node_type',
        'settings' => array(
          'type' => array(
            'org' => 'org',
          ),
        ),
        'context' => 'argument_entity_id:node_1',
        'not' => FALSE,
      ),
      1 => array(
        'name' => 'php',
        'settings' => array(
          'description' => 'empty view',
          'php' => '$vista = views_get_view_result(\'rbv_view_graph\',\'panel_pane_5\',$contexts[\'argument_entity_id:node_1\']->data->nid);
return empty($vista);',
        ),
        'not' => TRUE,
      ),
    ),
    'logic' => 'and',
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'default tab',
    'title' => 'Tutti i progetti/attività cui collaboriamo',
    'name' => 'navigation',
    'weight' => '0',
    'parent' => array(
      'type' => 'tab',
      'title' => 'Progetti/attività',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array(
    'node' => array(
      'id' => 1,
      'identifier' => 'Node: ID',
      'name' => 'entity_id:node',
      'settings' => array(),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_rbv_group_projects_collaborations_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'rbv_group_projects_collaborations';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel all group projects',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'organizzazioni
%node
progetti/attività',
    'panels_breadcrumbs_paths' => 'organizzazioni
%node:url',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'radix_burr_flipped';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'contentmain' => NULL,
      'sidebar' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '3f23cfbc-d332-49c2-8303-90749f3aa839';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-d840ec8b-f7ff-499e-a3eb-11eec8075194';
  $pane->panel = 'contentmain';
  $pane->type = 'views_panes';
  $pane->subtype = 'rbv_view_group_content-panel_pane_6';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'items_per_page' => '20',
    'context' => array(
      0 => 'argument_entity_id:node_1',
    ),
    'view_settings' => 'fields',
    'header_type' => 'none',
    'view_mode' => 'teaser',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'd840ec8b-f7ff-499e-a3eb-11eec8075194';
  $display->content['new-d840ec8b-f7ff-499e-a3eb-11eec8075194'] = $pane;
  $display->panels['contentmain'][0] = 'new-d840ec8b-f7ff-499e-a3eb-11eec8075194';
  $pane = new stdClass();
  $pane->pid = 'new-a66c2ce8-cab3-48ae-94cd-ad4a4dba27ce';
  $pane->panel = 'sidebar';
  $pane->type = 'views_panes';
  $pane->subtype = 'rbv_view_graph-panel_pane_5';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'php',
        'settings' => array(
          'description' => 'empty view',
          'php' => '$vista = views_get_view_result(\'rbv_view_graph\',\'panel_pane_5\',$contexts[\'panelizer\']->data->nid);
return empty($vista);',
        ),
        'not' => TRUE,
      ),
    ),
  );
  $pane->configuration = array(
    'override_title' => '',
    'override_title_text' => '',
    'override_title_heading' => 'h2',
    'view_settings' => 'fields',
    'header_type' => 'none',
    'view_mode' => 'teaser',
    'widget_title' => 'Rete',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'a66c2ce8-cab3-48ae-94cd-ad4a4dba27ce';
  $display->content['new-a66c2ce8-cab3-48ae-94cd-ad4a4dba27ce'] = $pane;
  $display->panels['sidebar'][0] = 'new-a66c2ce8-cab3-48ae-94cd-ad4a4dba27ce';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['rbv_group_projects_collaborations'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'rbv_group_projects_collaborations_own_projects';
  $page->task = 'page';
  $page->admin_title = 'rbv group projects collaborations own projects';
  $page->admin_description = '';
  $page->path = 'node/%node/progetti/propri';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'node_type',
        'settings' => array(
          'type' => array(
            'org' => 'org',
          ),
        ),
        'context' => 'argument_entity_id:node_1',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'tab',
    'title' => 'Progetti/attività organizzati da noi',
    'name' => 'navigation',
    'weight' => '0',
    'parent' => array(
      'type' => 'tab',
      'title' => 'Progetti/attività',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array(
    'node' => array(
      'id' => 1,
      'identifier' => 'Node: ID',
      'name' => 'entity_id:node',
      'settings' => array(),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_rbv_group_projects_collaborations_own_projects_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'rbv_group_projects_collaborations_own_projects';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel all group projects',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'organizzazioni
%node
progetti/attività',
    'panels_breadcrumbs_paths' => 'organizzazioni
%node:url',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'boxton';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'contentmain' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'c991e1f3-2b9c-488e-9713-d5da0c98254d';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-438f97fc-c413-436f-bf19-515783d44b7b';
  $pane->panel = 'contentmain';
  $pane->type = 'views_panes';
  $pane->subtype = 'rbv_view_group_content-panel_pane_4';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'items_per_page' => '20',
    'context' => array(
      0 => 'argument_entity_id:node_1',
    ),
    'view_mode' => 'teaser',
    'override_title' => '',
    'override_title_text' => '',
    'widget_title' => 'Progetti/attività organizzati da noi',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '438f97fc-c413-436f-bf19-515783d44b7b';
  $display->content['new-438f97fc-c413-436f-bf19-515783d44b7b'] = $pane;
  $display->panels['contentmain'][0] = 'new-438f97fc-c413-436f-bf19-515783d44b7b';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['rbv_group_projects_collaborations_own_projects'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'rbv_page_collaborations';
  $page->task = 'page';
  $page->admin_title = 'rbv collaborations';
  $page->admin_description = '';
  $page->path = 'collaborazioni';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_rbv_page_collaborations_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'rbv_page_collaborations';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel collaborations list',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'esplora la rete
collaborazioni',
    'panels_breadcrumbs_paths' => 'esplora',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'boxton';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'contentmain' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Le collaborazioni della rete';
  $display->uuid = 'b26f89fd-0a1d-4bfa-a0c9-8f018a11c0ae';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-7528db4f-e31b-4d00-b52c-1d31dbec6439';
  $pane->panel = 'contentmain';
  $pane->type = 'fieldable_panels_pane';
  $pane->subtype = 'fpid:16';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_mode' => 'full',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '7528db4f-e31b-4d00-b52c-1d31dbec6439';
  $display->content['new-7528db4f-e31b-4d00-b52c-1d31dbec6439'] = $pane;
  $display->panels['contentmain'][0] = 'new-7528db4f-e31b-4d00-b52c-1d31dbec6439';
  $pane = new stdClass();
  $pane->pid = 'new-f1768604-df04-4691-929c-6846304b0d89';
  $pane->panel = 'contentmain';
  $pane->type = 'views_panes';
  $pane->subtype = 'rbv_view_lists-panel_pane_7';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_mode' => 'vmode_group_content',
    'override_title' => '',
    'override_title_text' => '',
    'widget_title' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'f1768604-df04-4691-929c-6846304b0d89';
  $display->content['new-f1768604-df04-4691-929c-6846304b0d89'] = $pane;
  $display->panels['contentmain'][1] = 'new-f1768604-df04-4691-929c-6846304b0d89';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-f1768604-df04-4691-929c-6846304b0d89';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['rbv_page_collaborations'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'rbv_page_explore';
  $page->task = 'page';
  $page->admin_title = 'rbv explore';
  $page->admin_description = '';
  $page->path = 'esplora';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Esplora la rete',
    'name' => 'main-menu',
    'weight' => '1',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_rbv_page_explore_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'rbv_page_explore';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'rbv-explore-page',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'esplora la rete',
    'panels_breadcrumbs_paths' => '',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'radix_boxton';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'contentmain' => NULL,
    ),
    'contentmain' => array(
      'style' => '0',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '8c4fc4b6-b076-4a36-8b2e-f43e3228393b';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-b07ab40c-3947-45ae-9599-284ccfff421c';
  $pane->panel = 'contentmain';
  $pane->type = 'fieldable_panels_pane';
  $pane->subtype = 'fpid:33';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_mode' => 'full',
    'fieldable_panels_pane' => (object) array(
      'bundle' => 'text',
      'language' => 'und',
      'is_new' => TRUE,
      'title' => '',
      'link' => 0,
      'path' => '',
      'reusable' => 1,
      'admin_title' => 'nav_explore_main',
      'admin_description' => '',
      'category' => 'Reusable Content',
      'vid' => '1605',
      'current_vid' => '',
      'revision' => 1,
      'fpid' => '33',
      'field_basic_text_text' => array(
        'und' => array(
          0 => array(
            'value' => '<div class="pull-right quadrato" style="max-width: 78%; max-height: 72px;">
 <span class="btn btn-link pull-right" disabled="disabled"><i class="fa fa-th fa-lg"></i></span>
 <span class="btn btn-link pull-right"><a href="search/site" title="Cerca nel sito"><i class="fa fa-search fa-lg"></a></i></span>
 <span class="btn btn-link pull-right"><a href="persone" title="Link veloce alla pagina con tutte le persone della rete"><i class="fa fa-user fa-lg"></i></a></span>
 <span class="btn btn-link pull-right"><a href="collaborazioni" title="Link veloce alla pagina con tutte le collaborazioni della rete"><i class="fa fa-arrows-h fa-lg"></i></a></span>
 <span class="btn btn-link pull-right"><a href="calendario/elenco" title="Link veloce alla pagina con tutti gli eventi della rete"><i class="fa fa-calendar fa-lg"></i></a></span>
 <span class="btn btn-link pull-right"><a href="progetti" title="Link veloce alla pagina con tutti i progetti della rete"><i class="fa fa-leaf fa-lg"></i></a></span>
 <span class="btn btn-link pull-right"><a href="organizzazioni" title="Link veloce alla pagina con tutte le organizzazioni della rete"><i class="fa fa-home fa-lg"></i></a></span>
</div>
<h2>Filtri</h2><a class="help" title="Questa pagina mostra tutte le organizzazioni, i progetti e gli eventi della rete. Utilizzate i filtri qui sotto per cercare quello che vi interessa. Per selezionare più categorie all\'interno dello stesso filtro tenete premuto il tasto \'Ctrl\' mentre cliccate. Il filtro \'Tipo di organizzazione\' funziona solo per i contenuti di tipo Organizzazione."><i class="fa fa-question-circle"></i></a>',
            'format' => 'rbv_full_html',
          ),
        ),
      ),
      'log' => '',
      'created' => 1464525965,
      'timestamp' => 1464525965,
      'changed' => 1464525965,
      'uuid' => '',
      'uid' => '1',
      'vuuid' => '',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'b07ab40c-3947-45ae-9599-284ccfff421c';
  $display->content['new-b07ab40c-3947-45ae-9599-284ccfff421c'] = $pane;
  $display->panels['contentmain'][0] = 'new-b07ab40c-3947-45ae-9599-284ccfff421c';
  $pane = new stdClass();
  $pane->pid = 'new-3a44c142-947f-4283-8c81-b2cc57c8cbfd';
  $pane->panel = 'contentmain';
  $pane->type = 'views_panes';
  $pane->subtype = 'rbv_view_explore-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_settings' => 'nodes',
    'header_type' => 'none',
    'view_mode' => 'teaser',
    'override_title' => '',
    'override_title_text' => '',
    'widget_title' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'style' => 'default',
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '3a44c142-947f-4283-8c81-b2cc57c8cbfd';
  $display->content['new-3a44c142-947f-4283-8c81-b2cc57c8cbfd'] = $pane;
  $display->panels['contentmain'][1] = 'new-3a44c142-947f-4283-8c81-b2cc57c8cbfd';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-3a44c142-947f-4283-8c81-b2cc57c8cbfd';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['rbv_page_explore'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'rbv_page_graph';
  $page->task = 'page';
  $page->admin_title = 'rbv page graph';
  $page->admin_description = '';
  $page->path = 'rete';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Vedi la rete',
    'name' => 'main-menu',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_rbv_page_graph_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'rbv_page_graph';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'bryant_flipped_flipped';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'contentmain' => NULL,
      'sidebar' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '5c457d4f-489b-4496-8e14-bfa70b0ba88f';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-d9bcfc90-c174-4ec1-9a1e-0d3f4a32f415';
  $pane->panel = 'contentmain';
  $pane->type = 'views_panes';
  $pane->subtype = 'rbv_view_graph-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_settings' => 'fields',
    'header_type' => 'none',
    'view_mode' => 'teaser',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'd9bcfc90-c174-4ec1-9a1e-0d3f4a32f415';
  $display->content['new-d9bcfc90-c174-4ec1-9a1e-0d3f4a32f415'] = $pane;
  $display->panels['contentmain'][0] = 'new-d9bcfc90-c174-4ec1-9a1e-0d3f4a32f415';
  $pane = new stdClass();
  $pane->pid = 'new-5fe81fe3-acb5-41a0-8637-c9659b6e920c';
  $pane->panel = 'sidebar';
  $pane->type = 'fieldable_panels_pane';
  $pane->subtype = 'fpid:2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_mode' => 'full',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '5fe81fe3-acb5-41a0-8637-c9659b6e920c';
  $display->content['new-5fe81fe3-acb5-41a0-8637-c9659b6e920c'] = $pane;
  $display->panels['sidebar'][0] = 'new-5fe81fe3-acb5-41a0-8637-c9659b6e920c';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['rbv_page_graph'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'rbv_page_group_add_collaboration';
  $page->task = 'page';
  $page->admin_title = 'rbv group add collaboration';
  $page->admin_description = 'This is a local action to substitute the og create content link for collaboration.';
  $page->path = 'node/%node/add/collaboration';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'node_type',
        'settings' => array(
          'type' => array(
            'org' => 'org',
          ),
        ),
        'context' => 'argument_entity_id:node_1',
        'not' => FALSE,
      ),
      1 => array(
        'name' => 'og_perm',
        'settings' => array(
          'perm' => 'create collaboration content',
        ),
        'context' => array(
          0 => 'logged-in-user',
          1 => 'argument_entity_id:node_1',
        ),
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'action',
    'title' => 'Aggiungi collaborazione',
    'name' => 'navigation',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array(
    'node' => array(
      'id' => 1,
      'identifier' => 'Node: ID',
      'name' => 'entity_id:node',
      'settings' => array(),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_rbv_page_group_add_collaboration_http_response';
  $handler->task = 'page';
  $handler->subtask = 'rbv_page_group_add_collaboration';
  $handler->handler = 'http_response';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'HTTP response code',
    'contexts' => array(),
    'relationships' => array(),
    'code' => '301',
    'destination' => 'node/add/collaboration?og_group_ref=%node:nid&destination=node/%node:nid',
  );
  $page->default_handlers[$handler->name] = $handler;
  $pages['rbv_page_group_add_collaboration'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'rbv_page_group_add_event';
  $page->task = 'page';
  $page->admin_title = 'rbv group add event';
  $page->admin_description = 'This is a local action to substitute the og create content link for collaboration.';
  $page->path = 'node/%node/add/event';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'node_type',
        'settings' => array(
          'type' => array(
            'org' => 'org',
          ),
        ),
        'context' => 'argument_entity_id:node_1',
        'not' => FALSE,
      ),
      1 => array(
        'name' => 'og_perm',
        'settings' => array(
          'perm' => 'create event content',
        ),
        'context' => array(
          0 => 'logged-in-user',
          1 => 'argument_entity_id:node_1',
        ),
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'action',
    'title' => 'Aggiungi evento',
    'name' => 'navigation',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array(
    'node' => array(
      'id' => 1,
      'identifier' => 'Node: ID',
      'name' => 'entity_id:node',
      'settings' => array(),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_rbv_page_group_add_event_http_response';
  $handler->task = 'page';
  $handler->subtask = 'rbv_page_group_add_event';
  $handler->handler = 'http_response';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'HTTP response code',
    'contexts' => array(),
    'relationships' => array(),
    'code' => '301',
    'destination' => 'node/add/event?og_group_ref=%node:nid&destination=node/%node:nid',
  );
  $page->default_handlers[$handler->name] = $handler;
  $pages['rbv_page_group_add_event'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'rbv_page_group_add_project';
  $page->task = 'page';
  $page->admin_title = 'rbv group add project';
  $page->admin_description = 'This is a local action to substitute the og create content link for collaboration.';
  $page->path = 'node/%node/add/project';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'node_type',
        'settings' => array(
          'type' => array(
            'org' => 'org',
          ),
        ),
        'context' => 'argument_entity_id:node_1',
        'not' => FALSE,
      ),
      1 => array(
        'name' => 'og_perm',
        'settings' => array(
          'perm' => 'create project content',
        ),
        'context' => array(
          0 => 'logged-in-user',
          1 => 'argument_entity_id:node_1',
        ),
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'action',
    'title' => 'Aggiungi progetto/attività',
    'name' => 'navigation',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array(
    'node' => array(
      'id' => 1,
      'identifier' => 'Node: ID',
      'name' => 'entity_id:node',
      'settings' => array(),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_rbv_page_group_add_project_http_response';
  $handler->task = 'page';
  $handler->subtask = 'rbv_page_group_add_project';
  $handler->handler = 'http_response';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'HTTP response code',
    'contexts' => array(),
    'relationships' => array(),
    'code' => '301',
    'destination' => 'node/add/project?og_group_ref=%node:nid&destination=node/%node:nid',
  );
  $page->default_handlers[$handler->name] = $handler;
  $pages['rbv_page_group_add_project'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'rbv_page_group_calendar';
  $page->task = 'page';
  $page->admin_title = 'rbv group calendar list';
  $page->admin_description = '';
  $page->path = 'node/%node/eventi/elenco';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'tab',
    'title' => 'Elenco',
    'name' => 'navigation',
    'weight' => '1',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array(
    'node' => array(
      'id' => 1,
      'identifier' => 'Node: ID',
      'name' => 'entity_id:node',
      'settings' => array(),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_rbv_page_group_calendar_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'rbv_page_group_calendar';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel group calendar',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'entity_bundle:node',
          'settings' => array(
            'type' => array(
              'org' => 'org',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'panels_breadcrumbs_state' => 0,
    'panels_breadcrumbs_titles' => '',
    'panels_breadcrumbs_paths' => '',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'boxton';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'sidebar' => NULL,
      'contentmain' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '84a444e0-a785-46d5-b88d-7da073bfd29a';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-0442c124-5d36-46ac-81ad-be5cbcf276d2';
  $pane->panel = 'contentmain';
  $pane->type = 'views_panes';
  $pane->subtype = 'rbv_view_group_content-panel_pane_3';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'more_link' => 0,
    'items_per_page' => '0',
    'context' => array(
      0 => 'argument_entity_id:node_1',
    ),
    'view_mode' => 'teaser',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '0442c124-5d36-46ac-81ad-be5cbcf276d2';
  $display->content['new-0442c124-5d36-46ac-81ad-be5cbcf276d2'] = $pane;
  $display->panels['contentmain'][0] = 'new-0442c124-5d36-46ac-81ad-be5cbcf276d2';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['rbv_page_group_calendar'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'rbv_page_group_projects';
  $page->task = 'page';
  $page->admin_title = 'rbv group projects';
  $page->admin_description = '';
  $page->path = 'node/%node/progetti';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'node_type',
        'settings' => array(
          'type' => array(
            'org' => 'org',
          ),
        ),
        'context' => 'argument_entity_id:node_1',
        'not' => FALSE,
      ),
      1 => array(
        'name' => 'php',
        'settings' => array(
          'description' => 'empty view',
          'php' => 'return empty(views_get_view_result(\'rbv_view_graph\',\'panel_pane_5\',$contexts[\'argument_entity_id:node_1\']->data->nid));',
        ),
        'not' => TRUE,
      ),
    ),
    'logic' => 'and',
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'tab',
    'title' => 'Progetti/attività',
    'name' => 'navigation',
    'weight' => '3',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array(
    'node' => array(
      'id' => 1,
      'identifier' => 'Node: ID',
      'name' => 'entity_id:node',
      'settings' => array(),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_rbv_page_group_projects_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'rbv_page_group_projects';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel all group projects',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'organizzazioni
%node
progetti/attività',
    'panels_breadcrumbs_paths' => 'organizzazioni
%node:url',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'radix_burr_flipped';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'contentmain' => NULL,
      'sidebar' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'c6dab6df-1da1-428a-8e00-63c8243891a6';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-e2eccc4a-b3ad-476b-907a-6b0a565042c2';
  $pane->panel = 'contentmain';
  $pane->type = 'views_panes';
  $pane->subtype = 'rbv_view_group_content-panel_pane_6';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'items_per_page' => '20',
    'context' => array(
      0 => 'argument_entity_id:node_1',
    ),
    'view_settings' => 'fields',
    'header_type' => 'none',
    'view_mode' => 'teaser',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'e2eccc4a-b3ad-476b-907a-6b0a565042c2';
  $display->content['new-e2eccc4a-b3ad-476b-907a-6b0a565042c2'] = $pane;
  $display->panels['contentmain'][0] = 'new-e2eccc4a-b3ad-476b-907a-6b0a565042c2';
  $pane = new stdClass();
  $pane->pid = 'new-3200319d-f5a8-4a5c-9d38-8bd519c36ab2';
  $pane->panel = 'sidebar';
  $pane->type = 'views_panes';
  $pane->subtype = 'rbv_view_graph-panel_pane_5';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'php',
        'settings' => array(
          'description' => 'empty view',
          'php' => 'return empty(views_get_view_result(\'rbv_view_graph\',\'panel_pane_5\',$contexts[\'panelizer\']->data->nid));',
        ),
        'not' => TRUE,
      ),
    ),
  );
  $pane->configuration = array(
    'override_title' => '',
    'override_title_text' => '',
    'override_title_heading' => 'h2',
    'view_settings' => 'fields',
    'header_type' => 'titles',
    'view_mode' => 'teaser',
    'widget_title' => 'Rete',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '3200319d-f5a8-4a5c-9d38-8bd519c36ab2';
  $display->content['new-3200319d-f5a8-4a5c-9d38-8bd519c36ab2'] = $pane;
  $display->panels['sidebar'][0] = 'new-3200319d-f5a8-4a5c-9d38-8bd519c36ab2';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['rbv_page_group_projects'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'rbv_page_home';
  $page->task = 'page';
  $page->admin_title = 'rbv home';
  $page->admin_description = '';
  $page->path = 'home';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_rbv_page_home_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'rbv_page_home';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'radix_brown';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'sidebar' => NULL,
      'contentmain' => NULL,
      'slidergutter' => NULL,
      'column1' => NULL,
      'column2' => NULL,
      'column3' => NULL,
      'footercolumn1' => NULL,
      'footercolumn2' => NULL,
      'footercolumn3' => NULL,
      'secondarycolumn1' => array(
        'devices' => array(
          'hidden-xs' => 0,
          'hidden-sm' => 0,
          'hidden-md' => 0,
          'hidden-lg' => 0,
        ),
        'pane_style' => array(
          'pull-left' => 0,
          'pull-right' => 0,
          'clearfix' => 0,
          'jumbotron' => 0,
          'well' => 0,
        ),
      ),
      'header' => array(
        'devices' => array(
          'hidden-xs' => 0,
          'hidden-sm' => 0,
          'hidden-md' => 0,
          'hidden-lg' => 0,
        ),
        'pane_style' => array(
          'jumbotron' => 'jumbotron',
          'pull-left' => 0,
          'pull-right' => 0,
          'clearfix' => 0,
          'well' => 0,
        ),
      ),
      'secondarycolumn2' => NULL,
      'secondarycolumn3' => NULL,
      'footer' => NULL,
      'slider' => array(
        'devices' => array(
          'hidden-xs' => 0,
          'hidden-sm' => 0,
          'hidden-md' => 0,
          'hidden-lg' => 0,
        ),
        'pane_style' => array(
          'pull-left' => 0,
          'pull-right' => 0,
          'clearfix' => 0,
          'jumbotron' => 0,
          'well' => 0,
        ),
      ),
    ),
    'header' => array(
      'style' => 'kalacustomize',
    ),
    'secondarycolumn1' => array(
      'style' => 'kalacustomize',
    ),
    'secondarycolumn3' => array(
      'style' => '0',
    ),
    'footer' => array(
      'style' => '0',
    ),
    'slider' => array(
      'style' => 'kalacustomize',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'a86d90d6-e4c8-4bcd-bb63-5a0ae7b2baa3';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-dee56f38-c61a-465f-99f1-0fd2b3ab1ec7';
  $pane->panel = 'column1';
  $pane->type = 'views_panes';
  $pane->subtype = 'rbv_view_lists-panel_pane_13';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => '',
    'override_title_text' => '',
    'override_title_heading' => 'h2',
    'view_settings' => 'fields',
    'header_type' => 'none',
    'view_mode' => 'teaser',
    'widget_title' => 'Nuove realtà aderenti',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'dee56f38-c61a-465f-99f1-0fd2b3ab1ec7';
  $display->content['new-dee56f38-c61a-465f-99f1-0fd2b3ab1ec7'] = $pane;
  $display->panels['column1'][0] = 'new-dee56f38-c61a-465f-99f1-0fd2b3ab1ec7';
  $pane = new stdClass();
  $pane->pid = 'new-d3c43ffd-b51e-4019-b0f5-adcf3129eabd';
  $pane->panel = 'column2';
  $pane->type = 'fieldable_panels_pane';
  $pane->subtype = 'current:35';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_mode' => 'full',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'd3c43ffd-b51e-4019-b0f5-adcf3129eabd';
  $display->content['new-d3c43ffd-b51e-4019-b0f5-adcf3129eabd'] = $pane;
  $display->panels['column2'][0] = 'new-d3c43ffd-b51e-4019-b0f5-adcf3129eabd';
  $pane = new stdClass();
  $pane->pid = 'new-36db1c73-4dcf-45a5-a158-86d618cc71ff';
  $pane->panel = 'column2';
  $pane->type = 'fieldable_panels_pane';
  $pane->subtype = 'current:10';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_mode' => 'full',
    'fieldable_panels_pane' => (object) array(
      'timestamp' => 1484843711,
      'uid' => '1',
      'title' => 'Contatti',
      'log' => '',
      'vuuid' => '',
      'fpid' => '10',
      'bundle' => 'text',
      'link' => 0,
      'path' => '',
      'reusable' => '1',
      'admin_title' => 'contatti',
      'admin_description' => '',
      'category' => 'Reusable Content',
      'view_access' => NULL,
      'edit_access' => NULL,
      'created' => '1393581288',
      'changed' => 1484843711,
      'uuid' => '',
      'language' => 'und',
      'current_vid' => '1601',
      'field_basic_text_text' => array(
        'und' => array(
          0 => array(
            'value' => '<div class="panel panel-default">
<a id="anccontact"></a>
 <div class="panel-heading" style="background-color: #D8C7A3;">
  <h2 class="panel-title"><i class="fa fa-coffee fa-4x"></i> Per maggiori informazioni</h2>
 </div>
 <div class="panel-body">
  <p style="padding-left: .6em;">Email gruppo di redazione RBV:
   <ul style="list-style-type:none;">
    <li><i class="fa fa-envelope-o"></i> <a href="mailto:info@retebuonvivere.org">info@retebuonvivere.org</a></li>
   </ul>
  </p>
  <p style="padding-left: .6em;"><a href="/organizzazioni/mag-verona">Mag Verona</a>  - Casa Comune:
   <ul style="list-style-type:none;">
    <li><i class="fa fa-phone"></i> 045 8100279</li>
    <li><i class="fa fa-map-marker fa-lg"></i> Via Adriano Cristofoli 31A, 37138 Verona (dal lunedì al venerdì, dalle 09:00 alle 18:00).</li>
   </ul>
  </p>
 </div>
</div>',
            'format' => 'rbv_full_html',
          ),
        ),
      ),
      'rdf_mapping' => array(),
      'revision' => 1,
      'is_new' => FALSE,
      'original' => (object) array(
        'vid' => '1601',
        'timestamp' => '1461136274',
        'uid' => '1',
        'title' => 'Contatti',
        'log' => '',
        'vuuid' => '',
        'fpid' => '10',
        'bundle' => 'text',
        'link' => '0',
        'path' => '',
        'reusable' => '1',
        'admin_title' => 'contatti',
        'admin_description' => '',
        'category' => 'Reusable Content',
        'view_access' => NULL,
        'edit_access' => NULL,
        'created' => '1393581288',
        'changed' => '1461136274',
        'uuid' => '',
        'language' => '',
        'current_vid' => '1601',
        'field_basic_text_text' => array(
          'und' => array(
            0 => array(
              'value' => '<div class="panel panel-default">
<a id="anccontact"></a>
 <div class="panel-heading" style="background-color: #D8C7A3;">
  <h2 class="panel-title"><i class="fa fa-coffee fa-4x"></i> Per maggiori informazioni</h2>
 </div>
 <div class="panel-body">
  <p style="padding-left: .6em;">Email generica retebuonvivere.org
   <ul style="list-style-type:none;">
    <li><i class="fa fa-envelope-o"></i> <a href="mailto:info@retebuonvivere.org">info@retebuonvivere.org</a></li>
   </ul>
  </p>
  <p style="padding-left: .6em;"><a href="/persone/paolo-dagazzini">Paolo Dagazzini</a>, <a href="/organizzazioni/mag-verona">Mag Verona</a>, Ufficio – Formazione e Progetti:
   <ul style="list-style-type:none;">
    <li><i class="fa fa-envelope"></i> <a href="mailto:formazione.progetti@magverona.it">formazione.progetti@magverona.it</a></li>
    <li><i class="fa fa-phone"></i> 045 8100279</li>
    <li><i class="fa fa-map-marker fa-lg"></i> Casa Comune Mag: Via Adriano Cristofoli 31A, 37138 Verona (dal lunedì al venerdì, dalle 09:00 alle 18:00).</li>
   </ul>
  </p>
  <p style="padding-left: .6em;"><a href="/persone/miro-marchi">Miro Marchi</a>, <a href="/organizzazioni/naturalmente-verona-arcipelago-scec">Naturalmente Verona - Arcipelago Scec</a>:
   <ul style="list-style-type:none;">
    <li><i class="fa fa-envelope"></i> <a href="mailto:miro.marchi@gmail.com">miro.marchi@gmail.com</a></li>
    <li><i class="fa fa-phone"></i> 340 7665125</li>
   </ul>
  </p>
 </div>
</div>',
              'format' => 'rbv_full_html',
              'safe_value' => '<div class="panel panel-default">
<a id="anccontact"></a>
 <div class="panel-heading" style="background-color: #D8C7A3;">
  <h2 class="panel-title"><i class="fa fa-coffee fa-4x"></i> Per maggiori informazioni</h2>
 </div>
 <div class="panel-body">
  <p style="padding-left: .6em;">Email generica retebuonvivere.org
   <ul style="list-style-type:none;">
    <li><i class="fa fa-envelope-o"></i> <a href="mailto:info@retebuonvivere.org">info@retebuonvivere.org</a></li>
   </ul>
  </p>
  <p style="padding-left: .6em;"><a href="/persone/paolo-dagazzini">Paolo Dagazzini</a>, <a href="/organizzazioni/mag-verona">Mag Verona</a>, Ufficio – Formazione e Progetti:
   <ul style="list-style-type:none;">
    <li><i class="fa fa-envelope"></i> <a href="mailto:formazione.progetti@magverona.it">formazione.progetti@magverona.it</a></li>
    <li><i class="fa fa-phone"></i> 045 8100279</li>
    <li><i class="fa fa-map-marker fa-lg"></i> Casa Comune Mag: Via Adriano Cristofoli 31A, 37138 Verona (dal lunedì al venerdì, dalle 09:00 alle 18:00).</li>
   </ul>
  </p>
  <p style="padding-left: .6em;"><a href="/persone/miro-marchi">Miro Marchi</a>, <a href="/organizzazioni/naturalmente-verona-arcipelago-scec">Naturalmente Verona - Arcipelago Scec</a>:
   <ul style="list-style-type:none;">
    <li><i class="fa fa-envelope"></i> <a href="mailto:miro.marchi@gmail.com">miro.marchi@gmail.com</a></li>
    <li><i class="fa fa-phone"></i> 340 7665125</li>
   </ul>
  </p>
 </div>
</div>',
            ),
          ),
        ),
        'rdf_mapping' => array(),
      ),
      'old_vid' => '1601',
      'vid' => '1606',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '36db1c73-4dcf-45a5-a158-86d618cc71ff';
  $display->content['new-36db1c73-4dcf-45a5-a158-86d618cc71ff'] = $pane;
  $display->panels['column2'][1] = 'new-36db1c73-4dcf-45a5-a158-86d618cc71ff';
  $pane = new stdClass();
  $pane->pid = 'new-82c6055a-c4d0-4398-8a76-68c70f1a70a6';
  $pane->panel = 'column3';
  $pane->type = 'fieldable_panels_pane';
  $pane->subtype = 'current:19';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_mode' => 'full',
    'fieldable_panels_pane' => (object) array(
      'timestamp' => 1459866488,
      'uid' => '1',
      'title' => 'Social',
      'log' => '',
      'vuuid' => '',
      'fpid' => '19',
      'bundle' => 'text',
      'link' => 0,
      'path' => '',
      'reusable' => 1,
      'admin_title' => 'social',
      'admin_description' => '',
      'category' => 'Reusable Content',
      'view_access' => NULL,
      'edit_access' => NULL,
      'created' => '1397226890',
      'changed' => 1459866488,
      'uuid' => '',
      'language' => 'und',
      'current_vid' => '1307',
      'field_basic_text_text' => array(
        'und' => array(
          0 => array(
            'value' => '<div class="panel panel-default">
  <div class="panel-heading" style="background-color: #82B6A7;">
    <h2 class="panel-title"><i class="fa fa-users fa-lg"></i> Restiamo in contatto</h2>
  </div>
  <div class="panel-body">
    <div class="fb-page" data-href="https://www.facebook.com/retebuonvivere" data-tabs="timeline, events, messages" data-small-header="false" data-adapt-container-width="true" data-hide-cover="false" data-show-facepile="true"><div class="fb-xfbml-parse-ignore"><blockquote cite="https://www.facebook.com/retebuonvivere"><a href="https://www.facebook.com/retebuonvivere">Retebuonvivere</a></blockquote></div>
    </div>
    <div>
      <br />
      <div class="g-plusone" data-href="https://www.google.com/+RetebuonvivereOrg1"></div>
    </div>
    <!-- Place this tag after the last +1 button tag. -->
    <script type="text/javascript">
      window.___gcfg = {lang: \'it\'};

      (function() {
        var po = document.createElement(\'script\'); po.type = \'text/javascript\'; po.async = true;
        po.src = \'https://apis.google.com/js/platform.js\';
        var s = document.getElementsByTagName(\'script\')[0]; s.parentNode.insertBefore(po, s);
      })();
    </script>
  </div>
</div>',
            'format' => 'rbv_full_html',
          ),
        ),
      ),
      'rdf_mapping' => array(),
      'revision' => 1,
      'is_new' => FALSE,
      'original' => (object) array(
        'vid' => '1307',
        'timestamp' => '1414864534',
        'uid' => '1',
        'title' => 'Social',
        'log' => '',
        'vuuid' => '',
        'fpid' => '19',
        'bundle' => 'text',
        'link' => '0',
        'path' => '',
        'reusable' => '1',
        'admin_title' => 'social',
        'admin_description' => '',
        'category' => 'Reusable Content',
        'view_access' => NULL,
        'edit_access' => NULL,
        'created' => '1397226890',
        'changed' => '1414864534',
        'uuid' => '',
        'language' => 'und',
        'current_vid' => '1307',
        'field_basic_text_text' => array(
          'und' => array(
            0 => array(
              'value' => '<div class="panel panel-default">
 <div class="panel-heading" style="background-color: #82B6A7;">
  <h2 class="panel-title"><i class="fa fa-users fa-lg"></i> Restiamo in contatto</h2>
 </div>
 <div class="panel-body">
 <div class="pull-left">
  <p><a style="color: #DC4C3A;" href="https://www.google.com/+RetebuonvivereOrg1"><i class="fa fa-google-plus-square fa-4x"></i></a></p>
  <p><div class="g-plusone" data-href="https://www.google.com/+RetebuonvivereOrg1"></div></p>
 </div>
<div class="pull-left">
  <p><a style="color: #45619D;" href="https://www.facebook.com/retebuonvivere"><i class="fa fa-facebook-square fa-4x"></i></a></p>
  <p><iframe src="//www.facebook.com/plugins/like.php?href=https%3A%2F%2Fwww.facebook.com%2Fretebuonvivere&amp;width&amp;layout=standard&amp;action=like&amp;show_faces=true&amp;share=true&amp;height=200" scrolling="no" frameborder="0" style="border:none; overflow:hidden; width:212px; height:200px;" allowTransparency="true"></iframe></p>
 </div>
 </div>
</div>
<!-- Place this tag after the last +1 button tag. -->
<script type="text/javascript">
  window.___gcfg = {lang: \'it\'};

  (function() {
    var po = document.createElement(\'script\'); po.type = \'text/javascript\'; po.async = true;
    po.src = \'https://apis.google.com/js/platform.js\';
    var s = document.getElementsByTagName(\'script\')[0]; s.parentNode.insertBefore(po, s);
  })();
</script>',
              'format' => 'rbv_full_html',
              'safe_value' => '<div class="panel panel-default">
 <div class="panel-heading" style="background-color: #82B6A7;">
  <h2 class="panel-title"><i class="fa fa-users fa-lg"></i> Restiamo in contatto</h2>
 </div>
 <div class="panel-body">
 <div class="pull-left">
  <p><a style="color: #DC4C3A;" href="https://www.google.com/+RetebuonvivereOrg1"><i class="fa fa-google-plus-square fa-4x"></i></a></p>
  <p><div class="g-plusone" data-href="https://www.google.com/+RetebuonvivereOrg1"></div></p>
 </div>
<div class="pull-left">
  <p><a style="color: #45619D;" href="https://www.facebook.com/retebuonvivere"><i class="fa fa-facebook-square fa-4x"></i></a></p>
  <p><iframe src="//www.facebook.com/plugins/like.php?href=https%3A%2F%2Fwww.facebook.com%2Fretebuonvivere&amp;width&amp;layout=standard&amp;action=like&amp;show_faces=true&amp;share=true&amp;height=200" scrolling="no" frameborder="0" style="border:none; overflow:hidden; width:212px; height:200px;" allowTransparency="true"></iframe></p>
 </div>
 </div>
</div>
<!-- Place this tag after the last +1 button tag. -->
<script type="text/javascript">
  window.___gcfg = {lang: \'it\'};

  (function() {
    var po = document.createElement(\'script\'); po.type = \'text/javascript\'; po.async = true;
    po.src = \'https://apis.google.com/js/platform.js\';
    var s = document.getElementsByTagName(\'script\')[0]; s.parentNode.insertBefore(po, s);
  })();
</script>',
            ),
          ),
        ),
        'rdf_mapping' => array(),
      ),
      'old_vid' => '1307',
      'vid' => '1599',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '82c6055a-c4d0-4398-8a76-68c70f1a70a6';
  $display->content['new-82c6055a-c4d0-4398-8a76-68c70f1a70a6'] = $pane;
  $display->panels['column3'][0] = 'new-82c6055a-c4d0-4398-8a76-68c70f1a70a6';
  $pane = new stdClass();
  $pane->pid = 'new-c89fee4b-b3a2-4cf6-a9a7-f37f3aa2f07f';
  $pane->panel = 'footercolumn1';
  $pane->type = 'fieldable_panels_pane';
  $pane->subtype = 'vid:1609';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_mode' => 'full',
    'fieldable_panels_pane' => (object) array(
      'timestamp' => 1484844325,
      'uid' => '1',
      'title' => 'Chi',
      'log' => '',
      'vuuid' => '',
      'fpid' => '3',
      'bundle' => 'text',
      'link' => 0,
      'path' => '',
      'reusable' => '0',
      'admin_title' => '',
      'admin_description' => '',
      'category' => 'Reusable Content',
      'view_access' => NULL,
      'edit_access' => NULL,
      'created' => '1391267201',
      'changed' => 1484844325,
      'uuid' => '',
      'language' => 'und',
      'current_vid' => '1608',
      'field_basic_text_text' => array(
        'und' => array(
          0 => array(
            'value' => '<p><strong>Una pluralità e diversità di soggetti autonomi</strong>: associazioni, cooperative sociali, fondazioni, imprese ed imprenditori sociali, reti di imprese, gruppi di acquisto solidale GAS, reti di economia solidale RES, reti di piccola distribuzione organizzata, comitati cittadini, artigiani, commercianti etici, gruppi informali, centri di ricerca... Scoprite le <a href="organizzazioni"><i class="fa fa-home fa-lg"></i> organizzazioni</a> e le <a href="persone"><i class="fa fa-user fa-lg"></i> persone</a> che già partecipano.</p>',
            'format' => 'panopoly_html_text',
          ),
        ),
      ),
      'rdf_mapping' => array(),
      'revision' => TRUE,
      'is_new' => FALSE,
      'original' => (object) array(
        'vid' => '1608',
        'timestamp' => '1484844241',
        'uid' => '1',
        'title' => 'Cos\'è',
        'log' => '',
        'vuuid' => '',
        'fpid' => '3',
        'bundle' => 'text',
        'link' => '0',
        'path' => '',
        'reusable' => '0',
        'admin_title' => '',
        'admin_description' => '',
        'category' => 'Reusable Content',
        'view_access' => NULL,
        'edit_access' => NULL,
        'created' => '1391267201',
        'changed' => '1484844241',
        'uuid' => '',
        'language' => 'und',
        'current_vid' => '1608',
        'field_basic_text_text' => array(
          'und' => array(
            0 => array(
              'value' => '<p>La Rete del Buon Vivere è un portale web per favorire l’incontro tra chi cerca e chi offre prodotti, servizi e iniziative delle realtà della società civile, dell’economia buona, della finanza solidale, dei beni comuni, che si occupano di agricoltura biologica, cultura, arte, sostenibilità, ambiente, servizi di cura, commercio equo, artigianato locale, lavori manuali riaggiornati, turismo sociale e responsabile, cittadinanza attiva, diritti.',
              'format' => 'panopoly_html_text',
              'safe_value' => '<p>La Rete del Buon Vivere è un portale web per favorire l’incontro tra chi cerca e chi offre prodotti, servizi e iniziative delle realtà della società civile, dell’economia buona, della finanza solidale, dei beni comuni, che si occupano di agricoltura biologica, cultura, arte, sostenibilità, ambiente, servizi di cura, commercio equo, artigianato locale, lavori manuali riaggiornati, turismo sociale e responsabile, cittadinanza attiva, diritti.</p>',
            ),
          ),
        ),
        'rdf_mapping' => array(),
      ),
      'old_vid' => '1608',
      'vid' => '1609',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'c89fee4b-b3a2-4cf6-a9a7-f37f3aa2f07f';
  $display->content['new-c89fee4b-b3a2-4cf6-a9a7-f37f3aa2f07f'] = $pane;
  $display->panels['footercolumn1'][0] = 'new-c89fee4b-b3a2-4cf6-a9a7-f37f3aa2f07f';
  $pane = new stdClass();
  $pane->pid = 'new-abbc6489-2ffb-48c1-b51e-833422a09eb6';
  $pane->panel = 'footercolumn1';
  $pane->type = 'fieldable_panels_pane';
  $pane->subtype = 'fpid:4';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_mode' => 'full',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'abbc6489-2ffb-48c1-b51e-833422a09eb6';
  $display->content['new-abbc6489-2ffb-48c1-b51e-833422a09eb6'] = $pane;
  $display->panels['footercolumn1'][1] = 'new-abbc6489-2ffb-48c1-b51e-833422a09eb6';
  $pane = new stdClass();
  $pane->pid = 'new-ec8ff0e5-a03a-406e-a8b9-b2ed180b9290';
  $pane->panel = 'footercolumn1';
  $pane->type = 'fieldable_panels_pane';
  $pane->subtype = 'fpid:5';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_mode' => 'full',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'ec8ff0e5-a03a-406e-a8b9-b2ed180b9290';
  $display->content['new-ec8ff0e5-a03a-406e-a8b9-b2ed180b9290'] = $pane;
  $display->panels['footercolumn1'][2] = 'new-ec8ff0e5-a03a-406e-a8b9-b2ed180b9290';
  $pane = new stdClass();
  $pane->pid = 'new-b3fcedf0-0c13-47aa-9690-43204521dbe4';
  $pane->panel = 'footercolumn2';
  $pane->type = 'fieldable_panels_pane';
  $pane->subtype = 'fpid:29';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_mode' => 'full',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'b3fcedf0-0c13-47aa-9690-43204521dbe4';
  $display->content['new-b3fcedf0-0c13-47aa-9690-43204521dbe4'] = $pane;
  $display->panels['footercolumn2'][0] = 'new-b3fcedf0-0c13-47aa-9690-43204521dbe4';
  $pane = new stdClass();
  $pane->pid = 'new-e6f28570-ac83-4356-8f80-e07ab7ee616c';
  $pane->panel = 'footercolumn3';
  $pane->type = 'fieldable_panels_pane';
  $pane->subtype = 'fpid:6';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_mode' => 'full',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'e6f28570-ac83-4356-8f80-e07ab7ee616c';
  $display->content['new-e6f28570-ac83-4356-8f80-e07ab7ee616c'] = $pane;
  $display->panels['footercolumn3'][0] = 'new-e6f28570-ac83-4356-8f80-e07ab7ee616c';
  $pane = new stdClass();
  $pane->pid = 'new-73df4042-9bf4-4ad6-8cdb-9d59e7fb6d50';
  $pane->panel = 'slider';
  $pane->type = 'fieldable_panels_pane';
  $pane->subtype = 'vid:1610';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_mode' => 'full',
    'fieldable_panels_pane' => (object) array(
      'timestamp' => 1484844485,
      'uid' => '1',
      'title' => '',
      'log' => '',
      'vuuid' => '',
      'fpid' => '2',
      'bundle' => 'text',
      'link' => 0,
      'path' => '',
      'reusable' => '0',
      'admin_title' => '',
      'admin_description' => '',
      'category' => 'Reusable Content',
      'view_access' => NULL,
      'edit_access' => NULL,
      'created' => '1391264652',
      'changed' => 1484844485,
      'uuid' => '',
      'language' => 'und',
      'current_vid' => '1426',
      'field_basic_text_text' => array(
        'und' => array(
          0 => array(
            'value' => '<div style="float: right; margin-top: 2em; margin-right: 1em;"><a href="http://tagboard.com/retebuonvivere">#retebuonvivere</a></div><h1 class="site-title"><strong>[[{"fid":"14","view_mode":"default","fields":{"format":"default","field_file_image_alt_text[und][0][value]":"retebuonvivere logo","field_file_image_title_text[und][0][value]":"logo 008"},"type":"media","attributes":{"alt":"retebuonvivere logo","title":"logo 008","height":"250","width":"250","class":"media-element file-default"}}]]retebuonvivere</strong><span class="invisible-separator"> </span><small>.org</small></h1>
<h3 style="text-align: center;">Prodotti, servizi e iniziative dell\'economia sociale <em>in rete</em></h3><p></p>',
            'format' => 'panopoly_html_text',
          ),
        ),
      ),
      'rdf_mapping' => array(),
      'revision' => TRUE,
      'is_new' => FALSE,
      'original' => (object) array(
        'vid' => '1426',
        'timestamp' => '1427045559',
        'uid' => '1',
        'title' => '',
        'log' => '',
        'vuuid' => '',
        'fpid' => '2',
        'bundle' => 'text',
        'link' => '0',
        'path' => '',
        'reusable' => '0',
        'admin_title' => '',
        'admin_description' => '',
        'category' => 'Reusable Content',
        'view_access' => NULL,
        'edit_access' => NULL,
        'created' => '1391264652',
        'changed' => '1427045559',
        'uuid' => '',
        'language' => '',
        'current_vid' => '1426',
        'field_basic_text_text' => array(
          'und' => array(
            0 => array(
              'value' => '<div style="float: right; margin-top: 2em; margin-right: 1em;"><a href="http://tagboard.com/retebuonvivere">#retebuonvivere</a></div><h1 class="site-title"><strong>[[{"fid":"14","view_mode":"default","fields":{"format":"default","field_file_image_alt_text[und][0][value]":"retebuonvivere logo","field_file_image_title_text[und][0][value]":"logo 008"},"type":"media","attributes":{"alt":"retebuonvivere logo","title":"logo 008","height":"250","width":"250","class":"media-element file-default"}}]]retebuonvivere</strong><span class="invisible-separator"> </span><small>.org</small></h1><h3 style="text-align: center;">Organizzazioni e persone della società civile e dell\'economia solidale di Verona ed oltre</h3><h4 style="text-align: center;">Per prenderci cura della sostenibilità sociale, economica, ambientale e della qualità della vita, nel segno dei beni comuni</h4><blockquote><h3 style="text-align: center;">"Insieme siamo una rete"</h3></blockquote><p></p>',
              'format' => 'panopoly_html_text',
              'safe_value' => '<div style="float:right"><a href="http://tagboard.com/retebuonvivere">#retebuonvivere</a></div><h1 class="site-title"><strong><img alt="retebuonvivere logo" title="logo 008" height="250" width="250" class="media-element file-default panopoly-image-original" typeof="foaf:Image" src="http://www.retebuonvivere.org/sites/default/files/styles/panopoly_image_original/public/rete08-250.png?itok=TO5q_a6L" />retebuonvivere</strong><span class="invisible-separator"> </span>.org</h1><h3 style="text-align:center">Organizzazioni e persone della società civile e dell\'economia solidale di Verona ed oltre</h3><h4 style="text-align:center">Per prenderci cura della sostenibilità sociale, economica, ambientale e della qualità della vita, nel segno dei beni comuni</h4><blockquote><h3 style="text-align:center">"Insieme siamo una rete"</h3></blockquote><p></p>',
            ),
          ),
        ),
        'rdf_mapping' => array(),
      ),
      'old_vid' => '1426',
      'vid' => '1610',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => array(
      'devices' => array(
        'hidden-xs' => 0,
        'hidden-sm' => 0,
        'hidden-md' => 0,
        'hidden-lg' => 0,
      ),
      'pane_style' => array(
        'jumbotron' => 'jumbotron',
        'pull-left' => 0,
        'pull-right' => 0,
        'clearfix' => 0,
        'well' => 0,
      ),
    ),
    'style' => 'kalacustomize',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '73df4042-9bf4-4ad6-8cdb-9d59e7fb6d50';
  $display->content['new-73df4042-9bf4-4ad6-8cdb-9d59e7fb6d50'] = $pane;
  $display->panels['slider'][0] = 'new-73df4042-9bf4-4ad6-8cdb-9d59e7fb6d50';
  $pane = new stdClass();
  $pane->pid = 'new-3bf42efe-2286-4999-ac6b-5f1ac27d4232';
  $pane->panel = 'slider';
  $pane->type = 'views_panes';
  $pane->subtype = 'rbv_netadmview_joined-panel_pane_2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => '',
    'override_title_text' => '',
    'override_title_heading' => 'h2',
    'view_settings' => 'fields',
    'header_type' => 'none',
    'view_mode' => 'teaser',
    'widget_title' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => array(
      'devices' => array(
        'hidden-xs' => 0,
        'hidden-sm' => 0,
        'hidden-md' => 0,
        'hidden-lg' => 0,
      ),
      'pane_style' => array(
        'pull-left' => 'pull-left',
        'pull-right' => 0,
        'clearfix' => 0,
        'jumbotron' => 0,
        'well' => 0,
      ),
    ),
    'style' => 'kalacustomize',
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'rbv-count',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '3bf42efe-2286-4999-ac6b-5f1ac27d4232';
  $display->content['new-3bf42efe-2286-4999-ac6b-5f1ac27d4232'] = $pane;
  $display->panels['slider'][1] = 'new-3bf42efe-2286-4999-ac6b-5f1ac27d4232';
  $pane = new stdClass();
  $pane->pid = 'new-6f189743-9d3c-4d04-92ea-9bbc60931db3';
  $pane->panel = 'slider';
  $pane->type = 'views_panes';
  $pane->subtype = 'rbv_view_lists-panel_pane_11';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => '',
    'override_title_text' => '',
    'override_title_heading' => 'h2',
    'view_settings' => 'fields',
    'header_type' => 'none',
    'view_mode' => 'teaser',
    'widget_title' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => array(
      'devices' => array(
        'hidden-xs' => 0,
        'hidden-sm' => 0,
        'hidden-md' => 0,
        'hidden-lg' => 0,
      ),
      'pane_style' => array(
        'pull-left' => 'pull-left',
        'pull-right' => 0,
        'clearfix' => 0,
        'jumbotron' => 0,
        'well' => 0,
      ),
    ),
    'style' => 'kalacustomize',
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'rbv-count',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '6f189743-9d3c-4d04-92ea-9bbc60931db3';
  $display->content['new-6f189743-9d3c-4d04-92ea-9bbc60931db3'] = $pane;
  $display->panels['slider'][2] = 'new-6f189743-9d3c-4d04-92ea-9bbc60931db3';
  $pane = new stdClass();
  $pane->pid = 'new-ae41e07c-6708-4013-b08e-330da2e07741';
  $pane->panel = 'slider';
  $pane->type = 'views_panes';
  $pane->subtype = 'rbv_view_lists-panel_pane_9';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => '',
    'override_title_text' => '',
    'override_title_heading' => 'h2',
    'view_settings' => 'fields',
    'header_type' => 'none',
    'view_mode' => 'teaser',
    'widget_title' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => array(
      'devices' => array(
        'hidden-xs' => 0,
        'hidden-sm' => 0,
        'hidden-md' => 0,
        'hidden-lg' => 0,
      ),
      'pane_style' => array(
        'pull-left' => 'pull-left',
        'pull-right' => 0,
        'clearfix' => 0,
        'jumbotron' => 0,
        'well' => 0,
      ),
    ),
    'style' => 'kalacustomize',
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'rbv-count',
  );
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'ae41e07c-6708-4013-b08e-330da2e07741';
  $display->content['new-ae41e07c-6708-4013-b08e-330da2e07741'] = $pane;
  $display->panels['slider'][3] = 'new-ae41e07c-6708-4013-b08e-330da2e07741';
  $pane = new stdClass();
  $pane->pid = 'new-f036e35b-6f76-4690-bd61-d146575e42af';
  $pane->panel = 'slider';
  $pane->type = 'views_panes';
  $pane->subtype = 'rbv_view_lists-panel_pane_10';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => '',
    'override_title_text' => '',
    'override_title_heading' => 'h2',
    'view_settings' => 'fields',
    'header_type' => 'none',
    'view_mode' => 'teaser',
    'widget_title' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => array(
      'devices' => array(
        'hidden-xs' => 0,
        'hidden-sm' => 0,
        'hidden-md' => 0,
        'hidden-lg' => 0,
      ),
      'pane_style' => array(
        'pull-left' => 'pull-left',
        'pull-right' => 0,
        'clearfix' => 0,
        'jumbotron' => 0,
        'well' => 0,
      ),
    ),
    'style' => 'kalacustomize',
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'rbv-count',
  );
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = 'f036e35b-6f76-4690-bd61-d146575e42af';
  $display->content['new-f036e35b-6f76-4690-bd61-d146575e42af'] = $pane;
  $display->panels['slider'][4] = 'new-f036e35b-6f76-4690-bd61-d146575e42af';
  $pane = new stdClass();
  $pane->pid = 'new-71ef9e9a-65ee-4af0-9f6c-78698bdb998f';
  $pane->panel = 'slider';
  $pane->type = 'views_panes';
  $pane->subtype = 'rbv_view_members-panel_pane_3';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => '',
    'override_title_text' => '',
    'override_title_heading' => 'h2',
    'view_settings' => 'fields',
    'header_type' => 'none',
    'view_mode' => 'full',
    'widget_title' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => array(
      'devices' => array(
        'hidden-xs' => 0,
        'hidden-sm' => 0,
        'hidden-md' => 0,
        'hidden-lg' => 0,
      ),
      'pane_style' => array(
        'pull-left' => 'pull-left',
        'pull-right' => 0,
        'clearfix' => 0,
        'jumbotron' => 0,
        'well' => 0,
      ),
    ),
    'style' => 'kalacustomize',
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'rbv-count',
  );
  $pane->extras = array();
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = '71ef9e9a-65ee-4af0-9f6c-78698bdb998f';
  $display->content['new-71ef9e9a-65ee-4af0-9f6c-78698bdb998f'] = $pane;
  $display->panels['slider'][5] = 'new-71ef9e9a-65ee-4af0-9f6c-78698bdb998f';
  $pane = new stdClass();
  $pane->pid = 'new-bcecce42-7e7d-4dd2-bc9d-de9188fede84';
  $pane->panel = 'slider';
  $pane->type = 'views_panes';
  $pane->subtype = 'rbv_view_lists-panel_pane_12';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_settings' => 'fields',
    'header_type' => 'none',
    'view_mode' => 'teaser',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => array(
      'devices' => array(
        'hidden-xs' => 0,
        'hidden-sm' => 0,
        'hidden-md' => 0,
        'hidden-lg' => 0,
      ),
      'pane_style' => array(
        'pull-left' => 'pull-left',
        'pull-right' => 0,
        'clearfix' => 0,
        'jumbotron' => 0,
        'well' => 0,
      ),
    ),
    'style' => 'kalacustomize',
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'rbv-count',
  );
  $pane->extras = array();
  $pane->position = 6;
  $pane->locks = array();
  $pane->uuid = 'bcecce42-7e7d-4dd2-bc9d-de9188fede84';
  $display->content['new-bcecce42-7e7d-4dd2-bc9d-de9188fede84'] = $pane;
  $display->panels['slider'][6] = 'new-bcecce42-7e7d-4dd2-bc9d-de9188fede84';
  $pane = new stdClass();
  $pane->pid = 'new-a94dc327-a978-4ee9-b60d-a4d205ab71ca';
  $pane->panel = 'slider';
  $pane->type = 'fieldable_panels_pane';
  $pane->subtype = 'vid:1637';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_mode' => 'full',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 7;
  $pane->locks = array();
  $pane->uuid = 'a94dc327-a978-4ee9-b60d-a4d205ab71ca';
  $display->content['new-a94dc327-a978-4ee9-b60d-a4d205ab71ca'] = $pane;
  $display->panels['slider'][7] = 'new-a94dc327-a978-4ee9-b60d-a4d205ab71ca';
  $pane = new stdClass();
  $pane->pid = 'new-692ecd7b-7241-4b4c-b36a-f4c23c35626b';
  $pane->panel = 'slidergutter';
  $pane->type = 'views_panes';
  $pane->subtype = 'rbv_view_lists-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'more_link' => 0,
    'use_pager' => 0,
    'pager_id' => '0',
    'items_per_page' => '4',
    'view_mode' => 'vmode_group_content',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '692ecd7b-7241-4b4c-b36a-f4c23c35626b';
  $display->content['new-692ecd7b-7241-4b4c-b36a-f4c23c35626b'] = $pane;
  $display->panels['slidergutter'][0] = 'new-692ecd7b-7241-4b4c-b36a-f4c23c35626b';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['rbv_page_home'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'rbv_page_organizzazioni';
  $page->task = 'page';
  $page->admin_title = 'rbv organizzazioni';
  $page->admin_description = '';
  $page->path = 'organizzazioni';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_rbv_page_organizzazioni_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'rbv_page_organizzazioni';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel organizations list',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'esplora la rete
organizzazioni',
    'panels_breadcrumbs_paths' => 'esplora',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'radix_boxton';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'contentmain' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Le organizzazioni della rete';
  $display->uuid = 'e401e68a-4a8d-43e9-b88e-561d76257401';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-994e844a-8eb9-4a24-b0fe-71027ad71f76';
  $pane->panel = 'contentmain';
  $pane->type = 'fieldable_panels_pane';
  $pane->subtype = 'fpid:16';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_mode' => 'full',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '994e844a-8eb9-4a24-b0fe-71027ad71f76';
  $display->content['new-994e844a-8eb9-4a24-b0fe-71027ad71f76'] = $pane;
  $display->panels['contentmain'][0] = 'new-994e844a-8eb9-4a24-b0fe-71027ad71f76';
  $pane = new stdClass();
  $pane->pid = 'new-c452383a-f072-4095-a84c-bd81cb64ff5e';
  $pane->panel = 'contentmain';
  $pane->type = 'views_panes';
  $pane->subtype = 'rbv_view_lists-panel_pane_5';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_mode' => 'vmode_group_content',
    'override_title' => '',
    'override_title_text' => '',
    'widget_title' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'c452383a-f072-4095-a84c-bd81cb64ff5e';
  $display->content['new-c452383a-f072-4095-a84c-bd81cb64ff5e'] = $pane;
  $display->panels['contentmain'][1] = 'new-c452383a-f072-4095-a84c-bd81cb64ff5e';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-c452383a-f072-4095-a84c-bd81cb64ff5e';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['rbv_page_organizzazioni'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'rbv_page_persone';
  $page->task = 'page';
  $page->admin_title = 'rbv persone';
  $page->admin_description = '';
  $page->path = 'persone';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_rbv_page_persone_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'rbv_page_persone';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel people list',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'esplora la rete
persone',
    'panels_breadcrumbs_paths' => 'esplora',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'boxton';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'contentmain' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Persone della rete';
  $display->uuid = 'ff09f9c0-f7c1-44fa-b270-a5520fdadb86';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-aad8ebc5-120a-4c83-a0a8-e5157824339b';
  $pane->panel = 'contentmain';
  $pane->type = 'fieldable_panels_pane';
  $pane->subtype = 'fpid:16';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_mode' => 'full',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'aad8ebc5-120a-4c83-a0a8-e5157824339b';
  $display->content['new-aad8ebc5-120a-4c83-a0a8-e5157824339b'] = $pane;
  $display->panels['contentmain'][0] = 'new-aad8ebc5-120a-4c83-a0a8-e5157824339b';
  $pane = new stdClass();
  $pane->pid = 'new-508f4770-aa42-42f5-a0e7-11fd862a05b1';
  $pane->panel = 'contentmain';
  $pane->type = 'views_panes';
  $pane->subtype = 'rbv_view_members-panel_pane_2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_settings' => 'fields',
    'header_type' => 'none',
    'view_mode' => 'teaser',
    'override_title' => '',
    'override_title_text' => '',
    'widget_title' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '508f4770-aa42-42f5-a0e7-11fd862a05b1';
  $display->content['new-508f4770-aa42-42f5-a0e7-11fd862a05b1'] = $pane;
  $display->panels['contentmain'][1] = 'new-508f4770-aa42-42f5-a0e7-11fd862a05b1';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-508f4770-aa42-42f5-a0e7-11fd862a05b1';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['rbv_page_persone'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'rbv_page_progetti';
  $page->task = 'page';
  $page->admin_title = 'rbv progetti';
  $page->admin_description = '';
  $page->path = 'progetti';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_rbv_page_progetti_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'rbv_page_progetti';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'esplora la rete
progetti',
    'panels_breadcrumbs_paths' => 'esplora',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'boxton';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'contentmain' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'I progetti della rete';
  $display->uuid = 'e9471116-69dc-453e-8c6a-8d45da47886b';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-b09124b9-a385-4cfb-b378-26ac9754e26c';
  $pane->panel = 'contentmain';
  $pane->type = 'fieldable_panels_pane';
  $pane->subtype = 'current:16';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_mode' => 'full',
    'fieldable_panels_pane' => (object) array(
      'timestamp' => 1463130842,
      'uid' => '1',
      'title' => '',
      'log' => '',
      'vuuid' => '',
      'fpid' => '16',
      'bundle' => 'text',
      'link' => 0,
      'path' => '',
      'reusable' => '1',
      'admin_title' => 'nav-explore',
      'admin_description' => '',
      'category' => 'Reusable Content',
      'view_access' => NULL,
      'edit_access' => NULL,
      'created' => '1397047420',
      'changed' => 1463130842,
      'uuid' => '',
      'language' => 'und',
      'current_vid' => '1240',
      'field_basic_text_text' => array(
        'und' => array(
          0 => array(
            'value' => '<div class="pull-right quadrato" style="max-width: 78%; max-height: 72px;">
 <span class="btn btn-link pull-right"><a href="esplora"><i class="fa fa-th fa-lg"></i></a></span>
 <span class="btn btn-link pull-right"><a href="search/site" title="Cerca nel sito"><i class="fa fa-search fa-lg"></a></i></span>
 <span class="btn btn-link pull-right"><a href="persone" title="Link veloce alla pagina con tutte le persone della rete"><i class="fa fa-user fa-lg"></i></a></span>
 <span class="btn btn-link pull-right"><a href="collaborazioni" title="Link veloce alla pagina con tutte le collaborazioni della rete"><i class="fa fa-arrows-h fa-lg"></i></a></span>
 <span class="btn btn-link pull-right"><a href="calendario/elenco" title="Link veloce alla pagina con tutti gli eventi della rete"><i class="fa fa-calendar fa-lg"></i></a></span>
 <span class="btn btn-link pull-right"><a href="progetti" title="Link veloce alla pagina con tutti i progetti della rete"><i class="fa fa-leaf fa-lg"></i></a></span>
 <span class="btn btn-link pull-right"><a href="organizzazioni" title="Link veloce alla pagina con tutte le organizzazioni della rete"><i class="fa fa-home fa-lg"></i></a></span>
</div>',
            'format' => 'rbv_full_html',
          ),
        ),
      ),
      'rdf_mapping' => array(),
      'revision' => 1,
      'is_new' => FALSE,
      'original' => (object) array(
        'vid' => '1240',
        'timestamp' => '1414058408',
        'uid' => '1',
        'title' => '',
        'log' => '',
        'vuuid' => '',
        'fpid' => '16',
        'bundle' => 'text',
        'link' => '0',
        'path' => '',
        'reusable' => '1',
        'admin_title' => 'nav-explore',
        'admin_description' => '',
        'category' => 'Reusable Content',
        'view_access' => NULL,
        'edit_access' => NULL,
        'created' => '1397047420',
        'changed' => '1414058408',
        'uuid' => '',
        'language' => 'und',
        'current_vid' => '1240',
        'field_basic_text_text' => array(
          'und' => array(
            0 => array(
              'value' => '<div class="pull-right quadrato" style="max-width: 78%; max-height: 72px;">
 <span class="btn btn-link pull-right"><a href="esplora"><i class="fa fa-th fa-lg"></i></a></span>
 <span class="btn btn-link pull-right"><a href="search/site" title="Cerca nel sito"><i class="fa fa-search fa-lg"></a></i></span>
 <span class="btn btn-link pull-right"><a href="persone" title="Link veloce alla pagina con tutte le persone della rete"><i class="fa fa-user fa-lg"></i></a></span>
 <span class="btn btn-link pull-right"><a href="collaborazioni" title="Link veloce alla pagina con tutte le collaborazioni della rete"><i class="fa fa-arrows-h fa-lg"></i></a></span>
 <span class="btn btn-link pull-right"><a href="calendario/eventi" title="Link veloce alla pagina con tutti gli eventi della rete"><i class="fa fa-calendar fa-lg"></i></a></span>
 <span class="btn btn-link pull-right"><a href="progetti" title="Link veloce alla pagina con tutti i progetti della rete"><i class="fa fa-leaf fa-lg"></i></a></span>
 <span class="btn btn-link pull-right"><a href="organizzazioni" title="Link veloce alla pagina con tutte le organizzazioni della rete"><i class="fa fa-home fa-lg"></i></a></span>
</div>',
              'format' => 'rbv_full_html',
              'safe_value' => '<div class="pull-right quadrato" style="max-width: 78%; max-height: 72px;">
 <span class="btn btn-link pull-right"><a href="esplora"><i class="fa fa-th fa-lg"></i></a></span>
 <span class="btn btn-link pull-right"><a href="search/site" title="Cerca nel sito"><i class="fa fa-search fa-lg"></a></i></span>
 <span class="btn btn-link pull-right"><a href="persone" title="Link veloce alla pagina con tutte le persone della rete"><i class="fa fa-user fa-lg"></i></a></span>
 <span class="btn btn-link pull-right"><a href="collaborazioni" title="Link veloce alla pagina con tutte le collaborazioni della rete"><i class="fa fa-arrows-h fa-lg"></i></a></span>
 <span class="btn btn-link pull-right"><a href="calendario/eventi" title="Link veloce alla pagina con tutti gli eventi della rete"><i class="fa fa-calendar fa-lg"></i></a></span>
 <span class="btn btn-link pull-right"><a href="progetti" title="Link veloce alla pagina con tutti i progetti della rete"><i class="fa fa-leaf fa-lg"></i></a></span>
 <span class="btn btn-link pull-right"><a href="organizzazioni" title="Link veloce alla pagina con tutte le organizzazioni della rete"><i class="fa fa-home fa-lg"></i></a></span>
</div>',
            ),
          ),
        ),
        'rdf_mapping' => array(),
      ),
      'old_vid' => '1240',
      'vid' => '1607',
    ),
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'b09124b9-a385-4cfb-b378-26ac9754e26c';
  $display->content['new-b09124b9-a385-4cfb-b378-26ac9754e26c'] = $pane;
  $display->panels['contentmain'][0] = 'new-b09124b9-a385-4cfb-b378-26ac9754e26c';
  $pane = new stdClass();
  $pane->pid = 'new-4b13d651-fe97-4db5-871d-e0f033a78844';
  $pane->panel = 'contentmain';
  $pane->type = 'views_panes';
  $pane->subtype = 'rbv_view_lists-panel_pane_6';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_mode' => 'vmode_group_content',
    'override_title' => '',
    'override_title_text' => '',
    'widget_title' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '4b13d651-fe97-4db5-871d-e0f033a78844';
  $display->content['new-4b13d651-fe97-4db5-871d-e0f033a78844'] = $pane;
  $display->panels['contentmain'][1] = 'new-4b13d651-fe97-4db5-871d-e0f033a78844';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-4b13d651-fe97-4db5-871d-e0f033a78844';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['rbv_page_progetti'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'rbv_project_add_col';
  $page->task = 'page';
  $page->admin_title = 'rbv project add col';
  $page->admin_description = '';
  $page->path = 'node/%node/add-collaboration';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'node_type',
        'settings' => array(
          'type' => array(
            'project' => 'project',
          ),
        ),
        'context' => 'argument_entity_id:node_1',
        'not' => FALSE,
      ),
      1 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 3,
            1 => 6,
            2 => 5,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'action',
    'title' => 'Aggiungi collaborazione a questo progetto',
    'name' => 'navigation',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array(
    'node' => array(
      'id' => 1,
      'identifier' => 'Nodo: ID',
      'name' => 'entity_id:node',
      'settings' => array(),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page__redirect5';
  $handler->task = 'page';
  $handler->subtask = 'rbv_project_add_col';
  $handler->handler = 'http_response';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'redirect5',
    'contexts' => array(),
    'relationships' => array(),
    'code' => '301',
    'destination' => 'node/add/collaboration?field_relpro_project=%node:nid&destination=node/%node:nid',
    'access' => array(
      'plugins' => array(),
      'logic' => 'and',
    ),
    'name' => 'redirect5',
  );
  $page->default_handlers[$handler->name] = $handler;
  $pages['rbv_project_add_col'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'rbv_project_add_event';
  $page->task = 'page';
  $page->admin_title = 'rbv project add event';
  $page->admin_description = '';
  $page->path = 'node/%node/add-event';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'node_type',
        'settings' => array(
          'type' => array(
            'project' => 'project',
          ),
        ),
        'context' => 'argument_entity_id:node_1',
        'not' => FALSE,
      ),
      1 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 3,
            1 => 6,
            2 => 5,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'action',
    'title' => 'Aggiungi evento a questo progetto',
    'name' => 'navigation',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array(
    'node' => array(
      'id' => 1,
      'identifier' => 'Nodo: ID',
      'name' => 'entity_id:node',
      'settings' => array(),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page__redirect5b';
  $handler->task = 'page';
  $handler->subtask = 'rbv_project_add_event';
  $handler->handler = 'http_response';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'redirect5b',
    'contexts' => array(),
    'relationships' => array(),
    'code' => '301',
    'destination' => 'node/add/event?field_relpro_project=%node:nid&destination=node/%node:nid',
    'access' => array(
      'plugins' => array(),
      'logic' => 'and',
    ),
    'name' => 'redirect5b',
  );
  $page->default_handlers[$handler->name] = $handler;
  $pages['rbv_project_add_event'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'rbv_rete_add_col';
  $page->task = 'page';
  $page->admin_title = 'rbv rete add col';
  $page->admin_description = '';
  $page->path = 'rete/add-collaboration';
  $page->access = array(
    'plugins' => array(
      1 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 3,
            1 => 6,
            2 => 5,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'action',
    'title' => 'Aggiungi collaborazione',
    'name' => 'navigation',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page__redirect6';
  $handler->task = 'page';
  $handler->subtask = 'rbv_rete_add_col';
  $handler->handler = 'http_response';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'redirect6',
    'contexts' => array(),
    'relationships' => array(),
    'code' => '301',
    'destination' => 'node/add/collaboration?destination=rete',
    'access' => array(
      'plugins' => array(),
      'logic' => 'and',
    ),
    'name' => 'redirect6',
  );
  $page->default_handlers[$handler->name] = $handler;
  $pages['rbv_rete_add_col'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'rbv_rete_add_project';
  $page->task = 'page';
  $page->admin_title = 'rbv rete add project';
  $page->admin_description = '';
  $page->path = 'rete/add-project';
  $page->access = array(
    'plugins' => array(
      1 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 3,
            1 => 6,
            2 => 5,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'action',
    'title' => 'Aggiungi progetto/attività',
    'name' => 'navigation',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page__redirect7';
  $handler->task = 'page';
  $handler->subtask = 'rbv_rete_add_project';
  $handler->handler = 'http_response';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'redirect7',
    'contexts' => array(),
    'relationships' => array(),
    'code' => '301',
    'destination' => 'node/add/project?destination=rete',
    'access' => array(
      'plugins' => array(),
      'logic' => 'and',
    ),
    'name' => 'redirect7',
  );
  $page->default_handlers[$handler->name] = $handler;
  $pages['rbv_rete_add_project'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'rbv_user_add_col';
  $page->task = 'page';
  $page->admin_title = 'rbv user add col';
  $page->admin_description = '';
  $page->path = 'user/%user/add-collaboration';
  $page->access = array(
    'plugins' => array(
      1 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 3,
            1 => 6,
            2 => 5,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'action',
    'title' => 'Aggiungi collaborazione',
    'name' => 'navigation',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array(
    'user' => array(
      'id' => 1,
      'identifier' => 'Utente: ID',
      'name' => 'entity_id:user',
      'settings' => array(),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page__redirect10';
  $handler->task = 'page';
  $handler->subtask = 'rbv_user_add_col';
  $handler->handler = 'http_response';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'redirect10',
    'contexts' => array(),
    'relationships' => array(),
    'code' => '301',
    'destination' => 'node/add/collaboration?destination=user/%user:uid',
    'access' => array(
      'plugins' => array(),
      'logic' => 'and',
    ),
    'name' => 'redirect10',
  );
  $page->default_handlers[$handler->name] = $handler;
  $pages['rbv_user_add_col'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'rbv_user_add_event';
  $page->task = 'page';
  $page->admin_title = 'rbv user add event';
  $page->admin_description = '';
  $page->path = 'user/%user/add-event';
  $page->access = array(
    'plugins' => array(
      1 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 3,
            1 => 6,
            2 => 5,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'action',
    'title' => 'Aggiungi evento',
    'name' => 'navigation',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array(
    'user' => array(
      'id' => 1,
      'identifier' => 'Utente: ID',
      'name' => 'entity_id:user',
      'settings' => array(),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page__redirect12';
  $handler->task = 'page';
  $handler->subtask = 'rbv_user_add_event';
  $handler->handler = 'http_response';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'redirect12',
    'contexts' => array(),
    'relationships' => array(),
    'code' => '301',
    'destination' => 'node/add/event?destination=user/%user:uid',
    'access' => array(
      'plugins' => array(),
      'logic' => 'and',
    ),
    'name' => 'redirect12',
  );
  $page->default_handlers[$handler->name] = $handler;
  $pages['rbv_user_add_event'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'rbv_user_add_project';
  $page->task = 'page';
  $page->admin_title = 'rbv user add project';
  $page->admin_description = '';
  $page->path = 'user/%user/add-project';
  $page->access = array(
    'plugins' => array(
      1 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 3,
            1 => 6,
            2 => 5,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'action',
    'title' => 'Aggiungi progetto/attività',
    'name' => 'navigation',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array(
    'user' => array(
      'id' => 1,
      'identifier' => 'Utente: ID',
      'name' => 'entity_id:user',
      'settings' => array(),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page__redirect11';
  $handler->task = 'page';
  $handler->subtask = 'rbv_user_add_project';
  $handler->handler = 'http_response';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'redirect11',
    'contexts' => array(),
    'relationships' => array(),
    'code' => '301',
    'destination' => 'node/add/project?destination=user/%user:uid',
    'access' => array(
      'plugins' => array(),
      'logic' => 'and',
    ),
    'name' => 'redirect11',
  );
  $page->default_handlers[$handler->name] = $handler;
  $pages['rbv_user_add_project'] = $page;

  return $pages;

}
