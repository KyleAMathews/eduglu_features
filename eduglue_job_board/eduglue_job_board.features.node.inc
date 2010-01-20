<?php

/**
 * Helper to implementation of hook_node_info().
 */
function _eduglue_job_board_node_info() {
  $items = array(
    'job_form' => array(
      'name' => t('Job Posting'),
      'module' => 'features',
      'description' => t('Submit a job posting with this form.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Description'),
      'min_word_count' => '0',
      'help' => t('To submit a new job submission, please fill in the form as best you can. All fields are required except for phone number. In the Title field, please enter the job title.

When the job is filled, please indicate this by changing the job title to "Filled - " followed by the job title.'),
    ),
  );
  return $items;
}
