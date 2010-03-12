<?php

/**
 * Implementation of hook_content_default_fields().
 */
function eduglu_members_content_default_fields() {
  module_load_include('inc', 'eduglu_members', 'eduglu_members.defaults');
  $args = func_get_args();
  return call_user_func_array('_eduglu_members_content_default_fields', $args);
}

/**
 * Implementation of hook_context_default_contexts().
 */
function eduglu_members_context_default_contexts() {
  module_load_include('inc', 'eduglu_members', 'eduglu_members.defaults');
  $args = func_get_args();
  return call_user_func_array('_eduglu_members_context_default_contexts', $args);
}

/**
 * Implementation of hook_ctools_plugin_api().
 */
function eduglu_members_ctools_plugin_api() {
  module_load_include('inc', 'eduglu_members', 'eduglu_members.defaults');
  $args = func_get_args();
  return call_user_func_array('_eduglu_members_ctools_plugin_api', $args);
}

/**
 * Implementation of hook_fieldgroup_default_groups().
 */
function eduglu_members_fieldgroup_default_groups() {
  module_load_include('inc', 'eduglu_members', 'eduglu_members.defaults');
  $args = func_get_args();
  return call_user_func_array('_eduglu_members_fieldgroup_default_groups', $args);
}

/**
 * Implementation of hook_imagecache_default_presets().
 */
function eduglu_members_imagecache_default_presets() {
  module_load_include('inc', 'eduglu_members', 'eduglu_members.defaults');
  $args = func_get_args();
  return call_user_func_array('_eduglu_members_imagecache_default_presets', $args);
}

/**
 * Implementation of hook_node_info().
 */
function eduglu_members_node_info() {
  module_load_include('inc', 'eduglu_members', 'eduglu_members.features.node');
  $args = func_get_args();
  return call_user_func_array('_eduglu_members_node_info', $args);
}

/**
 * Implementation of hook_strongarm().
 */
function eduglu_members_strongarm() {
  module_load_include('inc', 'eduglu_members', 'eduglu_members.defaults');
  $args = func_get_args();
  return call_user_func_array('_eduglu_members_strongarm', $args);
}
