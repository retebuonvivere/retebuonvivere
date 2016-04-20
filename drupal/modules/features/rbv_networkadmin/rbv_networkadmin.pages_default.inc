<?php
/**
 * @file
 * rbv_networkadmin.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function rbv_networkadmin_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'rbv_network_admin_tab1';
  $page->task = 'page';
  $page->admin_title = 'rbv network admin tab1';
  $page->admin_description = 'Network administration tools';
  $page->path = 'networkadmin/partecipanti';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 5,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
      1 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 3,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
    'logic' => 'or',
  );
  $page->menu = array(
    'type' => 'tab',
    'title' => 'Org. partecipanti',
    'name' => 'navigation',
    'weight' => '0',
    'parent' => array(
      'type' => 'tab',
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
  $handler->name = 'page_rbv_network_admin_tab1__panel_context_03435071-6d28-48e5-b1f1-08a0aa4e6562';
  $handler->task = 'page';
  $handler->subtask = 'rbv_network_admin_tab1';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'networkadmin',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'networkadmin',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'logic' => 'and',
    ),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'network admin',
    'panels_breadcrumbs_paths' => '',
    'panels_breadcrumbs_home' => 1,
    'name' => '',
  );
  $display = new panels_display();
  $display->layout = 'radix_pond';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'contentmain' => NULL,
      'column1' => NULL,
      'column2' => NULL,
      'column3' => NULL,
      'secondarycolumn1' => NULL,
      'secondarycolumn2' => NULL,
      'secondarycolumn3' => NULL,
      'footer' => NULL,
      'header' => NULL,
    ),
    'header' => array(
      'style' => '0',
    ),
    'footer' => array(
      'style' => '0',
    ),
  );
  $display->cache = array();
  $display->title = 'Strumenti per l\'amministratore di rete';
  $display->uuid = 'c1369b36-1f83-49b1-8f27-1570d2c67631';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-b4f9a9db-f33a-4c26-aa32-14ea748f3d69';
  $pane->panel = 'header';
  $pane->type = 'views_panes';
  $pane->subtype = 'rbv_netadmview_joined-panel_pane_9';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => '',
    'override_title_text' => '',
    'override_title_heading' => 'h2',
    'view_settings' => 'table',
    'header_type' => 'titles',
    'view_mode' => 'teaser',
    'widget_title' => 'Org. partecipanti - dettagli',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'b4f9a9db-f33a-4c26-aa32-14ea748f3d69';
  $display->content['new-b4f9a9db-f33a-4c26-aa32-14ea748f3d69'] = $pane;
  $display->panels['header'][0] = 'new-b4f9a9db-f33a-4c26-aa32-14ea748f3d69';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['rbv_network_admin_tab1'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'rbv_page_network_admin';
  $page->task = 'page';
  $page->admin_title = 'rbv network admin';
  $page->admin_description = 'Network administration tools';
  $page->path = 'networkadmin/dashboard';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 5,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
      1 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 3,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
    'logic' => 'or',
  );
  $page->menu = array(
    'type' => 'default tab',
    'title' => 'Dashboard',
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
  $handler->name = 'page_rbv_page_network_admin_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'rbv_page_network_admin';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'networkadmin',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'networkadmin',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'logic' => 'and',
    ),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'network admin',
    'panels_breadcrumbs_paths' => '',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'radix_pond';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'contentmain' => NULL,
      'column1' => NULL,
      'column2' => NULL,
      'column3' => NULL,
      'secondarycolumn1' => NULL,
      'secondarycolumn2' => NULL,
      'secondarycolumn3' => NULL,
      'footer' => NULL,
      'header' => NULL,
    ),
    'header' => array(
      'style' => '0',
    ),
    'footer' => array(
      'style' => '0',
    ),
  );
  $display->cache = array();
  $display->title = 'Strumenti per l\'amministratore di rete';
  $display->uuid = 'c1369b36-1f83-49b1-8f27-1570d2c67631';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-fdfa02e8-83d6-42f7-80ca-d0e9522fa049';
  $pane->panel = 'column1';
  $pane->type = 'fieldable_panels_pane';
  $pane->subtype = 'fpid:13';
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
  $pane->uuid = 'fdfa02e8-83d6-42f7-80ca-d0e9522fa049';
  $display->content['new-fdfa02e8-83d6-42f7-80ca-d0e9522fa049'] = $pane;
  $display->panels['column1'][0] = 'new-fdfa02e8-83d6-42f7-80ca-d0e9522fa049';
  $pane = new stdClass();
  $pane->pid = 'new-07363ecc-7d7b-4a48-9185-0a669abe3fb4';
  $pane->panel = 'column1';
  $pane->type = 'fieldable_panels_pane';
  $pane->subtype = 'fpid:21';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_mode' => 'full',
    'fieldable_panels_pane' => (object) array(
      'timestamp' => 1461134072,
      'uid' => '1',
      'title' => 'Gruppo di sviluppo',
      'log' => '',
      'vuuid' => '',
      'fpid' => '21',
      'bundle' => 'text',
      'link' => 0,
      'path' => '',
      'reusable' => 0,
      'admin_title' => '',
      'admin_description' => '',
      'category' => 'Reusable Content',
      'view_access' => NULL,
      'edit_access' => NULL,
      'created' => '1406542089',
      'changed' => 1461134072,
      'uuid' => '',
      'language' => '',
      'current_vid' => '1597',
      'field_basic_text_text' => array(
        'und' => array(
          0 => array(
            'value' => '<p><a href="https://github.com/retebuonvivere/retebuonvivere" class="btn btn-default"><i class="fa fa-github fa-lg"></i> retebuonvivere</a> Code repository</p>
<p><a href="https://retebuonvivere.slack.com" class="btn btn-default" style="background-color:#D3D3D3; color:#2C3239;"><i class="fa fa-slack fa-lg"></i> retebuonvivere</a> Team communication</p>
<p><a href="https://trello.com/b/oignbFQp/retebuonvivere" class="btn btn-default" style="background-color:#0079BF; color:#ffffff;"><i class="fa fa-trello fa-lg"></i> retebuonvivere</a> Task manager</p>',
            'format' => 'panopoly_html_text',
          ),
        ),
      ),
      'rdf_mapping' => array(),
      'revision' => 1,
      'is_new' => FALSE,
      'original' => (object) array(
        'vid' => '1597',
        'timestamp' => '1444917673',
        'uid' => '1',
        'title' => 'Gruppo di sviluppo',
        'log' => '',
        'vuuid' => '',
        'fpid' => '21',
        'bundle' => 'text',
        'link' => '0',
        'path' => '',
        'reusable' => '0',
        'admin_title' => '',
        'admin_description' => '',
        'category' => 'Reusable Content',
        'view_access' => NULL,
        'edit_access' => NULL,
        'created' => '1406542089',
        'changed' => '1444917673',
        'uuid' => '',
        'language' => '',
        'current_vid' => '1597',
        'field_basic_text_text' => array(
          'und' => array(
            0 => array(
              'value' => '<p><a href="https://github.com/retebuonvivere/retebuonvivere" class="btn btn-default"><i class="fa fa-github fa-lg"></i> retebuonvivere</a> Code repository</p>
<p><a href="https://retebuonvivere.slack.com" class="btn btn-default" style="background-color:#D3D3D3; color:#2C3239;"><i class="fa fa-slack fa-lg"></i> retebuonvivere</a> Team communication</p>',
              'format' => 'panopoly_html_text',
              'safe_value' => '<p><a href="https://github.com/retebuonvivere/retebuonvivere" class="btn btn-default"><i class="fa fa-github fa-lg"></i> retebuonvivere</a> Code repository</p>
<p><a href="https://retebuonvivere.slack.com" class="btn btn-default" style="background-color:#D3D3D3; color:#2C3239"><i class="fa fa-slack fa-lg"></i> retebuonvivere</a> Team communication</p>',
            ),
          ),
        ),
        'rdf_mapping' => array(),
      ),
      'old_vid' => '1597',
      'vid' => '1601',
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
  $pane->uuid = '07363ecc-7d7b-4a48-9185-0a669abe3fb4';
  $display->content['new-07363ecc-7d7b-4a48-9185-0a669abe3fb4'] = $pane;
  $display->panels['column1'][1] = 'new-07363ecc-7d7b-4a48-9185-0a669abe3fb4';
  $pane = new stdClass();
  $pane->pid = 'new-9415840c-2228-45c0-9c36-cc5c6fb223ca';
  $pane->panel = 'column2';
  $pane->type = 'fieldable_panels_pane';
  $pane->subtype = 'fpid:12';
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
  $pane->uuid = '9415840c-2228-45c0-9c36-cc5c6fb223ca';
  $display->content['new-9415840c-2228-45c0-9c36-cc5c6fb223ca'] = $pane;
  $display->panels['column2'][0] = 'new-9415840c-2228-45c0-9c36-cc5c6fb223ca';
  $pane = new stdClass();
  $pane->pid = 'new-ededd95a-eb22-4ee9-afc0-1c104ed3fb8f';
  $pane->panel = 'column2';
  $pane->type = 'fieldable_panels_pane';
  $pane->subtype = 'fpid:14';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_mode' => 'full',
    'fieldable_panels_pane' => (object) array(
      'timestamp' => 1459870157,
      'uid' => '1',
      'title' => 'Blog',
      'log' => '',
      'vuuid' => '',
      'fpid' => '14',
      'bundle' => 'text',
      'link' => 0,
      'path' => '',
      'reusable' => 0,
      'admin_title' => '',
      'admin_description' => '',
      'category' => 'Reusable Content',
      'view_access' => NULL,
      'edit_access' => NULL,
      'created' => '1396944422',
      'changed' => 1459870157,
      'uuid' => '',
      'language' => '',
      'current_vid' => '414',
      'field_basic_text_text' => array(
        'und' => array(
          0 => array(
            'value' => '<p><a href="http://retebuonvivere.wordpress.com/" class="btn btn-primary"><i class="fa fa-wordpress fa-lg"></i> retebuonvivere.wordpress.com</a></p>',
            'format' => 'panopoly_html_text',
          ),
        ),
      ),
      'rdf_mapping' => array(),
      'revision' => 1,
      'is_new' => FALSE,
      'original' => (object) array(
        'vid' => '414',
        'timestamp' => '1396944623',
        'uid' => '1',
        'title' => 'Blog',
        'log' => '',
        'vuuid' => '',
        'fpid' => '14',
        'bundle' => 'text',
        'link' => '0',
        'path' => '',
        'reusable' => '0',
        'admin_title' => '',
        'admin_description' => '',
        'category' => 'Reusable Content',
        'view_access' => NULL,
        'edit_access' => NULL,
        'created' => '1396944422',
        'changed' => '1406542122',
        'uuid' => '',
        'language' => '',
        'current_vid' => '414',
        'field_basic_text_text' => array(
          'und' => array(
            0 => array(
              'value' => '<p><a href="http://retebuonvivere.wordpress.com/" class="btn btn-primary"><i class="fa fa-bullhorn fa-lg"></i> retebuonvivere.wordpress.com</a></p>',
              'format' => 'panopoly_html_text',
              'safe_value' => '<p><a href="http://retebuonvivere.wordpress.com/" class="btn btn-primary"><i class="fa fa-bullhorn fa-lg"></i> retebuonvivere.wordpress.com</a></p>',
            ),
          ),
        ),
        'rdf_mapping' => array(),
      ),
      'old_vid' => '414',
      'vid' => '1605',
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
  $pane->uuid = 'ededd95a-eb22-4ee9-afc0-1c104ed3fb8f';
  $display->content['new-ededd95a-eb22-4ee9-afc0-1c104ed3fb8f'] = $pane;
  $display->panels['column2'][1] = 'new-ededd95a-eb22-4ee9-afc0-1c104ed3fb8f';
  $pane = new stdClass();
  $pane->pid = 'new-09a9076b-62b7-4395-aea9-c99326b2cc00';
  $pane->panel = 'column3';
  $pane->type = 'fieldable_panels_pane';
  $pane->subtype = 'fpid:18';
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
  $pane->uuid = '09a9076b-62b7-4395-aea9-c99326b2cc00';
  $display->content['new-09a9076b-62b7-4395-aea9-c99326b2cc00'] = $pane;
  $display->panels['column3'][0] = 'new-09a9076b-62b7-4395-aea9-c99326b2cc00';
  $pane = new stdClass();
  $pane->pid = 'new-306c4ce4-6b30-44da-abab-f184cefcee85';
  $pane->panel = 'footer';
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
    'widget_title' => 'Partecipano già',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
    'style' => 'default',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '306c4ce4-6b30-44da-abab-f184cefcee85';
  $display->content['new-306c4ce4-6b30-44da-abab-f184cefcee85'] = $pane;
  $display->panels['footer'][0] = 'new-306c4ce4-6b30-44da-abab-f184cefcee85';
  $pane = new stdClass();
  $pane->pid = 'new-e370759e-0323-449b-b412-113aa39cb31b';
  $pane->panel = 'footer';
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
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'e370759e-0323-449b-b412-113aa39cb31b';
  $display->content['new-e370759e-0323-449b-b412-113aa39cb31b'] = $pane;
  $display->panels['footer'][1] = 'new-e370759e-0323-449b-b412-113aa39cb31b';
  $pane = new stdClass();
  $pane->pid = 'new-100fa6f3-5c8c-42e6-8b93-76f1f804c07b';
  $pane->panel = 'footer';
  $pane->type = 'views_panes';
  $pane->subtype = 'rbv_netadmview_joined-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => '',
    'override_title_text' => '',
    'override_title_heading' => 'h2',
    'view_settings' => 'fields',
    'header_type' => 'titles',
    'view_mode' => 'teaser',
    'widget_title' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '100fa6f3-5c8c-42e6-8b93-76f1f804c07b';
  $display->content['new-100fa6f3-5c8c-42e6-8b93-76f1f804c07b'] = $pane;
  $display->panels['footer'][2] = 'new-100fa6f3-5c8c-42e6-8b93-76f1f804c07b';
  $pane = new stdClass();
  $pane->pid = 'new-cd226678-bd9a-4290-82ff-af4c3c66c3a0';
  $pane->panel = 'footer';
  $pane->type = 'fieldable_panels_pane';
  $pane->subtype = 'fpid:32';
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
      'reusable' => 0,
      'admin_title' => '',
      'admin_description' => '',
      'category' => 'Reusable Content',
      'vid' => '1602',
      'current_vid' => '',
      'revision' => 1,
      'fpid' => '32',
      'field_basic_text_text' => array(
        'und' => array(
          0 => array(
            'value' => '<a class="btn btn-default" href="/networkadmin/partecipanti">Dettagli org. partecipanti</a>',
            'format' => 'panopoly_html_text',
          ),
        ),
      ),
      'log' => '',
      'created' => 1461134247,
      'timestamp' => 1461134247,
      'changed' => 1461134247,
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
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'cd226678-bd9a-4290-82ff-af4c3c66c3a0';
  $display->content['new-cd226678-bd9a-4290-82ff-af4c3c66c3a0'] = $pane;
  $display->panels['footer'][3] = 'new-cd226678-bd9a-4290-82ff-af4c3c66c3a0';
  $pane = new stdClass();
  $pane->pid = 'new-4948cc24-2cfd-425a-bc6f-7a28bf8b2a89';
  $pane->panel = 'footer';
  $pane->type = 'views_panes';
  $pane->subtype = 'rbv_netadmview_organon-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'items_per_page' => '5',
    'override_title' => '',
    'override_title_text' => '',
    'override_title_heading' => 'h2',
    'view_settings' => 'table',
    'header_type' => 'titles',
    'view_mode' => 'teaser',
    'widget_title' => 'Organizzazioni (limit 5) nominate nelle collaborazioni',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '4948cc24-2cfd-425a-bc6f-7a28bf8b2a89';
  $display->content['new-4948cc24-2cfd-425a-bc6f-7a28bf8b2a89'] = $pane;
  $display->panels['footer'][4] = 'new-4948cc24-2cfd-425a-bc6f-7a28bf8b2a89';
  $pane = new stdClass();
  $pane->pid = 'new-11a71998-a940-4d85-b6da-1b56dd234c2e';
  $pane->panel = 'footer';
  $pane->type = 'fieldable_panels_pane';
  $pane->subtype = 'fpid:34';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_mode' => 'full',
    'fieldable_panels_pane' => (object) array(
      'timestamp' => 1459926377,
      'uid' => '1',
      'title' => '',
      'log' => '',
      'vuuid' => '',
      'fpid' => '34',
      'bundle' => 'text',
      'link' => 0,
      'path' => '',
      'reusable' => 0,
      'admin_title' => '',
      'admin_description' => '',
      'category' => 'Reusable Content',
      'view_access' => NULL,
      'edit_access' => NULL,
      'created' => '1459926279',
      'changed' => 1459926377,
      'uuid' => '',
      'language' => 'und',
      'current_vid' => '1607',
      'field_basic_text_text' => array(
        'und' => array(
          0 => array(
            'value' => '<a class="btn btn-default" href="/networkadmin/nominate">Elenco completo</a>',
            'format' => 'rbv_full_html',
          ),
        ),
      ),
      'rdf_mapping' => array(),
      'revision' => 1,
      'is_new' => FALSE,
      'original' => (object) array(
        'vid' => '1607',
        'timestamp' => '1459926279',
        'uid' => '1',
        'title' => 'Elenco completo',
        'log' => '',
        'vuuid' => '',
        'fpid' => '34',
        'bundle' => 'text',
        'link' => '0',
        'path' => '',
        'reusable' => '0',
        'admin_title' => '',
        'admin_description' => '',
        'category' => 'Reusable Content',
        'view_access' => NULL,
        'edit_access' => NULL,
        'created' => '1459926279',
        'changed' => '1459926279',
        'uuid' => '',
        'language' => 'und',
        'current_vid' => '1607',
        'field_basic_text_text' => array(
          'und' => array(
            0 => array(
              'value' => '<a class="btn btn-default" href="/networkadmin/nominate">Elenco completo</a>',
              'format' => 'rbv_full_html',
              'safe_value' => '<a class="btn btn-default" href="/networkadmin/nominate">Elenco completo</a>',
            ),
          ),
        ),
        'rdf_mapping' => array(),
      ),
      'old_vid' => '1607',
      'vid' => '1608',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = '11a71998-a940-4d85-b6da-1b56dd234c2e';
  $display->content['new-11a71998-a940-4d85-b6da-1b56dd234c2e'] = $pane;
  $display->panels['footer'][5] = 'new-11a71998-a940-4d85-b6da-1b56dd234c2e';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['rbv_page_network_admin'] = $page;

  return $pages;

}
