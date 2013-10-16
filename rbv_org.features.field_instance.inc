<?php
/**
 * @file
 * rbv_org.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function rbv_org_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-org-field_com_categories'
  $field_instances['node-org-field_com_categories'] = array(
    'bundle' => 'org',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Scegliere i settori di attività.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_com_categories',
    'label' => 'Settori di attività',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'node-org-field_com_description'
  $field_instances['node-org-field_com_description'] = array(
    'bundle' => 'org',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Inserire la descrizione della propria organizzazione: cos\'è, che cosa fa, ecc...',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 8,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_com_description',
    'label' => 'Descrizione',
    'required' => 0,
    'settings' => array(
      'display_summary' => 0,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 10,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'node-org-field_com_email'
  $field_instances['node-org-field_com_email'] = array(
    'bundle' => 'org',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'email',
        'settings' => array(),
        'type' => 'email_default',
        'weight' => 11,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_com_email',
    'label' => 'Email',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'email',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'email_textfield',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-org-field_com_foundingdate'
  $field_instances['node-org-field_com_foundingdate'] = array(
    'bundle' => 'org',
    'deleted' => 0,
    'description' => 'Quando è stata fondata questa organizzazione?',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
        ),
        'type' => 'date_default',
        'weight' => 14,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_com_foundingdate',
    'label' => 'Data di fondazione',
    'required' => 0,
    'settings' => array(
      'default_value' => 'blank',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 30,
        'input_format' => 'm/d/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'text_parts' => array(),
        'year_range' => '1800:+0',
      ),
      'type' => 'date_popup',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'node-org-field_com_history'
  $field_instances['node-org-field_com_history'] = array(
    'bundle' => 'org',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'La storia della propria organizzazione. ',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 9,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_com_history',
    'label' => 'Storia',
    'required' => 0,
    'settings' => array(
      'display_summary' => 0,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 6,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'node-org-field_com_location'
  $field_instances['node-org-field_com_location'] = array(
    'bundle' => 'org',
    'default_value' => array(
      0 => array(
        'element_key' => 'node|org|field_com_location|und|0',
        'thoroughfare' => '',
        'premise' => '',
        'postal_code' => '',
        'locality' => '',
        'administrative_area' => '',
        'country' => 'IT',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'addressfield',
        'settings' => array(
          'format_handlers' => array(
            0 => 'address',
          ),
          'use_widget_handlers' => 1,
        ),
        'type' => 'addressfield_default',
        'weight' => 10,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_com_location',
    'label' => 'Indirizzo',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'addressfield',
      'settings' => array(
        'available_countries' => array(),
        'format_handlers' => array(
          'address' => 'address',
          'address-hide-country' => 0,
          'organisation' => 0,
          'name-full' => 0,
          'name-oneline' => 0,
        ),
      ),
      'type' => 'addressfield_standard',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-org-field_com_logo'
  $field_instances['node-org-field_com_logo'] = array(
    'bundle' => 'org',
    'deleted' => 0,
    'description' => 'Caricare l\'immagine logo dell\'organizzazione.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_com_logo',
    'label' => 'Logo',
    'required' => 0,
    'settings' => array(
      'alt_field' => 1,
      'default_image' => 0,
      'file_directory' => 'logos',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => 'medium',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-org-field_com_mission'
  $field_instances['node-org-field_com_mission'] = array(
    'bundle' => 'org',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Mission: la ragione d\'essere dell\'organizzazione, che cosa questa organizzazione intende fare per il mondo.
Un breve testo che possa indicare gli obiettivi e gli intenti dell\'organizzazione, che possa guidarne le azioni ed essere d\'ispirazione per gli altri.
Suggerimenti: provate a rispondere alle domande Cosa vogliamo fare? Perché lo facciamo?',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 7,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_com_mission',
    'label' => 'Mission',
    'required' => 0,
    'settings' => array(
      'display_summary' => 0,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 4,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 13,
    ),
  );

  // Exported field_instance: 'node-org-field_com_more_contacts'
  $field_instances['node-org-field_com_more_contacts'] = array(
    'bundle' => 'org',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 13,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_com_more_contacts',
    'label' => 'Altro',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-org-field_com_tagline'
  $field_instances['node-org-field_com_tagline'] = array(
    'bundle' => 'org',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Slogan (o tagline, o payoff): una frase breve che dovrebbe riassumere l\'intero universo dell\'organizzazione.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_com_tagline',
    'label' => 'Slogan',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 120,
      ),
      'type' => 'text_textfield',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-org-field_com_tags'
  $field_instances['node-org-field_com_tags'] = array(
    'bundle' => 'org',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Inserire le parole chiave che descrivono la propria organizzazione.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_com_tags',
    'label' => 'Parole chiave',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'node-org-field_com_telephone'
  $field_instances['node-org-field_com_telephone'] = array(
    'bundle' => 'org',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_plain',
        'weight' => 15,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_com_telephone',
    'label' => 'Telefono',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'telephone',
      'settings' => array(
        'placeholder' => '',
      ),
      'type' => 'telephone_default',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-org-field_org_type'
  $field_instances['node-org-field_org_type'] = array(
    'bundle' => 'org',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Tipologia di organizzazione. Esempi: Associazione di Promozione Sociale, Associazione Onlus, Associazione Culturale, Cooperativa Sociale, Fondazione, Impresa sociale, Impresa monopersonale...',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_org_type',
    'label' => 'Tipologia',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-org-group_group'
  $field_instances['node-org-group_group'] = array(
    'bundle' => 'org',
    'default_value' => array(
      0 => array(
        'value' => 1,
      ),
    ),
    'deleted' => 0,
    'description' => 'Determine if this is an OG group.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'og_ui',
        'settings' => array(
          'field_name' => FALSE,
        ),
        'type' => 'og_group_subscribe',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => 1,
    'entity_type' => 'node',
    'field_name' => 'group_group',
    'label' => 'Group',
    'required' => FALSE,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'view modes' => array(
      'full' => array(
        'custom settings' => FALSE,
        'label' => 'Full',
        'type' => 'og_group_subscribe',
      ),
      'teaser' => array(
        'custom settings' => FALSE,
        'label' => 'Teaser',
        'type' => 'og_group_subscribe',
      ),
    ),
    'widget' => array(
      'module' => 'options',
      'settings' => array(
        'display_label' => 0,
        'og_hide' => TRUE,
      ),
      'type' => 'options_onoff',
      'weight' => 0,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Altro');
  t('Caricare l\'immagine logo dell\'organizzazione.');
  t('Data di fondazione');
  t('Descrizione');
  t('Determine if this is an OG group.');
  t('Email');
  t('Group');
  t('Indirizzo');
  t('Inserire la descrizione della propria organizzazione: cos\'è, che cosa fa, ecc...');
  t('Inserire le parole chiave che descrivono la propria organizzazione.');
  t('La storia della propria organizzazione. ');
  t('Logo');
  t('Mission');
  t('Mission: la ragione d\'essere dell\'organizzazione, che cosa questa organizzazione intende fare per il mondo.
Un breve testo che possa indicare gli obiettivi e gli intenti dell\'organizzazione, che possa guidarne le azioni ed essere d\'ispirazione per gli altri.
Suggerimenti: provate a rispondere alle domande Cosa vogliamo fare? Perché lo facciamo?');
  t('Parole chiave');
  t('Quando è stata fondata questa organizzazione?');
  t('Scegliere i settori di attività.');
  t('Settori di attività');
  t('Slogan');
  t('Slogan (o tagline, o payoff): una frase breve che dovrebbe riassumere l\'intero universo dell\'organizzazione.');
  t('Storia');
  t('Telefono');
  t('Tipologia');
  t('Tipologia di organizzazione. Esempi: Associazione di Promozione Sociale, Associazione Onlus, Associazione Culturale, Cooperativa Sociale, Fondazione, Impresa sociale, Impresa monopersonale...');

  return $field_instances;
}
