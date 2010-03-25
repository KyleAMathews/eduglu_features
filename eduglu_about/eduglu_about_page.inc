<?php

define('THIRTY_DAYS_UNIX', 2592000);
define('SIX_MONTHS_UNIX', 15552000);

function eduglu_about_page() {
  if ($space = spaces_get_space()) {
    return theme('eduglu_about_page', $space);
  }
  else {
    return "";
  }
}

function _eduglu_about_new_group_users($space) {
  $options = _eduglu_about_flot_options();
  
  if ($new_group_members_data = cache_get('eduglu_about_new_members_' . $space->sid)) {
    $data = $new_group_members_data->data;
    dpm('get new members data from cache');
  }
  else {
    $result = db_query("
      SELECT count(date_format(from_unixtime(created), '%Y%U')) as count,
      date_format(from_unixtime(created), '%U') as week,
      created as sortdate
      FROM og_uid
      WHERE nid = %d
      GROUP BY date_format(from_unixtime(created), '%Y%U')
      ORDER BY sortdate desc
      LIMIT 52", $space->sid);
  
    $results = array();
    // Pull out into keyed array.
    while ($data = db_fetch_array($result)) {
      $results[$data['week']] = intval($data['count']);
    }
  
    $data = _eduglu_about_process_weekly($results);
    
    cache_set('eduglu_about_new_members_' . $space->sid, $data, 'cache', time() + 86400);
  }

  $num_members = db_result(db_query("SELECT count(*)
                        FROM og_uid
                        WHERE nid = %d
                        AND created > %d", $space->sid, time() - THIRTY_DAYS_UNIX));

  // Set the yaxis max at larger of either 20, or the largest value.
  if (max($data['orig_data']) < 20) {
    $options->yaxis['max'] = 20;
  }
 
  $d1 = new flotData($data['flot_values']);
  $label = format_plural($num_members, "1 <strong>New Member</strong> in Last 30 Days", "@count <strong>New Members</strong> in Last 30 Days");
  $legend = "52 Weeks New Members";
  
  $output = theme('eduglu_stats_box', $d1, $options, $label, $legend);
  
  return $output;
}
function _eduglu_about_new_group_comments($space) {
  $options = _eduglu_about_flot_options();

  if ($new_group_comments_data = cache_get('eduglu_about_new_comments_' . $space->sid)) {
    $data = $new_group_comments_data->data;
    dpm('get new comments data from cache');
  }
  else {
    $result = db_query("
      SELECT count(date_format(from_unixtime(c.timestamp), '%Y%U')) as count,
      date_format(from_unixtime(c.timestamp), '%U') as week,
      c.timestamp as sortdate
      FROM {comments} c JOIN {og_ancestry} o
      WHERE c.nid = o.nid
      AND o.group_nid = %d
      GROUP BY date_format(from_unixtime(c.timestamp), '%Y%U')
      ORDER BY sortdate desc
      LIMIT 52", $space->sid);
  
    $results = array();
    // Pull out into keyed array.
    while ($data = db_fetch_array($result)) {
      $results[$data['week']] = intval($data['count']);
    }
  
    $data = _eduglu_about_process_weekly($results);
    
    cache_set('eduglu_about_new_comments_' . $space->sid, $data, 'cache', time() + 86400);
  }

  $num_comments = db_result(db_query("SELECT count(*)
                        FROM {comments} c JOIN {og_ancestry} o
                        WHERE c.nid = o.nid
                        AND o.group_nid = %d
                        AND c.timestamp > %d", $space->sid, time() - THIRTY_DAYS_UNIX));

  // Set the yaxis max at larger of either 20, or the largest value.
  if (max($data['orig_data']) < 20) {
    $options->yaxis['max'] = 20;
  }

  $d1 = new flotData($data['flot_values']);
  $label = format_plural($num_comments, "1 <strong>New Comment</strong> in Last 30 Days", "@count <strong>New Comments</strong> in Last 30 Days");
  $legend = "52 Weeks New Comments";
  
  $output = theme('eduglu_stats_box', $d1, $options, $label, $legend);

  return $output;
}

function _eduglu_about_new_nodes($space) {
  $options = _eduglu_about_flot_options();
  
  if ($new_node_data = cache_get('eduglu_about_new_nodes_' . $space->sid)) {
    $data = $new_node_data->data;
    dpm('get new nodes data from cache');
  }
  else {
    $result = db_query("SELECT
      count(date_format(from_unixtime(n.created), '%Y%U')) as count,
      date_format(from_unixtime(n.created), '%U') as week,
      created as sortdate
      FROM node n JOIN og_ancestry o
      WHERE n.nid = o.nid
      AND o.group_nid = %d
      AND n.type in ('story','poll','event_cck','book','event','job_form','wiki','learning_contract','quiz')
      GROUP BY date_format(from_unixtime(n.created), '%Y%U')
      ORDER BY sortdate desc
      LIMIT 52", $space->sid);
  
    $results = array();
    // Pull out into keyed array.
    while ($data = db_fetch_array($result)) {
      $results[$data['week']] = intval($data['count']);
    }
  
    $data = _eduglu_about_process_weekly($results);
    
    cache_set('eduglu_about_new_nodes_' . $space->sid, $data, 'cache', time() + 86400);
  }
  
  // Set the yaxis max at larger of either 20, or the largest value.
  if (max($data['orig_data']) < 20) {
    $options->yaxis['max'] = 20;
  }

  $num_nodes = db_result(db_query("SELECT count(*)
                        FROM {og_ancestry} o JOIN {node} n
                        WHERE n.nid = o.nid
                        AND o.group_nid = %d
                        AND n.created > %d",
                          $space->sid, time() - THIRTY_DAYS_UNIX));


  $d1 = new flotData($data['flot_values']);
  $label = format_plural($num_nodes, "1 <strong>New Post</strong> in Last 30 Days",
                                  "@count <strong>New Posts</strong> in Last 30 Days");
  $legend = "52 Weeks New Posts";
  
  $output = theme('eduglu_stats_box', $d1, $options, $label, $legend);
  
  return $output;
}

/*
 * @return Default flot options for the eduglu about group page.
 */
function _eduglu_about_flot_options() {
  $options->colors = array('#375D81');
  $options->bars->show = true;
  $options->bars->barWidth = .75;
  $options->bars->fill = 1;
  $options->grid = array(borderWidth=>0, tickColor=>'white');
  $options->xaxis = array('ticks'=>array(), 'min' => 0, 'max' => 53);
  $options->yaxis = array('ticks'=>array());
  return $options;
}


/*
 * Helper function to align week numbers amongst multiple years.
 */
function _eduglu_about_correct_weeks($weeks_array) {
  $keys = array_keys($weeks_array);
  for ($i = 0; $i <= count($keys); $i++) {
    if ($keys[$i] < $keys[$i + 1]) {
      for ($p = $i; $p >= 0; $p--) {
        $keys[$p] = $keys[$p] + 53;
      }
      break;
    }
  }

  return array_combine($keys, $weeks_array);
}

/*
 *  Helper function. Process weekly stats.
 */
function _eduglu_about_process_weekly($results) {
  // Add first week to array so graph will have the correct starting point when
  // when zeroed out.
  $first_week = date('W');
  $results[$first_week] = 0;

  $results = _eduglu_about_correct_weeks($results);

  ksort($results);

  // Fill in empty values with zeros.
  $keys = array_keys($results);
 
  $end = array_pop($keys);
  $values = array();
  $count = 0;
  for ($i = $keys[0]; $i <= $end; $i++) {
    if ($results[$i]) {
      $values[$count] = $results[$i];
      $count++;
    }
    else {
      $count++;
    }
  }
 
  // Convert to array structure required by flot
  $flot_values = array();
  foreach ($values as $key => $value) {
    $flot_values[$key] = array(0 => $key, 1 => $value);
  }

  return array('orig_data' => $results, 'flot_values' => array_values($flot_values));
}

function _eduglu_about_members_pics($space) {
  $num_members = db_result(db_query("SELECT count(*)
                        FROM og_uid
                        WHERE nid = %d", $space->sid));

  // Fetch pictures of group memberes
  $results = db_query("SELECT u.uid, u.picture
                       FROM {og_uid} o JOIN {users} u
                       WHERE o.uid = u.uid
                       AND o.nid = %d
                       ORDER BY o.created
                       LIMIT 348", $space->sid);

  $members = array();
  while ($data = db_fetch_array($results)) {
    $members[$data['uid']] = $data['picture'];
  }

  $output = theme('eduglu_members_listing', $members, $num_members);

  return $output;
}

function _eduglu_about_create_member_pictures($members) {
  foreach ($members as $uid => $picture) {
    if (isset($picture) && module_exists('imagecache')) {
      $attr = array('class' => 'group-member-picture');
      $preset = '25x25_crop';

      $attr['class'] .= ' picture-'. $preset;
      if (file_exists($picture)) {
        $image = theme('imagecache', $preset, $picture);
      }
      else {
        $default_image = variable_get('user_picture_default', '');
        $image = theme("imagecache", $preset, $default_image);
      }
      $path = 'user/'. $uid;
      $output .= l($image, $path, array('attributes' => $attr,
                                        'html' => true));
    }
  }

  return $output;
}

/*
 * Return top five contributors by number of posts/comments made in the past
 * six months.
 */
function _eduglu_top_contributors($space) {

  // Top 20 commenters
  $result = db_query("
        SELECT uid, count(*) as count
        FROM {comments} c
        JOIN {og_ancestry} o
        WHERE c.nid = o.nid
        AND o.group_nid = %d
        AND timestamp > %d
        GROUP BY c.uid
        ORDER BY count(*) DESC
        LIMIT 100", $space->sid, time() - SIX_MONTHS_UNIX);

  $top_commenters = array();
  while ($data = db_fetch_array($result)) {
    $top_commenters[$data['uid']] = $data['count'];
  }

  // Top 20 posters
  $result = db_query("
        SELECT uid, count(*) as count
        FROM {node} n
        JOIN {og_ancestry} o 
        WHERE n.nid = o.nid 
        AND o.group_nid = %d
        AND created > %d
        GROUP BY n.uid 
        ORDER BY count(*) DESC 
        LIMIT 100", $space->sid, time() - SIX_MONTHS_UNIX);
   
  $top_posters = array();
  while ($data = db_fetch_array($result)) {
    $top_posters[$data['uid']] = $data['count'];
  }  
  
  // Return if empty.
  if (empty($top_posters)) {
    return;
  }
  
  // Merge the two adding up the posts + comments count.
  $top_contributors = array();
  $uids = array_merge(array_keys($top_commenters), array_keys($top_posters));
  foreach($uids as $uid) {
    $top_contributors[$uid] = $top_commenters[$uid] + $top_posters[$uid];
  }
  
  // Sort by #, reverse order, and slice.
  asort($top_contributors);
  $top_contributors = array_reverse($top_contributors, TRUE);
  $top_contributors = array_slice($top_contributors, 0, 5, TRUE);

  $output = theme('eduglu_about_top_contributor_box', $top_contributors, $top_posters, $top_commenters);

  return $output;
}

function _eduglu_about_create_top_contributor_pictures($uid) {
  $picture = db_result(db_query("SELECT picture FROM {users} WHERE uid = %d", $uid));
  if (isset($picture) && module_exists('imagecache')) {
    $attr = array('class' => 'eduglu-about-top-contributor-picture');
    $preset = 'user_image_default';

    $attr['class'] .= ' picture-'. $preset;
    if (file_exists($picture)) {
      $image = theme('imagecache', $preset, $picture);
    }
    else {
      $default_image = variable_get('user_picture_default', '');
      $image = theme("imagecache", $preset, $default_image);
    }
    $path = 'user/'. $uid;
    $output .= l($image, $path, array('attributes' => $attr,
                                      'html' => true));
  }

  return $output;
}