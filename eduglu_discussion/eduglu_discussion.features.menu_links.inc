<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function eduglu_discussion_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: features:discussion
  $menu_links['features:discussion'] = array(
    'menu_name' => 'features',
    'link_path' => 'discussion',
    'router_path' => 'discussion',
    'link_title' => 'Dashboard',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Translatables
  array(
    t('Dashboard'),
  );


  return $menu_links;
}
