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
    'block' => array(
      '' => array(
        'weight' => 36,
        'region' => 'right',
        'type' => 'context_ui',
      ),
      'modr8_0' => array(
        'module' => 'modr8',
        'delta' => '0',
        'weight' => 37,
        'region' => 'right',
        'status' => '0',
        'label' => 'Modr8 moderator\'s block',
        'type' => 'context_ui',
      ),
    ),
  );
  return $items;
}
