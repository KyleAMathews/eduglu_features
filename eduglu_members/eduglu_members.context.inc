<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function eduglu_members_context_default_contexts() {
  $export = array();
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'spaces-feature-user';
  $context->description = 'User profile page';
  $context->tag = 'eduglu';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'eduglu_profile:page_1' => 'eduglu_profile:page_1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'eduglu_members-0' => array(
          'module' => 'eduglu_members',
          'delta' => 0,
          'region' => 'right',
          'weight' => 0,
        ),
        'views-eduglu_tracker-block_1' => array(
          'module' => 'views',
          'delta' => 'eduglu_tracker-block_1',
          'region' => 'content',
          'weight' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  $export['spaces-feature-user'] = $context;
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'spaces_dashboard-custom-1';
  $context->description = 'Dashboard';
  $context->tag = 'Dashboard';
  $context->conditions = array();
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'og-3' => array(
          'module' => 'og',
          'delta' => 3,
          'region' => 'right',
          'weight' => 0,
        ),
        'views-og_my-block_1' => array(
          'module' => 'views',
          'delta' => 'og_my-block_1',
          'region' => 'right',
          'weight' => 1,
        ),
        'views-eduglu_recent_activity-block_1' => array(
          'module' => 'views',
          'delta' => 'eduglu_recent_activity-block_1',
          'region' => 'content',
          'weight' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  $export['spaces_dashboard-custom-1'] = $context;
  return $export;
}
