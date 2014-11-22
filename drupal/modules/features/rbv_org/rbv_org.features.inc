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
  if ($module == "page_manager" && $api == "pages_default") {
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
function rbv_org_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function rbv_org_node_info() {
  $items = array(
    'org' => array(
      'name' => t('Organizzazione'),
      'base' => 'node_content',
      'description' => t('Organizzazione della Società Civile. Associazione, Cooperativa Sociale, Impresa Sociale, Gruppo di Acquisto Solidale (GAS), Rete di Economia Solidale (RES), Comitato... e tutti gli altri tipi di gruppo.'),
      'has_title' => '1',
      'title_label' => t('Nome'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

/**
 * Implements hook_default_og_membership_type().
 */
function rbv_org_default_og_membership_type() {
  $items = array();
  $items['rbv_membership_default'] = entity_import('og_membership_type', '{
    "name" : "rbv_membership_default",
    "description" : "RBV membership default",
    "language" : "",
    "rdf_mapping" : []
  }');
  return $items;
}

/**
 * Implements hook_rdf_default_mappings().
 */
function rbv_org_rdf_default_mappings() {
  $schemaorg = array();

  // Exported RDF mapping: org
  $schemaorg['node']['org'] = array(
    'rdftype' => array(
      0 => 'schema:Organization',
      1 => 'sioc:Item',
      2 => 'foaf:Organization',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'schema:name',
      ),
      'type' => 'property',
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
    'field_com_location' => array(
      'predicates' => array(
        0 => 'schema:address',
      ),
    ),
    'url' => array(
      'predicates' => array(
        0 => 'schema:url',
      ),
      'type' => 'rel',
    ),
    'field_founding_date' => array(
      'predicates' => array(
        0 => 'schema:foundingDate',
      ),
    ),
    'field_foundingdate' => array(
      'predicates' => array(
        0 => 'schema:foundingDate',
      ),
    ),
    'field_com_tagline' => array(
      'predicates' => array(
        0 => 'schema:tagline',
      ),
    ),
    'field_org_foundingdate' => array(
      'predicates' => array(
        0 => 'schema:foundingDate',
      ),
    ),
    'field_com_mission' => array(
      'predicates' => array(
        0 => 'schema:mission',
      ),
    ),
    'field_com_history' => array(
      'predicates' => array(
        0 => 'schema:history',
      ),
    ),
    'field_com_description' => array(
      'predicates' => array(
        0 => 'schema:summary',
      ),
    ),
    'field_com_categories' => array(
      'predicates' => array(
        0 => 'schema:issueArea',
      ),
      'type' => 'rel',
    ),
    'field_com_logo' => array(
      'predicates' => array(
        0 => 'schema:logo',
      ),
      'type' => 'rel',
    ),
    'field_com_tags' => array(
      'predicates' => array(
        0 => 'schema:keywords',
      ),
      'type' => 'rel',
    ),
    'field_com_email' => array(
      'predicates' => array(
        0 => 'schema:email',
      ),
    ),
    'field_com_phone' => array(
      'predicates' => array(
        0 => 'schema:telephone',
      ),
    ),
    'field_com_more_contacts' => array(
      'predicates' => array(
        0 => 'schema:otherContacts',
      ),
    ),
    'field_com_foundingdate' => array(
      'predicates' => array(
        0 => 'schema:foundingDate',
      ),
    ),
    'field_com_telephone' => array(
      'predicates' => array(
        0 => 'schema:telephone',
      ),
    ),
    'field_com_social_links' => array(
      'predicates' => array(
        0 => 'schema:sameAs',
      ),
    ),
    'field_com_date' => array(
      'predicates' => array(
        0 => 'schema:foundingDate',
      ),
    ),
    'field_org_type' => array(
      'predicates' => array(
        0 => 'schema:orgType',
      ),
      'type' => 'rel',
    ),
    'field_com_more' => array(
      'predicates' => array(
        0 => 'schema:moreContacts',
      ),
    ),
    'field_quick_links_links' => array(
      'predicates' => array(
        0 => 'schema:sameAs',
      ),
    ),
  );

  // Exported RDF mapping: user
  $schemaorg['user']['user'] = array(
    'rdftype' => array(
      0 => 'sioc:UserAccount',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'homepage' => array(
      'predicates' => array(
        0 => 'foaf:page',
      ),
      'type' => 'rel',
    ),
  );

  return $schemaorg;
}
