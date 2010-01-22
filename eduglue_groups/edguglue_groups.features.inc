<?php

/**
 * Implementation of hook_node_info().
 */
function edguglue_groups_node_info() {
  module_load_include('inc', 'edguglue_groups', 'edguglue_groups.features.node');
  $args = func_get_args();
  return call_user_func_array('_edguglue_groups_node_info', $args);
}
