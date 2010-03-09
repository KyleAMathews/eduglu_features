<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function eduglu_discussion_context_default_contexts() {
  module_load_include('inc', 'eduglu_discussion', 'eduglu_discussion.defaults');
  $args = func_get_args();
  return call_user_func_array('_eduglu_discussion_context_default_contexts', $args);
}

/**
 * Implementation of hook_ctools_plugin_api().
 */
function eduglu_discussion_ctools_plugin_api() {
  module_load_include('inc', 'eduglu_discussion', 'eduglu_discussion.defaults');
  $args = func_get_args();
  return call_user_func_array('_eduglu_discussion_ctools_plugin_api', $args);
}

/**
 * Implementation of hook_menu_default_items().
 */
function eduglu_discussion_menu_default_items() {
  module_load_include('inc', 'eduglu_discussion', 'eduglu_discussion.defaults');
  $args = func_get_args();
  return call_user_func_array('_eduglu_discussion_menu_default_items', $args);
}

/**
 * Implementation of hook_node_info().
 */
function eduglu_discussion_node_info() {
  module_load_include('inc', 'eduglu_discussion', 'eduglu_discussion.features.node');
  $args = func_get_args();
  return call_user_func_array('_eduglu_discussion_node_info', $args);
}

/**
 * Implementation of hook_strongarm().
 */
function eduglu_discussion_strongarm() {
  module_load_include('inc', 'eduglu_discussion', 'eduglu_discussion.defaults');
  $args = func_get_args();
  return call_user_func_array('_eduglu_discussion_strongarm', $args);
}

/**
 * Implementation of hook_views_default_views().
 */
function eduglu_discussion_views_default_views() {
  module_load_include('inc', 'eduglu_discussion', 'eduglu_discussion.features.views');
  $args = func_get_args();
  return call_user_func_array('_eduglu_discussion_views_default_views', $args);
}
