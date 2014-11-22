<?php
/**
 * @file
 * rbv_com_fields.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function rbv_com_fields_filter_default_formats() {
  $formats = array();

  // Exported format: full HTML.
  $formats['rbv_full_html'] = array(
    'format' => 'rbv_full_html',
    'name' => 'full HTML',
    'cache' => 1,
    'status' => 1,
    'weight' => 0,
    'filters' => array(),
  );

  return $formats;
}
