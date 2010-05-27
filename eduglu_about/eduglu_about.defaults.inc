<?php

/**
 * Helper to implementation of hook_menu_default_items().
 */
function _eduglu_about_menu_default_items() {
  $items = array();

  $items[] = array(
    'title' => 'About',
    'path' => 'about-group',
    'weight' => '-1000',
    'description' => 'Shows top contributors and recent activity in a group.',
  );
  // Translatables
  array(
    t('About'),
    t('Shows top contributors and recent activity in a group.'),
  );


  return $items;
}
