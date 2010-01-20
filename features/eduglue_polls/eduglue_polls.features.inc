<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function eduglue_polls_context_default_contexts() {
  module_load_include('inc', 'eduglue_polls', 'eduglue_polls.defaults');
  $args = func_get_args();
  return call_user_func_array('_eduglue_polls_context_default_contexts', $args);
}

/**
 * Implementation of hook_menu_default_items().
 */
function eduglue_polls_menu_default_items() {
  module_load_include('inc', 'eduglue_polls', 'eduglue_polls.defaults');
  $args = func_get_args();
  return call_user_func_array('_eduglue_polls_menu_default_items', $args);
}

/**
 * Implementation of hook_views_default_views().
 */
function eduglue_polls_views_default_views() {
  module_load_include('inc', 'eduglue_polls', 'eduglue_polls.features.views');
  $args = func_get_args();
  return call_user_func_array('_eduglue_polls_views_default_views', $args);
}
