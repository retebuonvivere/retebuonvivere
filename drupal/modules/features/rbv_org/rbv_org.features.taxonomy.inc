<?php
/**
 * @file
 * rbv_org.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function rbv_org_taxonomy_default_vocabularies() {
  return array(
    'membership_roles' => array(
      'name' => 'Ruoli',
      'machine_name' => 'membership_roles',
      'description' => 'Ruoli ricoperti dalle persone nelle organizzazioni',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
