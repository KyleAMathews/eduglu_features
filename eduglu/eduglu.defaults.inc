<?php

/**
 * Helper to implementation of hook_context_default_contexts().
 */
function _eduglu_context_default_contexts() {
  $items = array();

  $items[] = array(
    'namespace' => 'eduglu',
    'attribute' => 'section',
    'value' => 'taxonomy',
    'description' => '',
    'views' => array(
      '0' => 'eduglu_taxonomy',
    ),
    'block' => array(
      'views_eduglu_taxonomy-block_1' => array(
        'module' => 'views',
        'delta' => 'eduglu_taxonomy-block_1',
        'weight' => 20,
        'region' => 'right',
        'status' => '0',
        'label' => 'eduglu_taxonomy: Archive block',
        'type' => 'context_ui',
      ),
    ),
  );
  return $items;
}
