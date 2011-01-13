<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function eduglu_discussion_context_default_contexts() {
  $export = array();
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'discussion-page';
  $context->description = '';
  $context->tag = 'eduglu';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'story' => 'story',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'eduglu_core-thread_tools' => array(
          'module' => 'eduglu_core',
          'delta' => 'thread_tools',
          'region' => 'right',
          'weight' => 0,
        ),
        'eduglu_core-thread_stats' => array(
          'module' => 'eduglu_core',
          'delta' => 'thread_stats',
          'region' => 'right',
          'weight' => 1,
        ),
      ),
    ),
    'menu' => 'discussion',
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('eduglu');

  $export['discussion-page'] = $context;
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'spaces-feature-discussion';
  $context->description = '';
  $context->tag = 'eduglu';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'discussions' => 'discussions',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-26367b846de6af2abd97cbb2d76f4362' => array(
          'module' => 'views',
          'delta' => '26367b846de6af2abd97cbb2d76f4362',
          'region' => 'right',
          'weight' => 0,
        ),
      ),
    ),
    'menu' => 'discussion',
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('eduglu');

  $export['spaces-feature-discussion'] = $context;
  return $export;
}
