<?php
/**
 * @file
 * rbv_com_fields.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function rbv_com_fields_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "panelizer" && $api == "panelizer") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function rbv_com_fields_image_default_styles() {
  $styles = array();

  // Exported image style: rbv_image_circle.
  $styles['rbv_image_circle'] = array(
    'label' => 'RBV image circle',
    'effects' => array(
      3 => array(
        'name' => 'manualcrop_auto_reuse',
        'data' => array(
          'style_priority' => array(
            0 => 'panopoly_image_square',
            1 => 'panopoly_image_featured',
            2 => 'panopoly_image_full',
            3 => 'panopoly_image_spotlight',
            4 => 'panopoly_image_thumbnail',
          ),
          'apply_all_effects' => 1,
          'fallback_style' => 'rbv_image_teaser',
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: rbv_image_cover.
  $styles['rbv_image_cover'] = array(
    'label' => 'RBV image cover',
    'effects' => array(
      8 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 480,
          'height' => 300,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: rbv_image_icon.
  $styles['rbv_image_icon'] = array(
    'label' => 'RBV image icon 38x38',
    'effects' => array(
      1 => array(
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
    'label' => 'RBV image teaser 88x88',
    'effects' => array(
      2 => array(
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
