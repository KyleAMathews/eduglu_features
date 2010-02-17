<?php

/**
 * Helper to implementation of hook_views_default_views().
 */
function _eduglue_career_group_views_default_views() {
  $views = array();

  // Exported view: alumni_profile
  $view = new view;
  $view->name = 'alumni_profile';
  $view->description = 'View of alumni profiles in a certain group';
  $view->tag = '';
  $view->view_php = '';
  $view->base_table = 'node';
  $view->is_cacheable = FALSE;
  $view->api_version = 2;
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->override_option('filters', array(
    'type' => array(
      'operator' => 'in',
      'value' => array(
        'alumni_profile' => 'alumni_profile',
      ),
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'type',
      'table' => 'node',
      'field' => 'type',
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
      'table' => 'node',
      'field' => 'status',
      'relationship' => 'none',
    ),
    'current' => array(
      'operator' => 'active',
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
    'field_alumni_company_value' => array(
      'operator' => 'word',
      'value' => '',
      'group' => '0',
      'exposed' => TRUE,
      'expose' => array(
        'use_operator' => 0,
        'operator' => 'field_alumni_company_value_op',
        'identifier' => 'field_alumni_company_value',
        'label' => 'Search by Company',
        'optional' => 1,
        'remember' => 1,
      ),
      'case' => 0,
      'id' => 'field_alumni_company_value',
      'table' => 'node_data_field_alumni_company',
      'field' => 'field_alumni_company_value',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
    'field_alumni_job_title_value' => array(
      'operator' => 'word',
      'value' => '',
      'group' => '0',
      'exposed' => TRUE,
      'expose' => array(
        'use_operator' => 0,
        'operator' => 'field_alumni_job_title_value_op',
        'identifier' => 'field_alumni_job_title_value',
        'label' => 'Search by Job Title',
        'optional' => 1,
        'remember' => 1,
      ),
      'case' => 0,
      'id' => 'field_alumni_job_title_value',
      'table' => 'node_data_field_alumni_job_title',
      'field' => 'field_alumni_job_title_value',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
    'field_alumni_location_value' => array(
      'operator' => 'word',
      'value' => '',
      'group' => '0',
      'exposed' => TRUE,
      'expose' => array(
        'use_operator' => 0,
        'operator' => 'field_alumni_location_value_op',
        'identifier' => 'field_alumni_location_value',
        'label' => 'Search by Location',
        'optional' => 1,
        'remember' => 1,
      ),
      'case' => 0,
      'id' => 'field_alumni_location_value',
      'table' => 'node_data_field_alumni_location',
      'field' => 'field_alumni_location_value',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
    'field_alumni_undergraduate_degre_value' => array(
      'operator' => 'word',
      'value' => '',
      'group' => '0',
      'exposed' => TRUE,
      'expose' => array(
        'use_operator' => 0,
        'operator' => 'field_alumni_undergraduate_degre_value_op',
        'identifier' => 'field_alumni_undergraduate_degre_value',
        'label' => 'Search by Major',
        'optional' => 1,
        'remember' => 1,
      ),
      'case' => 0,
      'id' => 'field_alumni_undergraduate_degre_value',
      'table' => 'node_data_field_alumni_undergraduate_degre',
      'field' => 'field_alumni_undergraduate_degre_value',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('access', array(
    'type' => 'none',
  ));
  $handler->override_option('cache', array(
    'type' => 'none',
  ));
  $handler->override_option('title', 'Alumni Profiles');
  $handler->override_option('use_ajax', TRUE);
  $handler->override_option('use_pager', '1');
  $handler->override_option('row_plugin', 'node');
  $handler->override_option('row_options', array(
    'relationship' => 'none',
    'build_mode' => 'full',
    'links' => 0,
    'comments' => 0,
  ));
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->override_option('path', 'alumni');
  $handler->override_option('menu', array(
    'type' => 'normal',
    'title' => 'Alumni',
    'description' => '',
    'weight' => '0',
    'name' => 'features',
  ));
  $handler->override_option('tab_options', array(
    'type' => 'none',
    'title' => '',
    'description' => '',
    'weight' => 0,
  ));

  $views[$view->name] = $view;

  return $views;
}
