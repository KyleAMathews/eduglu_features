<?php

/**
 * Implementation of hook_views_default_views().
 */
function eduglu_quiz_views_default_views() {
  $views = array();

  // Exported view: eduglu_latest_quizzes
  $view = new view;
  $view->name = 'eduglu_latest_quizzes';
  $view->description = 'List of recent quzzes sorted by start date';
  $view->tag = 'quiz';
  $view->view_php = '';
  $view->base_table = 'quiz_node_properties';
  $view->is_cacheable = FALSE;
  $view->api_version = 2;
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->override_option('relationships', array(
    'vid' => array(
      'label' => 'quiz node revision',
      'required' => 0,
      'id' => 'vid',
      'table' => 'quiz_node_properties',
      'field' => 'vid',
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('fields', array(
    'title' => array(
      'label' => 'Title',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'link_to_node' => 1,
      'link_to_node_revision' => 0,
      'exclude' => 0,
      'id' => 'title',
      'table' => 'node_revisions',
      'field' => 'title',
      'relationship' => 'vid',
    ),
    'name' => array(
      'label' => 'Author',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'link_to_user' => 1,
      'overwrite_anonymous' => 0,
      'anonymous_text' => '',
      'exclude' => 0,
      'id' => 'name',
      'table' => 'users',
      'field' => 'name',
      'relationship' => 'vid',
    ),
    'quiz_open' => array(
      'label' => 'Open time',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'date_format' => 'small',
      'custom_date_format' => '',
      'exclude' => 0,
      'id' => 'quiz_open',
      'table' => 'quiz_node_properties',
      'field' => 'quiz_open',
      'relationship' => 'none',
    ),
    'quiz_close' => array(
      'label' => 'Close time',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'date_format' => 'small',
      'custom_date_format' => '',
      'exclude' => 0,
      'id' => 'quiz_close',
      'table' => 'quiz_node_properties',
      'field' => 'quiz_close',
      'relationship' => 'none',
    ),
    'time_limit' => array(
      'label' => 'Time limit',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'exclude' => 0,
      'id' => 'time_limit',
      'table' => 'quiz_node_properties',
      'field' => 'time_limit',
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('sorts', array(
    'quiz_close' => array(
      'order' => 'ASC',
      'granularity' => 'second',
      'id' => 'quiz_close',
      'table' => 'quiz_node_properties',
      'field' => 'quiz_close',
      'relationship' => 'none',
    ),
    'quiz_open' => array(
      'order' => 'ASC',
      'granularity' => 'second',
      'id' => 'quiz_open',
      'table' => 'quiz_node_properties',
      'field' => 'quiz_open',
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('access', array(
    'type' => 'spaces_feature',
    'spaces_feature' => 'eduglu_quiz',
    'perm' => 'access content',
  ));
  $handler->override_option('cache', array(
    'type' => 'none',
  ));
  $handler->override_option('style_plugin', 'table');
  $handler->override_option('style_options', array(
    'grouping' => '',
    'override' => 1,
    'sticky' => 1,
    'order' => 'asc',
    'columns' => array(
      'title' => 'title',
      'name' => 'name',
    ),
    'info' => array(
      'title' => array(
        'sortable' => 0,
        'separator' => '',
      ),
      'name' => array(
        'sortable' => 0,
        'separator' => '',
      ),
    ),
    'default' => '-1',
  ));
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->override_option('path', 'quiz/recent');
  $handler->override_option('menu', array(
    'type' => 'default tab',
    'title' => 'Recent Quizzes',
    'description' => 'Recent quizzes',
    'weight' => '0',
    'name' => 'features',
  ));
  $handler->override_option('tab_options', array(
    'type' => 'none',
    'title' => 'quiz',
    'description' => '',
    'weight' => '0',
    'name' => 'navigation',
  ));

  $views[$view->name] = $view;

  // Exported view: eduglu_quiz_by_taker
  $view = new view;
  $view->name = 'eduglu_quiz_by_taker';
  $view->description = 'View of all the quizzes a user has taken in a group';
  $view->tag = 'quiz';
  $view->view_php = '';
  $view->base_table = 'quiz_node_properties';
  $view->is_cacheable = FALSE;
  $view->api_version = 2;
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->override_option('relationships', array(
    'vid' => array(
      'label' => 'quiz revision',
      'required' => 1,
      'id' => 'vid',
      'table' => 'quiz_node_results',
      'field' => 'vid',
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('fields', array(
    'title' => array(
      'label' => 'Title',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
      ),
      'link_to_node' => 0,
      'exclude' => 0,
      'id' => 'title',
      'table' => 'node_revisions',
      'field' => 'title',
      'relationship' => 'vid',
    ),
    'name' => array(
      'label' => 'Name',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
      ),
      'link_to_user' => 1,
      'overwrite_anonymous' => 0,
      'anonymous_text' => '',
      'exclude' => 0,
      'id' => 'name',
      'table' => 'users',
      'field' => 'name',
      'relationship' => 'vid',
    ),
    'score' => array(
      'label' => 'Score',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
      ),
      'exclude' => 0,
      'id' => 'score',
      'table' => 'quiz_node_results',
      'field' => 'score',
      'relationship' => 'none',
    ),
    'time_start' => array(
      'label' => 'Quiz Start Time.',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
      ),
      'date_format' => 'small',
      'custom_date_format' => '',
      'exclude' => 0,
      'id' => 'time_start',
      'table' => 'quiz_node_results',
      'field' => 'time_start',
      'relationship' => 'none',
    ),
    'time_end' => array(
      'label' => 'Quiz End Time',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
      ),
      'date_format' => 'small',
      'custom_date_format' => '',
      'exclude' => 0,
      'id' => 'time_end',
      'table' => 'quiz_node_results',
      'field' => 'time_end',
      'relationship' => 'none',
    ),
    'quiz_state' => array(
      'label' => 'Quiz State',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'strip_tags' => 0,
        'html' => 0,
      ),
      'exclude' => 0,
      'id' => 'quiz_state',
      'table' => 'quiz_node_results',
      'field' => 'quiz_state',
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('filters', array(
    'nid' => array(
      'operator' => '=',
      'value' => '',
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'which_vid' => 'latest',
      'secondary' => 'results',
      'id' => 'nid',
      'table' => 'quiz_node_properties',
      'field' => 'nid',
      'relationship' => 'none',
      'secondary_group_by' => 'uid',
      'secondary_group_by_table' => 'quiz_node_results',
      'secondary_table' => 'quiz_node_results',
      'secondaries' => array(
        'secondary_group_by' => 'uid',
        'secondary_table' => 'quiz_node_results',
        'secondary_vid' => 'vid',
        'secondary_nid' => 'nid',
      ),
    ),
    'uid' => array(
      'operator' => '=',
      'value' => '',
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'allow_null' => 0,
      'use_current' => 1,
      'id' => 'uid',
      'table' => 'quiz_node_results',
      'field' => 'uid',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('access', array(
    'type' => 'spaces_feature',
    'spaces_feature' => 'eduglu_quiz',
    'perm' => 'access content',
  ));
  $handler->override_option('cache', array(
    'type' => 'none',
  ));
  $handler->override_option('style_plugin', 'table');
  $handler->override_option('style_options', array(
    'grouping' => 'vid',
    'override' => 1,
    'sticky' => 0,
    'order' => 'asc',
    'columns' => array(
      'time_end' => 'time_end',
      'nid' => 'nid',
      'vid' => 'vid',
      'time_start' => 'time_start',
      'score' => 'score',
      'uid' => 'uid',
    ),
    'info' => array(
      'time_end' => array(
        'sortable' => 0,
        'separator' => '',
      ),
      'nid' => array(
        'sortable' => 0,
        'separator' => '',
      ),
      'vid' => array(
        'sortable' => 0,
        'separator' => '',
      ),
      'time_start' => array(
        'sortable' => 0,
        'separator' => '',
      ),
      'score' => array(
        'sortable' => 0,
        'separator' => '',
      ),
      'uid' => array(
        'sortable' => 0,
        'separator' => '',
      ),
    ),
    'default' => '-1',
  ));
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->override_option('path', 'quiz/my-quizzes');
  $handler->override_option('menu', array(
    'type' => 'tab',
    'title' => 'My quiz results',
    'description' => '',
    'weight' => '1',
    'name' => 'navigation',
  ));
  $handler->override_option('tab_options', array(
    'type' => 'none',
    'title' => '',
    'description' => '',
    'weight' => '0',
    'name' => 'navigation',
  ));

  $views[$view->name] = $view;

  return $views;
}
