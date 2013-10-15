<?php
/**
 * @file
 * rbv_project.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function rbv_project_ctools_plugin_api($module = NULL, $api = NULL) {
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
function rbv_project_node_info() {
  $items = array(
    'project' => array(
      'name' => t('Progetto'),
      'base' => 'node_content',
      'description' => t('Un progetto iniziato dalla propria organizzazione. Sarà possibile indicare le altre organizzazioni collaboratrici.'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  return $items;
}
