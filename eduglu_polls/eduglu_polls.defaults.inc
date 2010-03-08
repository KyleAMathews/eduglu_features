<?php

/**
 * Helper to implementation of hook_context_default_contexts().
 */
function _eduglu_polls_context_default_contexts() {
  $items = array();

  $items[] = array(
    'namespace' => 'spaces',
    'attribute' => 'feature',
    'value' => 'poll',
    'description' => 'context for space polls',
    'node' => array(
      '0' => 'poll',
    ),
    'path' => array(
      '*/poll/*' => '*/poll/*',
    ),
    'views' => array(
      '0' => 'polls',
    ),
    'menu' => 'poll',
    'block' => array(),
  );
  return $items;
}

/**
 * Helper to implementation of hook_menu_default_items().
 */
function _eduglu_polls_menu_default_items() {
  $items = array();

  $items[] = array(
    'title' => 'Polls',
    'path' => 'poll',
    'weight' => '-49',
    'description' => 'Polls let you ask structured questions to other members of your group.',
  );
  // Translatables
  array(
    t('Polls'),
    t('Polls let you ask structured questions to other members of your group.'),
  );


  return $items;
}
