<?php
/**
 * @file
 * rbv_event.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function rbv_event_ctools_plugin_api($module = NULL, $api = NULL) {
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
function rbv_event_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function rbv_event_node_info() {
  $items = array(
    'event' => array(
      'name' => t('Evento (calendario)'),
      'base' => 'node_content',
      'description' => t('Evento che potrà apparire sul calendario della propria organizzazione e sul calendario condiviso.'),
      'has_title' => '1',
      'title_label' => t('Titolo'),
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implements hook_rdf_default_mappings().
 */
function rbv_event_rdf_default_mappings() {
  $schemaorg = array();

  // Exported RDF mapping: event
  $schemaorg['node']['event'] = array(
    'rdftype' => array(
      0 => 'schema:Event',
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
    'field_event_date' => array(
      'predicates' => array(
        0 => 'schema:startDate',
      ),
    ),
    'url' => array(
      'predicates' => array(
        0 => 'schema:url',
      ),
      'type' => 'rel',
    ),
    'field_com_location' => array(
      'predicates' => array(
        0 => 'schema:location',
      ),
    ),
    'og_group_ref' => array(
      'predicates' => array(
        0 => 'schema:sourceOrganization',
      ),
    ),
    'field_com_social_links' => array(
      'predicates' => array(
        0 => 'schema:sameAs',
      ),
    ),
    'field_com_logo' => array(
      'predicates' => array(
        0 => 'schema:image',
      ),
      'type' => 'rel',
    ),
    'field_com_description' => array(
      'predicates' => array(
        0 => 'schema:summary',
      ),
    ),
    'field_relpro_project' => array(
      'predicates' => array(
        0 => 'schema:sourceProject',
      ),
    ),
    'field_com_categories' => array(
      'predicates' => array(
        0 => 'schema:issueArea',
      ),
      'type' => 'rel',
    ),
    'field_quick_links_links' => array(
      'predicates' => array(
        0 => 'schema:sameAs',
      ),
    ),
    'field_com_tags' => array(
      'predicates' => array(
        0 => 'schema:keywords',
      ),
      'type' => 'rel',
    ),
  );

  return $schemaorg;
}
