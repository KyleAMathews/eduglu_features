<?php

/**
 * Helper to implementation of hook_context_default_contexts().
 */
function _eduglu_solr_search_context_default_contexts() {
  $items = array();

  $items[] = array(
    'namespace' => 'context_ui',
    'attribute' => 'section',
    'value' => 'eduglu_solr_search',
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

/**
 * Helper to implementation of hook_ctools_plugin_api().
 */
function _eduglu_solr_search_ctools_plugin_api() {
  $args = func_get_args();
  $module = array_shift($args);
  $api = array_shift($args);
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Helper to implementation of hook_strongarm().
 */
function _eduglu_solr_search_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'apachesolr_enabled_facets';
  $strongarm->value = array(
    'apachesolr_search' => array(
      'uid' => 'uid',
      'type' => 'type',
      'im_vid_2' => 'im_vid_2',
    ),
    'apachesolr_og' => array(
      'im_og_gid' => 'im_og_gid',
    ),
  );

  $export['apachesolr_enabled_facets'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'apachesolr_failure';
  $strongarm->value = 'show_drupal_results';

  $export['apachesolr_failure'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'apachesolr_mlt_blocks';
  $strongarm->value = array(
    'mlt-001' => array(
      'name' => 'Related Content',
      'num_results' => '5',
      'mlt_fl' => array(
        'taxonomy_names' => 'taxonomy_names',
        'title' => 'title',
      ),
      'mlt_mintf' => '1',
      'mlt_mindf' => '1',
      'mlt_minwl' => '3',
      'mlt_maxwl' => '15',
      'mlt_maxqt' => '30',
    ),
  );

  $export['apachesolr_mlt_blocks'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'apachesolr_og_groupnode';
  $strongarm->value = '1';

  $export['apachesolr_og_groupnode'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'apachesolr_path';
  $strongarm->value = '/solr';

  $export['apachesolr_path'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'apachesolr_rows';
  $strongarm->value = '10';

  $export['apachesolr_rows'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'apachesolr_search_changed_boost';
  $strongarm->value = '2:150.0';

  $export['apachesolr_search_changed_boost'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'apachesolr_search_comment_boost';
  $strongarm->value = '4:150.0';

  $export['apachesolr_search_comment_boost'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'apachesolr_search_date_boost';
  $strongarm->value = '2:100.0';

  $export['apachesolr_search_date_boost'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'apachesolr_search_default_previous';
  $strongarm->value = 0;

  $export['apachesolr_search_default_previous'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'apachesolr_search_make_default';
  $strongarm->value = '1';

  $export['apachesolr_search_make_default'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'apachesolr_search_promote_boost';
  $strongarm->value = '0';

  $export['apachesolr_search_promote_boost'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'apachesolr_search_query_fields';
  $strongarm->value = array(
    'body' => '1.0',
    'changed' => '0',
    'comment_count' => '0',
    'created' => '0',
    'hash' => '0',
    'id' => '0',
    'im_og_gid' => '0',
    'im_vid_2' => '0',
    'im_vid_3' => '0',
    'im_vid_4' => '0',
    'im_vid_5' => '0',
    'im_vid_6' => '0',
    'language' => '0',
    'last_comment_or_change' => '0',
    'moderate' => '0',
    'name' => '0',
    'nid' => '0',
    'nodeaccess_all' => '0',
    'nodeaccess_og_admin' => '0',
    'nodeaccess_og_public' => '0',
    'nodeaccess_og_subscriber' => '0',
    'path' => '0',
    'path_alias' => '0',
    'promote' => '0',
    'site' => '0',
    'sm_vid_Group_Type' => '0',
    'sm_vid_Group_status' => '0',
    'sm_vid_Tags' => '0',
    'sm_vid_Type_of_Job' => '0',
    'sm_vid_user_profile' => '0',
    'sname' => '0',
    'sort_name' => '0',
    'sort_ss_cck_field_role' => '0',
    'sort_title' => '0',
    'spell' => '0',
    'ss_cck_field_role' => '0',
    'status' => '0',
    'sticky' => '0',
    'tags_a' => '3.0',
    'tags_h1' => '5.0',
    'tags_h2_h3' => '3.0',
    'tags_h4_h5_h6' => '2.0',
    'tags_inline' => '1.0',
    'taxonomy_names' => '2.0',
    'tid' => '0',
    'timestamp' => '0',
    'title' => '5.0',
    'tnid' => '0',
    'translate' => '0',
    'ts_vid_2_names' => '0',
    'ts_vid_3_names' => '0',
    'ts_vid_4_names' => '0',
    'ts_vid_5_names' => '0',
    'ts_vid_6_names' => '0',
    'type' => '0',
    'type_name' => '0',
    'uid' => '0',
    'url' => '0',
    'vid' => '0',
  );

  $export['apachesolr_search_query_fields'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'apachesolr_search_spellcheck';
  $strongarm->value = 1;

  $export['apachesolr_search_spellcheck'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'apachesolr_search_sticky_boost';
  $strongarm->value = '0';

  $export['apachesolr_search_sticky_boost'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'apachesolr_search_taxonomy_links';
  $strongarm->value = '0';

  $export['apachesolr_search_taxonomy_links'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'apachesolr_search_taxonomy_previous';
  $strongarm->value = 0;

  $export['apachesolr_search_taxonomy_previous'] = $strongarm;
  return $export;
}
