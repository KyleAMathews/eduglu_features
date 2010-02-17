<?php

/**
 * Helper to implementation of hook_context_default_contexts().
 */
function _eduglue_front_page_context_default_contexts() {
  $items = array();

  $items[] = array(
    'namespace' => 'context_ui',
    'attribute' => 'section',
    'value' => 'frontpage',
    'description' => 'Controls the front page',
    'path' => array(
      'frontpage' => 'frontpage',
      '<front>' => '<front>',
    ),
    'theme_regiontoggle' => array(
      '0' => 'left',
    ),
    'block' => array(),
  );
  return $items;
}
