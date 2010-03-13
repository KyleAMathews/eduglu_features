<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function eduglu_core_ctools_plugin_api() {
  module_load_include('inc', 'eduglu_core', 'eduglu_core.defaults');
  $args = func_get_args();
  return call_user_func_array('_eduglu_core_ctools_plugin_api', $args);
}

/**
 * Implementation of hook_user_default_permissions().
 */
function eduglu_core_user_default_permissions() {
  module_load_include('inc', 'eduglu_core', 'eduglu_core.defaults');
  $args = func_get_args();
  return call_user_func_array('_eduglu_core_user_default_permissions', $args);
}

/**
 * Implementation of hook_strongarm().
 */
function eduglu_core_strongarm() {
  module_load_include('inc', 'eduglu_core', 'eduglu_core.defaults');
  $args = func_get_args();
  return call_user_func_array('_eduglu_core_strongarm', $args);
}
