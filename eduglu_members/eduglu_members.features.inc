<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function eduglu_members_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => 3);
  }
  elseif ($module == "spaces" && $api == "spaces") {
    return array("version" => 3);
  }
  elseif ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_imagecache_default_presets().
 */
function eduglu_members_imagecache_default_presets() {
  $items = array(
    '25x25_crop' => array(
      'presetname' => '25x25_crop',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale_and_crop',
          'data' => array(
            'width' => '25',
            'height' => '25',
          ),
        ),
        '1' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale_and_crop',
          'data' => array(
            'width' => '25',
            'height' => '25',
          ),
        ),
        '2' => array(
          'weight' => '0',
          'module' => 'smartcrop',
          'action' => 'smartcrop_scale_and_crop',
          'data' => array(
            'width' => '25',
            'height' => '25',
            'upscale' => 0,
          ),
        ),
      ),
    ),
    '30x30_crop' => array(
      'presetname' => '30x30_crop',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'smartcrop',
          'action' => 'smartcrop_scale_and_crop',
          'data' => array(
            'width' => '30',
            'height' => '30',
            'upscale' => 0,
          ),
        ),
      ),
    ),
    'user_image_default' => array(
      'presetname' => 'user_image_default',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'smartcrop',
          'action' => 'smartcrop_scale_and_crop',
          'data' => array(
            'width' => '50',
            'height' => '50',
            'upscale' => 0,
          ),
        ),
      ),
    ),
    'user_image_large' => array(
      'presetname' => 'user_image_large',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'smartcrop',
          'action' => 'smartcrop_scale_and_crop',
          'data' => array(
            'width' => '200',
            'height' => '200',
            'upscale' => 0,
          ),
        ),
      ),
    ),
  );
  return $items;
}

/**
 * Implementation of hook_node_info().
 */
function eduglu_members_node_info() {
  $items = array(
    'uprofile' => array(
      'name' => t('User Profile'),
      'module' => 'features',
      'description' => t('Holds the data for a user\'s profile. Needs to be attached to the user via Bio or Nodeprofile.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function eduglu_members_views_api() {
  return array(
    'api' => '2',
  );
}
