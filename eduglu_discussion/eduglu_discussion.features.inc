<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function eduglu_discussion_ctools_plugin_api() {
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
function eduglu_discussion_node_info() {
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
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function eduglu_discussion_views_api() {
  return array(
    'api' => '2',
  );
}
