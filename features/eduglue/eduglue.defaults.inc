<?php

/**
 * Helper to implementation of hook_context_default_contexts().
 */
function _eduglue_context_default_contexts() {
  $items = array();

  $items[] = array(
    'namespace' => 'eduglue',
    'attribute' => 'section',
    'value' => 'taxonomy',
    'description' => '',
    'views' => array(
      '0' => 'eduglue_taxonomy',
    ),
    'block' => array(
      'views_eduglue_taxonomy-block_1' => array(
        'module' => 'views',
        'delta' => 'eduglue_taxonomy-block_1',
        'weight' => 20,
        'region' => 'right',
        'status' => '0',
        'label' => 'eduglue_taxonomy: Archive block',
        'type' => 'context_ui',
      ),
    ),
  );
  return $items;
}
