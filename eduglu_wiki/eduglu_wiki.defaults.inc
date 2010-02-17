<?php

/**
 * Helper to implementation of hook_context_default_contexts().
 */
function _eduglu_wiki_context_default_contexts() {
  $items = array();

  $items[] = array(
    'namespace' => 'spaces',
    'attribute' => 'feature',
    'value' => 'wiki',
    'description' => 'Context for eduglu_wiki feature',
    'node' => array(
      '0' => 'wiki',
    ),
    'views' => array(
      '0' => 'eduglu_wiki',
    ),
    'menu' => 'wiki',
    'block' => array(),
  );
  return $items;
}

/**
 * Helper to implementation of hook_menu_default_items().
 */
function _eduglu_wiki_menu_default_items() {
  $items = array();

  $items[] = array(
    'title' => 'Wiki',
    'path' => 'wiki',
    'weight' => '0',
  );
  // Translatables
  array(
    t('Wiki'),
  );


  return $items;
}

/**
 * Helper to implementation of hook_user_default_permissions().
 */
function _eduglu_wiki_user_default_permissions() {
  $permissions = array();

  // Exported permission: create wiki content
  $permissions[] = array(
    'name' => 'create wiki content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: delete any wiki content
  $permissions[] = array(
    'name' => 'delete any wiki content',
    'roles' => array(
      '0' => 'Moderator',
      '1' => 'admin',
    ),
  );

  // Exported permission: delete own wiki content
  $permissions[] = array(
    'name' => 'delete own wiki content',
    'roles' => array(
      '0' => 'Moderator',
      '1' => 'admin',
      '2' => 'authenticated user',
    ),
  );

  // Exported permission: edit any wiki content
  $permissions[] = array(
    'name' => 'edit any wiki content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: edit own wiki content
  $permissions[] = array(
    'name' => 'edit own wiki content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'authenticated user',
    ),
  );

  return $permissions;
}
