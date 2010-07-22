<?php

define('THIRTY_DAYS_UNIX', 2592000);
define('SIX_MONTHS_UNIX', 15552000);
define('ONE_YEAR_UNIX', 31536000);
define('ONE_WEEK_SECONDS', 604800);
// MySQL group by week seems to default to Monday as the start of the week.
define('LAST_MONDAY', strtotime("last Monday")); 

// seems queries for data aren't correct... isys doesn't show any posts for past couple of weeks, others show posts where there isn't any... odd.
// Flot doesn't work if js compression is turned on...
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
  
  if ($new_group_members_data = cache_get('eduglu_about_new_members_' . $space->id)) {
    $data = $new_group_members_data->data;
  }
  else {
    $result = db_query("
      SELECT count(date_format(from_unixtime(created), '%Y%U')) as count,
      created as timestamp
      FROM og_uid
      WHERE nid = %d
      AND created > %d
      GROUP BY date_format(from_unixtime(created), '%Y%U')
      ORDER BY timestamp desc", $space->id, LAST_MONDAY - ONE_YEAR_UNIX);
  
    $results = array();
    // Pull out into keyed array.
    while ($data = db_fetch_array($result)) {
      $results[$data['timestamp']] = intval($data['count']);
    }
  
    $data = _eduglu_about_process_weekly($results);
    
    cache_set('eduglu_about_new_members_' . $space->id, $data, 'cache', time() + 86400);
  }

  $num_members = db_result(db_query("SELECT count(*)
                        FROM og_uid
                        WHERE nid = %d
                        AND created > %d", $space->id, time() - THIRTY_DAYS_UNIX));

  // Set the yaxis max at larger of either 20, or the largest value.
  if (count($data['orig_data']) > 0 && max($data['orig_data']) < 20) {
    $options->yaxis['max'] = 20;
  }
 
  $d1 = new flotData($data['flot_values']);
  $label = format_plural($num_members, "1 <strong>New Member</strong> in Last 30 Days", "@count <strong>New Members</strong> in Last 30 Days");
  $legend = "52 Weeks New Members";
  
  $output = theme('eduglu_stats_box', $d1, $options, $label, $legend);
  
  return $output;
}

/**
 * Generate flot graph of how many posts (nodes + comments) have been created / week in this group.
 */
function _eduglu_about_new_posts($space) {
  $options = _eduglu_about_flot_options();

  list($node_data, $num_nodes) = _eduglu_about_query_new_nodes($space);
  list($comment_data, $num_comments) = _eduglu_about_query_new_comments($space);

  $num_posts = $num_nodes + $num_comments;

  // Set the yaxis max at larger of either 20, or the largest value.
  if (count($comment_data['orig_data']) > 0 && max($comment_data['orig_data']) < 20) {
    $options->yaxis['max'] = 20;
  }

  // Merge node + comment data.
  $flot_data = $node_data['flot_values'];
  foreach ($comment_data['flot_values'] as $data) {
    $success = FALSE;
    foreach ($flot_data as &$week) {
      // If the comment count is from the same week add them, else add new row.
      if ($data[0] == $week[0]) {
        $week[1] = $week[1] + $data[1];
        $success = TRUE;
      }
    }
    if (!$success) {
      $flot_data[] = array($data[0], $data[1]);
    }
  }

  $d1 = new flotData($flot_data);
  $label = format_plural($num_posts, "1 <strong>New Post</strong> in Last 30 Days",
                                  "@count <strong>New Posts</strong> in Last 30 Days");
  $legend = "52 Weeks New Posts";

  $output = theme('eduglu_stats_box', $d1, $options, $label, $legend);

  return $output;
}

/**
 * Query how many new nodes in the past year.
 *
 * @return Array $data processed data.
 */
function _eduglu_about_query_new_nodes($space) {
  if ($new_node_data = cache_get('eduglu_about_new_nodes_' . $space->id)) {
    $data = $new_node_data->data;
  }
  else {
    $result = db_query("SELECT
      count(date_format(from_unixtime(n.created), '%Y%U')) as count,
      created as timestamp
      FROM node n JOIN og_ancestry o
      WHERE n.nid = o.nid
      AND o.group_nid = %d
      AND n.type in ('story','poll','event_cck','book','event','job_form','wiki','learning_contract','quiz')
      AND n.created > %d
      GROUP BY date_format(from_unixtime(n.created), '%Y%U')
      ORDER BY timestamp desc", $space->id, LAST_MONDAY - ONE_YEAR_UNIX);
  
    $results = array();
    // Pull out into keyed array.
    while ($data = db_fetch_array($result)) {
      $results[$data['timestamp']] = intval($data['count']);
    }
  
    $data = _eduglu_about_process_weekly($results);
    
    cache_set('eduglu_about_new_nodes_' . $space->id, $data, 'cache', time() + 86400);
  }

  $num_nodes = db_result(db_query("SELECT count(*)
                        FROM {og_ancestry} o JOIN {node} n
                        WHERE n.nid = o.nid
                        AND o.group_nid = %d
                        AND n.created > %d",
                          $space->id, time() - THIRTY_DAYS_UNIX));

  return array($data, $num_nodes);
}

/**
 * Query how many new nodes in the past year.
 * 
 * @return Array $data processed data.
 */
function _eduglu_about_query_new_comments($space) {
  if ($new_group_comments_data = cache_get('eduglu_about_new_comments_' . $space->id)) {
    $data = $new_group_comments_data->data;
  }
  else {
    $result = db_query("
      SELECT count(date_format(from_unixtime(c.timestamp), '%Y%U')) as count,
      c.timestamp as timestamp
      FROM {comments} c JOIN {og_ancestry} o
      WHERE c.nid = o.nid
      AND o.group_nid = %d
      AND c.timestamp > %d
      GROUP BY date_format(from_unixtime(c.timestamp), '%Y%U')
      ORDER BY timestamp desc", $space->id, LAST_MONDAY - ONE_YEAR_UNIX);
  
    $results = array();
    // Pull out into keyed array.
    while ($data = db_fetch_array($result)) {
      $results[$data['timestamp']] = intval($data['count']);
    }

    $data = _eduglu_about_process_weekly($results);

    cache_set('eduglu_about_new_comments_' . $space->id, $data, 'cache', time() + 86400);
  }

  $num_comments = db_result(db_query("SELECT count(*)
                        FROM {comments} c JOIN {og_ancestry} o
                        WHERE c.nid = o.nid
                        AND o.group_nid = %d
                        AND c.timestamp > %d", $space->id, time() - THIRTY_DAYS_UNIX));

  return array($data, $num_comments);
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
 *  Helper function. Process weekly stats.
 */
function _eduglu_about_process_weekly($results) {
  $one_year_ago = LAST_MONDAY - ONE_YEAR_UNIX;
  
  $values = array();
  
  foreach ($results as $timestamp => $value) {
    // Use floor instead of round as timestamp chosen could be near end up week
    // hence round up which would be a mistake.
    $key = floor(($timestamp - $one_year_ago) / ONE_WEEK_SECONDS);
    $values[$key] = $value;
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
                        WHERE nid = %d", $space->id));

  // Fetch pictures of group memberes
  $results = db_query("SELECT u.uid, u.picture
                       FROM {og_uid} o JOIN {users} u
                       WHERE o.uid = u.uid
                       AND o.nid = %d
                       ORDER BY o.created
                       LIMIT 400", $space->id);

  $members = array();
  while ($data = db_fetch_array($results)) {
    $members[$data['uid']] = $data['picture'];
  }

  $output = theme('eduglu_members_listing', $members, $num_members);

  return $output;
}

/**
 * Create micro-thumbnails for all the members of a group.
 *
 * We only display a percentage of people w/o pictures.
 */
function _eduglu_about_create_member_pictures($members) {
  foreach ($members as $uid => $picture) {
    $continue = false;
    if (isset($picture) && module_exists('imagecache')) {
      $attr = array('class' => 'eduglu-about-group-member-picture');
      $preset = '25x25_crop';

      $attr['class'] .= ' picture-'. $preset;
      if (file_exists($picture)) {
        $image = theme('imagecache', $preset, $picture);
      }
    else {
      // Only use ~20% of people w/o pictures. Too many default pictures
      // looks tacky + we want to reinforce it's cool to have a picture.
      $rand_num = rand(0,1000);
      if ($rand_num > 200) {
        $continue = TRUE;
      }

      $default_image = variable_get('user_picture_default', '');
      $image = theme("imagecache", $preset, $default_image);
    }
    if ($continue) {
      continue;
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
        LIMIT 100", $space->id, time() - SIX_MONTHS_UNIX);

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
        LIMIT 100", $space->id, time() - SIX_MONTHS_UNIX);
   
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
