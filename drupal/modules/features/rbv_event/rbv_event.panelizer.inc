<?php
/**
 * @file
 * rbv_event.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function rbv_event_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:event:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'event';
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
    'panels_breadcrumbs_titles' => 'eventi
%node:title',
    'panels_breadcrumbs_paths' => 'calendario/elenco',
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
  $display->uuid = '191a4bbf-c4d4-4be8-b6ff-b5a5995dd982';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-74d04e31-a860-456f-8250-1fac1ea88c22';
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
  $pane->uuid = '74d04e31-a860-456f-8250-1fac1ea88c22';
  $display->content['new-74d04e31-a860-456f-8250-1fac1ea88c22'] = $pane;
  $display->panels['contentmain'][0] = 'new-74d04e31-a860-456f-8250-1fac1ea88c22';
  $pane = new stdClass();
  $pane->pid = 'new-b30a36f6-00ab-4812-935f-2ff059de5a1c';
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
      'view_mode' => 'teaser',
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'b30a36f6-00ab-4812-935f-2ff059de5a1c';
  $display->content['new-b30a36f6-00ab-4812-935f-2ff059de5a1c'] = $pane;
  $display->panels['sidebar'][0] = 'new-b30a36f6-00ab-4812-935f-2ff059de5a1c';
  $pane = new stdClass();
  $pane->pid = 'new-54de7016-13a8-4df9-832f-735e6c0fd022';
  $pane->panel = 'sidebar';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_relpro_project';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'entityreference_entity_view',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'link' => 1,
      'view_mode' => 'vmode_group_content',
      'links' => 1,
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '54de7016-13a8-4df9-832f-735e6c0fd022';
  $display->content['new-54de7016-13a8-4df9-832f-735e6c0fd022'] = $pane;
  $display->panels['sidebar'][1] = 'new-54de7016-13a8-4df9-832f-735e6c0fd022';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:event:default'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:event:default:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'event';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'default';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = 'd780c985-ae08-4820-bbc5-10ee0cd35e2e';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-63aea775-925c-4182-9a19-a59d94b0ba87';
  $pane->panel = 'center';
  $pane->type = 'node_content';
  $pane->subtype = 'node_content';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'links' => 1,
    'no_extras' => 1,
    'override_title' => 1,
    'override_title_text' => '',
    'identifier' => '',
    'link' => 0,
    'leave_node_title' => 0,
    'build_mode' => 'teaser',
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
  $pane->uuid = '63aea775-925c-4182-9a19-a59d94b0ba87';
  $display->content['new-63aea775-925c-4182-9a19-a59d94b0ba87'] = $pane;
  $display->panels['center'][0] = 'new-63aea775-925c-4182-9a19-a59d94b0ba87';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:event:default:default'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:event:default:teaser';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'event';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'teaser';
  $panelizer->css_class = 'rbv-event-teaser';
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
      'contentmain' => NULL,
      'header' => NULL,
      'sidebar' => NULL,
      'footer' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '2d2cb1ed-9987-4872-9ad3-ac6a68b04261';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-ae54d8b4-6721-4996-b37f-9cab58c4cb8b';
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
  $pane->uuid = 'ae54d8b4-6721-4996-b37f-9cab58c4cb8b';
  $display->content['new-ae54d8b4-6721-4996-b37f-9cab58c4cb8b'] = $pane;
  $display->panels['footer'][0] = 'new-ae54d8b4-6721-4996-b37f-9cab58c4cb8b';
  $pane = new stdClass();
  $pane->pid = 'new-67324917-bdad-4b55-8323-429476cceec8';
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
  $pane->uuid = '67324917-bdad-4b55-8323-429476cceec8';
  $display->content['new-67324917-bdad-4b55-8323-429476cceec8'] = $pane;
  $display->panels['footer'][1] = 'new-67324917-bdad-4b55-8323-429476cceec8';
  $pane = new stdClass();
  $pane->pid = 'new-199a8b71-fe52-4ef0-9487-d9b3741fd0f4';
  $pane->panel = 'footer';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_event_date';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'date_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'format_type' => 'short',
      'multiple_number' => '',
      'multiple_from' => '',
      'multiple_to' => '',
      'fromto' => 'both',
      'show_remaining_days' => 0,
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
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'rbv-teaser-when',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '199a8b71-fe52-4ef0-9487-d9b3741fd0f4';
  $display->content['new-199a8b71-fe52-4ef0-9487-d9b3741fd0f4'] = $pane;
  $display->panels['footer'][2] = 'new-199a8b71-fe52-4ef0-9487-d9b3741fd0f4';
  $pane = new stdClass();
  $pane->pid = 'new-bedae610-7251-4cd2-90a1-df466bcb808e';
  $pane->panel = 'footer';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_com_location';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'addressfield_components',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'use_widget_handlers' => 1,
      'format_handlers' => array(
        'address' => 'address',
        'address-hide-postal-code' => 'address-hide-postal-code',
      ),
      'components' => array(
        'thoroughfare' => 'thoroughfare',
        'locality' => 'locality',
      ),
      'separator' => ', ',
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
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'clearfix',
  );
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'bedae610-7251-4cd2-90a1-df466bcb808e';
  $display->content['new-bedae610-7251-4cd2-90a1-df466bcb808e'] = $pane;
  $display->panels['footer'][3] = 'new-bedae610-7251-4cd2-90a1-df466bcb808e';
  $pane = new stdClass();
  $pane->pid = 'new-36f80d86-f1ba-4fd1-b7e9-1a0e904e3a9f';
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
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '36f80d86-f1ba-4fd1-b7e9-1a0e904e3a9f';
  $display->content['new-36f80d86-f1ba-4fd1-b7e9-1a0e904e3a9f'] = $pane;
  $display->panels['footer'][4] = 'new-36f80d86-f1ba-4fd1-b7e9-1a0e904e3a9f';
  $pane = new stdClass();
  $pane->pid = 'new-b54ec6b8-e0e9-4cca-b3a4-445ab21039cb';
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
  $pane->uuid = 'b54ec6b8-e0e9-4cca-b3a4-445ab21039cb';
  $display->content['new-b54ec6b8-e0e9-4cca-b3a4-445ab21039cb'] = $pane;
  $display->panels['header'][0] = 'new-b54ec6b8-e0e9-4cca-b3a4-445ab21039cb';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:event:default:teaser'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:event:default:vmode_group_content';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'event';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'vmode_group_content';
  $panelizer->css_class = 'rbv-vmode-groupc-event';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
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
  $display->uuid = 'e9af7151-f61e-4513-bbf8-1e5967518a19';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-198c5293-9622-4b2c-8df2-f98fa4bd4b8b';
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
  $pane->uuid = '198c5293-9622-4b2c-8df2-f98fa4bd4b8b';
  $display->content['new-198c5293-9622-4b2c-8df2-f98fa4bd4b8b'] = $pane;
  $display->panels['contentmain'][0] = 'new-198c5293-9622-4b2c-8df2-f98fa4bd4b8b';
  $pane = new stdClass();
  $pane->pid = 'new-60f8aa59-f7b2-431b-a535-debda46bf27f';
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
  $pane->uuid = '60f8aa59-f7b2-431b-a535-debda46bf27f';
  $display->content['new-60f8aa59-f7b2-431b-a535-debda46bf27f'] = $pane;
  $display->panels['contentmain'][1] = 'new-60f8aa59-f7b2-431b-a535-debda46bf27f';
  $pane = new stdClass();
  $pane->pid = 'new-c17cf761-bfe1-4f83-906d-241317f78d6d';
  $pane->panel = 'contentmain';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_event_date';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'date_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'format_type' => 'short',
      'multiple_number' => '',
      'multiple_from' => '',
      'multiple_to' => '',
      'fromto' => 'value',
      'show_remaining_days' => 0,
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
  $pane->uuid = 'c17cf761-bfe1-4f83-906d-241317f78d6d';
  $display->content['new-c17cf761-bfe1-4f83-906d-241317f78d6d'] = $pane;
  $display->panels['contentmain'][2] = 'new-c17cf761-bfe1-4f83-906d-241317f78d6d';
  $pane = new stdClass();
  $pane->pid = 'new-1dd94811-5ee0-404c-b834-589216781057';
  $pane->panel = 'contentmain';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_com_location';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'addressfield_components',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'components' => array(
        'thoroughfare' => 'thoroughfare',
        'locality' => 'locality',
      ),
      'separator' => ', ',
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
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '1dd94811-5ee0-404c-b834-589216781057';
  $display->content['new-1dd94811-5ee0-404c-b834-589216781057'] = $pane;
  $display->panels['contentmain'][3] = 'new-1dd94811-5ee0-404c-b834-589216781057';
  $pane = new stdClass();
  $pane->pid = 'new-7f1015b2-bade-4807-ad56-9e90557b5fae';
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
      'image_style' => 'panopoly_image_square',
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
  $pane->uuid = '7f1015b2-bade-4807-ad56-9e90557b5fae';
  $display->content['new-7f1015b2-bade-4807-ad56-9e90557b5fae'] = $pane;
  $display->panels['sidebar'][0] = 'new-7f1015b2-bade-4807-ad56-9e90557b5fae';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:event:default:vmode_group_content'] = $panelizer;

  return $export;
}
