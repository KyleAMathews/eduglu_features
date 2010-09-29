<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function eduglu_blog_context_default_contexts() {
  $export = array();
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'eduglu_blog';
  $context->description = 'Context for blog posts and blog views';
  $context->tag = 'eduglu';
  $context->conditions = FALSE;
  $context->reactions = array(
    'menu' => 'blog-posts',
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Context for blog posts and blog views');
  t('eduglu');

  $export['eduglu_blog'] = $context;
  return $export;
}
