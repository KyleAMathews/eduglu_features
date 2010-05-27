<?php

/**
 * Implementation of hook_menu_default_items().
 */
function eduglu_about_menu_default_items() {
  module_load_include('inc', 'eduglu_about', 'eduglu_about.defaults');
  $args = func_get_args();
  return call_user_func_array('_eduglu_about_menu_default_items', $args);
}
