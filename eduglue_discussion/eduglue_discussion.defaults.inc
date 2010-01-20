<?php

/**
 * Helper to implementation of hook_content_default_fields().
 */
function _eduglue_discussion_content_default_fields() {
  $fields = array();

  // Exported field: field_image_story
  $fields[] = array(
    'field_name' => 'field_image_story',
    'type_name' => 'story',
    'display_settings' => array(
      'weight' => '11',
      'parent' => '',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 1,
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
    'type' => 'filefield',
    'required' => '0',
    'multiple' => '1',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '0',
    'widget' => array(
      'file_extensions' => 'jpg jpeg png gif',
      'file_path' => '',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '',
      'max_filesize_per_node' => '',
      'max_resolution' => '0',
      'min_resolution' => '0',
      'alt' => '',
      'custom_alt' => 0,
      'title' => '',
      'custom_title' => 1,
      'title_type' => 'textfield',
      'default_image' => NULL,
      'use_default_image' => 0,
      'fupload_mode' => 'multiple',
      'fupload_previewlist_img_attributes' => '',
      'fupload_title_replacements' => '_;{;};-',
      'fupload_previewlist_field_settings' => array(
        'imagefield_title' => 'imagefield_title',
        'node_title' => 0,
        'node_description' => 0,
        'imagefield_alt' => 0,
        'imagefield_description' => 0,
        'taxonomy_2' => 0,
      ),
      'fupload_previewlist_redirecturl' => '',
      'label' => 'Image Gallery',
      'weight' => '3',
      'description' => 'Upload images to create a simple image gallery at the bottom of your post.',
      'type' => 'imagefield_widget',
      'module' => 'imagefield',
    ),
  );

  // Translatables
  array(
    t('Image Gallery'),
  );

  return $fields;
}

/**
 * Helper to implementation of hook_context_default_contexts().
 */
function _eduglue_discussion_context_default_contexts() {
  $items = array();

  $items[] = array(
    'namespace' => 'spaces',
    'attribute' => 'feature',
    'value' => 'discussion',
    'description' => '',
    'node' => array(
      '0' => 'story',
      '1' => 'wiki',
    ),
    'views' => array(
      '0' => 'og_ghp_ron_spaces',
    ),
    'menu' => 'discussion',
    'block' => array(
      'og_0' => array(
        'module' => 'og',
        'delta' => '0',
        'weight' => -39,
        'region' => 'right',
        'status' => '0',
        'label' => 'Group details',
        'type' => 'context_ui',
      ),
      'views_calendar_per_group-block_1' => array(
        'module' => 'views',
        'delta' => 'calendar_per_group-block_1',
        'weight' => -38,
        'region' => 'right',
        'status' => '0',
        'label' => 'Upcoming',
        'type' => 'context_ui',
      ),
    ),
  );
  return $items;
}

/**
 * Helper to implementation of hook_menu_default_items().
 */
function _eduglue_discussion_menu_default_items() {
  $items = array();

  $items[] = array(
    'title' => 'Discussions',
    'path' => 'discussion',
    'weight' => '-48',
    'description' => 'The discussion lets you monitor recent activity in a group.',
  );
  // Translatables
  array(
    t('Discussions'),
    t('The discussion lets you monitor recent activity in a group.'),
  );


  return $items;
}
