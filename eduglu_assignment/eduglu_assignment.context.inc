<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function eduglu_assignment_context_default_contexts() {
  $export = array();
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'eduglu_assignment';
  $context->description = 'Context for Assignments';
  $context->tag = 'eduglu';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'assignment' => 'assignment',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    'views' => array(
      'values' => array(
        'eduglu_assignment' => 'eduglu_assignment',
        'eduglu_assignment:page_1' => 'eduglu_assignment:page_1',
      ),
    ),
  );
  $context->reactions = array(
    'menu' => 'assignments',
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Context for Assignments');
  t('eduglu');

  $export['eduglu_assignment'] = $context;
  return $export;
}
