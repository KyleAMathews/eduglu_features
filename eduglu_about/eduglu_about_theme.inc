<?php

function theme_eduglu_about_page($space) {
  $output .= "<p class='grid-15 eduglu-about-group-description'>" . $space->group->og_description . "</p>";
  $output .= _eduglu_about_members_pics($space);
  $output .= theme_eduglu_about_stats_boxes_container($space);
  $output .= _eduglu_top_contributors($space);
  
  return $output;
}
function theme_eduglu_about_stats_boxes_container($space) {
  $output .= "<div class='grid-9 eduglu-about-stats-boxes-container'>";
  $output .= "<h3>Group Statistics</h3>";
  $output .= _eduglu_about_new_group_users($space);
  $output .= _eduglu_about_new_nodes($space);
  $output .= _eduglu_about_new_group_comments($space);
  $output .= "</div>";
  
  return $output;
}

function theme_eduglu_stats_box($flotData, $options, $label, $legend) {
  $output .= "<div class='grid-9 eduglu-about-stats-box'>";
  $output .= "<p class='eduglu-about-stats-box-label'>" . $label . "</p>";
  $output .= theme('flot_graph', array('style'=>'height:50px;width:485px;'), array($flotData), $options);
  $output .= "<img class='eduglu-about-bottom-img' src='". base_path() . path_to_theme() ."/images/bottom.png'>";
  $output .= "<p class='eduglu-about-stats-label'>$legend</p>";
  $output .= "</div>";

  return $output;
}

function theme_eduglu_members_listing($members, $num_members) {
  $output .= '<div class="grid-6 eduglu-about-members-container">';
  $output .= "<h3>$num_members Members</h3>";
  $output .= '<div class="eduglu-about-members">';
  // Add pictures
  $output .= _eduglu_about_create_member_pictures($members);
  $output .= '</div>';
  $output .= '</div>';
  
  return $output;
}

function theme_eduglu_about_top_contributor_box($top_contributors, $top_posters, $top_commenters) {
  $output .= "<div class='grid-9 eduglu-about-top-contributors'>";
  $output .= "<h3>Top Contributors in Last Six Months</h3>";
  foreach ($top_contributors as $uid => $count) {
    $output .= theme_eduglu_about_top_contributor($uid, $top_posters, $top_commenters);
  }
  $output .= "</div>";
  
  return $output;
}

function theme_eduglu_about_top_contributor($uid, $top_posters, $top_commenters) {
  $user = user_load(array('uid' => $uid));
  $output .= "<div class='grid-9 eduglu-about-top-contributor-box'>";
  $output .= _eduglu_about_create_top_contributor_pictures($uid);
  
  // If we're using the realname module
  if (module_exists("realname")) {
    $name = $user->realname;  
  }
  else {
    $name = $user->name;
  }
  
  $output .= "<p class='eduglu-about-top-contributor-name'>" . l($name, "user/" . $user->uid) . "</p>";
  $output .= "<strong>Posts:</strong> ";
  $output .= ($top_posters[$uid]) ? $top_posters[$uid] : "0";
  $output .= "<br /><strong>Comments:</strong> ";
  $output .= ($top_commenters[$uid]) ? $top_commenters[$uid] : "0";
  $output .= "</div>";
  
  return $output;
}