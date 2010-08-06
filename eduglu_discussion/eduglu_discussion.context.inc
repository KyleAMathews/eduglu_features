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
        'node_form' => 1,
      ),
    ),
    'views' => array(
      'values' => array(
        'og_ghp_ron_spaces' => 'og_ghp_ron_spaces',
      ),
    ),
  );
  $context->reactions = array(
    'menu' => 'discussion',
  );
  $context->condition_mode = 0;

  $export['spaces-feature-discussion'] = $context;
  return $export;
}
