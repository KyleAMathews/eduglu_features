<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function eduglu_quiz_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: features:quiz
  $menu_links['features:quiz'] = array(
    'menu_name' => 'features',
    'link_path' => 'quiz',
    'router_path' => 'quiz',
    'link_title' => 'Quizzes',
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
  t('Quizzes');


  return $menu_links;
}
