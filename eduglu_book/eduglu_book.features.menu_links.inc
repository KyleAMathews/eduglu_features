<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function eduglu_book_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: features:materials
  $menu_links['features:materials'] = array(
    'menu_name' => 'features',
    'link_path' => 'materials',
    'router_path' => 'materials',
    'link_title' => 'Materials',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Materials');


  return $menu_links;
}
