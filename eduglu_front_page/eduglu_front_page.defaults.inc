<?php

/**
 * Helper to implementation of hook_context_default_contexts().
 */
function _eduglu_front_page_context_default_contexts() {
  $items = array();

  $items[] = array(
    'namespace' => 'context_ui',
    'attribute' => 'section',
    'value' => 'frontpage',
    'description' => 'Controls the front page',
    'path' => array(
      'frontpage' => 'frontpage',
      '<front>' => '<front>',
    ),
    'theme_regiontoggle' => array(
      '0' => 'left',
    ),
    'block' => array(),
  );
  return $items;
}

/**
 * Helper to implementation of hook_ctools_plugin_api().
 */
function _eduglu_front_page_ctools_plugin_api() {
  $args = func_get_args();
  $module = array_shift($args);
  $api = array_shift($args);
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Helper to implementation of hook_strongarm().
 */
function _eduglu_front_page_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_frontpage';
  $strongarm->value = 'frontpage';

  $export['site_frontpage'] = $strongarm;
  return $export;
}
