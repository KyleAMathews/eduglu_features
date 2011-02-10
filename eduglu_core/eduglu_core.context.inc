<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function eduglu_core_context_default_contexts() {
  $export = array();
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'footer';
  $context->description = 'Footer region';
  $context->tag = 'eduglu';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'boxes-box-cb50d852' => array(
          'module' => 'boxes',
          'delta' => 'box-cb50d852',
          'region' => 'footer1',
          'weight' => 0,
        ),
        'boxes-box-d01f53da' => array(
          'module' => 'boxes',
          'delta' => 'box-d01f53da',
          'region' => 'footer2',
          'weight' => 0,
        ),
        'boxes-box-50402db1' => array(
          'module' => 'boxes',
          'delta' => 'box-50402db1',
          'region' => 'footer3',
          'weight' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Footer region');
  t('eduglu');

  $export['footer'] = $context;
  return $export;
}
