<?php
/**
 * @file
 * rbv_com_fields.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function rbv_com_fields_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function rbv_com_fields_image_default_styles() {
  $styles = array();

  // Exported image style: rbv_image_icon.
  $styles['rbv_image_icon'] = array(
    'name' => 'rbv_image_icon',
    'label' => 'RBV image icon 38x38',
    'effects' => array(
      1 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 38,
          'height' => 38,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: rbv_image_teaser.
  $styles['rbv_image_teaser'] = array(
    'name' => 'rbv_image_teaser',
    'label' => 'RBV image teaser 88x88',
    'effects' => array(
      2 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 88,
          'height' => 88,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
