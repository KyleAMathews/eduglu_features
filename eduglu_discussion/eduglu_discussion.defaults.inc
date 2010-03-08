<?php

/**
 * Helper to implementation of hook_context_default_contexts().
 */
function _eduglu_discussion_context_default_contexts() {
  $items = array();

  $items[] = array(
    'namespace' => 'spaces',
    'attribute' => 'feature',
    'value' => 'discussion',
    'description' => '',
    'node' => array(
      '0' => 'story',
    ),
    'views' => array(
      '0' => 'og_ghp_ron_spaces',
    ),
    'menu' => 'discussion',
    'block' => array(),
  );
  return $items;
}

/**
 * Helper to implementation of hook_menu_default_items().
 */
function _eduglu_discussion_menu_default_items() {
  $items = array();

  $items[] = array(
    'title' => 'Discussions',
    'path' => 'discussion',
    'weight' => '-48',
    'description' => 'The discussion lets you monitor recent activity in a group.',
  );
  // Translatables
  array(
    t('Discussions'),
    t('The discussion lets you monitor recent activity in a group.'),
  );


  return $items;
}
