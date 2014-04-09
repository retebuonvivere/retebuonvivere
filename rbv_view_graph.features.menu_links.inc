<?php
/**
 * @file
 * rbv_view_graph.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function rbv_view_graph_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_vedi-la-rete:rete
  $menu_links['main-menu_vedi-la-rete:rete'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'rete',
    'router_path' => 'rete',
    'link_title' => 'Vedi la rete',
    'options' => array(
      'identifier' => 'main-menu_vedi-la-rete:rete',
      'attributes' => array(
        'title' => 'Vedi la rete delle collaborazioni tra organizzazioni della società civile e dell\'economia solidale di Verona',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Vedi la rete');


  return $menu_links;
}
