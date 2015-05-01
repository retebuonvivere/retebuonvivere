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
  $page->name = 'rbv_page_network_admin';
  $page->task = 'page';
  $page->admin_title = 'rbv network admin';
  $page->admin_description = 'Network administration tools';
  $page->path = 'networkadmin';
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
    'type' => 'none',
    'title' => '',
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
    $pane->pid = 'new-ea492960-4d54-4d75-9ae9-577d994a8959';
    $pane->panel = 'footer';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:30';
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
    $pane->uuid = 'ea492960-4d54-4d75-9ae9-577d994a8959';
    $display->content['new-ea492960-4d54-4d75-9ae9-577d994a8959'] = $pane;
    $display->panels['footer'][0] = 'new-ea492960-4d54-4d75-9ae9-577d994a8959';
    $pane = new stdClass();
    $pane->pid = 'new-a809b62f-c032-4303-8f0f-4d0be2f9f635';
    $pane->panel = 'footer';
    $pane->type = 'views_panes';
    $pane->subtype = 'rbv_view_members-panel_pane_3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => '',
      'override_title_text' => '',
      'override_title_heading' => 'h2',
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
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'a809b62f-c032-4303-8f0f-4d0be2f9f635';
    $display->content['new-a809b62f-c032-4303-8f0f-4d0be2f9f635'] = $pane;
    $display->panels['footer'][1] = 'new-a809b62f-c032-4303-8f0f-4d0be2f9f635';
    $pane = new stdClass();
    $pane->pid = 'new-a95f7798-5418-42df-b09b-22c24fbe5cfd';
    $pane->panel = 'footer';
    $pane->type = 'views_panes';
    $pane->subtype = 'rbv_view_lists-panel_pane_8';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => '',
      'override_title_text' => '',
      'override_title_heading' => 'h2',
      'view_mode' => 'vmode_group_content',
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
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'a95f7798-5418-42df-b09b-22c24fbe5cfd';
    $display->content['new-a95f7798-5418-42df-b09b-22c24fbe5cfd'] = $pane;
    $display->panels['footer'][2] = 'new-a95f7798-5418-42df-b09b-22c24fbe5cfd';
    $pane = new stdClass();
    $pane->pid = 'new-7bee6105-39bd-418d-8cb4-89c3e3a49071';
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
      'widget_title' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'style' => 'kalacustomize',
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
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '7bee6105-39bd-418d-8cb4-89c3e3a49071';
    $display->content['new-7bee6105-39bd-418d-8cb4-89c3e3a49071'] = $pane;
    $display->panels['footer'][3] = 'new-7bee6105-39bd-418d-8cb4-89c3e3a49071';
    $pane = new stdClass();
    $pane->pid = 'new-ad264c7a-76bd-481c-86e6-780d288f339b';
    $pane->panel = 'footer';
    $pane->type = 'views_panes';
    $pane->subtype = 'rbv_view_lists-panel_pane_9';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => '',
      'override_title_text' => '',
      'override_title_heading' => 'h2',
      'view_mode' => 'vmode_group_content',
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
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'ad264c7a-76bd-481c-86e6-780d288f339b';
    $display->content['new-ad264c7a-76bd-481c-86e6-780d288f339b'] = $pane;
    $display->panels['footer'][4] = 'new-ad264c7a-76bd-481c-86e6-780d288f339b';
    $pane = new stdClass();
    $pane->pid = 'new-2514424b-e0c2-4852-b7bf-398848b89d34';
    $pane->panel = 'footer';
    $pane->type = 'views_panes';
    $pane->subtype = 'rbv_view_lists-panel_pane_10';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => '',
      'override_title_text' => '',
      'override_title_heading' => 'h2',
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
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '2514424b-e0c2-4852-b7bf-398848b89d34';
    $display->content['new-2514424b-e0c2-4852-b7bf-398848b89d34'] = $pane;
    $display->panels['footer'][5] = 'new-2514424b-e0c2-4852-b7bf-398848b89d34';
    $pane = new stdClass();
    $pane->pid = 'new-80dc33b4-c67c-4a5e-b16a-bdf5d8a4d57c';
    $pane->panel = 'footer';
    $pane->type = 'views_panes';
    $pane->subtype = 'rbv_view_lists-panel_pane_12';
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
          'pull-left' => 'pull-left',
          'pull-right' => 0,
          'clearfix' => 0,
          'jumbotron' => 0,
          'well' => 0,
        ),
      ),
      'style' => 'kalacustomize',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = '80dc33b4-c67c-4a5e-b16a-bdf5d8a4d57c';
    $display->content['new-80dc33b4-c67c-4a5e-b16a-bdf5d8a4d57c'] = $pane;
    $display->panels['footer'][6] = 'new-80dc33b4-c67c-4a5e-b16a-bdf5d8a4d57c';
    $pane = new stdClass();
    $pane->pid = 'new-0b870323-b0d5-431b-b469-52927c9138f8';
    $pane->panel = 'footer';
    $pane->type = 'views_panes';
    $pane->subtype = 'rbv_netadmview_joined-panel_pane_1';
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
    $pane->position = 7;
    $pane->locks = array();
    $pane->uuid = '0b870323-b0d5-431b-b469-52927c9138f8';
    $display->content['new-0b870323-b0d5-431b-b469-52927c9138f8'] = $pane;
    $display->panels['footer'][7] = 'new-0b870323-b0d5-431b-b469-52927c9138f8';
    $pane = new stdClass();
    $pane->pid = 'new-4865779f-b118-4aa4-a60c-d54ffb758da4';
    $pane->panel = 'footer';
    $pane->type = 'views_panes';
    $pane->subtype = 'rbv_netadmview_organon-panel_pane_1';
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
    $pane->position = 8;
    $pane->locks = array();
    $pane->uuid = '4865779f-b118-4aa4-a60c-d54ffb758da4';
    $display->content['new-4865779f-b118-4aa4-a60c-d54ffb758da4'] = $pane;
    $display->panels['footer'][8] = 'new-4865779f-b118-4aa4-a60c-d54ffb758da4';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-0b870323-b0d5-431b-b469-52927c9138f8';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['rbv_page_network_admin'] = $page;

  return $pages;

}
