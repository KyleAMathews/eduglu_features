<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function eduglu_groups_context_default_contexts() {
  $export = array();
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'eduglu_group_membership_tools';
  $context->description = 'Context for the group membership tools page.';
  $context->tag = 'eduglu';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'eduglu_group_membership_tools' => 'eduglu_group_membership_tools',
        'eduglu_group_membership_tools:page_1' => 'eduglu_group_membership_tools:page_1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'eduglu_groups-addform' => array(
          'module' => 'eduglu_groups',
          'delta' => 'addform',
          'region' => 'pre_content',
          'weight' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Context for the group membership tools page.');
  t('eduglu');

  $export['eduglu_group_membership_tools'] = $context;
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'groups_listing';
  $context->description = '';
  $context->tag = 'Groups';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'groups_listing' => 'groups_listing',
      ),
    ),
  );
  $context->reactions = array(
    'menu' => 'og',
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Groups');

  $export['groups_listing'] = $context;
  return $export;
}
