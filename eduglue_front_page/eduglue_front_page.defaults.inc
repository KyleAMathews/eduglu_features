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
      'views_og_my-block_1' => array(
        'module' => 'views',
        'delta' => 'og_my-block_1',
        'weight' => 37,
        'region' => 'right',
        'status' => '0',
        'label' => 'og_my: Block',
        'type' => 'context_ui',
      ),
      'modr8_0' => array(
        'module' => 'modr8',
        'delta' => '0',
        'weight' => 38,
        'region' => 'right',
        'status' => '0',
        'label' => 'Modr8 moderator\'s block',
        'type' => 'context_ui',
      ),
    ),
  );
  return $items;
}
