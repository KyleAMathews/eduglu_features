<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function eduglue_context_default_contexts() {
  module_load_include('inc', 'eduglue', 'eduglue.defaults');
  $args = func_get_args();
  return call_user_func_array('_eduglue_context_default_contexts', $args);
}

/**
 * Implementation of hook_views_default_views().
 */
function eduglue_views_default_views() {
  module_load_include('inc', 'eduglue', 'eduglue.features.views');
  $args = func_get_args();
  return call_user_func_array('_eduglue_views_default_views', $args);
}
