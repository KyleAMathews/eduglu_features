<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function eduglu_front_page_context_default_contexts() {
  module_load_include('inc', 'eduglu_front_page', 'eduglu_front_page.defaults');
  $args = func_get_args();
  return call_user_func_array('_eduglu_front_page_context_default_contexts', $args);
}

/**
 * Implementation of hook_ctools_plugin_api().
 */
function eduglu_front_page_ctools_plugin_api() {
  module_load_include('inc', 'eduglu_front_page', 'eduglu_front_page.defaults');
  $args = func_get_args();
  return call_user_func_array('_eduglu_front_page_ctools_plugin_api', $args);
}

/**
 * Implementation of hook_strongarm().
 */
function eduglu_front_page_strongarm() {
  module_load_include('inc', 'eduglu_front_page', 'eduglu_front_page.defaults');
  $args = func_get_args();
  return call_user_func_array('_eduglu_front_page_strongarm', $args);
}

/**
 * Implementation of hook_views_default_views().
 */
function eduglu_front_page_views_default_views() {
  module_load_include('inc', 'eduglu_front_page', 'eduglu_front_page.features.views');
  $args = func_get_args();
  return call_user_func_array('_eduglu_front_page_views_default_views', $args);
}
