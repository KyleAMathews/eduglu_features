<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function eduglue_discussion_context_default_contexts() {
  module_load_include('inc', 'eduglue_discussion', 'eduglue_discussion.defaults');
  $args = func_get_args();
  return call_user_func_array('_eduglue_discussion_context_default_contexts', $args);
}

/**
 * Implementation of hook_menu_default_items().
 */
function eduglue_discussion_menu_default_items() {
  module_load_include('inc', 'eduglue_discussion', 'eduglue_discussion.defaults');
  $args = func_get_args();
  return call_user_func_array('_eduglue_discussion_menu_default_items', $args);
}

/**
 * Implementation of hook_node_info().
 */
function eduglue_discussion_node_info() {
  module_load_include('inc', 'eduglue_discussion', 'eduglue_discussion.features.node');
  $args = func_get_args();
  return call_user_func_array('_eduglue_discussion_node_info', $args);
}

/**
 * Implementation of hook_views_default_views().
 */
function eduglue_discussion_views_default_views() {
  module_load_include('inc', 'eduglue_discussion', 'eduglue_discussion.features.views');
  $args = func_get_args();
  return call_user_func_array('_eduglue_discussion_views_default_views', $args);
}
