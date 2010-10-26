<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function eduglu_core_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_imagecache_default_presets().
 */
function eduglu_core_imagecache_default_presets() {
  $items = array(
    '20x20_crop' => array(
      'presetname' => '20x20_crop',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'smartcrop',
          'action' => 'smartcrop_scale_and_crop',
          'data' => array(
            'width' => '20px',
            'height' => '20px',
            'upscale' => 0,
          ),
        ),
      ),
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function eduglu_core_views_api() {
  return array(
    'api' => '2',
  );
}
