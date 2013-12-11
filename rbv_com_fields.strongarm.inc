<?php
/**
 * @file
 * rbv_com_fields.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function rbv_com_fields_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'colors_taxonomy_term_enabled';
  $strongarm->value = TRUE;
  $export['colors_taxonomy_term_enabled'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_pattern';
  $strongarm->value = '[term:vocabulary]/[term:name]';
  $export['pathauto_taxonomy_term_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'subpathauto_depth';
  $strongarm->value = '1';
  $export['subpathauto_depth'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'subpathauto_ignore_admin';
  $strongarm->value = 1;
  $export['subpathauto_ignore_admin'] = $strongarm;

  return $export;
}
