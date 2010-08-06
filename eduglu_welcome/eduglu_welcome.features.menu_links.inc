<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function eduglu_welcome_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: features:welcome
  $menu_links['features:welcome'] = array(
    'menu_name' => 'features',
    'link_path' => 'welcome',
    'router_path' => 'welcome',
    'link_title' => 'Welcome',
    'options' => array(
      'attributes' => array(
        'title' => 'Provide welcome message + login link.',
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
    t('Welcome'),
  );


  return $menu_links;
}
