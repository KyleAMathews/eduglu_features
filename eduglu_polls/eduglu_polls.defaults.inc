<?php

/**
 * Helper to implementation of hook_context_default_contexts().
 */
function _eduglu_polls_context_default_contexts() {
  $items = array();

  $items[] = array(
    'namespace' => 'spaces',
    'attribute' => 'feature',
    'value' => 'poll',
    'description' => 'context for space polls',
    'node' => array(
      '0' => 'poll',
    ),
    'path' => array(
      '*/poll/*' => '*/poll/*',
    ),
    'views' => array(
      '0' => 'polls',
    ),
    'menu' => 'poll',
    'block' => array(),
  );
  return $items;
}

/**
 * Helper to implementation of hook_ctools_plugin_api().
 */
function _eduglu_polls_ctools_plugin_api() {
  $args = func_get_args();
  $module = array_shift($args);
  $api = array_shift($args);
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Helper to implementation of hook_menu_default_items().
 */
function _eduglu_polls_menu_default_items() {
  $items = array();

  $items[] = array(
    'title' => 'Polls',
    'path' => 'poll',
    'weight' => '-49',
    'description' => 'Polls let you ask structured questions to other members of your group.',
  );
  // Translatables
  array(
    t('Polls'),
    t('Polls let you ask structured questions to other members of your group.'),
  );


  return $items;
}

/**
 * Helper to implementation of hook_strongarm().
 */
function _eduglu_polls_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_poll';
  $strongarm->value = 0;

  $export['comment_anonymous_poll'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_controls_poll';
  $strongarm->value = '3';

  $export['comment_controls_poll'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_poll';
  $strongarm->value = '2';

  $export['comment_default_mode_poll'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_order_poll';
  $strongarm->value = '2';

  $export['comment_default_order_poll'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_poll';
  $strongarm->value = '50';

  $export['comment_default_per_page_poll'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_poll';
  $strongarm->value = '1';

  $export['comment_form_location_poll'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_poll';
  $strongarm->value = '2';

  $export['comment_poll'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_poll';
  $strongarm->value = '0';

  $export['comment_preview_poll'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_poll';
  $strongarm->value = '0';

  $export['comment_subject_field_poll'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_upload_images_poll';
  $strongarm->value = 'inline';

  $export['comment_upload_images_poll'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_upload_poll';
  $strongarm->value = '1';

  $export['comment_upload_poll'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_poll';
  $strongarm->value = array(
    '0' => 'status',
  );

  $export['node_options_poll'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'og_content_type_usage_poll';
  $strongarm->value = 'group_post_standard';

  $export['og_content_type_usage_poll'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'show_preview_changes_poll';
  $strongarm->value = 1;

  $export['show_preview_changes_poll'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'upload_poll';
  $strongarm->value = '1';

  $export['upload_poll'] = $strongarm;
  return $export;
}
