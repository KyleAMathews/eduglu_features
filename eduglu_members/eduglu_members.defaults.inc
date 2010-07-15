<?php

/**
 * Helper to implementation of hook_content_default_fields().
 */
function _eduglu_members_content_default_fields() {
  $fields = array();

  // Exported field: field_about_me
  $fields[] = array(
    'field_name' => 'field_about_me',
    'type_name' => 'uprofile',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '1',
    'max_length' => '1500',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => '10',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'value' => '',
          'format' => '1',
          '_error_element' => 'default_value_widget][field_about_me][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'About Me',
      'weight' => '-6',
      'description' => '',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Exported field: field_blog
  $fields[] = array(
    'field_name' => 'field_blog',
    'type_name' => 'uprofile',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'link',
    'required' => '0',
    'multiple' => '0',
    'module' => 'link',
    'active' => '1',
    'attributes' => array(
      'target' => 'default',
      'rel' => '',
      'class' => '',
    ),
    'display' => array(
      'url_cutoff' => '80',
    ),
    'url' => 0,
    'title' => 'none',
    'title_value' => '',
    'enable_tokens' => 0,
    'validate_url' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'url' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Website',
      'weight' => '-7',
      'description' => 'Your home on the web',
      'type' => 'link',
      'module' => 'link',
    ),
  );

  // Exported field: field_location
  $fields[] = array(
    'field_name' => 'field_location',
    'type_name' => 'uprofile',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => '1',
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_location][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Location',
      'weight' => '-8',
      'description' => 'City, State or Province, Country',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_name
  $fields[] = array(
    'field_name' => 'field_name',
    'type_name' => 'uprofile',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '1',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => '1',
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_name][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Name',
      'weight' => '-9',
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Translatables
  array(
    t('About Me'),
    t('Location'),
    t('Name'),
    t('Website'),
  );

  return $fields;
}

/**
 * Helper to implementation of hook_context_default_contexts().
 */
function _eduglu_members_context_default_contexts() {
  $export = array();
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'spaces-feature-user';
  $context->description = 'User profile page';
  $context->tag = 'eduglu';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'eduglu_profile:page_1' => 'eduglu_profile:page_1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'eduglu_members-0' => array(
          'module' => 'eduglu_members',
          'delta' => 0,
          'region' => 'right',
          'weight' => 0,
        ),
        'views-eduglu_tracker-block_1' => array(
          'module' => 'views',
          'delta' => 'eduglu_tracker-block_1',
          'region' => 'content',
          'weight' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  $translatables['spaces-feature-user'] = array(
    t('User profile page'),
    t('eduglu'),
  );

  $export['spaces-feature-user'] = $context;
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'spaces_dashboard-custom-1';
  $context->description = 'Dashboard';
  $context->tag = 'Dashboard';
  $context->conditions = array();
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-og_my-block_1' => array(
          'module' => 'views',
          'delta' => 'og_my-block_1',
          'region' => 'right',
          'weight' => 0,
        ),
        'user-3' => array(
          'module' => 'user',
          'delta' => 3,
          'region' => 'right',
          'weight' => 1,
        ),
        'views-eduglu_recent_activity-block_1' => array(
          'module' => 'views',
          'delta' => 'eduglu_recent_activity-block_1',
          'region' => 'content',
          'weight' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  $translatables['spaces_dashboard-custom-1'] = array(
    t('Dashboard'),
  );

  $export['spaces_dashboard-custom-1'] = $context;
  return $export;
}

/**
 * Helper to implementation of hook_ctools_plugin_api().
 */
function _eduglu_members_ctools_plugin_api() {
  $args = func_get_args();
  $module = array_shift($args);
  $api = array_shift($args);
  if ($module == "context" && $api == "context") {
    return array("version" => 3);
  }
  elseif ($module == "spaces" && $api == "spaces") {
    return array("version" => 3);
  }
  elseif ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Helper to implementation of hook_fieldgroup_default_groups().
 */
function _eduglu_members_fieldgroup_default_groups() {
  $groups = array();

  // Exported group: group_about
  $groups[] = array(
    'group_type' => 'standard',
    'type_name' => 'uprofile',
    'group_name' => 'group_about',
    'label' => 'Basic Info',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset',
        'description' => '',
      ),
      'display' => array(
        'description' => '',
        'teaser' => NULL,
        'full' => NULL,
        'label' => NULL,
      ),
    ),
    'weight' => '1',
    'fields' => array(
      '0' => 'field_name',
      '1' => 'field_location',
      '2' => 'field_blog',
      '3' => 'field_about_me',
    ),
  );

  // Exported group: group_contact
  $groups[] = array(
    'group_type' => 'standard',
    'type_name' => 'uprofile',
    'group_name' => 'group_contact',
    'label' => 'Contact',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset_collapsible',
        'description' => '',
      ),
      'display' => array(
        'description' => '',
        'teaser' => NULL,
        'full' => NULL,
        'label' => NULL,
      ),
    ),
    'weight' => '5',
    'fields' => array(),
  );

  // Exported group: group_links
  $groups[] = array(
    'group_type' => 'standard',
    'type_name' => 'uprofile',
    'group_name' => 'group_links',
    'label' => 'Links',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset_collapsible',
        'description' => '',
      ),
      'display' => array(
        'description' => '',
        'teaser' => NULL,
        'full' => NULL,
        'label' => NULL,
      ),
    ),
    'weight' => '7',
    'fields' => array(),
  );

  // Translatables
  array(
    t('Basic Info'),
    t('Contact'),
    t('Links'),
  );

  return $groups;
}

