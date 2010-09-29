<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function eduglu_assignment_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: features:assignments
  $menu_links['features:assignments'] = array(
    'menu_name' => 'features',
    'link_path' => 'assignments',
    'router_path' => 'assignments',
    'link_title' => 'Assignments',
    'options' => array(
      'attributes' => array(
        'title' => 'Upcoming assignments',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Assignments');


  return $menu_links;
}
