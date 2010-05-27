<?php

/**
 * Helper to implementation of hook_context_default_contexts().
 */
function _eduglu_front_page_context_default_contexts() {
  $export = array();
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'context_ui-section-frontpage';
  $context->description = 'Controls the front page';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'frontpage' => 'frontpage',
        '<front>' => '<front>',
      ),
      'options' => array(),
    ),
  );
  $context->reactions = array();
  $context->condition_mode = 0;

  $translatables['context_ui-section-frontpage'] = array(
    t('Controls the front page'),
  );

  $export['context_ui-section-frontpage'] = $context;
  return $export;
}

/**
 * Helper to implementation of hook_ctools_plugin_api().
 */
function _eduglu_front_page_ctools_plugin_api() {
  $args = func_get_args();
  $module = array_shift($args);
  $api = array_shift($args);
  if ($module == "context" && $api == "context") {
    return array("version" => 3);
  }
}
