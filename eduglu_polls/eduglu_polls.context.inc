<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function eduglu_polls_context_default_contexts() {
  $export = array();
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'spaces-feature-poll';
  $context->description = 'context for space polls';
  $context->tag = 'eduglu';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'poll' => 'poll',
      ),
      'options' => array(
        'node_form' => 1,
      ),
    ),
    'path' => array(
      'values' => array(
        '*/poll/*' => '*/poll/*',
      ),
    ),
    'views' => array(
      'values' => array(
        'polls' => 'polls',
      ),
    ),
  );
  $context->reactions = array(
    'menu' => 'poll',
  );
  $context->condition_mode = 0;

  $export['spaces-feature-poll'] = $context;
  return $export;
}
