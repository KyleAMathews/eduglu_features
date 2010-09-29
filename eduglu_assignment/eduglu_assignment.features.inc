<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function eduglu_assignment_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => 3);
  }
  elseif ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function eduglu_assignment_node_info() {
  $items = array(
    'assignment' => array(
      'name' => t('Assignment'),
      'module' => 'features',
      'description' => t('Create an assignment with a due date, description, and optionally select how they\'ll submit the assignment.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Description'),
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function eduglu_assignment_views_api() {
  return array(
    'api' => '2',
  );
}
