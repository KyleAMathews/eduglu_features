<?php

/**
 * Implementation of hook_fieldgroup_default_groups().
 */
function eduglu_members_fieldgroup_default_groups() {
  $groups = array();

  // Exported group: group_about
  $groups['uprofile-group_about'] = array(
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
  $groups['uprofile-group_contact'] = array(
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
  $groups['uprofile-group_links'] = array(
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
  // Included for use with string extractors like potx.
  t('Basic Info');
  t('Contact');
  t('Links');

  return $groups;
}
