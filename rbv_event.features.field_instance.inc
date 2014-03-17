<?php
/**
 * @file
 * rbv_event.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function rbv_event_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-event-field_com_categories'
  $field_instances['node-event-field_com_categories'] = array(
    'bundle' => 'event',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '<a class="help" title="Agricoltura, Bio, Informazione, Salute... Scegliete i settori su cui questo evento si concentra. Pensate che ne manchi qualcuno? C\'è una discussione nel forum appositamente per questo."><i class="fa fa-question-circle"></i></a>',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 10,
      ),
      'featured' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'ical' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 4,
      ),
      'vmode_group_content' => array(
        'label' => 'hidden',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_com_categories',
    'label' => 'Settori',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'options',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'options_buttons',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-event-field_com_description'
  $field_instances['node-event-field_com_description'] = array(
    'bundle' => 'event',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '<a class="help" title="Descrivete l\'evento come preferite. Alcune domande cui spesso è utile rispondere sono Cos\'è? Cosa fa? Ricordate che nella versione breve - quella usata ad esempio nella sezione Esplora la rete - saranno visualizzati i primi 500 caratteri. Perciò cercate di rendere il primo paragrafo significativo."><i class="fa fa-question-circle"></i></a>',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 13,
      ),
      'featured' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'ical' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 500,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 5,
      ),
      'vmode_group_content' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
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
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-event-field_com_location'
  $field_instances['node-event-field_com_location'] = array(
    'bundle' => 'event',
    'default_value' => array(
      0 => array(
        'element_key' => 'node|event|field_com_location|und|0',
        'thoroughfare' => '',
        'premise' => '',
        'postal_code' => '',
        'locality' => '',
        'administrative_area' => 'VR',
        'country' => 'IT',
      ),
    ),
    'deleted' => 0,
    'description' => '<a class="help" title="Usate la riga 1 per l\'indirizzo ufficiale, come via e civico. Usate la riga 2 per ulteriori dettagli utili ad identificare correttamente il luogo, come ad esempio il numero dell\'interno, oppure presso ... se la sede è presso qualche altra sede..."><i class="fa fa-question-circle"></i></a>',
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
        'weight' => 11,
      ),
      'featured' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'ical' => array(
        'label' => 'above',
        'module' => 'addressfield',
        'settings' => array(
          'format_handlers' => array(
            0 => 'address',
          ),
          'use_widget_handlers' => 1,
        ),
        'type' => 'addressfield_default',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'module' => 'addressfield',
        'settings' => array(
          'format_handlers' => array(
            0 => 'address',
          ),
          'use_widget_handlers' => 1,
        ),
        'type' => 'addressfield_default',
        'weight' => 1,
      ),
      'vmode_group_content' => array(
        'label' => 'above',
        'module' => 'addressfield',
        'settings' => array(
          'format_handlers' => array(
            'address' => 'address',
          ),
          'use_widget_handlers' => 1,
        ),
        'type' => 'addressfield_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_com_location',
    'label' => 'Dove',
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
      'weight' => 14,
    ),
  );

  // Exported field_instance: 'node-event-field_com_logo'
  $field_instances['node-event-field_com_logo'] = array(
    'bundle' => 'event',
    'deleted' => 0,
    'description' => '<a class="help" title="Il logo è sempre visibile accanto al nome dell\'evento. L\'immagine viene ritagliata in modo da ottenere un formato quadrato, l\'ideale per il logo. Se l\'immagine originale ha un formato verticale, è possibile che vengano tagliate delle parti. Per ottenere un miglior risultato, modificate l\'immagine e ritagliatela in forma quadrata prima di caricarla. Non sapete come fare? Nessun problema, segnalatecelo con una email."><i class="fa fa-question-circle"></i></a>',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => 'file',
          'image_style' => 'panopoly_image_square',
        ),
        'type' => 'image',
        'weight' => 9,
      ),
      'featured' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'ical' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => 'file',
          'image_style' => 'panopoly_image_square',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => 'content',
          'image_style' => 'rbv_image_teaser',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
      'vmode_group_content' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => 'content',
          'image_style' => 'rbv_image_icon',
        ),
        'type' => 'image',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_com_logo',
    'label' => 'Immagine / logo',
    'required' => 0,
    'settings' => array(
      'alt_field' => 1,
      'default_image' => 0,
      'file_directory' => '',
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
        'preview_image_style' => 'panopoly_image_square',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'node-event-field_com_social_links'
  $field_instances['node-event-field_com_social_links'] = array(
    'bundle' => 'event',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '<a class="help" title="Inserite gli indirizzi internet di tutti i social network in cui questo evento è presente. Questi link vengono visualizzati  sotto lo slogan, usando le icone specifiche dei social network. Sono supportati facebook, twitter, wiser.org, zoes.it, github, instagram, ma anche wikipedia e tanti altri. Usare il pulsante \'Aggiungi un\'altro elemento\' per inserire più social network."><i class="fa fa-question-circle"></i></a>',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'social_profile_field',
        'settings' => array(),
        'type' => 'social_profile_field_icons',
        'weight' => 12,
      ),
      'featured' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'ical' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
      'vmode_group_content' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_com_social_links',
    'label' => 'Segui l\'evento su',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'social_profile_field',
      'settings' => array(),
      'type' => 'social_profile_field_default',
      'weight' => 15,
    ),
  );

  // Exported field_instance: 'node-event-field_com_tags'
  $field_instances['node-event-field_com_tags'] = array(
    'bundle' => 'event',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '<a class="help" title="Avete scelto il settore \'beni comuni\' e volete specificare che l\'evento si concentrerà in particolare su \'auto-organizzazione\'? Aggiungete parole chiave per specificare ulteriormente l\'attività. Potete creare nuove parole chiave semplicemente digitandole. Separate le parole con la virgola."><i class="fa fa-question-circle"></i></a>',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 11,
      ),
      'featured' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'ical' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 7,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
      'vmode_group_content' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
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
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'node-event-field_event_date'
  $field_instances['node-event-field_event_date'] = array(
    'bundle' => 'event',
    'deleted' => 0,
    'description' => '<a class="help" title="Quando inizia e quando termina questo evento? Le date permettono di visualizzare l\'evento nel calendario della vostra organizzazione e nel calendario condiviso."><i class="fa fa-question-circle"></i></a>',
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
        'weight' => 10,
      ),
      'featured' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'ical' => array(
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
        'weight' => 1,
      ),
      'teaser' => array(
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
        'weight' => 2,
      ),
      'vmode_group_content' => array(
        'label' => 'hidden',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'short',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
        ),
        'type' => 'date_default',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_event_date',
    'label' => 'Quando',
    'required' => 0,
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'strtotime',
      'default_value_code' => '',
      'default_value_code2' => '+2 hours',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'd/m/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'text_parts' => array(),
        'year_range' => '-50:+50',
      ),
      'type' => 'date_popup',
      'weight' => 13,
    ),
  );

  // Exported field_instance: 'node-event-field_quick_links_links'
  $field_instances['node-event-field_quick_links_links'] = array(
    'bundle' => 'event',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '<a class="help" title="È imprtante chiarire ai visitatori qual\'è il sito internet principale dell\'evento. Inserite qui l\'indirizzo e assegnate un titolo chiaro, ad esempio \'Sito principale\'. Usate il pulsante \'Aggiungi un altro elemento\' per aggiungere altri indirizzi, ad esempio il blog del progetto. Assegnate anche a questo un titolo chiaro, ad esempio \'Blog\'."><i class="fa fa-question-circle"></i></a>',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 14,
      ),
      'featured' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'ical' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
      'vmode_group_content' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_quick_links_links',
    'label' => 'Links',
    'required' => 0,
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'linkit' => array(
        'enable' => 0,
        'insert_plugin' => '',
      ),
      'rel_remove' => 'default',
      'title' => 'optional',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 16,
    ),
  );

  // Exported field_instance: 'node-event-field_relpro_project'
  $field_instances['node-event-field_relpro_project'] = array(
    'bundle' => 'event',
    'default_value' => NULL,
    'default_value_function' => '',
    'deleted' => 0,
    'description' => '<a class="help" title="L\'evento si riferisce ad un progetto? Indicate quale digitando il nome del progetto qui, l\'evento sarà visibile nella pagina del progetto. In questo modo si può ad esempio creare un progetto/attività per raggruppare una rassegna di eventi."><i class="fa fa-question-circle"></i></a>',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 12,
      ),
      'featured' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'ical' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => 1,
        ),
        'type' => 'entityreference_label',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
      'vmode_group_content' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_relpro_project',
    'label' => 'Progetto di riferimento',
    'required' => 0,
    'settings' => array(
      'behaviors' => array(
        'prepopulate' => array(
          'status' => 0,
        ),
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'entityreference_autocreate' => array(
          'active' => 0,
          'author' => '',
          'author_current_user' => 1,
        ),
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-event-group_access'
  $field_instances['node-event-group_access'] = array(
    'bundle' => 'event',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
      'featured' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'ical' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
      ),
      'vmode_group_content' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'group_access',
    'label' => 'Group visibility',
    'required' => TRUE,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'view modes' => array(
      'full' => array(
        'label' => 'above',
        'type' => 'options_onoff',
      ),
      'teaser' => array(
        'label' => 'above',
        'type' => 'options_onoff',
      ),
    ),
    'widget' => array(
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 2,
    ),
    'widget_type' => 'options_select',
  );

  // Exported field_instance: 'node-event-og_group_ref'
  $field_instances['node-event-og_group_ref'] = array(
    'bundle' => 'event',
    'default_value' => NULL,
    'default_value_function' => 'entityreference_prepopulate_field_default_value',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'featured' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'ical' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'link' => 1,
        ),
        'type' => 'entityreference_label',
        'weight' => 3,
      ),
      'vmode_group_content' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 11,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'og_group_ref',
    'label' => 'Groups audience',
    'required' => 0,
    'settings' => array(
      'behaviors' => array(
        'og_widget' => array(
          'admin' => array(
            'widget_type' => 'entityreference_autocomplete',
          ),
          'default' => array(
            'widget_type' => 'options_select',
          ),
          'status' => TRUE,
        ),
        'prepopulate' => array(
          'action' => 'hide',
          'action_on_edit' => 0,
          'fallback' => 'none',
          'og_context' => 0,
          'skip_perm' => 'administer group',
          'status' => 1,
        ),
      ),
      'user_register_form' => FALSE,
    ),
    'view modes' => array(
      'full' => array(
        'custom settings' => FALSE,
        'label' => 'Full',
        'type' => 'og_list_default',
      ),
      'teaser' => array(
        'custom settings' => FALSE,
        'label' => 'Teaser',
        'type' => 'og_list_default',
      ),
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'og',
      'settings' => array(),
      'type' => 'og_complex',
      'weight' => 1,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('<a class="help" title="Agricoltura, Bio, Informazione, Salute... Scegliete i settori su cui questo evento si concentra. Pensate che ne manchi qualcuno? C\'è una discussione nel forum appositamente per questo."><i class="fa fa-question-circle"></i></a>');
  t('<a class="help" title="Avete scelto il settore \'beni comuni\' e volete specificare che l\'evento si concentrerà in particolare su \'auto-organizzazione\'? Aggiungete parole chiave per specificare ulteriormente l\'attività. Potete creare nuove parole chiave semplicemente digitandole. Separate le parole con la virgola."><i class="fa fa-question-circle"></i></a>');
  t('<a class="help" title="Descrivete l\'evento come preferite. Alcune domande cui spesso è utile rispondere sono Cos\'è? Cosa fa? Ricordate che nella versione breve - quella usata ad esempio nella sezione Esplora la rete - saranno visualizzati i primi 500 caratteri. Perciò cercate di rendere il primo paragrafo significativo."><i class="fa fa-question-circle"></i></a>');
  t('<a class="help" title="Il logo è sempre visibile accanto al nome dell\'evento. L\'immagine viene ritagliata in modo da ottenere un formato quadrato, l\'ideale per il logo. Se l\'immagine originale ha un formato verticale, è possibile che vengano tagliate delle parti. Per ottenere un miglior risultato, modificate l\'immagine e ritagliatela in forma quadrata prima di caricarla. Non sapete come fare? Nessun problema, segnalatecelo con una email."><i class="fa fa-question-circle"></i></a>');
  t('<a class="help" title="Inserite gli indirizzi internet di tutti i social network in cui questo evento è presente. Questi link vengono visualizzati  sotto lo slogan, usando le icone specifiche dei social network. Sono supportati facebook, twitter, wiser.org, zoes.it, github, instagram, ma anche wikipedia e tanti altri. Usare il pulsante \'Aggiungi un\'altro elemento\' per inserire più social network."><i class="fa fa-question-circle"></i></a>');
  t('<a class="help" title="L\'evento si riferisce ad un progetto? Indicate quale digitando il nome del progetto qui, l\'evento sarà visibile nella pagina del progetto. In questo modo si può ad esempio creare un progetto/attività per raggruppare una rassegna di eventi."><i class="fa fa-question-circle"></i></a>');
  t('<a class="help" title="Quando inizia e quando termina questo evento? Le date permettono di visualizzare l\'evento nel calendario della vostra organizzazione e nel calendario condiviso."><i class="fa fa-question-circle"></i></a>');
  t('<a class="help" title="Usate la riga 1 per l\'indirizzo ufficiale, come via e civico. Usate la riga 2 per ulteriori dettagli utili ad identificare correttamente il luogo, come ad esempio il numero dell\'interno, oppure presso ... se la sede è presso qualche altra sede..."><i class="fa fa-question-circle"></i></a>');
  t('<a class="help" title="È imprtante chiarire ai visitatori qual\'è il sito internet principale dell\'evento. Inserite qui l\'indirizzo e assegnate un titolo chiaro, ad esempio \'Sito principale\'. Usate il pulsante \'Aggiungi un altro elemento\' per aggiungere altri indirizzi, ad esempio il blog del progetto. Assegnate anche a questo un titolo chiaro, ad esempio \'Blog\'."><i class="fa fa-question-circle"></i></a>');
  t('Descrizione');
  t('Dove');
  t('Group visibility');
  t('Groups audience');
  t('Immagine / logo');
  t('Links');
  t('Parole chiave');
  t('Progetto di riferimento');
  t('Quando');
  t('Segui l\'evento su');
  t('Settori');

  return $field_instances;
}
