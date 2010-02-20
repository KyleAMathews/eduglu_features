<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function eduglue_front_page_context_default_contexts() {
  module_load_include('inc', 'eduglue_front_page', 'eduglue_front_page.defaults');
  $args = func_get_args();
  return call_user_func_array('_eduglue_front_page_context_default_contexts', $args);
}

/**
 * Implementation of hook_views_default_views().
 */
function eduglue_front_page_views_default_views() {
  module_load_include('inc', 'eduglue_front_page', 'eduglue_front_page.features.views');
  $args = func_get_args();
  return call_user_func_array('_eduglue_front_page_views_default_views', $args);
}
