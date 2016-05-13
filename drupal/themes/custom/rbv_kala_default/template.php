<?php
/*
 *  Add js to add bootstrap tooltip-popover opt-in.
 */
function rbv_kala_default_preprocess_html(&$variables) {
  $options = array(
    'group' => JS_THEME,
  );
  drupal_add_js(drupal_get_path('theme', 'rbv_kala_default'). '/scripts/bootstrap-optin.js', $options);
}

/*
 *  Preprocess page.tpl.php to inject the $search_box variable.
 */
function rbv_kala_default_preprocess_page(&$variables){
  $search_form = drupal_get_form('search_form');
  $search_box = drupal_render($search_form);
  $variables['search_box'] = $search_box;
}

/*
 *  Form alter to add missing bootstrap classes and role to search form.
 */
function rbv_kala_default_form_alter(&$form, &$form_state, $form_id) {
  if ($form_id == 'search_form') {
    $form['#attributes'] = array(
      'class'=> array('navbar-form'),
      'role' => array(t('search')),
    );
  }
}

/*
 *  Overriding theme_button to tune classes
 */

function rbv_kala_default_button($variables) {
  $element = $variables['element'];
  $element['#attributes']['type'] = 'submit';
  element_set_attributes($element, array('id', 'name', 'value'));

  $element['#attributes']['class'][] = 'form-' . $element['#button_type'];
  $element['#attributes']['class'][] = 'btn';
  $element['#attributes']['class'][] = 'btn-default';
  if (!empty($element['#attributes']['disabled'])) {
    $element['#attributes']['class'][] = 'form-button-disabled';
  }

  if (isset($element['#parents']) && ($element['#parents'][0] == 'submit')) {
    $element['#attributes']['class'][] = 'btn-primary';
  }

  if ((isset($element['#id']) && $element['#id'] == 'edit-delete') || $element['#attributes']['value'] == 'Elimina') {
    $element['#attributes']['class'][] = 'btn-danger';
  }

  return '<input' . drupal_attributes($element['#attributes']) . ' />';;
}


/*
 *	Theming facebook fboauth login button
 */

function rbv_kala_default_fboauth_action__connect($variables) {
  $action = $variables['action'];
  $link = $variables['properties'];
  $url = url($link['href'], array('query' => $link['query']));
  $link['attributes']['class'][] = 'facebook-action-connect btn btn-primary';
  $link['attributes']['rel'] = 'nofollow';
  $attributes = isset($link['attributes']) ? drupal_attributes($link['attributes']) : '';
  $title = isset($link['title']) ? check_plain($link['title']) : '';
  $src = ($GLOBALS['is_https'] ? 'https' : 'http') . '://www.facebook.com/images/fbconnect/login-buttons/connect_light_medium_short.gif';
  return '<a ' . $attributes . ' href="' . $url . '"><i class="fa fa-facebook"></i>  Connettiti con facebook</a>';
}

/*
 *  Preprocess image style to add boostrap classes.
 */
function rbv_kala_default_preprocess_image_style(&$vars) {
     if($vars['style_name'] == 'rbv_image_circle'){
        $vars['attributes']['class'][] = 'img-responsive img-circle';
        }
}
