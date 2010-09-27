<?php

/**
 * Implementation of hook_strongarm().
 */
function eduglu_blog_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_eduglu_blog';
  $strongarm->value = 0;

  $export['comment_anonymous_eduglu_blog'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_controls_eduglu_blog';
  $strongarm->value = '3';

  $export['comment_controls_eduglu_blog'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_eduglu_blog';
  $strongarm->value = '4';

  $export['comment_default_mode_eduglu_blog'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_order_eduglu_blog';
  $strongarm->value = '1';

  $export['comment_default_order_eduglu_blog'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_eduglu_blog';
  $strongarm->value = '50';

  $export['comment_default_per_page_eduglu_blog'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_eduglu_blog';
  $strongarm->value = '2';

  $export['comment_eduglu_blog'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_eduglu_blog';
  $strongarm->value = '0';

  $export['comment_form_location_eduglu_blog'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_eduglu_blog';
  $strongarm->value = '1';

  $export['comment_preview_eduglu_blog'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_eduglu_blog';
  $strongarm->value = '1';

  $export['comment_subject_field_eduglu_blog'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_eduglu_blog';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );

  $export['node_options_eduglu_blog'] = $strongarm;
  return $export;
}
