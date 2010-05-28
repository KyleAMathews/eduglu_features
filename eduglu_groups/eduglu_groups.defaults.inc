<?php

/**
 * Helper to implementation of hook_ctools_plugin_api().
 */
function _eduglu_groups_ctools_plugin_api() {
  $args = func_get_args();
  $module = array_shift($args);
  $api = array_shift($args);
  if ($module == "spaces" && $api == "spaces") {
    return array("version" => 3);
  }
  elseif ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Helper to implementation of hook_spaces_presets().
 */
function _eduglu_groups_spaces_presets() {
  $export = array();
  $spaces_presets = new stdClass;
  $spaces_presets->disabled = FALSE; /* Edit this to true to make a default spaces_presets disabled initially */
  $spaces_presets->api_version = 3;
  $spaces_presets->name = 'og_controlled';
  $spaces_presets->title = 'Controlled group';
  $spaces_presets->description = 'All users may view public content from this group. Users must request to join this group.';
  $spaces_presets->space_type = 'og';
  $spaces_presets->value = array(
    'variable' => array(
      'spaces_og_selective' => '1',
      'spaces_og_register' => 1,
      'spaces_og_directory' => 1,
      'spaces_og_private' => 0,
      'spaces_features' => array(
        'eduglu_about' => '1',
        'eduglu_discussion' => '1',
        'eduglu_polls' => '0',
        'eduglu_wiki' => '0',
      ),
      'previous_features' => array(
        'eduglu_about' => '1',
        'eduglu_discussion' => '1',
        'eduglu_polls' => '0',
        'eduglu_wiki' => '0',
      ),
    ),
  );

  $translatables['og_controlled'] = array(
    t('All users may view public content from this group. Users must request to join this group.'),
    t('Controlled group'),
  );

  $export['og_controlled'] = $spaces_presets;
  $spaces_presets = new stdClass;
  $spaces_presets->disabled = FALSE; /* Edit this to true to make a default spaces_presets disabled initially */
  $spaces_presets->api_version = 3;
  $spaces_presets->name = 'og_private';
  $spaces_presets->title = 'Private group';
  $spaces_presets->description = 'Only members will be able to access this group. Membership is strictly managed by admins.';
  $spaces_presets->space_type = 'og';
  $spaces_presets->value = array(
    'variable' => array(
      'spaces_features' => array(
        'eduglu_about' => '1',
        'eduglu_discussion' => '1',
        'eduglu_polls' => '0',
        'eduglu_wiki' => '0',
      ),
      'spaces_preset_og' => 'og_private',
      'spaces_og_selective' => '3',
      'spaces_og_register' => 0,
      'spaces_og_directory' => 0,
      'spaces_og_private' => 1,
      'previous_features' => array(
        'eduglu_about' => '1',
        'eduglu_discussion' => '1',
        'eduglu_polls' => '0',
        'eduglu_wiki' => '0',
      ),
      'site_frontpage' => 'discussion',
    ),
    'context' => array(),
  );

  $translatables['og_private'] = array(
    t('Only members will be able to access this group. Membership is strictly managed by admins.'),
    t('Private group'),
  );

  $export['og_private'] = $spaces_presets;
  $spaces_presets = new stdClass;
  $spaces_presets->disabled = FALSE; /* Edit this to true to make a default spaces_presets disabled initially */
  $spaces_presets->api_version = 3;
  $spaces_presets->name = 'og_public';
  $spaces_presets->title = 'Public group';
  $spaces_presets->description = 'All users may view public content from this group. User may join this group at will.';
  $spaces_presets->space_type = 'og';
  $spaces_presets->value = array(
    'variable' => array(
      'spaces_og_selective' => '0',
      'spaces_og_register' => 1,
      'spaces_og_directory' => 1,
      'spaces_og_private' => 0,
      'spaces_features' => array(
        'eduglu_about' => '1',
        'eduglu_discussion' => '1',
        'eduglu_polls' => '0',
        'eduglu_wiki' => '0',
      ),
      'previous_features' => array(
        'eduglu_about' => '1',
        'eduglu_discussion' => '1',
        'eduglu_polls' => '0',
        'eduglu_wiki' => '0',
      ),
      'site_frontpage' => 'discussion',
    ),
  );

  $translatables['og_public'] = array(
    t('All users may view public content from this group. User may join this group at will.'),
    t('Public group'),
  );

  $export['og_public'] = $spaces_presets;
  return $export;
}

/**
 * Helper to implementation of hook_user_default_permissions().
 */
function _eduglu_groups_user_default_permissions() {
  $permissions = array();

  // Exported permission: create group content
  $permissions[] = array(
    'name' => 'create group content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: delete any group content
  $permissions[] = array(
    'name' => 'delete any group content',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: delete own group content
  $permissions[] = array(
    'name' => 'delete own group content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: edit any group content
  $permissions[] = array(
    'name' => 'edit any group content',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: edit own group content
  $permissions[] = array(
    'name' => 'edit own group content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: manage og_mailinglist subscriptions
  $permissions[] = array(
    'name' => 'manage og_mailinglist subscriptions',
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
function _eduglu_groups_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_group';
  $strongarm->value = '0';

  $export['comment_group'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_group';
  $strongarm->value = array(
    '0' => 'status',
    '1' => 'moderate',
  );

  $export['node_options_group'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'og_audience_checkboxes';
  $strongarm->value = 1;

  $export['og_audience_checkboxes'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'og_audience_required';
  $strongarm->value = '0';

  $export['og_audience_required'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'og_content_type_usage_group';
  $strongarm->value = 'group';

  $export['og_content_type_usage_group'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'og_mailinglist_max_message_size';
  $strongarm->value = '2000';

  $export['og_mailinglist_max_message_size'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'og_mailinglist_max_posts_per_hour';
  $strongarm->value = '20';

  $export['og_mailinglist_max_posts_per_hour'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'og_member_pics';
  $strongarm->value = 1;

  $export['og_member_pics'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'og_private_groups';
  $strongarm->value = '3';

  $export['og_private_groups'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'og_visibility';
  $strongarm->value = '2';

  $export['og_visibility'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'og_visibility_directory';
  $strongarm->value = '1';

  $export['og_visibility_directory'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'og_visibility_registration';
  $strongarm->value = '0';

  $export['og_visibility_registration'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'show_diff_inline_group';
  $strongarm->value = 0;

  $export['show_diff_inline_group'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'show_preview_changes_group';
  $strongarm->value = 1;

  $export['show_preview_changes_group'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'upload_group';
  $strongarm->value = '0';

  $export['upload_group'] = $strongarm;
  return $export;
}
