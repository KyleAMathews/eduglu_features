<?php

/**
 * Implementation of hook_content_default_fields().
 */
function eduglu_user_profile_content_default_fields() {
  module_load_include('inc', 'eduglu_user_profile', 'eduglu_user_profile.defaults');
  $args = func_get_args();
  return call_user_func_array('_eduglu_user_profile_content_default_fields', $args);
}

/**
 * Implementation of hook_context_default_contexts().
 */
function eduglu_user_profile_context_default_contexts() {
  module_load_include('inc', 'eduglu_user_profile', 'eduglu_user_profile.defaults');
  $args = func_get_args();
  return call_user_func_array('_eduglu_user_profile_context_default_contexts', $args);
}

/**
 * Implementation of hook_imagecache_default_presets().
 */
function eduglu_user_profile_imagecache_default_presets() {
  module_load_include('inc', 'eduglu_user_profile', 'eduglu_user_profile.defaults');
  $args = func_get_args();
  return call_user_func_array('_eduglu_user_profile_imagecache_default_presets', $args);
}

/**
 * Implementation of hook_node_info().
 */
function eduglu_user_profile_node_info() {
  module_load_include('inc', 'eduglu_user_profile', 'eduglu_user_profile.features.node');
  $args = func_get_args();
  return call_user_func_array('_eduglu_user_profile_node_info', $args);
}
