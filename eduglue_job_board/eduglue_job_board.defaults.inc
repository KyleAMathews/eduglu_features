<?php

/**
 * Helper to implementation of hook_content_default_fields().
 */
function _eduglue_job_board_content_default_fields() {
  $fields = array();

  // Exported field: field_company
  $fields[] = array(
    'field_name' => 'field_company',
    'type_name' => 'job_form',
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
      'default_value' => NULL,
      'default_value_php' => '',
      'rows' => '1',
      'label' => 'Company',
      'weight' => '-4',
      'description' => 'Your company name',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_contact_email
  $fields[] = array(
    'field_name' => 'field_contact_email',
    'type_name' => 'job_form',
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
    'text_processing' => '1',
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
      'label' => 'Contact Email',
      'weight' => '-3',
      'description' => 'Your email address',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_contact_name
  $fields[] = array(
    'field_name' => 'field_contact_name',
    'type_name' => 'job_form',
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
      'default_value' => NULL,
      'default_value_php' => '',
      'rows' => '1',
      'label' => 'Contact Name',
      'weight' => '-4',
      'description' => 'Your name',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_contact_phone_number
  $fields[] = array(
    'field_name' => 'field_contact_phone_number',
    'type_name' => 'job_form',
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
      'label' => 'Contact Phone Number',
      'weight' => '-3',
      'description' => 'Your phone number',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Translatables
  array(
    t('Company'),
    t('Contact Email'),
    t('Contact Name'),
    t('Contact Phone Number'),
  );

  return $fields;
}

/**
 * Helper to implementation of hook_context_default_contexts().
 */
function _eduglue_job_board_context_default_contexts() {
  $items = array();

  $items[] = array(
    'namespace' => 'spaces',
    'attribute' => 'feature',
    'value' => 'job',
    'description' => 'context for space jobs feature',
    'node' => array(
      '0' => 'job_form',
    ),
    'views' => array(
      '0' => 'eduglue_job_board',
    ),
    'menu' => 'job-postings',
    'block' => array(),
  );
  return $items;
}

/**
 * Helper to implementation of hook_menu_default_items().
 */
function _eduglue_job_board_menu_default_items() {
  $items = array();

  $items[] = array(
    'title' => 'Jobs',
    'path' => 'job-postings',
    'weight' => '0',
    'description' => 'See posted jobs. Post new jobs',
  );
  // Translatables
  array(
    t('Jobs'),
    t('See posted jobs. Post new jobs'),
  );


  return $items;
}
