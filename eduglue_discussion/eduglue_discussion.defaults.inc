<?php

/**
 * Helper to implementation of hook_context_default_contexts().
 */
function _eduglue_discussion_context_default_contexts() {
  $items = array();

  $items[] = array(
    'namespace' => 'spaces',
    'attribute' => 'feature',
    'value' => 'discussion',
    'description' => '',
    'node' => array(
      '0' => 'story',
      '1' => 'wiki',
    ),
    'views' => array(
      '0' => 'og_ghp_ron_spaces',
    ),
    'menu' => 'discussion',
    'block' => array(
      'og_0' => array(
        'module' => 'og',
        'delta' => '0',
        'weight' => -39,
        'region' => 'right',
        'status' => '0',
        'label' => 'Group details',
        'type' => 'context_ui',
      ),
      'views_calendar_per_group-block_1' => array(
        'module' => 'views',
        'delta' => 'calendar_per_group-block_1',
        'weight' => -38,
        'region' => 'right',
        'status' => '0',
        'label' => 'Upcoming',
        'type' => 'context_ui',
      ),
    ),
  );
  return $items;
}

/**
 * Helper to implementation of hook_menu_default_items().
 */
function _eduglue_discussion_menu_default_items() {
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
