<?php

/**
 * Helper to implementation of hook_context_default_contexts().
 */
function _eduglue_solr_search_context_default_contexts() {
  $items = array();

  $items[] = array(
    'namespace' => 'context_ui',
    'attribute' => 'section',
    'value' => 'eduglue_solr_search',
    'description' => 'Sets block visibility for solr search',
    'path' => array(
      '*/apachesolr_search/*' => '*/apachesolr_search/*',
    ),
    'block' => array(
      'apachesolr_sort' => array(
        'module' => 'apachesolr',
        'delta' => 'sort',
        'weight' => 38,
        'region' => 'right',
        'status' => '0',
        'label' => 'Apache Solr Core: Sorting',
        'type' => 'context_ui',
      ),
      'apachesolr_og_im_og_gid' => array(
        'module' => 'apachesolr_og',
        'delta' => 'im_og_gid',
        'weight' => 39,
        'region' => 'right',
        'status' => '0',
        'label' => 'Apache Solr OG: Filter by Organic Group',
        'type' => 'context_ui',
      ),
    ),
  );
  return $items;
}
