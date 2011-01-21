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
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'apachesolr_search-currentsearch' => array(
          'module' => 'apachesolr_search',
          'delta' => 'currentsearch',
          'region' => 'right',
          'weight' => 0,
        ),
        'apachesolr-sort' => array(
          'module' => 'apachesolr',
          'delta' => 'sort',
          'region' => 'right',
          'weight' => 1,
        ),
        'apachesolr_search-created' => array(
          'module' => 'apachesolr_search',
          'delta' => 'created',
          'region' => 'right',
          'weight' => 2,
        ),
        'apachesolr_og-im_og_gid' => array(
          'module' => 'apachesolr_og',
          'delta' => 'im_og_gid',
          'region' => 'right',
          'weight' => 3,
        ),
        'apachesolr_search-uid' => array(
          'module' => 'apachesolr_search',
          'delta' => 'uid',
          'region' => 'right',
          'weight' => 4,
        ),
        'apachesolr_search-im_vid_2' => array(
          'module' => 'apachesolr_search',
          'delta' => 'im_vid_2',
          'region' => 'right',
          'weight' => 5,
        ),
        'apachesolr_search-type' => array(
          'module' => 'apachesolr_search',
          'delta' => 'type',
          'region' => 'right',
          'weight' => 6,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Sets block visibility for solr search');

  $export['context_ui-section-eduglu_solr_search'] = $context;
  return $export;
}
