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
 * Implementation of hook_flag_default_flags().
 */
function eduglu_core_flag_default_flags() {
$flags = array();
// Exported flag: "Follow Node".
$flags[] = array (
  'content_type' => 'node',
  'name' => 'follow_node',
  'title' => 'Follow Node',
  'global' => '0',
  'types' => 
  array (
    0 => 'poll',
    1 => 'note',
    2 => 'job_form',
    3 => 'event_cck',
    4 => 'story',
  ),
  'flag_short' => 'Follow thread',
  'flag_long' => 'Follow this thread',
  'flag_message' => '',
  'unflag_short' => 'Unfollow thread',
  'unflag_long' => 'Stop following this thread',
  'unflag_message' => '',
  'unflag_denied_text' => '',
  'link_type' => 'toggle',
  'roles' => 
  array (
    'flag' => 
    array (
      0 => 2,
      1 => 3,
    ),
    'unflag' => 
    array (
      0 => 2,
      1 => 3,
    ),
  ),
  'show_on_page' => 0,
  'show_on_teaser' => 0,
  'show_on_form' => 0,
  'access_author' => '',
  'i18n' => 0,
  'module' => 'eduglu_core',
  'api_version' => 2,
  'locked' => 
  array (
    0 => 'name',
  ),
);
return $flags;
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
    'Large' => array(
      'presetname' => 'Large',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '580',
            'height' => '',
            'upscale' => 1,
          ),
        ),
      ),
    ),
    'Medium' => array(
      'presetname' => 'Medium',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '290',
            'height' => '',
            'upscale' => 1,
          ),
        ),
      ),
    ),
    'Small' => array(
      'presetname' => 'Small',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '145',
            'height' => '',
            'upscale' => 1,
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
