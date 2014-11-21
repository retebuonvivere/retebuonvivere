<?php
/**
 * @file
 * rbv_view_explore.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function rbv_view_explore_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_esplora-la-rete:esplora
  $menu_links['main-menu_esplora-la-rete:esplora'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'esplora',
    'router_path' => 'esplora',
    'link_title' => 'Esplora la rete',
    'options' => array(
      'attributes' => array(
        'title' => 'Esplora le organizzazioni e i progetti della rete del buon vivere',
      ),
      'identifier' => 'main-menu_esplora-la-rete:esplora',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Esplora la rete');


  return $menu_links;
}
