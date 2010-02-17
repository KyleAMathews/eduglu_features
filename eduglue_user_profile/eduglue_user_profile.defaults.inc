<?php

/**
 * Helper to implementation of hook_content_default_fields().
 */
function _eduglue_user_profile_content_default_fields() {
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
      'default_value' => array(
        '0' => array(
          'value' => '',
          'format' => '1',
          '_error_element' => 'default_value_widget][field_about_me][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'rows' => '10',
      'size' => 60,
      'label' => 'About Me',
      'weight' => '-4',
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
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'url' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Blog',
      'weight' => '-7',
      'description' => '',
      'type' => 'link',
      'module' => 'link',
    ),
  );

  // Exported field: field_company_0
  $fields[] = array(
    'field_name' => 'field_company_0',
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
    'type' => 'content_taxonomy',
    'required' => '0',
    'multiple' => '0',
    'module' => 'content_taxonomy',
    'active' => '1',
    'save_term_node' => 1,
    'vid' => '5',
    'parent' => '68',
    'parent_php_code' => '',
    'depth' => '1',
    'widget' => array(
      'default_value' => array(
        'tids' => NULL,
      ),
      'default_value_php' => '',
      'new_terms' => 'insert',
      'label' => 'Company',
      'weight' => '-6',
      'description' => '',
      'type' => 'content_taxonomy_autocomplete',
      'module' => 'content_taxonomy_autocomplete',
    ),
  );

  // Exported field: field_facebook_public
  $fields[] = array(
    'field_name' => 'field_facebook_public',
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
    'url' => '',
    'title' => 'value',
    'title_value' => 'My Facebook profile',
    'enable_tokens' => 0,
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'url' => '',
          'attributes' => 'N;',
        ),
      ),
      'default_value_php' => '',
      'label' => 'Facebook',
      'weight' => '1',
      'description' => 'Link to Facebook profile page',
      'type' => 'link',
      'module' => 'link',
    ),
  );

  // Exported field: field_linkedin_profile
  $fields[] = array(
    'field_name' => 'field_linkedin_profile',
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
    'url' => '',
    'title' => 'value',
    'title_value' => 'My LinkedIn Profile',
    'enable_tokens' => 0,
    'widget' => array(
      'default_value' => NULL,
      'default_value_php' => '',
      'label' => 'LinkedIn Profile',
      'weight' => '-1',
      'description' => 'URL to public LinkedIn profile page',
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
      'default_value' => array(
        '0' => array(
          'value' => '',
        ),
      ),
      'default_value_php' => '',
      'rows' => '1',
      'label' => 'Location',
      'weight' => '-8',
      'description' => 'City, State or City, Country if living out of USA',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_major
  $fields[] = array(
    'field_name' => 'field_major',
    'type_name' => 'uprofile',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
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
      'rows' => 5,
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_major][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Major',
      'weight' => '-6',
      'description' => 'Your current major at BYU. Please enter "Undeclared" if you haven\'t choosen a major yet.',
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
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_name][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'rows' => '1',
      'size' => '60',
      'label' => 'Name',
      'weight' => '-9',
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_occupation
  $fields[] = array(
    'field_name' => 'field_occupation',
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
    'type' => 'content_taxonomy',
    'required' => '0',
    'multiple' => '0',
    'module' => 'content_taxonomy',
    'active' => '1',
    'save_term_node' => 1,
    'vid' => '5',
    'parent' => '47',
    'parent_php_code' => '',
    'depth' => '1',
    'widget' => array(
      'default_value' => array(
        'tids' => NULL,
      ),
      'default_value_php' => '',
      'new_terms' => 'insert',
      'label' => 'Occupation',
      'weight' => '-7',
      'description' => '',
      'type' => 'content_taxonomy_autocomplete',
      'module' => 'content_taxonomy_autocomplete',
    ),
  );

  // Exported field: field_role
  $fields[] = array(
    'field_name' => 'field_role',
    'type_name' => 'uprofile',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
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
    'allowed_values' => 'Student
Staff
Professor
Alumni',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Role',
      'weight' => '-5',
      'description' => '',
      'type' => 'optionwidgets_select',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_twitter
  $fields[] = array(
    'field_name' => 'field_twitter',
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
      'default_value' => NULL,
      'default_value_php' => '',
      'rows' => '1',
      'label' => 'Twitter',
      'weight' => 0,
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Translatables
  array(
    t('About Me'),
    t('Blog'),
    t('Company'),
    t('Facebook'),
    t('LinkedIn Profile'),
    t('Location'),
    t('Major'),
    t('Name'),
    t('Occupation'),
    t('Role'),
    t('Twitter'),
  );

  return $fields;
}

/**
 * Helper to implementation of hook_context_default_contexts().
 */
function _eduglue_user_profile_context_default_contexts() {
  $items = array();

  $items[] = array(
    'namespace' => 'spaces',
    'attribute' => 'feature',
    'value' => 'user',
    'description' => 'User profile page',
    'user' => array(
      '0' => 2,
      '1' => 3,
      '2' => 7,
      '3' => 6,
      '4' => 4,
      '5' => 5,
    ),
    'block' => array(
      'eduglue_user_profile_0' => array(
        'module' => 'eduglue_user_profile',
        'delta' => '0',
        'weight' => -39,
        'region' => 'right',
        'status' => '0',
        'label' => 'User Profile Block with stats and bio',
        'type' => 'context_ui',
      ),
    ),
  );
  return $items;
}
