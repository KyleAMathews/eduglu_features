<?php

/**
 * Helper to implementation of hook_context_default_contexts().
 */
function _eduglu_welcome_context_default_contexts() {
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
        'user-0' => array(
          'module' => 'user',
          'delta' => 0,
          'region' => 'right',
          'weight' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  $translatables['eduglu_welcome'] = array(
    t('Manages the Eduglu welcome feature'),
    t('eduglu'),
  );

  $export['eduglu_welcome'] = $context;
  return $export;
}

/**
 * Helper to implementation of hook_ctools_plugin_api().
 */
function _eduglu_welcome_ctools_plugin_api() {
  $args = func_get_args();
  $module = array_shift($args);
  $api = array_shift($args);
  if ($module == "context" && $api == "context") {
    return array("version" => 3);
  }
}
