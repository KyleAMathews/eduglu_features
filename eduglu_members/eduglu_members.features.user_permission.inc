<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function eduglu_members_user_default_permissions() {
  $permissions = array();

  // Exported permission: access user profiles
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      '0' => 'admin',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
    ),
  );

  // Exported permission: administer permissions
  $permissions['administer permissions'] = array(
    'name' => 'administer permissions',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: administer users
  $permissions['administer users'] = array(
    'name' => 'administer users',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: create uprofile content
  $permissions['create uprofile content'] = array(
    'name' => 'create uprofile content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: delete any uprofile content
  $permissions['delete any uprofile content'] = array(
    'name' => 'delete any uprofile content',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: delete own uprofile content
  $permissions['delete own uprofile content'] = array(
    'name' => 'delete own uprofile content',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: edit any uprofile content
  $permissions['edit any uprofile content'] = array(
    'name' => 'edit any uprofile content',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: edit field_about_me
  $permissions['edit field_about_me'] = array(
    'name' => 'edit field_about_me',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: edit field_blog
  $permissions['edit field_blog'] = array(
    'name' => 'edit field_blog',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: edit field_location
  $permissions['edit field_location'] = array(
    'name' => 'edit field_location',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: edit field_name
  $permissions['edit field_name'] = array(
    'name' => 'edit field_name',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: edit own uprofile content
  $permissions['edit own uprofile content'] = array(
    'name' => 'edit own uprofile content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: view field_about_me
  $permissions['view field_about_me'] = array(
    'name' => 'view field_about_me',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: view field_blog
  $permissions['view field_blog'] = array(
    'name' => 'view field_blog',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: view field_location
  $permissions['view field_location'] = array(
    'name' => 'view field_location',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: view field_name
  $permissions['view field_name'] = array(
    'name' => 'view field_name',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: view imagecache user_image_default
  $permissions['view imagecache user_image_default'] = array(
    'name' => 'view imagecache user_image_default',
    'roles' => array(
      '0' => 'admin',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
    ),
  );

  // Exported permission: view imagecache user_image_large
  $permissions['view imagecache user_image_large'] = array(
    'name' => 'view imagecache user_image_large',
    'roles' => array(
      '0' => 'admin',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
    ),
  );

  return $permissions;
}
