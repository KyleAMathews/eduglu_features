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
      'apachesolr_search_currentsearch' => array(
        'module' => 'apachesolr_search',
        'delta' => 'currentsearch',
        'weight' => 38,
        'region' => 'right',
        'status' => '0',
        'label' => 'Apache Solr Search: Current search',
        'type' => 'context_ui',
      ),
      'apachesolr_sort' => array(
        'module' => 'apachesolr',
        'delta' => 'sort',
        'weight' => 39,
        'region' => 'right',
        'status' => '0',
        'label' => 'Apache Solr Core: Sorting',
        'type' => 'context_ui',
      ),
      'apachesolr_og_im_og_gid' => array(
        'module' => 'apachesolr_og',
        'delta' => 'im_og_gid',
        'weight' => 40,
        'region' => 'right',
        'status' => '0',
        'label' => 'Apache Solr OG: Filter by Organic Group',
        'type' => 'context_ui',
      ),
      'apachesolr_search_uid' => array(
        'module' => 'apachesolr_search',
        'delta' => 'uid',
        'weight' => 41,
        'region' => 'right',
        'status' => '0',
        'label' => 'Apache Solr Search: Filter by author',
        'type' => 'context_ui',
      ),
      'apachesolr_search_im_vid_2' => array(
        'module' => 'apachesolr_search',
        'delta' => 'im_vid_2',
        'weight' => 42,
        'region' => 'right',
        'status' => '0',
        'label' => 'Apache Solr Search: Filter by taxonomy Tags',
        'type' => 'context_ui',
      ),
      'apachesolr_search_type' => array(
        'module' => 'apachesolr_search',
        'delta' => 'type',
        'weight' => 43,
        'region' => 'right',
        'status' => '0',
        'label' => 'Apache Solr Search: Filter by content type',
        'type' => 'context_ui',
      ),
    ),
  );
  return $items;
}
