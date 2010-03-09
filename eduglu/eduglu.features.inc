<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function eduglu_context_default_contexts() {
  module_load_include('inc', 'eduglu', 'eduglu.defaults');
  $args = func_get_args();
  return call_user_func_array('_eduglu_context_default_contexts', $args);
}

/**
 * Implementation of hook_ctools_plugin_api().
 */
function eduglu_ctools_plugin_api() {
  module_load_include('inc', 'eduglu', 'eduglu.defaults');
  $args = func_get_args();
  return call_user_func_array('_eduglu_ctools_plugin_api', $args);
}

/**
 * Implementation of hook_strongarm().
 */
function eduglu_strongarm() {
  module_load_include('inc', 'eduglu', 'eduglu.defaults');
  $args = func_get_args();
  return call_user_func_array('_eduglu_strongarm', $args);
}

/**
 * Implementation of hook_views_default_views().
 */
function eduglu_views_default_views() {
  module_load_include('inc', 'eduglu', 'eduglu.features.views');
  $args = func_get_args();
  return call_user_func_array('_eduglu_views_default_views', $args);
}
