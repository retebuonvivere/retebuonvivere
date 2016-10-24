<?php
/**
 * @file
 * rbv_relpro.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function rbv_relpro_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-collaboration-field_com_date'.
  $field_instances['node-collaboration-field_com_date'] = array(
    'bundle' => 'collaboration',
    'deleted' => 0,
    'description' => '<a class="help" title="Quando è stata iniziata questa collaborazione? Le date sono importanti. Ad esempio nella rete potremmo sviluppare l\'asse del tempo e visualizzare le connessioni che si creano nel tempo. Se la data di inizio non viene indicata, il sistema selezionerà la data di oggi. Quando sarà il momento, usate il pulsante \'Show end date\' per indicare che la collaborazione è terminata."><i class="fa fa-question-circle"></i></a>',
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
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'vmode_group_content' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
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
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'node-collaboration-field_com_description'.
  $field_instances['node-collaboration-field_com_description'] = array(
    'bundle' => 'collaboration',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '<a class="help" title="Descrivete questa collaborazione come preferite."><i class="fa fa-question-circle"></i></a>',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
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
        'weight' => 3,
      ),
      'vmode_group_content' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_com_description',
    'label' => 'Descrizione della collaborazione',
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
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'node-collaboration-field_rel_categories'.
  $field_instances['node-collaboration-field_rel_categories'] = array(
    'bundle' => 'collaboration',
    'default_value' => array(
      0 => array(
        'tid' => 28,
      ),
    ),
    'deleted' => 0,
    'description' => '<a class="help" title="Scegliere il tipo di collaborazione, ad esempio il ruolo che l\'organizzazione svolge in questo progetto/attività. Pensate che ne manchi qualcuno? C\'è una discussione nel forum appositamente per questo."><i class="fa fa-question-circle"></i></a>',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
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
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 1,
      ),
      'vmode_group_content' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_rel_categories',
    'label' => 'Tipo di collaborazione',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-collaboration-field_rel_source'.
  $field_instances['node-collaboration-field_rel_source'] = array(
    'bundle' => 'collaboration',
    'default_value' => NULL,
    'default_value_function' => 'entityreference_prepopulate_field_default_value',
    'deleted' => 0,
    'description' => '<a class="help" title="Qual è il soggetto della collaborazione?"><i class="fa fa-hand-o-down"></i></a>
<p class="alert alert-info">Qual è il soggetto della collaborazione?<br><br>
<i class="fa fa-circle"></i> <strong>La vostra organizzazione</strong> (situazione predefinita).<br><br>
<i class="fa fa-circle"></i> Potete anche indicare <strong>un\'organizzazione diversa</strong>. In questo caso la relazione (e i permessi di modifica) verranno attribuiti all\'organizzazione indicata.<br><br>
<i class="fa fa-circle"></i> Inoltre potete indicare <strong>un\'organizzazione non ancora presente in retebuonvivere.org</strong>. In questo caso, non appena l\'organizzazione indicata entrerà in retebuonvivere.org, questa collaborazione le verrà attribuita.</p>',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'links' => 0,
          'view_mode' => 'vmode_group_content',
        ),
        'type' => 'entityreference_entity_view',
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
        'module' => 'entityreference',
        'settings' => array(
          'link' => 1,
        ),
        'type' => 'entityreference_label',
        'weight' => 0,
      ),
      'vmode_group_content' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'links' => 1,
          'view_mode' => 'vmode_group_content',
        ),
        'type' => 'entityreference_entity_view',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_rel_source',
    'label' => 'Soggetto',
    'required' => 1,
    'settings' => array(
      'behaviors' => array(
        'prepopulate' => array(
          'action' => 'none',
          'action_on_edit' => 0,
          'fallback' => 'none',
          'providers' => array(
            'og_context' => FALSE,
            'url' => 1,
          ),
          'skip_perm' => 0,
          'status' => 1,
        ),
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'entityreference_autocreate' => array(
          'active' => 1,
          'author' => '',
          'author_current_user' => 0,
        ),
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-collaboration-field_relpro_project'.
  $field_instances['node-collaboration-field_relpro_project'] = array(
    'bundle' => 'collaboration',
    'default_value' => NULL,
    'default_value_function' => 'entityreference_prepopulate_field_default_value',
    'deleted' => 0,
    'description' => '<a class="help" title="Qual è il progetto a cui l\'organizzazione indicata collabora?"><i class="fa fa-hand-o-down"></i></a>
<p class="alert alert-info">Qual è il progetto a cui l\'organizzazione indicata collabora?<br><br> Nella <i class="fa fa-eye"></i> rete delle collaborazioni verrà disegnato un legame tra organizzazione e progetto. Nella <i class="fa fa-eye"></i> rete delle relazioni verrà disegnato un legame tra le organizzazioni che collaborano a questo progetto.</p>',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'links' => 0,
          'view_mode' => 'vmode_group_content',
        ),
        'type' => 'entityreference_entity_view',
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
        'module' => 'entityreference',
        'settings' => array(
          'link' => 1,
        ),
        'type' => 'entityreference_label',
        'weight' => 2,
      ),
      'vmode_group_content' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'links' => 1,
          'view_mode' => 'vmode_group_content',
        ),
        'type' => 'entityreference_entity_view',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_relpro_project',
    'label' => 'Progetto',
    'required' => 1,
    'settings' => array(
      'behaviors' => array(
        'prepopulate' => array(
          'action' => 'none',
          'action_on_edit' => 0,
          'fallback' => 'none',
          'providers' => array(
            'og_context' => FALSE,
            'url' => 1,
          ),
          'skip_perm' => 0,
          'status' => 1,
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
          'author_current_user' => 0,
        ),
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-collaboration-og_group_ref'.
  $field_instances['node-collaboration-og_group_ref'] = array(
    'bundle' => 'collaboration',
    'default_value' => NULL,
    'default_value_function' => 'entityreference_prepopulate_field_default_value',
    'deleted' => 0,
    'description' => '<a tabindex="0" class="btn btn-info" role="button" data-toggle="popover" data-trigger="focus" data-original-title="Organizzazione promotrice" data-content="Se appartieni ad una sola organizzazione il sistema la seleziona automaticamente. Altrimenti puoi selezionare una o più tra le tue organizzazioni." data-html="true"><i class="fa fa-question-circle fa-lg"></i> Aiuto</a>',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
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
        'weight' => 5,
      ),
      'vmode_group_content' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'og_group_ref',
    'label' => 'Organizzazione promotrice',
    'required' => 0,
    'settings' => array(
      'behaviors' => array(
        'og_widget' => array(
          'admin' => array(
            'widget_type' => 'entityreference_autocomplete_tags',
          ),
          'default' => array(
            'widget_type' => 'options_buttons',
          ),
          'status' => TRUE,
        ),
        'prepopulate' => array(
          'action' => 'hide',
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
      'weight' => 2,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('<a class="help" title="Descrivete questa collaborazione come preferite."><i class="fa fa-question-circle"></i></a>');
  t('<a class="help" title="Qual è il progetto a cui l\'organizzazione indicata collabora?"><i class="fa fa-hand-o-down"></i></a>
<p class="alert alert-info">Qual è il progetto a cui l\'organizzazione indicata collabora?<br><br> Nella <i class="fa fa-eye"></i> rete delle collaborazioni verrà disegnato un legame tra organizzazione e progetto. Nella <i class="fa fa-eye"></i> rete delle relazioni verrà disegnato un legame tra le organizzazioni che collaborano a questo progetto.</p>');
  t('<a class="help" title="Qual è il soggetto della collaborazione?"><i class="fa fa-hand-o-down"></i></a>
<p class="alert alert-info">Qual è il soggetto della collaborazione?<br><br>
<i class="fa fa-circle"></i> <strong>La vostra organizzazione</strong> (situazione predefinita).<br><br>
<i class="fa fa-circle"></i> Potete anche indicare <strong>un\'organizzazione diversa</strong>. In questo caso la relazione (e i permessi di modifica) verranno attribuiti all\'organizzazione indicata.<br><br>
<i class="fa fa-circle"></i> Inoltre potete indicare <strong>un\'organizzazione non ancora presente in retebuonvivere.org</strong>. In questo caso, non appena l\'organizzazione indicata entrerà in retebuonvivere.org, questa collaborazione le verrà attribuita.</p>');
  t('<a class="help" title="Quando è stata iniziata questa collaborazione? Le date sono importanti. Ad esempio nella rete potremmo sviluppare l\'asse del tempo e visualizzare le connessioni che si creano nel tempo. Se la data di inizio non viene indicata, il sistema selezionerà la data di oggi. Quando sarà il momento, usate il pulsante \'Show end date\' per indicare che la collaborazione è terminata."><i class="fa fa-question-circle"></i></a>');
  t('<a class="help" title="Scegliere il tipo di collaborazione, ad esempio il ruolo che l\'organizzazione svolge in questo progetto/attività. Pensate che ne manchi qualcuno? C\'è una discussione nel forum appositamente per questo."><i class="fa fa-question-circle"></i></a>');
  t('<a tabindex="0" class="btn btn-info" role="button" data-toggle="popover" data-trigger="focus" data-original-title="Organizzazione promotrice" data-content="Se appartieni ad una sola organizzazione il sistema la seleziona automaticamente. Altrimenti puoi selezionare una o più tra le tue organizzazioni." data-html="true"><i class="fa fa-question-circle fa-lg"></i> Aiuto</a>');
  t('Date');
  t('Descrizione della collaborazione');
  t('Organizzazione promotrice');
  t('Progetto');
  t('Soggetto');
  t('Tipo di collaborazione');

  return $field_instances;
}
