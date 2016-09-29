<?php
/**
 * @file
 * rbv_org.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function rbv_org_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'org';
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
  $panelizer->name = 'node:org:default';
  $panelizer->css_id = 'organizzazioni';
  $panelizer->css_class = '';
  $panelizer->css = '';
  $panelizer->no_blocks = FALSE;
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array(
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'organizzazioni
%node:title',
    'panels_breadcrumbs_paths' => 'organizzazioni',
    'panels_breadcrumbs_home' => 1,
  );
  $panelizer->pipeline = 'ipe';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $display = new panels_display();
  $display->layout = 'radix_moscone_flipped';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'header' => NULL,
      'footer' => NULL,
      'contentmain' => NULL,
      'sidebar' => array(),
    ),
    'contentmain' => array(
      'style' => '0',
    ),
    'sidebar' => array(
      'style' => 'kalacustomize',
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '602a6b3b-d7b9-4588-8ecf-6c3fd797a952';
  $display->storage_type = 'panelizer_default';
  $display->storage_id = 'node:org:default';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-92b606a3-a2bd-4d21-af74-0a28965746c7';
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
  $pane->css = array(
    'css_id' => '',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '92b606a3-a2bd-4d21-af74-0a28965746c7';
  $display->content['new-92b606a3-a2bd-4d21-af74-0a28965746c7'] = $pane;
  $display->panels['contentmain'][0] = 'new-92b606a3-a2bd-4d21-af74-0a28965746c7';
  $pane = new stdClass();
  $pane->pid = 'new-a3caa266-2976-4dcf-a5c4-6417dc4614d8';
  $pane->panel = 'footer';
  $pane->type = 'views_panes';
  $pane->subtype = 'rbv_view_graph-panel_pane_4';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'php',
        'settings' => array(
          'description' => 'empty view',
          'php' => '$vista = views_get_view_result(\'rbv_view_graph\',\'panel_pane_4\',$contexts[\'panelizer\']->data->nid);
return empty($vista);',
        ),
        'not' => TRUE,
      ),
    ),
  );
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
  $pane->uuid = 'a3caa266-2976-4dcf-a5c4-6417dc4614d8';
  $display->content['new-a3caa266-2976-4dcf-a5c4-6417dc4614d8'] = $pane;
  $display->panels['footer'][0] = 'new-a3caa266-2976-4dcf-a5c4-6417dc4614d8';
  $pane = new stdClass();
  $pane->pid = 'new-4a55bbdc-48d1-462f-bee3-0e5fbb079eac';
  $pane->panel = 'sidebar';
  $pane->type = 'views_panes';
  $pane->subtype = 'rbv_view_fb-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_settings' => 'fields',
    'header_type' => 'titles',
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
  $pane->uuid = '4a55bbdc-48d1-462f-bee3-0e5fbb079eac';
  $display->content['new-4a55bbdc-48d1-462f-bee3-0e5fbb079eac'] = $pane;
  $display->panels['sidebar'][0] = 'new-4a55bbdc-48d1-462f-bee3-0e5fbb079eac';
  $pane = new stdClass();
  $pane->pid = 'new-0af013b2-e6b5-421d-9358-b8b957715cb7';
  $pane->panel = 'sidebar';
  $pane->type = 'views_panes';
  $pane->subtype = 'rbv_view_group_content-panel_pane_5';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'items_per_page' => '3',
    'context' => array(
      0 => 'panelizer',
    ),
    'view_mode' => 'vmode_group_content',
    'widget_title' => NULL,
    'exposed' => array(
      'widget_title' => 'Progetti e collaborazioni',
      'use_pager' => 1,
      'pager_id' => '1',
      'path' => '',
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
    'header_type' => 'titles',
    'override_title' => '',
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'panel',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '0af013b2-e6b5-421d-9358-b8b957715cb7';
  $display->content['new-0af013b2-e6b5-421d-9358-b8b957715cb7'] = $pane;
  $display->panels['sidebar'][1] = 'new-0af013b2-e6b5-421d-9358-b8b957715cb7';
  $pane = new stdClass();
  $pane->pid = 'new-887ba031-2e38-4d7e-afce-f0cbc8a8e0e7';
  $pane->panel = 'sidebar';
  $pane->type = 'views_panes';
  $pane->subtype = 'rbv_view_group_content-panel_pane_2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'more_link' => NULL,
    'items_per_page' => '3',
    'context' => array(
      0 => 'panelizer',
    ),
    'view_mode' => 'vmode_group_content',
    'widget_title' => NULL,
    'exposed' => array(
      'sort_by' => NULL,
      'sort_order' => NULL,
    ),
    'use_pager' => 1,
    'pager_id' => '2',
    'offset' => NULL,
    'link_to_view' => NULL,
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
  $pane->uuid = '887ba031-2e38-4d7e-afce-f0cbc8a8e0e7';
  $display->content['new-887ba031-2e38-4d7e-afce-f0cbc8a8e0e7'] = $pane;
  $display->panels['sidebar'][2] = 'new-887ba031-2e38-4d7e-afce-f0cbc8a8e0e7';
  $pane = new stdClass();
  $pane->pid = 'new-6db2aa04-582c-4a16-b319-b1e2131674c9';
  $pane->panel = 'sidebar';
  $pane->type = 'views_panes';
  $pane->subtype = 'rbv_view_members-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'items_per_page' => '10',
    'context' => array(
      0 => 'panelizer',
    ),
    'override_title' => '',
    'override_title_text' => '',
    'view_mode' => 'teaser',
    'widget_title' => 'Persone',
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
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '6db2aa04-582c-4a16-b319-b1e2131674c9';
  $display->content['new-6db2aa04-582c-4a16-b319-b1e2131674c9'] = $pane;
  $display->panels['sidebar'][3] = 'new-6db2aa04-582c-4a16-b319-b1e2131674c9';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:org:default'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'org';
  $panelizer->access = array();
  $panelizer->view_mode = 'default';
  $panelizer->name = 'node:org:default:default';
  $panelizer->css_id = '';
  $panelizer->css_class = '';
  $panelizer->css = '';
  $panelizer->no_blocks = FALSE;
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = FALSE;
  $panelizer->extra = array(
    'panels_breadcrumbs_state' => 0,
    'panels_breadcrumbs_titles' => '',
    'panels_breadcrumbs_paths' => '',
    'panels_breadcrumbs_home' => 1,
  );
  $panelizer->pipeline = 'ipe';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $display = new panels_display();
  $display->layout = 'burr_flipped';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'sidebar' => array(
        'corner_location' => 'pane',
      ),
      'contentmain' => array(
        'corner_location' => 'pane',
      ),
    ),
    'contentmain' => array(
      'style' => 'rounded_corners',
    ),
    'sidebar' => array(
      'style' => 'rounded_corners',
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '8c24f0aa-0727-43e0-847e-c368d9238fe1';
  $display->storage_type = 'panelizer_default';
  $display->storage_id = 'node:org:default:default';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-d430dc8b-24b9-4aa0-922b-300b93edce85';
  $pane->panel = 'contentmain';
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
      'image_style' => 'panopoly_image_square',
      'image_link' => '',
    ),
    'context' => 'panelizer',
    'override_title' => 0,
    'override_title_text' => '',
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
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'd430dc8b-24b9-4aa0-922b-300b93edce85';
  $display->content['new-d430dc8b-24b9-4aa0-922b-300b93edce85'] = $pane;
  $display->panels['contentmain'][0] = 'new-d430dc8b-24b9-4aa0-922b-300b93edce85';
  $pane = new stdClass();
  $pane->pid = 'new-6a3caf6a-dc34-4657-b0ad-6301c0d816ad';
  $pane->panel = 'contentmain';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_com_tagline';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'above',
    'formatter' => 'text_default',
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '6a3caf6a-dc34-4657-b0ad-6301c0d816ad';
  $display->content['new-6a3caf6a-dc34-4657-b0ad-6301c0d816ad'] = $pane;
  $display->panels['contentmain'][1] = 'new-6a3caf6a-dc34-4657-b0ad-6301c0d816ad';
  $pane = new stdClass();
  $pane->pid = 'new-41147d37-fe89-4b7e-93dc-f00373cf0972';
  $pane->panel = 'contentmain';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_org_type';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'above',
    'formatter' => 'taxonomy_term_reference_link',
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
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '41147d37-fe89-4b7e-93dc-f00373cf0972';
  $display->content['new-41147d37-fe89-4b7e-93dc-f00373cf0972'] = $pane;
  $display->panels['contentmain'][2] = 'new-41147d37-fe89-4b7e-93dc-f00373cf0972';
  $pane = new stdClass();
  $pane->pid = 'new-ab979676-1b55-457d-bd87-56f548c65f53';
  $pane->panel = 'contentmain';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_com_categories';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'above',
    'formatter' => 'taxonomy_term_reference_link',
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
  $pane->uuid = 'ab979676-1b55-457d-bd87-56f548c65f53';
  $display->content['new-ab979676-1b55-457d-bd87-56f548c65f53'] = $pane;
  $display->panels['contentmain'][3] = 'new-ab979676-1b55-457d-bd87-56f548c65f53';
  $pane = new stdClass();
  $pane->pid = 'new-00ce23ed-06f2-4576-b5f1-60d67d2b51e9';
  $pane->panel = 'contentmain';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_com_tags';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'above',
    'formatter' => 'taxonomy_term_reference_link',
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
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '00ce23ed-06f2-4576-b5f1-60d67d2b51e9';
  $display->content['new-00ce23ed-06f2-4576-b5f1-60d67d2b51e9'] = $pane;
  $display->panels['contentmain'][4] = 'new-00ce23ed-06f2-4576-b5f1-60d67d2b51e9';
  $pane = new stdClass();
  $pane->pid = 'new-c96c87a6-f1f3-483d-a7af-fb64d2a904cf';
  $pane->panel = 'contentmain';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_com_mission';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'above',
    'formatter' => 'text_default',
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
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = 'c96c87a6-f1f3-483d-a7af-fb64d2a904cf';
  $display->content['new-c96c87a6-f1f3-483d-a7af-fb64d2a904cf'] = $pane;
  $display->panels['contentmain'][5] = 'new-c96c87a6-f1f3-483d-a7af-fb64d2a904cf';
  $pane = new stdClass();
  $pane->pid = 'new-90285dea-4ae9-44dc-892d-d71967c865e2';
  $pane->panel = 'contentmain';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_com_description';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'above',
    'formatter' => 'text_default',
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
  $pane->position = 6;
  $pane->locks = array();
  $pane->uuid = '90285dea-4ae9-44dc-892d-d71967c865e2';
  $display->content['new-90285dea-4ae9-44dc-892d-d71967c865e2'] = $pane;
  $display->panels['contentmain'][6] = 'new-90285dea-4ae9-44dc-892d-d71967c865e2';
  $pane = new stdClass();
  $pane->pid = 'new-0b520333-b631-465d-9af1-9040a4a88116';
  $pane->panel = 'contentmain';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_com_foundingdate';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'above',
    'formatter' => 'date_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'format_type' => 'long',
      'fromto' => 'both',
      'multiple_from' => '',
      'multiple_number' => '',
      'multiple_to' => '',
    ),
    'context' => 'panelizer',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 7;
  $pane->locks = array();
  $pane->uuid = '0b520333-b631-465d-9af1-9040a4a88116';
  $display->content['new-0b520333-b631-465d-9af1-9040a4a88116'] = $pane;
  $display->panels['contentmain'][7] = 'new-0b520333-b631-465d-9af1-9040a4a88116';
  $pane = new stdClass();
  $pane->pid = 'new-856f203b-f045-4616-a58d-c96b84caa52f';
  $pane->panel = 'contentmain';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_com_history';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'above',
    'formatter' => 'text_summary_or_trimmed',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'trim_length' => 600,
    ),
    'context' => 'panelizer',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 8;
  $pane->locks = array();
  $pane->uuid = '856f203b-f045-4616-a58d-c96b84caa52f';
  $display->content['new-856f203b-f045-4616-a58d-c96b84caa52f'] = $pane;
  $display->panels['contentmain'][8] = 'new-856f203b-f045-4616-a58d-c96b84caa52f';
  $pane = new stdClass();
  $pane->pid = 'new-d81c7b6f-6d53-4988-ae32-26d7629411c8';
  $pane->panel = 'sidebar';
  $pane->type = 'node_create_links';
  $pane->subtype = 'node_create_links';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'types' => array(),
    'field_name' => 'og_group_ref',
    'context' => 'panelizer',
    'override_title' => 1,
    'override_title_text' => 'Aggiungi contentuti al gruppo',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'd81c7b6f-6d53-4988-ae32-26d7629411c8';
  $display->content['new-d81c7b6f-6d53-4988-ae32-26d7629411c8'] = $pane;
  $display->panels['sidebar'][0] = 'new-d81c7b6f-6d53-4988-ae32-26d7629411c8';
  $pane = new stdClass();
  $pane->pid = 'new-e934c81c-0874-4508-925d-4c78a98bff92';
  $pane->panel = 'sidebar';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:group_group';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'above',
    'formatter' => 'og_group_subscribe',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'field_name' => FALSE,
    ),
    'context' => 'panelizer',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'e934c81c-0874-4508-925d-4c78a98bff92';
  $display->content['new-e934c81c-0874-4508-925d-4c78a98bff92'] = $pane;
  $display->panels['sidebar'][1] = 'new-e934c81c-0874-4508-925d-4c78a98bff92';
  $pane = new stdClass();
  $pane->pid = 'new-cef9c06b-b1f9-4703-87b0-ad768472ee00';
  $pane->panel = 'sidebar';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_com_location';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'above',
    'formatter' => 'addressfield_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'format_handlers' => array(
        0 => 'address',
      ),
      'use_widget_handlers' => 1,
    ),
    'context' => 'panelizer',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'cef9c06b-b1f9-4703-87b0-ad768472ee00';
  $display->content['new-cef9c06b-b1f9-4703-87b0-ad768472ee00'] = $pane;
  $display->panels['sidebar'][2] = 'new-cef9c06b-b1f9-4703-87b0-ad768472ee00';
  $pane = new stdClass();
  $pane->pid = 'new-cad48c21-ca3b-42c6-bed6-d4e1b726d72d';
  $pane->panel = 'sidebar';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_com_email';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'above',
    'formatter' => 'email_default',
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
  $pane->uuid = 'cad48c21-ca3b-42c6-bed6-d4e1b726d72d';
  $display->content['new-cad48c21-ca3b-42c6-bed6-d4e1b726d72d'] = $pane;
  $display->panels['sidebar'][3] = 'new-cad48c21-ca3b-42c6-bed6-d4e1b726d72d';
  $pane = new stdClass();
  $pane->pid = 'new-5a78ea4a-109e-4ed4-92ba-d84d35f14930';
  $pane->panel = 'sidebar';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_com_more_contacts';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'above',
    'formatter' => 'text_default',
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
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '5a78ea4a-109e-4ed4-92ba-d84d35f14930';
  $display->content['new-5a78ea4a-109e-4ed4-92ba-d84d35f14930'] = $pane;
  $display->panels['sidebar'][4] = 'new-5a78ea4a-109e-4ed4-92ba-d84d35f14930';
  $pane = new stdClass();
  $pane->pid = 'new-7db651ac-7250-4153-bd88-3fe6af2cb2b1';
  $pane->panel = 'sidebar';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_com_telephone';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'above',
    'formatter' => 'text_plain',
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
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = '7db651ac-7250-4153-bd88-3fe6af2cb2b1';
  $display->content['new-7db651ac-7250-4153-bd88-3fe6af2cb2b1'] = $pane;
  $display->panels['sidebar'][5] = 'new-7db651ac-7250-4153-bd88-3fe6af2cb2b1';
  $pane = new stdClass();
  $pane->pid = 'new-47b058f6-4c98-48ce-a686-697bac9065ee';
  $pane->panel = 'sidebar';
  $pane->type = 'node_links';
  $pane->subtype = 'node_links';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => FALSE,
    'override_title_text' => '',
    'build_mode' => 'default',
    'identifier' => '',
    'link' => TRUE,
    'context' => 'panelizer',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_class' => 'link-wrapper',
  );
  $pane->extras = array();
  $pane->position = 6;
  $pane->locks = array();
  $pane->uuid = '47b058f6-4c98-48ce-a686-697bac9065ee';
  $display->content['new-47b058f6-4c98-48ce-a686-697bac9065ee'] = $pane;
  $display->panels['sidebar'][6] = 'new-47b058f6-4c98-48ce-a686-697bac9065ee';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-e934c81c-0874-4508-925d-4c78a98bff92';
  $panelizer->display = $display;
  $export['node:org:default:default'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'org';
  $panelizer->access = array();
  $panelizer->view_mode = 'teaser';
  $panelizer->name = 'node:org:default:teaser';
  $panelizer->css_id = '';
  $panelizer->css_class = 'rbv-org-teaser';
  $panelizer->css = '';
  $panelizer->no_blocks = FALSE;
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $display = new panels_display();
  $display->layout = 'radix_moscone';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'contentmain' => NULL,
      'header' => NULL,
      'sidebar' => NULL,
      'footer' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = 'c06a43da-2e0f-4b7b-a180-e418ee39a022';
  $display->storage_type = 'panelizer_default';
  $display->storage_id = 'node:org:default:teaser';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-09945d86-6c48-458d-b117-54bab215e48b';
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
    'context' => array(),
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
  $pane->uuid = '09945d86-6c48-458d-b117-54bab215e48b';
  $display->content['new-09945d86-6c48-458d-b117-54bab215e48b'] = $pane;
  $display->panels['footer'][0] = 'new-09945d86-6c48-458d-b117-54bab215e48b';
  $pane = new stdClass();
  $pane->pid = 'new-41c52ff4-463c-4e29-b67c-02cfa49078b1';
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
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'clearfix',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '41c52ff4-463c-4e29-b67c-02cfa49078b1';
  $display->content['new-41c52ff4-463c-4e29-b67c-02cfa49078b1'] = $pane;
  $display->panels['footer'][1] = 'new-41c52ff4-463c-4e29-b67c-02cfa49078b1';
  $pane = new stdClass();
  $pane->pid = 'new-5cf14848-fa0a-41d5-8ff8-6c04b933ade7';
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
      'more_text' => '>>',
      'summary_handler' => 'full',
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
  $pane->uuid = '5cf14848-fa0a-41d5-8ff8-6c04b933ade7';
  $display->content['new-5cf14848-fa0a-41d5-8ff8-6c04b933ade7'] = $pane;
  $display->panels['footer'][2] = 'new-5cf14848-fa0a-41d5-8ff8-6c04b933ade7';
  $pane = new stdClass();
  $pane->pid = 'new-4adf5572-333c-4aac-a71d-435047d6d6f2';
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
      'image_style' => 'rbv_image_cover',
      'image_link' => 'content',
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '4adf5572-333c-4aac-a71d-435047d6d6f2';
  $display->content['new-4adf5572-333c-4aac-a71d-435047d6d6f2'] = $pane;
  $display->panels['header'][0] = 'new-4adf5572-333c-4aac-a71d-435047d6d6f2';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:org:default:teaser'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'org';
  $panelizer->access = array();
  $panelizer->view_mode = 'vmode_group_content';
  $panelizer->name = 'node:org:default:vmode_group_content';
  $panelizer->css_id = '';
  $panelizer->css_class = 'rbv-vmode-groupc-org';
  $panelizer->css = '';
  $panelizer->no_blocks = FALSE;
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $display = new panels_display();
  $display->layout = 'radix_burr';
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
  $display->uuid = 'c4f2179c-e470-42b2-9afe-300aa0889c5e';
  $display->storage_type = 'panelizer_default';
  $display->storage_id = 'node:org:default:vmode_group_content';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-f2b682c5-78ca-4346-905c-3c5d4b23c298';
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
  $pane->uuid = 'f2b682c5-78ca-4346-905c-3c5d4b23c298';
  $display->content['new-f2b682c5-78ca-4346-905c-3c5d4b23c298'] = $pane;
  $display->panels['contentmain'][0] = 'new-f2b682c5-78ca-4346-905c-3c5d4b23c298';
  $pane = new stdClass();
  $pane->pid = 'new-be9de129-bd06-470c-a3e4-7609cb073f89';
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
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'be9de129-bd06-470c-a3e4-7609cb073f89';
  $display->content['new-be9de129-bd06-470c-a3e4-7609cb073f89'] = $pane;
  $display->panels['contentmain'][1] = 'new-be9de129-bd06-470c-a3e4-7609cb073f89';
  $pane = new stdClass();
  $pane->pid = 'new-639b5227-f365-462e-b9f5-0817df73fa06';
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
  $pane->uuid = '639b5227-f365-462e-b9f5-0817df73fa06';
  $display->content['new-639b5227-f365-462e-b9f5-0817df73fa06'] = $pane;
  $display->panels['contentmain'][2] = 'new-639b5227-f365-462e-b9f5-0817df73fa06';
  $pane = new stdClass();
  $pane->pid = 'new-45297634-9853-4784-8816-6c1ac88955f3';
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
  $pane->uuid = '45297634-9853-4784-8816-6c1ac88955f3';
  $display->content['new-45297634-9853-4784-8816-6c1ac88955f3'] = $pane;
  $display->panels['sidebar'][0] = 'new-45297634-9853-4784-8816-6c1ac88955f3';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:org:default:vmode_group_content'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'user';
  $panelizer->panelizer_key = 'user';
  $panelizer->access = array();
  $panelizer->view_mode = 'full';
  $panelizer->name = 'user:user:default:full';
  $panelizer->css_id = '';
  $panelizer->css_class = '';
  $panelizer->css = '';
  $panelizer->no_blocks = FALSE;
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array(
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'persone',
    'panels_breadcrumbs_paths' => '',
    'panels_breadcrumbs_home' => 1,
  );
  $panelizer->pipeline = 'ipe';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $display = new panels_display();
  $display->layout = 'phelan';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'column1' => NULL,
      'column2' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'a5ee13cf-7020-4e53-9b06-0d849835a56e';
  $display->storage_type = 'panelizer_default';
  $display->storage_id = 'user:user:default:full';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-47466290-dac1-41b6-9f99-21a0b0bf939a';
  $pane->panel = 'column1';
  $pane->type = 'entity_field';
  $pane->subtype = 'user:field_user_about';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => array(),
    'override_title' => 0,
    'override_title_text' => '',
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
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '47466290-dac1-41b6-9f99-21a0b0bf939a';
  $display->content['new-47466290-dac1-41b6-9f99-21a0b0bf939a'] = $pane;
  $display->panels['column1'][0] = 'new-47466290-dac1-41b6-9f99-21a0b0bf939a';
  $pane = new stdClass();
  $pane->pid = 'new-ee4308fe-375a-431f-bf82-2c8fe3e68fcb';
  $pane->panel = 'column1';
  $pane->type = 'entity_field';
  $pane->subtype = 'user:field_user_picture';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'image',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'image_style' => 'rbv_image_teaser',
      'image_link' => 'file',
    ),
    'context' => array(),
    'override_title' => 0,
    'override_title_text' => '',
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
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'ee4308fe-375a-431f-bf82-2c8fe3e68fcb';
  $display->content['new-ee4308fe-375a-431f-bf82-2c8fe3e68fcb'] = $pane;
  $display->panels['column1'][1] = 'new-ee4308fe-375a-431f-bf82-2c8fe3e68fcb';
  $pane = new stdClass();
  $pane->pid = 'new-c091d500-21af-4b9a-b1fc-4c3818b5b341';
  $pane->panel = 'column1';
  $pane->type = 'entity_field';
  $pane->subtype = 'user:og_user_node';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'og_list_default',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(),
    'context' => array(),
    'override_title' => 0,
    'override_title_text' => '',
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
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'c091d500-21af-4b9a-b1fc-4c3818b5b341';
  $display->content['new-c091d500-21af-4b9a-b1fc-4c3818b5b341'] = $pane;
  $display->panels['column1'][2] = 'new-c091d500-21af-4b9a-b1fc-4c3818b5b341';
  $pane = new stdClass();
  $pane->pid = 'new-bca5aa67-dca9-4b92-8629-79287830428c';
  $pane->panel = 'column1';
  $pane->type = 'entity_field_extra';
  $pane->subtype = 'user:summary';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_mode' => 'full',
    'context' => 'panelizer',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'bca5aa67-dca9-4b92-8629-79287830428c';
  $display->content['new-bca5aa67-dca9-4b92-8629-79287830428c'] = $pane;
  $display->panels['column1'][3] = 'new-bca5aa67-dca9-4b92-8629-79287830428c';
  $pane = new stdClass();
  $pane->pid = 'new-e6ada9ed-c994-4cb6-9cd8-a7984fabe9fd';
  $pane->panel = 'column2';
  $pane->type = 'entity_field';
  $pane->subtype = 'user:field_user_picture';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'image',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'image_style' => 'panopoly_image_full',
      'image_link' => '',
    ),
    'context' => array(),
    'override_title' => 0,
    'override_title_text' => '',
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
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'e6ada9ed-c994-4cb6-9cd8-a7984fabe9fd';
  $display->content['new-e6ada9ed-c994-4cb6-9cd8-a7984fabe9fd'] = $pane;
  $display->panels['column2'][0] = 'new-e6ada9ed-c994-4cb6-9cd8-a7984fabe9fd';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['user:user:default:full'] = $panelizer;

  return $export;
}
