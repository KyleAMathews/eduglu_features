<?php

/**
 * Implementation of hook_content_default_fields().
 */
function eduglue_job_board_content_default_fields() {
  module_load_include('inc', 'eduglue_job_board', 'eduglue_job_board.defaults');
  $args = func_get_args();
  return call_user_func_array('_eduglue_job_board_content_default_fields', $args);
}

/**
 * Implementation of hook_context_default_contexts().
 */
function eduglue_job_board_context_default_contexts() {
  module_load_include('inc', 'eduglue_job_board', 'eduglue_job_board.defaults');
  $args = func_get_args();
  return call_user_func_array('_eduglue_job_board_context_default_contexts', $args);
}

/**
 * Implementation of hook_menu_default_items().
 */
function eduglue_job_board_menu_default_items() {
  module_load_include('inc', 'eduglue_job_board', 'eduglue_job_board.defaults');
  $args = func_get_args();
  return call_user_func_array('_eduglue_job_board_menu_default_items', $args);
}

/**
 * Implementation of hook_node_info().
 */
function eduglue_job_board_node_info() {
  module_load_include('inc', 'eduglue_job_board', 'eduglue_job_board.features.node');
  $args = func_get_args();
  return call_user_func_array('_eduglue_job_board_node_info', $args);
}

/**
 * Implementation of hook_views_default_views().
 */
function eduglue_job_board_views_default_views() {
  module_load_include('inc', 'eduglue_job_board', 'eduglue_job_board.features.views');
  $args = func_get_args();
  return call_user_func_array('_eduglue_job_board_views_default_views', $args);
}
