<?php
/**
 * @file
 * rbv_project.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function rbv_project_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:project:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'project';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'ipe';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array(
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'progetti
%node:title',
    'panels_breadcrumbs_paths' => 'progetti',
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
  $display->title = '%node:title';
  $display->uuid = 'a66e9ea4-f4c7-4da7-91a1-653242bac6b8';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-4d911a70-1c61-4935-ae4d-7e464bbe1e82';
  $pane->panel = 'contentmain';
  $pane->type = 'node_content';
  $pane->subtype = 'node_content';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'links' => 1,
    'no_extras' => 0,
    'override_title' => 1,
    'override_title_text' => '',
    'identifier' => '',
    'link' => 0,
    'leave_node_title' => 0,
    'build_mode' => 'full',
    'context' => array(),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '4d911a70-1c61-4935-ae4d-7e464bbe1e82';
  $display->content['new-4d911a70-1c61-4935-ae4d-7e464bbe1e82'] = $pane;
  $display->panels['contentmain'][0] = 'new-4d911a70-1c61-4935-ae4d-7e464bbe1e82';
  $pane = new stdClass();
  $pane->pid = 'new-ccbf2ba5-ecb5-4360-890a-4ef91b4340e4';
  $pane->panel = 'sidebar';
  $pane->type = 'views_panes';
  $pane->subtype = 'rbv_view_graph-panel_pane_3';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_settings' => 'fields',
    'header_type' => 'none',
    'view_mode' => 'teaser',
    'override_title' => '',
    'override_title_text' => '',
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
  $pane->uuid = 'ccbf2ba5-ecb5-4360-890a-4ef91b4340e4';
  $display->content['new-ccbf2ba5-ecb5-4360-890a-4ef91b4340e4'] = $pane;
  $display->panels['sidebar'][0] = 'new-ccbf2ba5-ecb5-4360-890a-4ef91b4340e4';
  $pane = new stdClass();
  $pane->pid = 'new-19fcee49-ebb7-40eb-8fc7-9da4a729de02';
  $pane->panel = 'sidebar';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:og_group_ref';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'entityreference_entity_view',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(
      'view_mode' => 'vmode_group_content',
      'links' => 0,
    ),
    'context' => 'panelizer',
    'override_title' => 1,
    'override_title_text' => 'Organizzazione promotrice',
    'view_mode' => NULL,
    'widget_title' => NULL,
    'items_per_page' => NULL,
    'exposed' => array(
      'sort_by' => NULL,
      'sort_order' => NULL,
    ),
    'use_pager' => NULL,
    'pager_id' => NULL,
    'offset' => NULL,
    'link_to_view' => NULL,
    'more_link' => NULL,
    'path' => NULL,
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '19fcee49-ebb7-40eb-8fc7-9da4a729de02';
  $display->content['new-19fcee49-ebb7-40eb-8fc7-9da4a729de02'] = $pane;
  $display->panels['sidebar'][1] = 'new-19fcee49-ebb7-40eb-8fc7-9da4a729de02';
  $pane = new stdClass();
  $pane->pid = 'new-d7aa5e19-3e26-4f9f-b8a8-e408347acace';
  $pane->panel = 'sidebar';
  $pane->type = 'views_panes';
  $pane->subtype = 'rbv_view_projectcollaborations-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_mode' => 'teaser',
    'widget_title' => NULL,
    'items_per_page' => NULL,
    'exposed' => array(
      'sort_by' => NULL,
      'sort_order' => NULL,
    ),
    'use_pager' => NULL,
    'pager_id' => NULL,
    'offset' => NULL,
    'link_to_view' => NULL,
    'more_link' => NULL,
    'path' => NULL,
    'view_settings' => 'fields',
    'header_type' => 'none',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'd7aa5e19-3e26-4f9f-b8a8-e408347acace';
  $display->content['new-d7aa5e19-3e26-4f9f-b8a8-e408347acace'] = $pane;
  $display->panels['sidebar'][2] = 'new-d7aa5e19-3e26-4f9f-b8a8-e408347acace';
  $pane = new stdClass();
  $pane->pid = 'new-40e5ff09-461a-4ae7-a30b-6ac557c66c7d';
  $pane->panel = 'sidebar';
  $pane->type = 'views_panes';
  $pane->subtype = 'rbv_view_projectcollaborations-panel_pane_2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_mode' => 'vmode_group_content',
    'widget_title' => NULL,
    'items_per_page' => NULL,
    'exposed' => array(
      'sort_by' => NULL,
      'sort_order' => NULL,
    ),
    'use_pager' => NULL,
    'pager_id' => NULL,
    'offset' => NULL,
    'link_to_view' => NULL,
    'more_link' => 0,
    'path' => NULL,
    'view_settings' => 'fields',
    'header_type' => 'none',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '40e5ff09-461a-4ae7-a30b-6ac557c66c7d';
  $display->content['new-40e5ff09-461a-4ae7-a30b-6ac557c66c7d'] = $pane;
  $display->panels['sidebar'][3] = 'new-40e5ff09-461a-4ae7-a30b-6ac557c66c7d';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:project:default'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:project:default:teaser';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'project';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'teaser';
  $panelizer->css_class = 'rbv-project-teaser';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'radix_moscone';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'header' => NULL,
      'sidebar' => NULL,
      'contentmain' => NULL,
      'footer' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = 'bd6cc581-2e5f-497b-ab4c-bb8c7cd4a23a';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-1c7d5e49-54b2-4f0f-96d2-d1ca11b18f1e';
  $pane->panel = 'footer';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_com_categories';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'taxonomy_term_reference_link',
    'delta_limit' => '2',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(),
    'context' => 'panelizer',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'clearfix',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '1c7d5e49-54b2-4f0f-96d2-d1ca11b18f1e';
  $display->content['new-1c7d5e49-54b2-4f0f-96d2-d1ca11b18f1e'] = $pane;
  $display->panels['footer'][0] = 'new-1c7d5e49-54b2-4f0f-96d2-d1ca11b18f1e';
  $pane = new stdClass();
  $pane->pid = 'new-ac230619-9b83-48f2-a37b-2328b91d11fe';
  $pane->panel = 'footer';
  $pane->type = 'node_title';
  $pane->subtype = 'node_title';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'link' => 1,
    'markup' => 'h2',
    'id' => '',
    'class' => 'rbv-teaser-title',
    'context' => 'panelizer',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'ac230619-9b83-48f2-a37b-2328b91d11fe';
  $display->content['new-ac230619-9b83-48f2-a37b-2328b91d11fe'] = $pane;
  $display->panels['footer'][1] = 'new-ac230619-9b83-48f2-a37b-2328b91d11fe';
  $pane = new stdClass();
  $pane->pid = 'new-0f73a63e-fb6a-404b-bc65-141a3ac21e43';
  $pane->panel = 'footer';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_com_description';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'smart_trim_format',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'trim_length' => '20',
      'trim_type' => 'words',
      'trim_suffix' => '...',
      'trim_link' => '0',
      'more_link' => '0',
      'more_text' => 'Read more',
      'summary_handler' => 'full',
      'trim_options' => array(
        'text' => 'text',
      ),
      'trim_preserve_tags' => '',
    ),
    'context' => 'panelizer',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '0f73a63e-fb6a-404b-bc65-141a3ac21e43';
  $display->content['new-0f73a63e-fb6a-404b-bc65-141a3ac21e43'] = $pane;
  $display->panels['footer'][2] = 'new-0f73a63e-fb6a-404b-bc65-141a3ac21e43';
  $pane = new stdClass();
  $pane->pid = 'new-7556b2b6-7a3e-4ffc-9949-cf01287395af';
  $pane->panel = 'footer';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_com_foundingdate';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'above',
    'formatter' => 'hidden',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'panelizer',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '7556b2b6-7a3e-4ffc-9949-cf01287395af';
  $display->content['new-7556b2b6-7a3e-4ffc-9949-cf01287395af'] = $pane;
  $display->panels['footer'][3] = 'new-7556b2b6-7a3e-4ffc-9949-cf01287395af';
  $pane = new stdClass();
  $pane->pid = 'new-64ae2e98-1844-43b4-9d83-d41aedf20497';
  $pane->panel = 'header';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_com_logo';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'image',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'image_link' => 'content',
      'image_style' => 'rbv_image_cover',
    ),
    'context' => 'panelizer',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '64ae2e98-1844-43b4-9d83-d41aedf20497';
  $display->content['new-64ae2e98-1844-43b4-9d83-d41aedf20497'] = $pane;
  $display->panels['header'][0] = 'new-64ae2e98-1844-43b4-9d83-d41aedf20497';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:project:default:teaser'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:project:default:vmode_group_content';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'project';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'vmode_group_content';
  $panelizer->css_class = 'rbv-vmode-groupc-project';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'radix_burr';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'contentmain' => NULL,
      'sidebar' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '17285cfe-9a40-468b-a4c6-244367e80972';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-dda29fa0-eb8e-4466-b8a6-526df33939d9';
  $pane->panel = 'contentmain';
  $pane->type = 'node_title';
  $pane->subtype = 'node_title';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'link' => 1,
    'markup' => 'h2',
    'id' => '',
    'class' => 'rbv-vmode-groupc-title',
    'context' => 'panelizer',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'dda29fa0-eb8e-4466-b8a6-526df33939d9';
  $display->content['new-dda29fa0-eb8e-4466-b8a6-526df33939d9'] = $pane;
  $display->panels['contentmain'][0] = 'new-dda29fa0-eb8e-4466-b8a6-526df33939d9';
  $pane = new stdClass();
  $pane->pid = 'new-6f4decb1-cb8f-4566-a799-89b7764cbea6';
  $pane->panel = 'contentmain';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_com_categories';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'taxonomy_term_reference_link',
    'delta_limit' => '1',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(),
    'context' => 'panelizer',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'clearfix',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '6f4decb1-cb8f-4566-a799-89b7764cbea6';
  $display->content['new-6f4decb1-cb8f-4566-a799-89b7764cbea6'] = $pane;
  $display->panels['contentmain'][1] = 'new-6f4decb1-cb8f-4566-a799-89b7764cbea6';
  $pane = new stdClass();
  $pane->pid = 'new-f6ea3fc6-b1cc-45c9-8e6c-43bc7ce4d16b';
  $pane->panel = 'contentmain';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_com_tagline';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'smart_trim_format',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'trim_length' => '15',
      'trim_type' => 'words',
      'trim_suffix' => '...',
      'trim_link' => '0',
      'more_link' => '0',
      'more_text' => 'Read more',
      'trim_options' => array(
        'text' => 'text',
      ),
      'trim_preserve_tags' => '',
    ),
    'context' => array(),
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'f6ea3fc6-b1cc-45c9-8e6c-43bc7ce4d16b';
  $display->content['new-f6ea3fc6-b1cc-45c9-8e6c-43bc7ce4d16b'] = $pane;
  $display->panels['contentmain'][2] = 'new-f6ea3fc6-b1cc-45c9-8e6c-43bc7ce4d16b';
  $pane = new stdClass();
  $pane->pid = 'new-c2193ab4-4460-4a67-a10c-ed89a0bad29a';
  $pane->panel = 'sidebar';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_com_logo';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'image',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'image_link' => 'content',
      'image_style' => 'panopoly_image_square',
    ),
    'context' => 'panelizer',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'c2193ab4-4460-4a67-a10c-ed89a0bad29a';
  $display->content['new-c2193ab4-4460-4a67-a10c-ed89a0bad29a'] = $pane;
  $display->panels['sidebar'][0] = 'new-c2193ab4-4460-4a67-a10c-ed89a0bad29a';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:project:default:vmode_group_content'] = $panelizer;

  return $export;
}
