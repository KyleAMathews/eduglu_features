<?php

/**
 * Helper to implementation of hook_node_info().
 */
function _eduglu_discussion_node_info() {
  $items = array(
    'story' => array(
      'name' => t('Discussion'),
      'module' => 'features',
      'description' => t('Discussions are articles in their simplest form. Discussions may be used for questions or for news articles.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Body'),
      'min_word_count' => '0',
      'help' => '',
    ),
    'wiki' => array(
      'name' => t('Wiki page'),
      'module' => 'features',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Body'),
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}
