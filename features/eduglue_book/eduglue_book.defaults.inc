<?php

/**
 * Helper to implementation of hook_context_default_contexts().
 */
function _eduglue_book_context_default_contexts() {
  $items = array();

  $items[] = array(
    'namespace' => 'spaces',
    'attribute' => 'feature',
    'value' => 'book',
    'description' => '',
    'node' => array(
      '0' => 'book',
    ),
    'views' => array(
      '0' => 'eduglue_book',
    ),
    'menu' => 'documents',
    'block' => array(
      'diff_inline' => array(
        'module' => 'diff',
        'delta' => 'inline',
        'weight' => -41,
        'region' => 'right',
        'status' => '0',
        'label' => 'Diff: inline diff revisions',
        'type' => 'context_ui',
      ),
      'eduglue_book' => array(
        'module' => 'eduglue',
        'delta' => 'book',
        'weight' => -40,
        'region' => 'right',
        'status' => '0',
        'label' => 'Eduglue: Book',
        'type' => 'context_ui',
      ),
    ),
  );
  return $items;
}

/**
 * Helper to implementation of hook_menu_default_items().
 */
function _eduglue_book_menu_default_items() {
  $items = array();

  $items[] = array(
    'title' => 'Documents',
    'path' => 'documents',
    'weight' => '-50',
    'description' => 'The documents feature lets you store and share information and attachments.',
  );
  // Translatables
  array(
    t('Documents'),
    t('The documents feature lets you store and share information and attachments.'),
  );


  return $items;
}

/**
 * Helper to implementation of hook_user_default_permissions().
 */
function _eduglue_book_user_default_permissions() {
  $permissions = array();

  // Exported permission: add content to books
  $permissions[] = array(
    'name' => 'add content to books',
    'roles' => array(
      '0' => 'admin',
      '1' => 'authenticated user',
      '2' => 'manager',
    ),
  );

  // Exported permission: administer book outlines
  $permissions[] = array(
    'name' => 'administer book outlines',
    'roles' => array(
      '0' => 'admin',
      '1' => 'authenticated user',
      '2' => 'manager',
    ),
  );

  // Exported permission: create book content
  $permissions[] = array(
    'name' => 'create book content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'authenticated user',
      '2' => 'manager',
      '3' => 'Moderator',
    ),
  );

  // Exported permission: create new books
  $permissions[] = array(
    'name' => 'create new books',
    'roles' => array(
      '0' => 'admin',
      '1' => 'authenticated user',
      '2' => 'manager',
    ),
  );

  // Exported permission: delete any book content
  $permissions[] = array(
    'name' => 'delete any book content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'manager',
      '2' => 'Moderator',
    ),
  );

  // Exported permission: delete own book content
  $permissions[] = array(
    'name' => 'delete own book content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'authenticated user',
      '2' => 'manager',
      '3' => 'Moderator',
    ),
  );

  // Exported permission: edit any book content
  $permissions[] = array(
    'name' => 'edit any book content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'authenticated user',
      '2' => 'manager',
      '3' => 'Moderator',
    ),
  );

  return $permissions;
}
