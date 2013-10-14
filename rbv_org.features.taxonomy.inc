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
    'categories' => array(
      'name' => 'Settori di attività',
      'machine_name' => 'categories',
      'description' => 'Settori di attività o categorie',
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
    'org_types' => array(
      'name' => 'Organization types',
      'machine_name' => 'org_types',
      'description' => 'The categories of civil society organization, e.g. (for Italy) Associazione Onlus, Cooperativa Sociale, Comitato, ecc...',
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
