<?php
/**
 * @file
 * rbv_relpro.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function rbv_relpro_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "panelizer" && $api == "panelizer") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function rbv_relpro_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function rbv_relpro_node_info() {
  $items = array(
    'collaboration' => array(
      'name' => t('Collaborazione (a progetto/attività)'),
      'base' => 'node_content',
      'description' => t('Una collaborazione ad un progetto/attività.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implements hook_rdf_default_mappings().
 */
function rbv_relpro_rdf_default_mappings() {
  $schemaorg = array();

  // Exported RDF mapping: collaboration
  $schemaorg['node']['collaboration'] = array(
    'rdftype' => array(
      0 => 'schema:Relation',
      1 => 'sioc:Item',
      2 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'schema:name',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'schema:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'field_rel_source' => array(
      'predicates' => array(
        0 => 'schema:source',
      ),
    ),
    'url' => array(
      'predicates' => array(
        0 => 'schema:url',
      ),
      'type' => 'rel',
    ),
    'field_relpro_project' => array(
      'predicates' => array(
        0 => 'schema:target',
      ),
    ),
    'field_com_date' => array(
      'predicates' => array(
        0 => 'schema:startDate',
      ),
    ),
    'field_com_description' => array(
      'predicates' => array(
        0 => 'schema:summary',
        1 => 'schema:description',
      ),
    ),
  );

  return $schemaorg;
}
