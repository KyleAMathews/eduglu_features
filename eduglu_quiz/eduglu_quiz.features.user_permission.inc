<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function eduglu_quiz_user_default_permissions() {
  $permissions = array();

  // Exported permission: access author stats
  $permissions['access author stats'] = array(
    'name' => 'access author stats',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: access quiz
  $permissions['access quiz'] = array(
    'name' => 'access quiz',
    'roles' => array(
      '0' => 'admin',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: access user stats
  $permissions['access user stats'] = array(
    'name' => 'access user stats',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: administer quiz configuration
  $permissions['administer quiz configuration'] = array(
    'name' => 'administer quiz configuration',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: assign any action to quiz events
  $permissions['assign any action to quiz events'] = array(
    'name' => 'assign any action to quiz events',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: create quiz
  $permissions['create quiz'] = array(
    'name' => 'create quiz',
    'roles' => array(
      '0' => 'admin',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: delete any quiz
  $permissions['delete any quiz'] = array(
    'name' => 'delete any quiz',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: delete any quiz results
  $permissions['delete any quiz results'] = array(
    'name' => 'delete any quiz results',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: delete own quiz
  $permissions['delete own quiz'] = array(
    'name' => 'delete own quiz',
    'roles' => array(
      '0' => 'admin',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: delete results for own quiz
  $permissions['delete results for own quiz'] = array(
    'name' => 'delete results for own quiz',
    'roles' => array(
      '0' => 'admin',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: edit any quiz
  $permissions['edit any quiz'] = array(
    'name' => 'edit any quiz',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: edit own quiz
  $permissions['edit own quiz'] = array(
    'name' => 'edit own quiz',
    'roles' => array(
      '0' => 'admin',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: edit question titles
  $permissions['edit question titles'] = array(
    'name' => 'edit question titles',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: manual quiz revisioning
  $permissions['manual quiz revisioning'] = array(
    'name' => 'manual quiz revisioning',
    'roles' => array(
      '0' => 'admin',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: score any quiz
  $permissions['score any quiz'] = array(
    'name' => 'score any quiz',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: score own quiz
  $permissions['score own quiz'] = array(
    'name' => 'score own quiz',
    'roles' => array(
      '0' => 'admin',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: use regex for short answer
  $permissions['use regex for short answer'] = array(
    'name' => 'use regex for short answer',
    'roles' => array(),
  );

  // Exported permission: view any quiz question correct response
  $permissions['view any quiz question correct response'] = array(
    'name' => 'view any quiz question correct response',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: view any quiz results
  $permissions['view any quiz results'] = array(
    'name' => 'view any quiz results',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: view own quiz results
  $permissions['view own quiz results'] = array(
    'name' => 'view own quiz results',
    'roles' => array(
      '0' => 'admin',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: view quiz question outside of a quiz
  $permissions['view quiz question outside of a quiz'] = array(
    'name' => 'view quiz question outside of a quiz',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: view results for own quiz
  $permissions['view results for own quiz'] = array(
    'name' => 'view results for own quiz',
    'roles' => array(
      '0' => 'admin',
      '1' => 'authenticated user',
    ),
  );

  return $permissions;
}
