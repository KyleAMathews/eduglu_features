<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function eduglu_about_context_default_contexts() {
  $export = array();
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'eduglu_about';
  $context->description = 'Context for the eduglu_about feature';
  $context->tag = 'eduglu';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'about' => 'about',
        'about/*' => 'about/*',
      ),
    ),
    'views' => array(
      'values' => array(
        'eduglu_about_members' => 'eduglu_about_members',
        'eduglu_about_members:page_1' => 'eduglu_about_members:page_1',
      ),
    ),
  );
  $context->reactions = array(
    'menu' => 'about/group',
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Context for the eduglu_about feature');
  t('eduglu');

  $export['eduglu_about'] = $context;
  return $export;
}
