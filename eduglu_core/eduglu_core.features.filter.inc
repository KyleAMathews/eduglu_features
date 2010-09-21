<?php

/**
 * Implementation of hook_filter_default_formats().
 */
function eduglu_core_filter_default_formats() {
  $formats = array();

  // Exported format: Markdown
  $formats['Markdown'] = array(
    'name' => 'Markdown',
    'roles' => array(
      '0' => 'admin',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
      '3' => 'manager',
    ),
    'filters' => array(
      '0' => array(
        'module' => 'og_mailinglist',
        'delta' => '0',
        'weight' => '-10',
      ),
      '1' => array(
        'module' => 'codefilter',
        'delta' => '0',
        'weight' => '-9',
      ),
      '2' => array(
        'module' => 'markdown',
        'delta' => '0',
        'weight' => '-8',
      ),
      '3' => array(
        'module' => 'filter',
        'delta' => '2',
        'weight' => '-6',
      ),
      '4' => array(
        'module' => 'filter',
        'delta' => '0',
        'weight' => '-5',
      ),
      '5' => array(
        'module' => 'filter',
        'delta' => '1',
        'weight' => '-4',
      ),
      '6' => array(
        'module' => 'filter',
        'delta' => '3',
        'weight' => '-3',
      ),
      '7' => array(
        'module' => 'typogrify',
        'delta' => '0',
        'weight' => '10',
      ),
    ),
  );

  // Exported format: Full HTML
  $formats['Full HTML'] = array(
    'name' => 'Full HTML',
    'roles' => array(
      '0' => 'admin',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
      '3' => 'manager',
    ),
    'filters' => array(
      '0' => array(
        'module' => 'og_mailinglist',
        'delta' => '0',
        'weight' => '-10',
      ),
      '1' => array(
        'module' => 'codefilter',
        'delta' => '0',
        'weight' => '-9',
      ),
      '2' => array(
        'module' => 'markdown',
        'delta' => '0',
        'weight' => '-8',
      ),
      '3' => array(
        'module' => 'filter',
        'delta' => '2',
        'weight' => '-7',
      ),
      '4' => array(
        'module' => 'filter',
        'delta' => '1',
        'weight' => '-6',
      ),
      '5' => array(
        'module' => 'filter',
        'delta' => '3',
        'weight' => '-5',
      ),
      '6' => array(
        'module' => 'typogrify',
        'delta' => '0',
        'weight' => '-4',
      ),
    ),
  );

  return $formats;
}
