<?php
/**
 * @file
 * rbv_relation.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function rbv_relation_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "relation" && $api == "relation_type_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
