<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function eduglu_discussion_context_default_contexts() {
  $export = array();
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'spaces-feature-discussion';
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
    'views' => array(
      'values' => array(
        'discussions' => 'discussions',
      ),
    ),
  );
  $context->reactions = array(
    'menu' => 'discussion',
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('eduglu');

  $export['spaces-feature-discussion'] = $context;
  return $export;
}
