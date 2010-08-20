<?php

/**
 * Implementation of hook_spaces_presets().
 */
function eduglu_groups_spaces_presets() {
  $export = array();
  $spaces_presets = new stdClass;
  $spaces_presets->disabled = FALSE; /* Edit this to true to make a default spaces_presets disabled initially */
  $spaces_presets->api_version = 3;
  $spaces_presets->name = 'eduglu_private';
  $spaces_presets->title = 'Private Group';
  $spaces_presets->description = 'Only members will be able to access this group. Membership is strictly managed by admins.';
  $spaces_presets->space_type = 'og';
  $spaces_presets->value = array(
    'variable' => array(
      'spaces_og_selective' => '3',
      'spaces_og_register' => 0,
      'spaces_og_directory' => 0,
      'spaces_og_private' => 1,
      'spaces_preset_og' => 'eduglu_private',
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

  // Translatables
  // Included for use with string extractors like potx.
  t('Only members will be able to access this group. Membership is strictly managed by admins.');
  t('Private Group');

  $export['eduglu_private'] = $spaces_presets;
  $spaces_presets = new stdClass;
  $spaces_presets->disabled = FALSE; /* Edit this to true to make a default spaces_presets disabled initially */
  $spaces_presets->api_version = 3;
  $spaces_presets->name = 'eduglu_protected';
  $spaces_presets->title = 'Protected Group';
  $spaces_presets->description = 'Only site members can see group posts. Members may join this group at will.';
  $spaces_presets->space_type = 'og';
  $spaces_presets->value = array(
    'variable' => array(
      'spaces_og_register' => 0,
      'spaces_og_private' => 0,
      'spaces_og_selective' => '0',
      'spaces_og_directory' => 1,
      'spaces_features' => array(
        'eduglu_about' => '1',
        'eduglu_discussion' => '1',
        'eduglu_polls' => '0',
        'eduglu_wiki' => '0',
        'spaces_dashboard' => '0',
      ),
      'space_menu_items' => array(
        'eduglu_book' => '-7',
        'eduglu_polls' => '-8',
        'eduglu_discussion' => '-9',
        'eduglu_about' => '-10',
        'eduglu_job_board' => '-6',
        'eduglu_career_group' => '-5',
        'eduglu_wiki' => '-4',
      ),
      'site_frontpage' => 'discussion',
      'spaces_preset_og' => 'eduglu_protected',
      'previous_features' => array(
        'eduglu_about' => '1',
        'eduglu_book' => '0',
        'eduglu_career_group' => '0',
        'eduglu_discussion' => '1',
        'eduglu_job_board' => '0',
        'eduglu_polls' => '1',
        'eduglu_wiki' => '0',
      ),
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Only site members can see group posts. Members may join this group at will.');
  t('Protected Group');

  $export['eduglu_protected'] = $spaces_presets;
  $spaces_presets = new stdClass;
  $spaces_presets->disabled = FALSE; /* Edit this to true to make a default spaces_presets disabled initially */
  $spaces_presets->api_version = 3;
  $spaces_presets->name = 'eduglu_public';
  $spaces_presets->title = 'Public Group';
  $spaces_presets->description = 'Anyone on the internet can view content from this group. Members may join this group at will.';
  $spaces_presets->space_type = 'og';
  $spaces_presets->value = array(
    'variable' => array(
      'spaces_preset_og' => 'eduglu_public',
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
      'spaces_og_selective' => '0',
      'spaces_og_register' => 0,
      'spaces_og_directory' => 1,
      'spaces_og_private' => 0,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Anyone on the internet can view content from this group. Members may join this group at will.');
  t('Public Group');

  $export['eduglu_public'] = $spaces_presets;
  return $export;
}
