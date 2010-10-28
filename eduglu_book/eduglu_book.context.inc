<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function eduglu_book_context_default_contexts() {
  $export = array();
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'spaces-feature-book';
  $context->description = '';
  $context->tag = 'Book';
  $context->conditions = array(
    'bookroot' => array(
      'values' => array(
        'book' => 'book',
      ),
      'options' => array(
        'node_form' => 1,
      ),
    ),
    'views' => array(
      'values' => array(
        'eduglu_book' => 'eduglu_book',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'diff-inline' => array(
          'module' => 'diff',
          'delta' => 'inline',
          'region' => 'right',
          'weight' => 0,
        ),
        'eduglu_book-book_all' => array(
          'module' => 'eduglu_book',
          'delta' => 'book_all',
          'region' => 'right',
          'weight' => 1,
        ),
      ),
    ),
    'menu' => 'materials',
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Book');

  $export['spaces-feature-book'] = $context;
  return $export;
}
