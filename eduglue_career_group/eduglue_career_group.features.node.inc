<?php

/**
 * Helper to implementation of hook_node_info().
 */
function _eduglue_career_group_node_info() {
  $items = array(
    'alumni_profile' => array(
      'name' => t('Alumni Profile'),
      'module' => 'features',
      'description' => t('Content type for alumni profiles. Used in career groups.'),
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
