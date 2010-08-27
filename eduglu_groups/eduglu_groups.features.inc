<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function eduglu_groups_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => 3);
  }
  elseif ($module == "spaces" && $api == "spaces") {
    return array("version" => 3);
  }
  elseif ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function eduglu_groups_node_info() {
  $items = array(
    'group' => array(
      'name' => t('group'),
      'module' => 'features',
      'description' => t('Create a new group'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function eduglu_groups_views_api() {
  return array(
    'api' => '2',
  );
}
