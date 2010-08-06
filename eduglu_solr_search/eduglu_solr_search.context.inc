<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function eduglu_solr_search_context_default_contexts() {
  $export = array();
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'context_ui-section-eduglu_solr_search';
  $context->description = 'Sets block visibility for solr search';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '*/apachesolr_search/*' => '*/apachesolr_search/*',
      ),
      'options' => array(),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'apachesolr_search-currentsearch' => array(
          'module' => 'apachesolr_search',
          'delta' => 'currentsearch',
          'weight' => -33,
          'region' => 'right',
          'status' => '0',
          'label' => 'Apache Solr Search: Current search',
          'type' => 'context_ui',
          'bid' => 'apachesolr_search_currentsearch',
        ),
        'apachesolr-sort' => array(
          'module' => 'apachesolr',
          'delta' => 'sort',
          'weight' => 33,
          'region' => 'right',
          'status' => '0',
          'label' => 'Apache Solr Core: Sorting',
          'type' => 'context_ui',
          'bid' => 'apachesolr_sort',
        ),
        'apachesolr_og-im_og_gid' => array(
          'module' => 'apachesolr_og',
          'delta' => 'im_og_gid',
          'weight' => 34,
          'region' => 'right',
          'status' => '0',
          'label' => 'Apache Solr OG: Filter by Organic Group',
          'type' => 'context_ui',
          'bid' => 'apachesolr_og_im_og_gid',
        ),
        'apachesolr_search-uid' => array(
          'module' => 'apachesolr_search',
          'delta' => 'uid',
          'weight' => 35,
          'region' => 'right',
          'status' => '0',
          'label' => 'Apache Solr Search: Filter by author',
          'type' => 'context_ui',
          'bid' => 'apachesolr_search_uid',
        ),
        'apachesolr_search-im_vid_2' => array(
          'module' => 'apachesolr_search',
          'delta' => 'im_vid_2',
          'weight' => 36,
          'region' => 'right',
          'status' => '0',
          'label' => 'Apache Solr Search: Filter by taxonomy Tags',
          'type' => 'context_ui',
          'bid' => 'apachesolr_search_im_vid_2',
        ),
        'apachesolr_search-type' => array(
          'module' => 'apachesolr_search',
          'delta' => 'type',
          'weight' => 37,
          'region' => 'right',
          'status' => '0',
          'label' => 'Apache Solr Search: Filter by content type',
          'type' => 'context_ui',
          'bid' => 'apachesolr_search_type',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  $export['context_ui-section-eduglu_solr_search'] = $context;
  return $export;
}
