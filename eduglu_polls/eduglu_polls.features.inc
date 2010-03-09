<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function eduglu_polls_context_default_contexts() {
  module_load_include('inc', 'eduglu_polls', 'eduglu_polls.defaults');
  $args = func_get_args();
  return call_user_func_array('_eduglu_polls_context_default_contexts', $args);
}

/**
 * Implementation of hook_ctools_plugin_api().
 */
function eduglu_polls_ctools_plugin_api() {
  module_load_include('inc', 'eduglu_polls', 'eduglu_polls.defaults');
  $args = func_get_args();
  return call_user_func_array('_eduglu_polls_ctools_plugin_api', $args);
}

/**
 * Implementation of hook_menu_default_items().
 */
function eduglu_polls_menu_default_items() {
  module_load_include('inc', 'eduglu_polls', 'eduglu_polls.defaults');
  $args = func_get_args();
  return call_user_func_array('_eduglu_polls_menu_default_items', $args);
}

/**
 * Implementation of hook_strongarm().
 */
function eduglu_polls_strongarm() {
  module_load_include('inc', 'eduglu_polls', 'eduglu_polls.defaults');
  $args = func_get_args();
  return call_user_func_array('_eduglu_polls_strongarm', $args);
}

/**
 * Implementation of hook_views_default_views().
 */
function eduglu_polls_views_default_views() {
  module_load_include('inc', 'eduglu_polls', 'eduglu_polls.features.views');
  $args = func_get_args();
  return call_user_func_array('_eduglu_polls_views_default_views', $args);
}
