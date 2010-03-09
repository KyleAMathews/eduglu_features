<?php

/**
 * Helper to implementation of hook_context_default_contexts().
 */
function _eduglu_wiki_context_default_contexts() {
  $items = array();

  $items[] = array(
    'namespace' => 'spaces',
    'attribute' => 'feature',
    'value' => 'wiki',
    'description' => 'Context for eduglu_wiki feature',
    'node' => array(
      '0' => 'wiki',
    ),
    'views' => array(
      '0' => 'eduglu_wiki',
    ),
    'menu' => 'wiki',
    'block' => array(),
  );
  return $items;
}

/**
 * Helper to implementation of hook_ctools_plugin_api().
 */
function _eduglu_wiki_ctools_plugin_api() {
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
function _eduglu_wiki_menu_default_items() {
  $items = array();

  $items[] = array(
    'title' => 'Wiki',
    'path' => 'wiki',
    'weight' => '0',
  );
  // Translatables
  array(
    t('Wiki'),
  );


  return $items;
}

/**
 * Helper to implementation of hook_user_default_permissions().
 */
function _eduglu_wiki_user_default_permissions() {
  $permissions = array();

  // Exported permission: create wiki content
  $permissions[] = array(
    'name' => 'create wiki content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: delete any wiki content
  $permissions[] = array(
    'name' => 'delete any wiki content',
    'roles' => array(
      '0' => 'Moderator',
      '1' => 'admin',
    ),
  );

  // Exported permission: delete own wiki content
  $permissions[] = array(
    'name' => 'delete own wiki content',
    'roles' => array(
      '0' => 'Moderator',
      '1' => 'admin',
      '2' => 'authenticated user',
    ),
  );

  // Exported permission: edit any wiki content
  $permissions[] = array(
    'name' => 'edit any wiki content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: edit own wiki content
  $permissions[] = array(
    'name' => 'edit own wiki content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'authenticated user',
    ),
  );

  return $permissions;
}

/**
 * Helper to implementation of hook_strongarm().
 */
function _eduglu_wiki_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_wiki';
  $strongarm->value = '2';

  $export['comment_anonymous_wiki'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_controls_wiki';
  $strongarm->value = '3';

  $export['comment_controls_wiki'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_wiki';
  $strongarm->value = '2';

  $export['comment_default_mode_wiki'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_order_wiki';
  $strongarm->value = '2';

  $export['comment_default_order_wiki'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_wiki';
  $strongarm->value = '50';

  $export['comment_default_per_page_wiki'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_wiki';
  $strongarm->value = '1';

  $export['comment_form_location_wiki'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_wiki';
  $strongarm->value = '0';

  $export['comment_preview_wiki'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_wiki';
  $strongarm->value = '0';

  $export['comment_subject_field_wiki'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_upload_images_wiki';
  $strongarm->value = 'none';

  $export['comment_upload_images_wiki'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_upload_wiki';
  $strongarm->value = '1';

  $export['comment_upload_wiki'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_wiki';
  $strongarm->value = '2';

  $export['comment_wiki'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_wiki';
  $strongarm->value = array(
    '0' => 'status',
    '1' => 'revision',
  );

  $export['node_options_wiki'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'og_content_type_usage_wiki';
  $strongarm->value = 'group_post_wiki';

  $export['og_content_type_usage_wiki'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'show_diff_inline_wiki';
  $strongarm->value = 0;

  $export['show_diff_inline_wiki'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'show_preview_changes_wiki';
  $strongarm->value = 1;

  $export['show_preview_changes_wiki'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'upload_wiki';
  $strongarm->value = '1';

  $export['upload_wiki'] = $strongarm;
  return $export;
}
