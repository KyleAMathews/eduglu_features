<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function eduglu_about_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: features:about
  $menu_links['features:about'] = array(
    'menu_name' => 'features',
    'link_path' => 'about',
    'router_path' => 'about',
    'link_title' => 'About',
    'options' => array(
      'attributes' => array(
        'title' => 'Shows top contributors and recent activity in a group.',
      ),
    ),
    'module' => 'system',
    'hidden' => '-1',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-1000',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('About');


  return $menu_links;
}
