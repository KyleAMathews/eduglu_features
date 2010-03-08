<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function eduglu_solr_search_context_default_contexts() {
  module_load_include('inc', 'eduglu_solr_search', 'eduglu_solr_search.defaults');
  $args = func_get_args();
  return call_user_func_array('_eduglu_solr_search_context_default_contexts', $args);
}
