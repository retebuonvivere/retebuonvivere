<?php
/**
 * @file
 * rbv_org.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function rbv_org_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function rbv_org_node_info() {
  $items = array(
    'org' => array(
      'name' => t('Organization'),
      'base' => 'node_content',
      'description' => t('Organizzazione della Società Civile. Associazione, Cooperativa Sociale, Impresa Sociale, Gruppo di Acquisto Solidale (GAS), Rete di Economia Solidale (RES), Comitato... e tutti gli altri tipi di gruppo.'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  return $items;
}
