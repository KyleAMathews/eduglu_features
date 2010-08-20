<?php

/**
 * Implementation of hook_spaces_presets().
 */
function eduglu_members_spaces_presets() {
  $export = array();
  $spaces_presets = new stdClass;
  $spaces_presets->disabled = FALSE; /* Edit this to true to make a default spaces_presets disabled initially */
  $spaces_presets->api_version = 3;
  $spaces_presets->name = 'eduglu_simple_profile';
  $spaces_presets->title = 'Simple Profile';
  $spaces_presets->description = 'Provides simple user profile for EduGlu';
  $spaces_presets->space_type = 'user';
  $spaces_presets->value = FALSE;

  // Translatables
  // Included for use with string extractors like potx.
  t('Provides simple user profile for EduGlu');
  t('Simple Profile');

  $export['eduglu_simple_profile'] = $spaces_presets;
  return $export;
}
