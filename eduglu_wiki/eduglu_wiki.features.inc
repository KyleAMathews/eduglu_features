<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function eduglu_wiki_context_default_contexts() {
  module_load_include('inc', 'eduglu_wiki', 'eduglu_wiki.defaults');
  $args = func_get_args();
  return call_user_func_array('_eduglu_wiki_context_default_contexts', $args);
}

/**
 * Implementation of hook_ctools_plugin_api().
 */
function eduglu_wiki_ctools_plugin_api() {
  module_load_include('inc', 'eduglu_wiki', 'eduglu_wiki.defaults');
  $args = func_get_args();
  return call_user_func_array('_eduglu_wiki_ctools_plugin_api', $args);
}

/**
 * Implementation of hook_menu_default_items().
 */
function eduglu_wiki_menu_default_items() {
  module_load_include('inc', 'eduglu_wiki', 'eduglu_wiki.defaults');
  $args = func_get_args();
  return call_user_func_array('_eduglu_wiki_menu_default_items', $args);
}

/**
 * Implementation of hook_user_default_permissions().
 */
function eduglu_wiki_user_default_permissions() {
  module_load_include('inc', 'eduglu_wiki', 'eduglu_wiki.defaults');
  $args = func_get_args();
  return call_user_func_array('_eduglu_wiki_user_default_permissions', $args);
}

/**
 * Implementation of hook_strongarm().
 */
function eduglu_wiki_strongarm() {
  module_load_include('inc', 'eduglu_wiki', 'eduglu_wiki.defaults');
  $args = func_get_args();
  return call_user_func_array('_eduglu_wiki_strongarm', $args);
}

/**
 * Implementation of hook_views_default_views().
 */
function eduglu_wiki_views_default_views() {
  module_load_include('inc', 'eduglu_wiki', 'eduglu_wiki.features.views');
  $args = func_get_args();
  return call_user_func_array('_eduglu_wiki_views_default_views', $args);
}
