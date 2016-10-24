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

  // Exported field_instance:
  // 'field_collection_item-field_membership_period-field_com_date'.
  $field_instances['field_collection_item-field_membership_period-field_com_date'] = array(
    'bundle' => 'field_membership_period',
    'deleted' => 0,
    'description' => 'Quando è iniziata (ed eventualmente terminata) la collaborazione di questa persona all\'organizzazione?',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'short',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
        ),
        'type' => 'date_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_com_date',
    'label' => 'Date',
    'required' => 0,
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
        'display_all_day' => 0,
        'increment' => 15,
        'input_format' => 'M j Y - g:i:sa',
        'input_format_custom' => '',
        'label_position' => 'above',
        'text_parts' => array(),
        'year_range' => '-50:+50',
      ),
      'type' => 'date_popup',
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_membership_period-field_com_description'.
  $field_instances['field_collection_item-field_membership_period-field_com_description'] = array(
    'bundle' => 'field_membership_period',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'field_collection_item',
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
        'rows' => 16,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 5,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_membership_period-field_membership_role'.
  $field_instances['field_collection_item-field_membership_period-field_membership_role'] = array(
    'bundle' => 'field_membership_period',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Ruolo ricoperto dalla persona in questo periodo',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_membership_role',
    'label' => 'Ruolo',
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
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-org-field_com_categories'.
  $field_instances['node-org-field_com_categories'] = array(
    'bundle' => 'org',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '<a class="help" title="Agricoltura, Bio, Informazione, Salute... Scegliete i settori su cui la vostra organizzazione si concentra. Pensate che ne manchi qualcuno? C\'è una discussione nel forum appositamente per questo."><i class="fa fa-question-circle"></i></a>',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 5,
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
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'node-org-field_com_cover'.
  $field_instances['node-org-field_com_cover'] = array(
    'bundle' => 'org',
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
        'weight' => 2,
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
      'max_filesize' => '1.5 MB',
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
          'media_internet' => 'media_internet',
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
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-org-field_com_date'.
  $field_instances['node-org-field_com_date'] = array(
    'bundle' => 'org',
    'deleted' => 0,
    'description' => '<a class="help" title="Quando è stata fondata la vostra organizzzione? Le date sono importanti. Ad esempio nella rete potremmo sviluppare l\'asse del tempo e visualizzare le connessioni che si creano nel tempo. Usare il pulsante \'Show end date\' per attivare la data di cessazione attività, se necessario."><i class="fa fa-question-circle"></i></a>',
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
    'field_name' => 'field_com_date',
    'label' => 'Date',
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
        'input_format' => 'd/m/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'text_parts' => array(),
        'year_range' => '1800:+0',
      ),
      'type' => 'date_popup',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'node-org-field_com_description'.
  $field_instances['node-org-field_com_description'] = array(
    'bundle' => 'org',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '<a class="help" title="Descrivete la vostra organizzazione come preferite. Alcune domande cui spesso è utile rispondere sono Cos\'è? Cosa fa? Ricordate che nella versione breve - quella usata ad esempio nella sezione Esplora la rete - saranno visualizzati i primi 500 caratteri. Perciò cercate di rendere il primo paragrafo significativo."><i class="fa fa-question-circle"></i></a>',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'jquery_expander',
        'settings' => array(
          'collapseTimer' => '',
          'expandPrefix' => '...',
          'expandText' => 'Espandi »',
          'slicePoint' => 2300,
          'userCollapsePrefix' => '',
          'userCollapseText' => '« Riduci',
        ),
        'type' => 'jquery_expander',
        'weight' => 7,
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
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
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
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'node-org-field_com_email'.
  $field_instances['node-org-field_com_email'] = array(
    'bundle' => 'org',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'email',
        'settings' => array(),
        'type' => 'email_default',
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
        'weight' => 14,
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
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-org-field_com_history'.
  $field_instances['node-org-field_com_history'] = array(
    'bundle' => 'org',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '<a class="help" title="Le organizzazioni hanno sempre una storia, e spesso è molto interessante. Condividiamo le nostre storie."><i class="fa fa-question-circle"></i></a>',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'jquery_expander',
        'settings' => array(
          'collapseTimer' => '',
          'expandPrefix' => '...',
          'expandText' => 'Espandi »',
          'slicePoint' => 1800,
          'userCollapsePrefix' => '',
          'userCollapseText' => '« Riduci',
        ),
        'type' => 'jquery_expander',
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
        'weight' => 12,
      ),
      'vmode_group_content' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 11,
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
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'node-org-field_com_ln_fb'.
  $field_instances['node-org-field_com_ln_fb'] = array(
    'bundle' => 'org',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '<a tabindex="0" class="btn btn-info" role="button" data-toggle="popover" data-trigger="focus" data-original-title="Pagina facebook" data-content="Inserisci qui l\'indirizzo url completo (\'http...\') della \'pagina facebook\' di [current-page:title]. Ricorda che le \'pagine facebook\' sono speciali tipi di contenuti, adatti alle organizzazioni. Se la tua  organizzazione utilizza un \'profilo personale\' o un \'gruppo\' facebook, non inserirli qui, ma nel campo Links in fondo alla pagina." data-html="true"><i class="fa fa-question-circle fa-lg"></i> Aiuto</a>',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
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
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_com_ln_fb',
    'label' => 'Pagina facebook',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 1,
      'attributes' => array(
        'class' => '',
        'configurable_class' => 0,
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 0,
      'linkit' => array(
        'button_text' => 'Cerca',
        'enable' => 0,
        'profile' => '',
      ),
      'rel_remove' => 'default',
      'title' => 'value',
      'title_label_use_field_label' => 0,
      'title_maxlength' => 128,
      'title_value' => '<i class="fa fa-facebook-square fa-3x"></i>',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 41,
    ),
  );

  // Exported field_instance: 'node-org-field_com_location'.
  $field_instances['node-org-field_com_location'] = array(
    'bundle' => 'org',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '<a class="help" title="È importante che il vostro indirizzo sia scritto esattamente come lo dovrebbe scrivere qualcuno per inviarvi un pacco postale. Usate la riga 1 per l\'indirizzo ufficiale, come via e numero civico. Usate la riga 2 per ulteriori dettagli utili ad identificare correttamente il luogo, come ad esempio il numero dell\'interno, oppure presso ... se la vostra sede è presso qualche altra sede..."><i class="fa fa-question-circle"></i></a>',
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
        'weight' => 10,
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
        'weight' => 9,
      ),
      'vmode_group_content' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 12,
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
          'address-hide-postal-code' => 0,
          'address-hide-street' => 0,
          'address-hide-country' => 0,
          'organisation' => 0,
          'name-full' => 0,
          'name-oneline' => 0,
          'address-optional' => 0,
        ),
      ),
      'type' => 'addressfield_standard',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-org-field_com_logo'.
  $field_instances['node-org-field_com_logo'] = array(
    'bundle' => 'org',
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
        'weight' => 1,
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
      'default_image' => 415,
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
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-org-field_com_mission'.
  $field_instances['node-org-field_com_mission'] = array(
    'bundle' => 'org',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '<a class="help" title="Mission, la ragione d\'essere dell\'organizzazione, che cosa questa organizzazione intende fare per il mondo. Un breve testo che possa indicare gli obiettivi e gli intenti dell\'organizzazione, che possa guidarne le azioni ed essere d\'ispirazione per gli altri."><i class="fa fa-question-circle"></i></a>',
    'display' => array(
      'default' => array(
        'label' => 'above',
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
        'weight' => 8,
      ),
      'vmode_group_content' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
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
      'weight' => 13,
    ),
  );

  // Exported field_instance: 'node-org-field_com_more'.
  $field_instances['node-org-field_com_more'] = array(
    'bundle' => 'org',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '<a class="help" title="Se avete bisogno di specificare altri dettagli per i contatti usate questo campo. Esempi, il vostro contatto skype, gli orari in cui è preferibile telefonare, ecc..."><i class="fa fa-question-circle"></i></a>',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
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
        'weight' => 5,
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
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-org-field_com_tagline'.
  $field_instances['node-org-field_com_tagline'] = array(
    'bundle' => 'org',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '<a class="help" title="Una frase breve che dovrebbe riassumere l\'intero universo dell\'organizzazione. Lo slogan viene sempre visualizzato a fianco del logo."><i class="fa fa-question-circle"></i></a>',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
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
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-org-field_com_tags'.
  $field_instances['node-org-field_com_tags'] = array(
    'bundle' => 'org',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '<a class="help" title="Avete scelto il settore \'bio\' e volete specificare che voi fate \'biodinamico\'? Aggiungete parole chiave per specificare ulteriormente la vostra attività. Potete creare nuove parole chiave semplicemente digitandole. Separate le parole con la virgola."><i class="fa fa-question-circle"></i></a>',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
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
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'node-org-field_com_telephone'.
  $field_instances['node-org-field_com_telephone'] = array(
    'bundle' => 'org',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_plain',
        'weight' => 12,
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
        'weight' => 15,
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

  // Exported field_instance: 'node-org-field_org_type'.
  $field_instances['node-org-field_org_type'] = array(
    'bundle' => 'org',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '<a class="help" title="Associazione, comitato, cooperativa mutualistica, cooperativa sociale, fondazione, gruppo di acquisto solidale, impresa sociale, impresa unipersonale, società di capitale... Selezionate il vostro caso. Manca una tipologia? Aprite una discussione nel forum"><i class="fa fa-question-circle"></i></a>',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 4,
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
        'weight' => 7,
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
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'node-org-field_quick_links_links'.
  $field_instances['node-org-field_quick_links_links'] = array(
    'bundle' => 'org',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '<a class="help" title="È imprtante chiarire ai visitatori qual\'è il sito internet principale della vostra organizzazione. Inserite qui l\'indirizzo e assegnate un titolo chiaro, ad esempio \'Sito principale\'. Spesso le organizzazioni hanno anche un blog, che usano per diffondere le notizie. Se questo è il vostro caso potete usare il pulsante \'Aggiungi un altro elemento\' per aggiungere l\'indirizzo del blog della vostra organizzazione. Assegnate anche a questo un titolo chiaro, ad esempio \'Blog\'."><i class="fa fa-question-circle"></i></a>',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_separate',
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
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'node-org-group_group'.
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
        'settings' => array(),
        'type' => 'hidden',
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
        'weight' => 13,
      ),
      'vmode_group_content' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
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

  // Exported field_instance:
  // 'og_membership-rbv_membership_default-field_membership_period'.
  $field_instances['og_membership-rbv_membership_default-field_membership_period'] = array(
    'bundle' => 'rbv_membership_default',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'field_collection',
        'settings' => array(
          'add' => 'Add',
          'delete' => 'Delete',
          'description' => 1,
          'edit' => 'Edit',
          'view_mode' => 'full',
        ),
        'type' => 'field_collection_view',
        'weight' => 7,
      ),
    ),
    'entity_type' => 'og_membership',
    'field_name' => 'field_membership_period',
    'label' => 'Periodo',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'field_collection',
      'settings' => array(),
      'type' => 'field_collection_embed',
      'weight' => 8,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('<a class="help" title="Agricoltura, Bio, Informazione, Salute... Scegliete i settori su cui la vostra organizzazione si concentra. Pensate che ne manchi qualcuno? C\'è una discussione nel forum appositamente per questo."><i class="fa fa-question-circle"></i></a>');
  t('<a class="help" title="Associazione, comitato, cooperativa mutualistica, cooperativa sociale, fondazione, gruppo di acquisto solidale, impresa sociale, impresa unipersonale, società di capitale... Selezionate il vostro caso. Manca una tipologia? Aprite una discussione nel forum"><i class="fa fa-question-circle"></i></a>');
  t('<a class="help" title="Avete scelto il settore \'bio\' e volete specificare che voi fate \'biodinamico\'? Aggiungete parole chiave per specificare ulteriormente la vostra attività. Potete creare nuove parole chiave semplicemente digitandole. Separate le parole con la virgola."><i class="fa fa-question-circle"></i></a>');
  t('<a class="help" title="Descrivete la vostra organizzazione come preferite. Alcune domande cui spesso è utile rispondere sono Cos\'è? Cosa fa? Ricordate che nella versione breve - quella usata ad esempio nella sezione Esplora la rete - saranno visualizzati i primi 500 caratteri. Perciò cercate di rendere il primo paragrafo significativo."><i class="fa fa-question-circle"></i></a>');
  t('<a class="help" title="Le organizzazioni hanno sempre una storia, e spesso è molto interessante. Condividiamo le nostre storie."><i class="fa fa-question-circle"></i></a>');
  t('<a class="help" title="Mission, la ragione d\'essere dell\'organizzazione, che cosa questa organizzazione intende fare per il mondo. Un breve testo che possa indicare gli obiettivi e gli intenti dell\'organizzazione, che possa guidarne le azioni ed essere d\'ispirazione per gli altri."><i class="fa fa-question-circle"></i></a>');
  t('<a class="help" title="Quando è stata fondata la vostra organizzzione? Le date sono importanti. Ad esempio nella rete potremmo sviluppare l\'asse del tempo e visualizzare le connessioni che si creano nel tempo. Usare il pulsante \'Show end date\' per attivare la data di cessazione attività, se necessario."><i class="fa fa-question-circle"></i></a>');
  t('<a class="help" title="Se avete bisogno di specificare altri dettagli per i contatti usate questo campo. Esempi, il vostro contatto skype, gli orari in cui è preferibile telefonare, ecc..."><i class="fa fa-question-circle"></i></a>');
  t('<a class="help" title="Una frase breve che dovrebbe riassumere l\'intero universo dell\'organizzazione. Lo slogan viene sempre visualizzato a fianco del logo."><i class="fa fa-question-circle"></i></a>');
  t('<a class="help" title="È importante che il vostro indirizzo sia scritto esattamente come lo dovrebbe scrivere qualcuno per inviarvi un pacco postale. Usate la riga 1 per l\'indirizzo ufficiale, come via e numero civico. Usate la riga 2 per ulteriori dettagli utili ad identificare correttamente il luogo, come ad esempio il numero dell\'interno, oppure presso ... se la vostra sede è presso qualche altra sede..."><i class="fa fa-question-circle"></i></a>');
  t('<a class="help" title="È imprtante chiarire ai visitatori qual\'è il sito internet principale della vostra organizzazione. Inserite qui l\'indirizzo e assegnate un titolo chiaro, ad esempio \'Sito principale\'. Spesso le organizzazioni hanno anche un blog, che usano per diffondere le notizie. Se questo è il vostro caso potete usare il pulsante \'Aggiungi un altro elemento\' per aggiungere l\'indirizzo del blog della vostra organizzazione. Assegnate anche a questo un titolo chiaro, ad esempio \'Blog\'."><i class="fa fa-question-circle"></i></a>');
  t('<a tabindex="0" class="btn btn-info" role="button" data-toggle="popover" data-trigger="focus" data-original-title="Immagini di copertina" data-content="Personalizza la copertina di questa pagina! Se si scelgono più immagini (max 5), verranno presentante come slideshow." data-html="true"><i class="fa fa-question-circle fa-lg"></i> Aiuto</a>');
  t('<a tabindex="0" class="btn btn-info" role="button" data-toggle="popover" data-trigger="focus" data-original-title="Logo/immagine principale" data-content="Inserire il logo o un\'immagine caratterizzante dell\'evento. Sarà sempre visibile vicino al titolo, in forma quadrata (ideale per il logo) o a coprire tutta la larghezza nel formato tessera." data-html="true"><i class="fa fa-question-circle fa-lg"></i> Aiuto</a>');
  t('<a tabindex="0" class="btn btn-info" role="button" data-toggle="popover" data-trigger="focus" data-original-title="Pagina facebook" data-content="Inserisci qui l\'indirizzo url completo (\'http...\') della \'pagina facebook\' di [current-page:title]. Ricorda che le \'pagine facebook\' sono speciali tipi di contenuti, adatti alle organizzazioni. Se la tua  organizzazione utilizza un \'profilo personale\' o un \'gruppo\' facebook, non inserirli qui, ma nel campo Links in fondo alla pagina." data-html="true"><i class="fa fa-question-circle fa-lg"></i> Aiuto</a>');
  t('Altro');
  t('Date');
  t('Descrizione');
  t('Determine if this is an OG group.');
  t('Email');
  t('Group');
  t('Immagine di copertina');
  t('Indirizzo');
  t('Links');
  t('Logo');
  t('Mission');
  t('Pagina facebook');
  t('Parole chiave');
  t('Periodo');
  t('Quando è iniziata (ed eventualmente terminata) la collaborazione di questa persona all\'organizzazione?');
  t('Ruolo');
  t('Ruolo ricoperto dalla persona in questo periodo');
  t('Settori');
  t('Slogan');
  t('Storia');
  t('Telefono');
  t('Tipologia');

  return $field_instances;
}
