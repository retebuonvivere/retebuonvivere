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
  $page->name = 'rbv_graph';
  $page->task = 'page';
  $page->admin_title = 'Graph';
  $page->admin_description = '';
  $page->path = 'rete';
  $page->access = array(
    'logic' => 'and',
    'plugins' => array(),
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
  $display->layout = 'brenham_flipped';
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
    $pane->style = array();
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
    $pane->style = array();
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
    $pane->style = array();
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
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '9be68ad4-36d0-4e27-baff-e80d0d1f08b1';
    $display->content['new-9be68ad4-36d0-4e27-baff-e80d0d1f08b1'] = $pane;
    $display->panels['sidebar'][0] = 'new-9be68ad4-36d0-4e27-baff-e80d0d1f08b1';
  $display->hide_title = PANELS_TITLE_NONE;
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
  $display->layout = 'brenham_flipped';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'contentmain' => NULL,
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
    );
    $pane->cache = array();
    $pane->style = array();
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
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '8b8e0888-dcbd-42ad-be92-b2e58e5def06';
    $display->content['new-8b8e0888-dcbd-42ad-be92-b2e58e5def06'] = $pane;
    $display->panels['sidebar'][0] = 'new-8b8e0888-dcbd-42ad-be92-b2e58e5def06';
  $display->hide_title = PANELS_TITLE_NONE;
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
  $display->layout = 'brenham_flipped';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'contentmain' => NULL,
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
    );
    $pane->cache = array();
    $pane->style = array();
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
    $pane->style = array();
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
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '4eac88bd-12b7-4f73-80cb-ba18b705e569';
    $display->content['new-4eac88bd-12b7-4f73-80cb-ba18b705e569'] = $pane;
    $display->panels['sidebar'][0] = 'new-4eac88bd-12b7-4f73-80cb-ba18b705e569';
  $display->hide_title = PANELS_TITLE_NONE;
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
    ),
    'logic' => 'and',
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'action',
    'title' => 'aggiungi evento',
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
    ),
    'logic' => 'and',
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'default tab',
    'title' => 'Calendario',
    'name' => 'navigation',
    'weight' => '1',
    'parent' => array(
      'type' => 'tab',
      'title' => 'Eventi',
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
  $display->layout = 'bryant_flipped_flipped';
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
  $page->name = 'rbv_group_projects_collaborations';
  $page->task = 'page';
  $page->admin_title = 'rbv group projects collaborations';
  $page->admin_description = '';
  $page->path = 'node/%node/progetti/collaborzioni';
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
    'body_classes_to_add' => '',
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
  $display->layout = 'boxton';
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
    $pane->pid = 'new-4742d2fd-ffcf-4bbf-aa8e-b6286ef6091e';
    $pane->panel = 'contentmain';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:9';
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
    $pane->uuid = '4742d2fd-ffcf-4bbf-aa8e-b6286ef6091e';
    $display->content['new-4742d2fd-ffcf-4bbf-aa8e-b6286ef6091e'] = $pane;
    $display->panels['contentmain'][0] = 'new-4742d2fd-ffcf-4bbf-aa8e-b6286ef6091e';
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
    ),
    'logic' => 'and',
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'tab',
    'title' => 'Progetti/attività',
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
  $display->layout = 'pond';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'sidebar' => NULL,
      'contentmain' => NULL,
      'slider' => NULL,
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
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'a86d90d6-e4c8-4bcd-bb63-5a0ae7b2baa3';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-c89fee4b-b3a2-4cf6-a9a7-f37f3aa2f07f';
    $pane->panel = 'column1';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:3';
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
    $pane->uuid = 'c89fee4b-b3a2-4cf6-a9a7-f37f3aa2f07f';
    $display->content['new-c89fee4b-b3a2-4cf6-a9a7-f37f3aa2f07f'] = $pane;
    $display->panels['column1'][0] = 'new-c89fee4b-b3a2-4cf6-a9a7-f37f3aa2f07f';
    $pane = new stdClass();
    $pane->pid = 'new-abbc6489-2ffb-48c1-b51e-833422a09eb6';
    $pane->panel = 'column2';
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'abbc6489-2ffb-48c1-b51e-833422a09eb6';
    $display->content['new-abbc6489-2ffb-48c1-b51e-833422a09eb6'] = $pane;
    $display->panels['column2'][0] = 'new-abbc6489-2ffb-48c1-b51e-833422a09eb6';
    $pane = new stdClass();
    $pane->pid = 'new-ec8ff0e5-a03a-406e-a8b9-b2ed180b9290';
    $pane->panel = 'column3';
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'ec8ff0e5-a03a-406e-a8b9-b2ed180b9290';
    $display->content['new-ec8ff0e5-a03a-406e-a8b9-b2ed180b9290'] = $pane;
    $display->panels['column3'][0] = 'new-ec8ff0e5-a03a-406e-a8b9-b2ed180b9290';
    $pane = new stdClass();
    $pane->pid = 'new-b3fcedf0-0c13-47aa-9690-43204521dbe4';
    $pane->panel = 'footer';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:29';
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
    $pane->uuid = 'b3fcedf0-0c13-47aa-9690-43204521dbe4';
    $display->content['new-b3fcedf0-0c13-47aa-9690-43204521dbe4'] = $pane;
    $display->panels['footer'][0] = 'new-b3fcedf0-0c13-47aa-9690-43204521dbe4';
    $pane = new stdClass();
    $pane->pid = 'new-73df4042-9bf4-4ad6-8cdb-9d59e7fb6d50';
    $pane->panel = 'header';
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
    $pane->uuid = '73df4042-9bf4-4ad6-8cdb-9d59e7fb6d50';
    $display->content['new-73df4042-9bf4-4ad6-8cdb-9d59e7fb6d50'] = $pane;
    $display->panels['header'][0] = 'new-73df4042-9bf4-4ad6-8cdb-9d59e7fb6d50';
    $pane = new stdClass();
    $pane->pid = 'new-e6f28570-ac83-4356-8f80-e07ab7ee616c';
    $pane->panel = 'secondarycolumn1';
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
    $display->panels['secondarycolumn1'][0] = 'new-e6f28570-ac83-4356-8f80-e07ab7ee616c';
    $pane = new stdClass();
    $pane->pid = 'new-82c6055a-c4d0-4398-8a76-68c70f1a70a6';
    $pane->panel = 'secondarycolumn2';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:19';
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
    $pane->uuid = '82c6055a-c4d0-4398-8a76-68c70f1a70a6';
    $display->content['new-82c6055a-c4d0-4398-8a76-68c70f1a70a6'] = $pane;
    $display->panels['secondarycolumn2'][0] = 'new-82c6055a-c4d0-4398-8a76-68c70f1a70a6';
    $pane = new stdClass();
    $pane->pid = 'new-36db1c73-4dcf-45a5-a158-86d618cc71ff';
    $pane->panel = 'secondarycolumn3';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:10';
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
    $pane->uuid = '36db1c73-4dcf-45a5-a158-86d618cc71ff';
    $display->content['new-36db1c73-4dcf-45a5-a158-86d618cc71ff'] = $pane;
    $display->panels['secondarycolumn3'][0] = 'new-36db1c73-4dcf-45a5-a158-86d618cc71ff';
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
  $display->layout = 'boxton';
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

  return $pages;

}
