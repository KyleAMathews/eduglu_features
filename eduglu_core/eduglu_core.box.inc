<?php

/**
 * Implementation of hook_default_box().
 */
function eduglu_core_default_box() {
  $export = array();
  $box = new stdClass;
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'box-50402db1';
  $box->plugin_key = 'simple';
  $box->title = 'Footer links';
  $box->description = 'Random Footer links';
  $box->options = array(
    'body' => '<p><a href="http://drupal.org">Drupal.org</a></p><p><a href="http://google.com">Random link</a></p>',
    'format' => '3',
  );

  $export['box-50402db1'] = $box;
  $box = new stdClass;
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'box-cb50d852';
  $box->plugin_key = 'simple';
  $box->title = 'Eduglu Help';
  $box->description = 'A sample box';
  $box->options = array(
    'body' => '<p><a href="http://community.eduglu.org">Eduglu Community</a></p><p><a href="http://drupal.org/project/issues/eduglu?status=All&categories=All">Eduglu Issue Queue</a></p>',
    'format' => '3',
  );

  $export['box-cb50d852'] = $box;
  $box = new stdClass;
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'box-d01f53da';
  $box->plugin_key = 'simple';
  $box->title = 'Eduglu News';
  $box->description = 'Another sample box';
  $box->options = array(
    'body' => '<p><a href="http://eduglu.com/blog">Eduglu blog</a></p><p><a href="http://eduglu.com/signup-newsletter">Eduglu newsletter</a></p>',
    'format' => '3',
  );

  $export['box-d01f53da'] = $box;
  return $export;
}
