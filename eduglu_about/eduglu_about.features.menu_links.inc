<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function eduglu_about_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: features:about-group
  $menu_links['features:about-group'] = array(
    'menu_name' => 'features',
    'link_path' => 'about-group',
    'router_path' => 'about-group',
    'link_title' => 'About',
    'options' => array(
      'attributes' => array(
        'title' => 'Shows top contributors and recent activity in a group.',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-1000',
  );
  // Translatables
  array(
    t('About'),
  );


  return $menu_links;
}