/**
 * Helper to implementation of hook_imagecache_default_presets().
 */
function _eduglu_members_imagecache_default_presets() {
  $items = array(
    '25x25_crop' => array(
      'presetname' => '25x25_crop',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale_and_crop',
          'data' => array(
            'width' => '25',
            'height' => '25',
          ),
        ),
      ),
    ),
    '30x30_crop' => array(
      'presetname' => '30x30_crop',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale_and_crop',
          'data' => array(
            'width' => '30',
            'height' => '30',
          ),
        ),
      ),
    ),
    'user_image_default' => array(
      'presetname' => 'user_image_default',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale_and_crop',
          'data' => array(
            'width' => '100',
            'height' => '100',
          ),
        ),
      ),
    ),
    'user_image_large' => array(
      'presetname' => 'user_image_large',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale_and_crop',
          'data' => array(
            'width' => '200',
            'height' => '200',
          ),
        ),
      ),
    ),
  );
  return $items;
}

/**
 * Helper to implementation of hook_spaces_presets().
 */
function _eduglu_members_spaces_presets() {
  $export = array();
  $spaces_presets = new stdClass;
  $spaces_presets->disabled = FALSE; /* Edit this to true to make a default spaces_presets disabled initially */
  $spaces_presets->api_version = 3;
  $spaces_presets->name = 'eduglu_simple_profile';
  $spaces_presets->title = 'Simple Profile';
  $spaces_presets->description = 'Provides simple user profile for EduGlu';
  $spaces_presets->space_type = 'user';
  $spaces_presets->value = FALSE;

  $translatables['eduglu_simple_profile'] = array(
    t('Provides simple user profile for EduGlu'),
    t('Simple Profile'),
  );

  $export['eduglu_simple_profile'] = $spaces_presets;
  return $export;
}

/**
 * Helper to implementation of hook_user_default_permissions().
 */
