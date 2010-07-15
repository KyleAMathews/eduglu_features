<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function eduglu_welcome_context_default_contexts() {
  module_load_include('inc', 'eduglu_welcome', 'eduglu_welcome.defaults');
  $args = func_get_args();
  return call_user_func_array('_eduglu_welcome_context_default_contexts', $args);
}

/**
 * Implementation of hook_ctools_plugin_api().
 */
function eduglu_welcome_ctools_plugin_api() {
  module_load_include('inc', 'eduglu_welcome', 'eduglu_welcome.defaults');
  $args = func_get_args();
  return call_user_func_array('_eduglu_welcome_ctools_plugin_api', $args);
}

/**
 * Implementation of hook_menu_default_items().
 */
function eduglu_welcome_menu_default_items() {
  module_load_include('inc', 'eduglu_welcome', 'eduglu_welcome.defaults');
  $args = func_get_args();
  return call_user_func_array('_eduglu_welcome_menu_default_items', $args);
}
