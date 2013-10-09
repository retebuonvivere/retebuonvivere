<?php
/**
 * @file
 * rbv_org.features.inc
 */

/**
 * Implements hook_node_info().
 */
function rbv_org_node_info() {
  $items = array(
    'org' => array(
      'name' => t('Organization'),
      'base' => 'node_content',
      'description' => t('Organizzazione della Società Civile. Associazione, Cooperativa Sociale, Impresa Sociale, Gruppo di Acquisto Solidale (GAS), Rete di Economia Solidale (RES), e tutti gli altri tipi di gruppo.'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  return $items;
}
