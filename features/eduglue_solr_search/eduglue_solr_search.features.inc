<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function eduglue_solr_search_context_default_contexts() {
  module_load_include('inc', 'eduglue_solr_search', 'eduglue_solr_search.defaults');
  $args = func_get_args();
  return call_user_func_array('_eduglue_solr_search_context_default_contexts', $args);
}
