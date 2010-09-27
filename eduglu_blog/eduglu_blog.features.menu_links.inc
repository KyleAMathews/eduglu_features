<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function eduglu_blog_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: features:blog-posts
  $menu_links['features:blog-posts'] = array(
    'menu_name' => 'features',
    'link_path' => 'blog-posts',
    'router_path' => 'blog-posts',
    'link_title' => 'Blogs',
    'options' => array(
      'attributes' => array(
        'title' => 'Latest blog posts from site members',
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
  t('Blogs');


  return $menu_links;
}
