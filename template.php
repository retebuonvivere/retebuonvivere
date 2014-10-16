<?php
/*
 *  Preprocess page.tpl.php to inject the $search_box variable.
 */
function rbv_kala_default_preprocess_page(&$variables){
  $search_form = drupal_get_form('search_form');
  $search_box = drupal_render($search_form);
  $variables['search_box'] = $search_box;
}

/*
 *  Form alter to add missing bootstrap classes and tole to search form.
 */
function rbv_kala_default_form_alter(&$form, &$form_state, $form_id) {
  if ($form_id == 'search_form') {
    $form['#attributes'] = array(
      'class'=> array('navbar-form'),
      'role' => array(t('search')),
    );
  }
}

?>
