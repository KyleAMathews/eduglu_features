<?php

/**
 * Page callback for book feature.
 */
function eduglu_book_overview() {
  $context = context_load('spaces-feature-book');
  context_set('context', 'spaces-feature-book', $context);

  $nid = variable_get('eduglu_book', 0);
  if ($nid && is_numeric($nid) && $node = node_load($nid)) {
    menu_set_active_item("node/{$node->nid}");
    return node_view($node, FALSE, TRUE, TRUE);
  }
  return views_embed_view('eduglu_book', 'page_1');
}

/**
 * Settings form for book feature.
 */
function eduglu_book_settings() {
  $form = array();
  $form['eduglu_book'] = array(
    '#title' => t('Overview page'),
    '#type' => 'select',
    '#description' => t('Choose the page to display when a user first views this feature.'),
    '#options' => array(0 => t('Recent updates'), t('Pages') => array()),
    '#default_value' => variable_get('eduglu_book', 0),
  );

  // Collect books in this space into an array
  if ($view = views_get_view('eduglu_book_current')) {
    $view->set_display();
    $view->set_items_per_page(0);
    $view->execute();
    if (is_array($view->result) && count($view->result)) {
      foreach($view->result as $row) {
        $form['eduglu_book']['#options'][t('Pages')][$row->nid] = $row->node_title;
      }
    }
  }

  return system_settings_form($form);
}
