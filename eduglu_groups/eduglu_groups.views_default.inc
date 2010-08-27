<?php

/**
 * Implementation of hook_views_default_views().
 */
function eduglu_groups_views_default_views() {
  $views = array();

  // Exported view: eduglu_group_membership_tools
  $view = new view;
  $view->name = 'eduglu_group_membership_tools';
  $view->description = 'Tools for group admins to manage their members';
  $view->tag = 'eduglu';
  $view->view_php = '';
  $view->base_table = 'users';
  $view->is_cacheable = FALSE;
  $view->api_version = 2;
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->override_option('fields', array(
    'realname' => array(
      'label' => 'Name',
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
      'id' => 'realname',
      'table' => 'realname',
      'field' => 'realname',
      'relationship' => 'none',
    ),
    'is_admin' => array(
      'label' => 'Is member an admin in a group',
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
      'id' => 'is_admin',
      'table' => 'og_uid',
      'field' => 'is_admin',
      'relationship' => 'none',
    ),
    'created' => array(
      'label' => 'Membership create date',
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
      'id' => 'created',
      'table' => 'og_uid',
      'field' => 'created',
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('sorts', array(
    'is_admin' => array(
      'order' => 'DESC',
      'id' => 'is_admin',
      'table' => 'og_uid',
      'field' => 'is_admin',
      'relationship' => 'none',
    ),
    'realname' => array(
      'order' => 'ASC',
      'id' => 'realname',
      'table' => 'realname',
      'field' => 'realname',
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('filters', array(
    'current' => array(
      'operator' => '=',
      'value' => '',
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'current',
      'table' => 'spaces',
      'field' => 'current',
      'relationship' => 'none',
    ),
    'status' => array(
      'operator' => '=',
      'value' => '1',
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'status',
      'table' => 'users',
      'field' => 'status',
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('access', array(
    'type' => 'perm',
    'perm' => 'administer organic groups',
  ));
  $handler->override_option('cache', array(
    'type' => 'none',
  ));
  $handler->override_option('items_per_page', 100);
  $handler->override_option('use_pager', '1');
  $handler->override_option('style_plugin', 'bulk');
  $handler->override_option('style_options', array(
    'grouping' => '',
    'override' => 1,
    'sticky' => 1,
    'order' => 'asc',
    'columns' => array(
      'realname' => 'realname',
      'is_admin' => 'is_admin',
      'created' => 'created',
    ),
    'info' => array(
      'realname' => array(
        'sortable' => 1,
        'separator' => '',
      ),
      'is_admin' => array(
        'sortable' => 1,
        'separator' => '',
      ),
      'created' => array(
        'sortable' => 1,
        'separator' => '',
      ),
    ),
    'default' => '-1',
    'execution_type' => '2',
    'display_type' => '0',
    'hide_select_all' => 0,
    'skip_confirmation' => 0,
    'display_result' => 1,
    'merge_single_action' => 1,
    'selected_operations' => array(
      'eduglu_groups_demote_user_action' => 'eduglu_groups_demote_user_action',
      'eduglu_groups_move_user_action' => 'eduglu_groups_move_user_action',
      'eduglu_groups_promote_user_action' => 'eduglu_groups_promote_user_action',
      'eduglu_groups_remove_user_action' => 'eduglu_groups_remove_user_action',
      'og_approve_user_action' => 0,
      'user_block_ip_action' => 0,
      'user_block_user_action' => 0,
      'user_user_operations_block' => 0,
      'views_bulk_operations_delete_user_action' => 0,
      'og_demote_user_action' => 0,
      'og_deny_user_action' => 0,
      'system_message_action' => 0,
      'views_bulk_operations_action' => 0,
      'views_bulk_operations_script_action' => 0,
      'views_bulk_operations_user_roles_action' => 0,
      'views_bulk_operations_argument_selector_action' => 0,
      'og_promote_user_action' => 0,
      'system_goto_action' => 0,
      'system_send_email_action' => 0,
      'og_subscribe_user_action' => 0,
      'user_user_operations_unblock' => 0,
      'og_unsubscribe_user_action' => 0,
      'pathauto_user_update_alias_multiple:620e193b20ba9caa374fea9ca0ad38f0' => 0,
    ),
  ));
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->override_option('path', 'manage-members');
  $handler->override_option('menu', array(
    'type' => 'normal',
    'title' => 'Manage Group Members',
    'description' => '',
    'weight' => '0',
    'name' => 'navigation',
  ));
  $handler->override_option('tab_options', array(
    'type' => 'none',
    'title' => '',
    'description' => '',
    'weight' => 0,
    'name' => 'navigation',
  ));

  $views[$view->name] = $view;

  // Exported view: eduglu_group_rss_feed
  $view = new view;
  $view->name = 'eduglu_group_rss_feed';
  $view->description = 'Provides an RSS feed of new content from a group';
  $view->tag = 'eduglu';
  $view->view_php = '';
  $view->base_table = 'node';
  $view->is_cacheable = FALSE;
  $view->api_version = 2;
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->override_option('sorts', array(
    'created' => array(
      'order' => 'DESC',
      'granularity' => 'second',
      'id' => 'created',
      'table' => 'node',
      'field' => 'created',
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('filters', array(
    'current' => array(
      'operator' => 'all',
      'value' => '',
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'current',
      'table' => 'spaces',
      'field' => 'current',
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('access', array(
    'type' => 'none',
  ));
  $handler->override_option('cache', array(
    'type' => 'none',
  ));
  $handler->override_option('items_per_page', 15);
  $handler->override_option('row_plugin', 'node');
  $handler->override_option('row_options', array(
    'relationship' => 'none',
    'build_mode' => 'full',
    'links' => 0,
    'comments' => 1,
  ));
  $handler = $view->new_display('feed', 'Feed', 'feed_1');
  $handler->override_option('style_plugin', 'rss');
  $handler->override_option('style_options', array(
    'mission_description' => FALSE,
    'description' => '',
  ));
  $handler->override_option('row_plugin', 'node_rss');
  $handler->override_option('row_options', array(
    'relationship' => 'none',
    'item_length' => 'fulltext',
  ));
  $handler->override_option('path', 'rss.xml');
  $handler->override_option('menu', array(
    'type' => 'none',
    'title' => '',
    'description' => '',
    'weight' => 0,
    'name' => 'navigation',
  ));
  $handler->override_option('tab_options', array(
    'type' => 'none',
    'title' => '',
    'description' => '',
    'weight' => 0,
    'name' => 'navigation',
  ));
  $handler->override_option('displays', array(
    'default' => 0,
  ));
  $handler->override_option('sitename_title', 1);

  $views[$view->name] = $view;

  return $views;
}
