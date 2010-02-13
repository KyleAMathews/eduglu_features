<?php

/**
 * Helper to implementation of hook_node_info().
 */
function _eduglu_groups_node_info() {
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
