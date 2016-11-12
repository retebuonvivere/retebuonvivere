<?php
/**
 * @file
 * rbv_project.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function rbv_project_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-project-field_com_categories'.
  $field_instances['node-project-field_com_categories'] = array(
    'bundle' => 'project',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '<a class="help" title="Agricoltura, Bio, Informazione, Salute... Scegliete i settori su cui questo progetto ha un impatto. Pensate che ne manchi qualcuno? C\'è una discussione nel forum appositamente per questo."><i class="fa fa-question-circle"></i></a>',
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
      'teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'vmode_group_content' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
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
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 16,
    ),
  );

  // Exported field_instance: 'node-project-field_com_cover'.
  $field_instances['node-project-field_com_cover'] = array(
    'bundle' => 'project',
    'deleted' => 0,
    'description' => '<a tabindex="0" class="btn btn-info" role="button" data-toggle="popover" data-trigger="focus" data-original-title="Immagini di copertina" data-content="Personalizza la copertina di questa pagina! Se si scelgono più immagini (max 5), verranno presentante come slideshow." data-html="true"><i class="fa fa-question-circle fa-lg"></i> Aiuto</a>',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'backstretch',
        'settings' => array(
          'center_x' => 1,
          'center_y' => 1,
          'delta' => '',
          'duration' => 7000,
          'element' => 'other',
          'element_other' => '#rbv-cover',
          'fade' => 350,
          'field' => '',
          'image_style' => '',
          'random' => 0,
        ),
        'type' => 'backstretch',
        'weight' => 3,
      ),
      'featured' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'vmode_group_content' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_com_cover',
    'label' => 'Immagine di copertina',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => 'covers/[current-date:custom:Y]/[current-date:custom:m]',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '1.75 MB',
      'max_resolution' => '',
      'min_resolution' => '399x150',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'media',
      'settings' => array(
        'allowed_schemes' => array(
          'public' => 'public',
          'vimeo' => 0,
          'youtube' => 0,
        ),
        'allowed_types' => array(
          'audio' => 0,
          'document' => 0,
          'image' => 'image',
          'video' => 0,
        ),
        'browser_plugins' => array(
          'media_default--media_browser_1' => 0,
          'media_default--media_browser_my_files' => 'media_default--media_browser_my_files',
          'media_internet' => 0,
          'upload' => 'upload',
        ),
        'manualcrop_crop_info' => 1,
        'manualcrop_default_crop_area' => 1,
        'manualcrop_enable' => 0,
        'manualcrop_inline_crop' => 0,
        'manualcrop_instant_crop' => FALSE,
        'manualcrop_instant_preview' => 1,
        'manualcrop_keyboard' => 1,
        'manualcrop_maximize_default_crop_area' => 0,
        'manualcrop_require_cropping' => array(),
        'manualcrop_styles_list' => array(),
        'manualcrop_styles_mode' => 'include',
        'manualcrop_thumblist' => 0,
      ),
      'type' => 'media_generic',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-project-field_com_date'.
  $field_instances['node-project-field_com_date'] = array(
    'bundle' => 'project',
    'deleted' => 0,
    'description' => '<a class="help" title="Quando è iniziato questo progetto? Le date sono importanti. Ad esempio nella rete potremmo sviluppare l\'asse del tempo e visualizzare le connessioni che si creano nel tempo. Usare il pulsante \'Show end date\' per attivare la data di cessazione attività, se necessario. La data di termine, se inserita, andrà ad applicarsi anche alle collaborazioni al progetto attive."><i class="fa fa-question-circle"></i></a>',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'panopoly_day',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
        ),
        'type' => 'date_default',
        'weight' => 14,
      ),
      'featured' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      'vmode_group_content' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_com_date',
    'label' => 'Date',
    'required' => 1,
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'blank',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 30,
        'input_format' => 'd/m/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'text_parts' => array(),
        'year_range' => '-80:+20',
      ),
      'type' => 'date_popup',
      'weight' => 21,
    ),
  );

  // Exported field_instance: 'node-project-field_com_description'.
  $field_instances['node-project-field_com_description'] = array(
    'bundle' => 'project',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '<a class="help" title="Descrivete il progetto come preferite. Alcune domande cui spesso è utile rispondere sono Cos\'è? Cosa fa? Ricordate che nella versione breve - quella usata ad esempio nella sezione Esplora la rete - saranno visualizzati i primi 500 caratteri. Perciò cercate di rendere il primo paragrafo significativo."><i class="fa fa-question-circle"></i></a>',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 12,
      ),
      'featured' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'vmode_group_content' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 14,
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
      'weight' => 18,
    ),
  );

  // Exported field_instance: 'node-project-field_com_email'.
  $field_instances['node-project-field_com_email'] = array(
    'bundle' => 'project',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'email',
        'settings' => array(),
        'type' => 'email_default',
        'weight' => 7,
      ),
      'featured' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 13,
      ),
      'vmode_group_content' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 13,
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
      'weight' => 13,
    ),
  );

  // Exported field_instance: 'node-project-field_com_history'.
  $field_instances['node-project-field_com_history'] = array(
    'bundle' => 'project',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '<a class="help" title="Raccontate la storia di questo progetto."><i class="fa fa-question-circle"></i></a>',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 15,
      ),
      'featured' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 14,
      ),
      'vmode_group_content' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 15,
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
        'rows' => 10,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 22,
    ),
  );

  // Exported field_instance: 'node-project-field_com_location'.
  $field_instances['node-project-field_com_location'] = array(
    'bundle' => 'project',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '<a class="help" title="Usate la riga 1 per l\'indirizzo ufficiale, come via e civico. Usate la riga 2 per ulteriori dettagli utili ad identificare correttamente il luogo, come ad esempio il numero dell\'interno, oppure presso ... se la sede è presso qualche altra sede..."><i class="fa fa-question-circle"></i></a>',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'addressfield',
        'settings' => array(
          'format_handlers' => array(
            0 => 'address',
          ),
          'use_widget_handlers' => 1,
        ),
        'type' => 'addressfield_default',
        'weight' => 5,
      ),
      'featured' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 15,
      ),
      'vmode_group_content' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 16,
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
        'default_country' => '',
        'format_handlers' => array(
          'address' => 'address',
          'address-hide-country' => 0,
          'organisation' => 0,
          'name-full' => 0,
          'name-oneline' => 0,
        ),
      ),
      'type' => 'addressfield_standard',
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'node-project-field_com_logo'.
  $field_instances['node-project-field_com_logo'] = array(
    'bundle' => 'project',
    'deleted' => 0,
    'description' => '<a tabindex="0" class="btn btn-info" role="button" data-toggle="popover" data-trigger="focus" data-original-title="Logo/immagine principale" data-content="Inserire il logo o un\'immagine caratterizzante dell\'evento. Sarà sempre visibile vicino al titolo, in forma quadrata (ideale per il logo) o a coprire tutta la larghezza nel formato tessera." data-html="true"><i class="fa fa-question-circle fa-lg"></i> Aiuto</a>',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => 'file',
          'image_style' => 'panopoly_image_square',
        ),
        'type' => 'image',
        'weight' => 2,
      ),
      'featured' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'vmode_group_content' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_com_logo',
    'label' => 'Logo',
    'required' => 0,
    'settings' => array(
      'alt_field' => 1,
      'default_image' => 414,
      'file_directory' => 'logos/[current-date:custom:Y]/[current-date:custom:m]',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '1.5 MB',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'manualcrop_crop_info' => 1,
        'manualcrop_default_crop_area' => 1,
        'manualcrop_enable' => 1,
        'manualcrop_inline_crop' => 0,
        'manualcrop_instant_crop' => 0,
        'manualcrop_instant_preview' => 1,
        'manualcrop_keyboard' => 1,
        'manualcrop_maximize_default_crop_area' => 0,
        'manualcrop_require_cropping' => array(),
        'manualcrop_styles_list' => array(
          'panopoly_image_square' => 'panopoly_image_square',
        ),
        'manualcrop_styles_mode' => 'include',
        'manualcrop_thumblist' => 0,
        'preview_image_style' => 'panopoly_image_square',
        'progress_indicator' => 'bar',
      ),
      'type' => 'image_image',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-project-field_com_mission'.
  $field_instances['node-project-field_com_mission'] = array(
    'bundle' => 'project',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '<a class="help" title="Mission, la ragione d\'essere di questo progetto, che cosa il progetto intende fare per il mondo. Un breve testo che possa indicare gli obiettivi e gli intenti del progetto, che possa guidarne le azioni ed essere d\'ispirazione per gli altri."><i class="fa fa-question-circle"></i></a>',
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
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 12,
      ),
      'vmode_group_content' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 12,
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
        'rows' => 10,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 19,
    ),
  );

  // Exported field_instance: 'node-project-field_com_more'.
  $field_instances['node-project-field_com_more'] = array(
    'bundle' => 'project',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '<a class="help" title="Se avete bisogno di specificare altri dettagli per i contatti usate questo campo. Esempi, un contatto skype, gli orari in cui è preferibile telefonare, ecc..."><i class="fa fa-question-circle"></i></a>',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 8,
      ),
      'featured' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'vmode_group_content' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_com_more',
    'label' => 'Altro',
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 6,
      ),
      'type' => 'text_textarea',
      'weight' => 14,
    ),
  );

  // Exported field_instance: 'node-project-field_com_private_og'.
  $field_instances['node-project-field_com_private_og'] = array(
    'bundle' => 'project',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '<a class="help" title="Questo campo di testo è visibile soltanto agli utenti membri della vostra organizzazione. È possibile quindi inserire qui dati interni, come testo, immagini e link a file e cartelle condivise (google drive e dropbox)."><i class="fa fa-question-circle"></i></a>',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 16,
      ),
      'featured' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'vmode_group_content' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_com_private_og',
    'label' => 'Spazio privato gruppo',
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 23,
    ),
  );

  // Exported field_instance: 'node-project-field_com_scope'.
  $field_instances['node-project-field_com_scope'] = array(
    'bundle' => 'project',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '<a class="help" title="Locale, regionale, interregionale, nazionale, globale... Qual\'è l\'ambito o la portata del progetto?"><i class="fa fa-question-circle"></i></a>',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 14,
      ),
      'featured' => array(
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
        'weight' => 5,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_com_scope',
    'label' => 'Ambito/portata',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 15,
    ),
  );

  // Exported field_instance: 'node-project-field_com_social_links'.
  $field_instances['node-project-field_com_social_links'] = array(
    'bundle' => 'project',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '<a class="help" title="Inserite gli indirizzi internet di tutti i social network in cui questo progetto è presente. Questi link vengono visualizzati subito sotto lo slogan, usando le icone specifiche dei social network. Sono supportati facebook, twitter, wiser.org, zoes.it, github, instagram, ma anche wikipedia e tanti altri. Usare il pulsante \'Aggiungi un\'altro elemento\' per inserire più social network."><i class="fa fa-question-circle"></i></a>',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'social_profile_field',
        'settings' => array(),
        'type' => 'social_profile_field_icons',
        'weight' => 5,
      ),
      'featured' => array(
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
        'weight' => 7,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_com_social_links',
    'label' => 'Segui il progetto su',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'social_profile_field',
      'settings' => array(),
      'type' => 'social_profile_field_default',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-project-field_com_tagline'.
  $field_instances['node-project-field_com_tagline'] = array(
    'bundle' => 'project',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '<a class="help" title="Una frase breve che dovrebbe riassumere l\'intero universo di questo progetto. Lo slogan viene sempre visualizzato a fianco del logo."><i class="fa fa-question-circle"></i></a>',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
      'featured' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
      'vmode_group_content' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_com_tagline',
    'label' => 'Slogan',
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 68,
      ),
      'type' => 'text_textfield',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-project-field_com_tags'.
  $field_instances['node-project-field_com_tags'] = array(
    'bundle' => 'project',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '<a class="help" title="Avete scelto il settore \'economia solidale\' e volete specificare che il progetto è in particolare sul \'baratto\'? Aggiungete parole chiave per specificare ulteriormente l\'attività. Potete creare nuove parole chiave semplicemente digitandole. Separate le parole con la virgola."><i class="fa fa-question-circle"></i></a>',
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
        'weight' => 8,
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
      'weight' => 17,
    ),
  );

  // Exported field_instance: 'node-project-field_com_telephone'.
  $field_instances['node-project-field_com_telephone'] = array(
    'bundle' => 'project',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_plain',
        'weight' => 6,
      ),
      'featured' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 11,
      ),
      'vmode_group_content' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
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
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'node-project-field_quick_links_links'.
  $field_instances['node-project-field_quick_links_links'] = array(
    'bundle' => 'project',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '<a class="help" title="È imprtante chiarire ai visitatori qual\'è il sito internet principale del progetto. Inserite qui l\'indirizzo e assegnate un titolo chiaro, ad esempio \'Sito principale\'. Usate il pulsante \'Aggiungi un altro elemento\' per aggiungere altri indirizzi, ad esempio il blog del progetto. Assegnate anche a questo un titolo chiaro, ad esempio \'Blog\'."><i class="fa fa-question-circle"></i></a>',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_separate',
        'weight' => 9,
      ),
      'featured' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
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
      'absolute_url' => 1,
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
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'rel_remove' => 'default',
      'title' => 'optional',
      'title_label_use_field_label' => FALSE,
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
      'weight' => 15,
    ),
  );

  // Exported field_instance: 'node-project-og_group_ref'.
  $field_instances['node-project-og_group_ref'] = array(
    'bundle' => 'project',
    'default_value' => NULL,
    'default_value_function' => 'entityreference_prepopulate_field_default_value',
    'deleted' => 0,
    'description' => '<a tabindex="0" class="btn btn-info" role="button" data-toggle="popover" data-trigger="focus" data-original-title="Organizzazione promotrice" data-content="Se appartieni ad una sola organizzazione il sistema la seleziona automaticamente. Altrimenti puoi selezionare una o più tra le tue organizzazioni." data-html="true"><i class="fa fa-question-circle fa-lg"></i> Aiuto</a>',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'featured' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
      'vmode_group_content' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'og_group_ref',
    'label' => 'Organizzazione promotrice',
    'required' => 1,
    'settings' => array(
      'behaviors' => array(
        'og_widget' => array(
          'access_override' => 0,
          'admin' => array(
            'widget_type' => 'entityreference_autocomplete_tags',
          ),
          'default' => array(
            'widget_type' => 'options_buttons',
          ),
          'status' => TRUE,
        ),
        'prepopulate' => array(
          'action' => 'none',
          'action_on_edit' => 0,
          'fallback' => 'none',
          'providers' => array(
            'og_context' => FALSE,
            'url' => 1,
          ),
          'skip_perm' => 'administer permissions',
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
      'weight' => 0,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('<a class="help" title="Agricoltura, Bio, Informazione, Salute... Scegliete i settori su cui questo progetto ha un impatto. Pensate che ne manchi qualcuno? C\'è una discussione nel forum appositamente per questo."><i class="fa fa-question-circle"></i></a>');
  t('<a class="help" title="Avete scelto il settore \'economia solidale\' e volete specificare che il progetto è in particolare sul \'baratto\'? Aggiungete parole chiave per specificare ulteriormente l\'attività. Potete creare nuove parole chiave semplicemente digitandole. Separate le parole con la virgola."><i class="fa fa-question-circle"></i></a>');
  t('<a class="help" title="Descrivete il progetto come preferite. Alcune domande cui spesso è utile rispondere sono Cos\'è? Cosa fa? Ricordate che nella versione breve - quella usata ad esempio nella sezione Esplora la rete - saranno visualizzati i primi 500 caratteri. Perciò cercate di rendere il primo paragrafo significativo."><i class="fa fa-question-circle"></i></a>');
  t('<a class="help" title="Inserite gli indirizzi internet di tutti i social network in cui questo progetto è presente. Questi link vengono visualizzati subito sotto lo slogan, usando le icone specifiche dei social network. Sono supportati facebook, twitter, wiser.org, zoes.it, github, instagram, ma anche wikipedia e tanti altri. Usare il pulsante \'Aggiungi un\'altro elemento\' per inserire più social network."><i class="fa fa-question-circle"></i></a>');
  t('<a class="help" title="Locale, regionale, interregionale, nazionale, globale... Qual\'è l\'ambito o la portata del progetto?"><i class="fa fa-question-circle"></i></a>');
  t('<a class="help" title="Mission, la ragione d\'essere di questo progetto, che cosa il progetto intende fare per il mondo. Un breve testo che possa indicare gli obiettivi e gli intenti del progetto, che possa guidarne le azioni ed essere d\'ispirazione per gli altri."><i class="fa fa-question-circle"></i></a>');
  t('<a class="help" title="Quando è iniziato questo progetto? Le date sono importanti. Ad esempio nella rete potremmo sviluppare l\'asse del tempo e visualizzare le connessioni che si creano nel tempo. Usare il pulsante \'Show end date\' per attivare la data di cessazione attività, se necessario. La data di termine, se inserita, andrà ad applicarsi anche alle collaborazioni al progetto attive."><i class="fa fa-question-circle"></i></a>');
  t('<a class="help" title="Questo campo di testo è visibile soltanto agli utenti membri della vostra organizzazione. È possibile quindi inserire qui dati interni, come testo, immagini e link a file e cartelle condivise (google drive e dropbox)."><i class="fa fa-question-circle"></i></a>');
  t('<a class="help" title="Raccontate la storia di questo progetto."><i class="fa fa-question-circle"></i></a>');
  t('<a class="help" title="Se avete bisogno di specificare altri dettagli per i contatti usate questo campo. Esempi, un contatto skype, gli orari in cui è preferibile telefonare, ecc..."><i class="fa fa-question-circle"></i></a>');
  t('<a class="help" title="Una frase breve che dovrebbe riassumere l\'intero universo di questo progetto. Lo slogan viene sempre visualizzato a fianco del logo."><i class="fa fa-question-circle"></i></a>');
  t('<a class="help" title="Usate la riga 1 per l\'indirizzo ufficiale, come via e civico. Usate la riga 2 per ulteriori dettagli utili ad identificare correttamente il luogo, come ad esempio il numero dell\'interno, oppure presso ... se la sede è presso qualche altra sede..."><i class="fa fa-question-circle"></i></a>');
  t('<a class="help" title="È imprtante chiarire ai visitatori qual\'è il sito internet principale del progetto. Inserite qui l\'indirizzo e assegnate un titolo chiaro, ad esempio \'Sito principale\'. Usate il pulsante \'Aggiungi un altro elemento\' per aggiungere altri indirizzi, ad esempio il blog del progetto. Assegnate anche a questo un titolo chiaro, ad esempio \'Blog\'."><i class="fa fa-question-circle"></i></a>');
  t('<a tabindex="0" class="btn btn-info" role="button" data-toggle="popover" data-trigger="focus" data-original-title="Immagini di copertina" data-content="Personalizza la copertina di questa pagina! Se si scelgono più immagini (max 5), verranno presentante come slideshow." data-html="true"><i class="fa fa-question-circle fa-lg"></i> Aiuto</a>');
  t('<a tabindex="0" class="btn btn-info" role="button" data-toggle="popover" data-trigger="focus" data-original-title="Logo/immagine principale" data-content="Inserire il logo o un\'immagine caratterizzante dell\'evento. Sarà sempre visibile vicino al titolo, in forma quadrata (ideale per il logo) o a coprire tutta la larghezza nel formato tessera." data-html="true"><i class="fa fa-question-circle fa-lg"></i> Aiuto</a>');
  t('<a tabindex="0" class="btn btn-info" role="button" data-toggle="popover" data-trigger="focus" data-original-title="Organizzazione promotrice" data-content="Se appartieni ad una sola organizzazione il sistema la seleziona automaticamente. Altrimenti puoi selezionare una o più tra le tue organizzazioni." data-html="true"><i class="fa fa-question-circle fa-lg"></i> Aiuto</a>');
  t('Altro');
  t('Ambito/portata');
  t('Date');
  t('Descrizione');
  t('Email');
  t('Immagine di copertina');
  t('Indirizzo');
  t('Links');
  t('Logo');
  t('Mission');
  t('Organizzazione promotrice');
  t('Parole chiave');
  t('Segui il progetto su');
  t('Settori');
  t('Slogan');
  t('Spazio privato gruppo');
  t('Storia');
  t('Telefono');

  return $field_instances;
}
