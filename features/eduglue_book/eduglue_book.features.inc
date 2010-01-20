<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function eduglue_book_context_default_contexts() {
  module_load_include('inc', 'eduglue_book', 'eduglue_book.defaults');
  $args = func_get_args();
  return call_user_func_array('_eduglue_book_context_default_contexts', $args);
}

/**
 * Implementation of hook_menu_default_items().
 */
function eduglue_book_menu_default_items() {
  module_load_include('inc', 'eduglue_book', 'eduglue_book.defaults');
  $args = func_get_args();
  return call_user_func_array('_eduglue_book_menu_default_items', $args);
}

/**
 * Implementation of hook_node_info().
 */
function eduglue_book_node_info() {
  module_load_include('inc', 'eduglue_book', 'eduglue_book.features.node');
  $args = func_get_args();
  return call_user_func_array('_eduglue_book_node_info', $args);
}

/**
 * Implementation of hook_user_default_permissions().
 */
function eduglue_book_user_default_permissions() {
  module_load_include('inc', 'eduglue_book', 'eduglue_book.defaults');
  $args = func_get_args();
  return call_user_func_array('_eduglue_book_user_default_permissions', $args);
}

/**
 * Implementation of hook_views_default_views().
 */
function eduglue_book_views_default_views() {
  module_load_include('inc', 'eduglue_book', 'eduglue_book.features.views');
  $args = func_get_args();
  return call_user_func_array('_eduglue_book_views_default_views', $args);
}
