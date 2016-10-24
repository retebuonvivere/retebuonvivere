<?php
/**
 * @file
 * rbv_com_fields.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function rbv_com_fields_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'taxonomy_term:categories:default';
  $panelizer->title = 'Predefinito';
  $panelizer->panelizer_type = 'taxonomy_term';
  $panelizer->panelizer_key = 'categories';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
  $panelizer->css_class = 'rbv-categories';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
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
  $display->uuid = 'e319a8cd-986a-4a13-8655-33e809c24211';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-8b0efae5-5c5a-47ec-b469-72e9221121d1';
  $pane->panel = 'contentmain';
  $pane->type = 'term_description';
  $pane->subtype = 'term_description';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
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
  $pane->uuid = '8b0efae5-5c5a-47ec-b469-72e9221121d1';
  $display->content['new-8b0efae5-5c5a-47ec-b469-72e9221121d1'] = $pane;
  $display->panels['contentmain'][0] = 'new-8b0efae5-5c5a-47ec-b469-72e9221121d1';
  $pane = new stdClass();
  $pane->pid = 'new-719990e1-422e-431e-8132-685c353a8902';
  $pane->panel = 'contentmain';
  $pane->type = 'views_panes';
  $pane->subtype = 'rbv_view_taxonomy-taxonomy_content';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'items_per_page' => '20',
    'fields_override' => array(
      'field_featured_image' => 1,
      'title' => 1,
      'created' => 1,
      'name' => 1,
      'body' => 1,
    ),
    'exposed' => array(
      'sort_order' => 'DESC',
      'sort_by' => 'created',
    ),
    'context' => array(
      0 => 'panelizer',
    ),
    'view_settings' => 'rendered_entity',
    'header_type' => 'none',
    'view_mode' => 'teaser',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '719990e1-422e-431e-8132-685c353a8902';
  $display->content['new-719990e1-422e-431e-8132-685c353a8902'] = $pane;
  $display->panels['contentmain'][1] = 'new-719990e1-422e-431e-8132-685c353a8902';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['taxonomy_term:categories:default'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'taxonomy_term:tags:default';
  $panelizer->title = 'Predefinito';
  $panelizer->panelizer_type = 'taxonomy_term';
  $panelizer->panelizer_key = 'tags';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
  $panelizer->css_class = 'rbv-tags';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
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
  $display->uuid = 'f711c5b5-9959-44e8-94c7-4950207a38b1';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-0d474142-c30a-438c-9fc6-c2b3779dc374';
  $pane->panel = 'contentmain';
  $pane->type = 'views_panes';
  $pane->subtype = 'rbv_view_taxonomy-taxonomy_content';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'items_per_page' => '20',
    'fields_override' => array(
      'field_featured_image' => 1,
      'title' => 1,
      'created' => 1,
      'name' => 1,
      'body' => 1,
    ),
    'exposed' => array(
      'sort_order' => 'DESC',
      'sort_by' => 'created',
    ),
    'context' => array(
      0 => 'panelizer',
    ),
    'view_settings' => 'rendered_entity',
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
  $pane->uuid = '0d474142-c30a-438c-9fc6-c2b3779dc374';
  $display->content['new-0d474142-c30a-438c-9fc6-c2b3779dc374'] = $pane;
  $display->panels['contentmain'][0] = 'new-0d474142-c30a-438c-9fc6-c2b3779dc374';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['taxonomy_term:tags:default'] = $panelizer;

  return $export;
}