function _eduglu_members_user_default_permissions() {
  $permissions = array();

  // Exported permission: access user profiles
  $permissions[] = array(
    'name' => 'access user profiles',
    'roles' => array(
      '0' => 'admin',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
    ),
  );

  // Exported permission: administer permissions
  $permissions[] = array(
    'name' => 'administer permissions',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: administer users
  $permissions[] = array(
    'name' => 'administer users',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: create uprofile content
  $permissions[] = array(
    'name' => 'create uprofile content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: delete any uprofile content
  $permissions[] = array(
    'name' => 'delete any uprofile content',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: delete own uprofile content
  $permissions[] = array(
    'name' => 'delete own uprofile content',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: edit any uprofile content
  $permissions[] = array(
    'name' => 'edit any uprofile content',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: edit own uprofile content
  $permissions[] = array(
    'name' => 'edit own uprofile content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: view imagecache user_image_default
  $permissions[] = array(
    'name' => 'view imagecache user_image_default',
    'roles' => array(
      '0' => 'admin',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
    ),
  );

  // Exported permission: view imagecache user_image_large
  $permissions[] = array(
    'name' => 'view imagecache user_image_large',
    'roles' => array(
      '0' => 'admin',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
    ),
  );

  return $permissions;
}

/**
 * Helper to implementation of hook_strongarm().
 */
function _eduglu_members_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_uprofile';
  $strongarm->value = 0;

  $export['comment_anonymous_uprofile'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_controls_uprofile';
  $strongarm->value = '1';

  $export['comment_controls_uprofile'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_uprofile';
  $strongarm->value = '4';

  $export['comment_default_mode_uprofile'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_order_uprofile';
  $strongarm->value = '2';

  $export['comment_default_order_uprofile'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_uprofile';
  $strongarm->value = '50';

  $export['comment_default_per_page_uprofile'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_uprofile';
  $strongarm->value = '1';

  $export['comment_form_location_uprofile'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_uprofile';
  $strongarm->value = '0';

  $export['comment_preview_uprofile'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_uprofile';
  $strongarm->value = '1';

  $export['comment_subject_field_uprofile'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_upload_uprofile';
  $strongarm->value = '0';

  $export['comment_upload_uprofile'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_uprofile';
  $strongarm->value = '0';

  $export['comment_uprofile'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_uprofile';
  $strongarm->value = array(
    'title' => '-5',
    'revision_information' => '-3',
    'author' => '-2',
    'options' => '-1',
    'comment_settings' => '0',
    'menu' => '-4',
  );

  $export['content_extra_weights_uprofile'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_profile_uprofile';
  $strongarm->value = array(
    'weight' => '0',
    'user_display' => '0',
    'edit_link' => 0,
    'edit_tab' => '0',
    'add_link' => 0,
  );

  $export['content_profile_uprofile'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_profile_use_uprofile';
  $strongarm->value = 1;

  $export['content_profile_use_uprofile'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_uprofile';
  $strongarm->value = array(
    '0' => 'status',
  );

  $export['node_options_uprofile'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'og_content_type_usage_uprofile';
  $strongarm->value = 'omitted';

  $export['og_content_type_usage_uprofile'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'show_preview_changes_uprofile';
  $strongarm->value = 0;

  $export['show_preview_changes_uprofile'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'spaces_features';
  $strongarm->value = array(
    'eduglu_welcome' => '1',
    'spaces_dashboard' => '1',
  );

  $export['spaces_features'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'spaces_preset_user';
  $strongarm->value = 'eduglu_simple_profile';

  $export['spaces_preset_user'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'upload_uprofile';
  $strongarm->value = '0';

  $export['upload_uprofile'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_email_verification';
  $strongarm->value = TRUE;

  $export['user_email_verification'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_password_reset_body';
  $strongarm->value = '!username,
  
  A request to reset the password for your account has been made at !site.
  
  You may now log in to !uri_brief by clicking on this link or copying and pasting it in your browser:
  
  !login_url
  
  This is a one-time login, so it can be used only once. It expires after one day and nothing will happen if it\'s not used.
  
  After logging in, you will be redirected to !edit_uri so you can change your password.';

  $export['user_mail_password_reset_body'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_password_reset_subject';
  $strongarm->value = 'Replacement login information for !username at !site';

  $export['user_mail_password_reset_subject'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_register_admin_created_body';
  $strongarm->value = '!username,
  
  A site administrator at !site has created an account for you. You may now log in to !login_uri using the following username and password:
  
  username: !username
  password: !password
  
  You may also log in by clicking on this link or copying and pasting it in your browser:
  
  !login_url
  
  This is a one-time login, so it can be used only once.
  
  After logging in, you will be redirected to !edit_uri so you can change your password.
  
  
  --  !site team';

  $export['user_mail_register_admin_created_body'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_register_admin_created_subject';
  $strongarm->value = 'An administrator created an account for you at !site';

  $export['user_mail_register_admin_created_subject'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_register_no_approval_required_body';
  $strongarm->value = '!username,
  
  Thank you for registering at !site. You may now log in to !login_uri using the following username and password:
  
  username: !username
  password: !password
  
  You may also log in by clicking on this link or copying and pasting it in your browser:
  
  !login_url
  
  This is a one-time login, so it can be used only once.
  
  After logging in, you will be redirected to !edit_uri so you can change your password.
  
  
  --  !site team';

  $export['user_mail_register_no_approval_required_body'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_register_no_approval_required_subject';
  $strongarm->value = 'Account details for !username at !site';

  $export['user_mail_register_no_approval_required_subject'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_register_pending_approval_body';
  $strongarm->value = '!username,
  
  Thank you for registering at !site. Your application for an account is currently pending approval. Once it has been granted, you may log in to !login_uri using the following username and password:
  
  username: !username
  password: !password
  
  You may also log in by clicking on this link or copying and pasting it in your browser:
  
  !login_url
  
  This is a one-time login, so it can be used only once.
  
  After logging in, you may wish to change your password at !edit_uri
  
  
  --  !site team';

  $export['user_mail_register_pending_approval_body'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_register_pending_approval_subject';
  $strongarm->value = 'Account details for !username at !site (pending admin approval)';

  $export['user_mail_register_pending_approval_subject'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_status_activated_body';
  $strongarm->value = '!username,
  
  Your account at !site has been activated.
  
  You may now log in by clicking on this link or copying and pasting it in your browser:
  
  !login_url
  
  This is a one-time login, so it can be used only once.
  
  After logging in, you will be redirected to !edit_uri so you can change your password.
  
  Once you have set your own password, you will be able to log in to !login_uri in the future using:
  
  username: !username
  ';

  $export['user_mail_status_activated_body'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_status_activated_notify';
  $strongarm->value = 1;

  $export['user_mail_status_activated_notify'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_status_activated_subject';
  $strongarm->value = 'Account details for !username at !site (approved)';

  $export['user_mail_status_activated_subject'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_status_blocked_body';
  $strongarm->value = '!username,
  
  Your account on !site has been blocked.';

  $export['user_mail_status_blocked_body'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_status_blocked_notify';
  $strongarm->value = 0;

  $export['user_mail_status_blocked_notify'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_status_blocked_subject';
  $strongarm->value = 'Account details for !username at !site (blocked)';

  $export['user_mail_status_blocked_subject'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_status_deleted_body';
  $strongarm->value = '!username,
  
  Your account on !site has been deleted.';

  $export['user_mail_status_deleted_body'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_status_deleted_notify';
  $strongarm->value = 0;

  $export['user_mail_status_deleted_notify'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_status_deleted_subject';
  $strongarm->value = 'Account details for !username at !site (deleted)';

  $export['user_mail_status_deleted_subject'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_picture_default';
  $strongarm->value = 'sites/all/themes/dewey/images/default_user_avatar.png';

  $export['user_picture_default'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_picture_dimensions';
  $strongarm->value = '1600x1400';

  $export['user_picture_dimensions'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_picture_file_size';
  $strongarm->value = '1500';

  $export['user_picture_file_size'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_picture_guidelines';
  $strongarm->value = '';

  $export['user_picture_guidelines'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_picture_imagecache_comments';
  $strongarm->value = '3';

  $export['user_picture_imagecache_comments'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_picture_imagecache_profiles';
  $strongarm->value = 'user_image_default';

  $export['user_picture_imagecache_profiles'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_picture_imagecache_profiles_default';
  $strongarm->value = 'user_image_default';

  $export['user_picture_imagecache_profiles_default'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_picture_imagecache_profiles_min_height';
  $strongarm->value = '200';

  $export['user_picture_imagecache_profiles_min_height'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_picture_imagecache_profiles_min_width';
  $strongarm->value = '200';

  $export['user_picture_imagecache_profiles_min_width'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_picture_path';
  $strongarm->value = 'pictures';

  $export['user_picture_path'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_pictures';
  $strongarm->value = '1';

  $export['user_pictures'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_signatures';
  $strongarm->value = '1';

  $export['user_signatures'] = $strongarm;
  return $export;
}
