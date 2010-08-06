<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function eduglu_welcome_context_default_contexts() {
  $export = array();
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'eduglu_welcome';
  $context->description = 'Manages the Eduglu welcome feature';
  $context->tag = 'eduglu';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'welcome' => 'welcome',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'boxes-box-e9df3b15' => array(
          'module' => 'boxes',
          'delta' => 'box-e9df3b15',
          'region' => 'right',
          'weight' => 0,
        ),
        'user-0' => array(
          'module' => 'user',
          'delta' => 0,
          'region' => 'right',
          'weight' => 1,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  $export['eduglu_welcome'] = $context;
  return $export;
}
