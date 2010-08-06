<?php

/**
 * Implementation of hook_content_default_fields().
 */
function eduglu_members_content_default_fields() {
  $fields = array();

  // Exported field: field_about_me
  $fields['uprofile-field_about_me'] = array(
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
      'weight' => '-6',
      'description' => '',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Exported field: field_blog
  $fields['uprofile-field_blog'] = array(
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
  $fields['uprofile-field_location'] = array(
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
          '_error_element' => 'default_value_widget][field_location][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'rows' => '1',
      'size' => '60',
      'label' => 'Location',
      'weight' => '-8',
      'description' => 'City, State or Province, Country',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_name
  $fields['uprofile-field_name'] = array(
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

  // Translatables
  array(
    t('About Me'),
    t('Location'),
    t('Name'),
    t('Website'),
  );

  return $fields;
}
