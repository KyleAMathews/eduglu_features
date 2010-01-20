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
      '*/apache_solr_search/*' => '*/apache_solr_search/*',
    ),
    'block' => array(
      'apacheeduglue_solr_search_currentsearch' => array(
        'module' => 'apache_solr_search',
        'delta' => 'currentsearch',
        'weight' => 36,
        'region' => 'right',
        'status' => '0',
        'label' => 'Apache Solr Search: Current search',
        'type' => 'context_ui',
      ),
      'apachesolr_sort' => array(
        'module' => 'apachesolr',
        'delta' => 'sort',
        'weight' => 37,
        'region' => 'right',
        'status' => '0',
        'label' => 'Apache Solr Core: Sorting',
        'type' => 'context_ui',
      ),
      'apachesolr_og_im_og_gid' => array(
        'module' => 'apachesolr_og',
        'delta' => 'im_og_gid',
        'weight' => 38,
        'region' => 'right',
        'status' => '0',
        'label' => 'Apache Solr OG: Filter by Organic Group',
        'type' => 'context_ui',
      ),
      'apacheeduglue_solr_search_uid' => array(
        'module' => 'apache_solr_search',
        'delta' => 'uid',
        'weight' => 39,
        'region' => 'right',
        'status' => '0',
        'label' => 'Apache Solr Search: Filter by author',
        'type' => 'context_ui',
      ),
      'apacheeduglue_solr_search_im_vid_2' => array(
        'module' => 'apache_solr_search',
        'delta' => 'im_vid_2',
        'weight' => 40,
        'region' => 'right',
        'status' => '0',
        'label' => 'Apache Solr Search: Filter by taxonomy Tags',
        'type' => 'context_ui',
      ),
      'apacheeduglue_solr_search_type' => array(
        'module' => 'apache_solr_search',
        'delta' => 'type',
        'weight' => 41,
        'region' => 'right',
        'status' => '0',
        'label' => 'Apache Solr Search: Filter by content type',
        'type' => 'context_ui',
      ),
    ),
  );
  return $items;
}
