<?php

/**
 * Implementation of hook_filter_default_formats().
 */
function eduglu_core_filter_default_formats() {
  $formats = array();

  // Exported format: Partial HTML
  $formats['Partial HTML'] = array(
    'name' => 'Partial HTML',
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
        'module' => 'filter',
        'delta' => '1',
        'weight' => '-7',
      ),
      '3' => array(
        'module' => 'filter',
        'delta' => '0',
        'weight' => '-6',
      ),
      '4' => array(
        'module' => 'filter',
        'delta' => '2',
        'weight' => '-5',
      ),
      '5' => array(
        'module' => 'filter',
        'delta' => '3',
        'weight' => '-4',
      ),
      '6' => array(
        'module' => 'typogrify',
        'delta' => '0',
        'weight' => '-3',
      ),
    ),
  );

  // Exported format: Full HTML
  $formats['Full HTML'] = array(
    'name' => 'Full HTML',
    'roles' => array(
      '0' => 'admin',
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
        'module' => 'filter',
        'delta' => '2',
        'weight' => '-7',
      ),
      '3' => array(
        'module' => 'filter',
        'delta' => '1',
        'weight' => '-6',
      ),
      '4' => array(
        'module' => 'filter',
        'delta' => '3',
        'weight' => '-5',
      ),
      '5' => array(
        'module' => 'typogrify',
        'delta' => '0',
        'weight' => '-4',
      ),
    ),
  );

  return $formats;
}
