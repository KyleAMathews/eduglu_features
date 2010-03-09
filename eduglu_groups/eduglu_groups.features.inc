<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function eduglu_groups_ctools_plugin_api() {
  module_load_include('inc', 'eduglu_groups', 'eduglu_groups.defaults');
  $args = func_get_args();
  return call_user_func_array('_eduglu_groups_ctools_plugin_api', $args);
}

/**
 * Implementation of hook_node_info().
 */
function eduglu_groups_node_info() {
  module_load_include('inc', 'eduglu_groups', 'eduglu_groups.features.node');
  $args = func_get_args();
  return call_user_func_array('_eduglu_groups_node_info', $args);
}

/**
 * Implementation of hook_strongarm().
 */
function eduglu_groups_strongarm() {
  module_load_include('inc', 'eduglu_groups', 'eduglu_groups.defaults');
  $args = func_get_args();
  return call_user_func_array('_eduglu_groups_strongarm', $args);
}
