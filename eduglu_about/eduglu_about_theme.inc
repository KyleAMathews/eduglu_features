<?php

function theme_eduglu_about_page($space) {
  $output .= "<p class='grid-15 eduglu-about-group-description'>" . $space->group->og_description . "</p>";
  $output .= _eduglu_about_members_pics($space);
  $output .= _eduglu_about_group_details($space);
  // Push down blocks to next level.
  $output .= "<div class='grid-15'></div>";
  $output .= _eduglu_top_contributors($space);
  $output .= theme_eduglu_about_stats_boxes_container($space);
  
  return $output;
}
function _eduglu_about_group_details($space) {
  //dpm($space);
  $output .= "<div class='grid-9'>";
  $output .= "<h3>About Group</h3>";
  
  $output .= "<div class='grid-9 alpha eduglu-about-about-group'>";

  // Access control.
  $output .= "<div class='grid-3 alpha eduglu-about-group-label'>";
  $output .= "<strong>Access</strong>";
  $output .= "</div>";
  $output .= "<div class='grid-6 omega'>";
  $output .= _eduglu_about_access_description($space);
  $output .= "</div>";
    
  // Group email.
  $output .= "<div class='grid-3 alpha eduglu-about-group-label'>";
  $output .= "<strong>Group email</strong>";
  $output .= "</div>";
  $output .= "<div class='grid-6 omega'>";
  $group_email = $space->group->ogm_email . "@" . variable_get('og_mailinglist_server_string', 'example.com');
  $output .= l($group_email, "mailto:" . $group_email);
  $output .= "</div>";
  
  // Send email to group owner.
  $group_owner = user_load($space->group->uid);
  $group_owner_name = (module_exists('realname')) ? $group_owner->realname : $group_owner->name;
  $output .= "<div class='prefix-3'>" . l(t("Send email to group owner (@group_owner_name)", array('@group_owner_name' => $group_owner_name)), "user/" . $group_owner->uid . "/contact") . "</div>";
  
  $output .= "</div>";
  $output .= "</div>";
  
  return $output;  
}
function _eduglu_about_access_description($space) {
  $space_preset = $space->controllers->variable->values['space']['spaces_preset_og'];

  switch ($space_preset) {
    case "og_private":
      $output .= "<p>Only group members can view group content<br />";
      $output .= "Only managers can add members to the group<br />";
      $output .= "Only group members can post</p>";
      break;
      
    case "eduglu_protected":
      $output .= "<p>Only registered members of the site can view group content<br />";
      $output .= "Anyone can join<br />";
      $output .= "Only group members can post</p>";
      break;
      
    case "eduglu_public":
      $output .= "<p>Anyone can view group content<br />";
      $output .= "Anyone can join<br />";
      $output .= "Only group members can post</p>";
      break;
  }
  
  return $output;
}
function theme_eduglu_about_stats_boxes_container($space) {
  $output .= "<div class='grid-9 eduglu-about-stats-boxes-container'>";
  $output .= "<h3>Group Statistics</h3>";
  $output .= _eduglu_about_new_group_users($space);
  $output .= _eduglu_about_new_posts($space);
  $output .= "</div>";
  
  return $output;
}

function theme_eduglu_stats_box($flotData, $options, $label, $legend) {
  $output .= "<div class='grid-9 eduglu-about-stats-box alpha'>";
  $output .= "<p class='eduglu-about-stats-box-label'>" . $label . "</p>";
  $output .= theme('flot_graph', array('style'=>'height:50px;width:485px;'), array($flotData), $options);
  $output .= "<img class='eduglu-about-bottom-img' src='". base_path() . path_to_theme() ."/images/bottom.png'>";
  $output .= "<p class='eduglu-about-stats-label'>$legend</p>";
  $output .= "</div>";

  return $output;
}

function theme_eduglu_members_listing($members, $num_members) {
  $output .= '<div class="grid-6 eduglu-about-members-container">';
  $output .= "<h3>" . l(t('@num_members Members', array('@num_members' => $num_members)), 'about/members') . "</h3>"; 
  $output .= '<div class="eduglu-about-members">';
  // Add pictures
  $output .= _eduglu_about_create_member_pictures($members);
  $output .= '</div>';
  $output .= '</div>';
  
  return $output;
}

function theme_eduglu_about_top_contributor_box($top_contributors, $top_posters, $top_commenters) {
  $output .= "<div class='grid-6 eduglu-about-top-contributors'>";
  $output .= "<h3>Top Contributors in Last Six Months</h3>";
  foreach ($top_contributors as $uid => $count) {
    $output .= theme_eduglu_about_top_contributor($uid, $top_posters, $top_commenters);
  }
  $output .= "</div>";
  
  return $output;
}

function theme_eduglu_about_top_contributor($uid, $top_posters, $top_commenters) {
  $user = user_load(array('uid' => $uid));
  $output .= "<div class='grid-6 eduglu-about-top-contributor-box alpha'>";
  $output .= _eduglu_about_create_top_contributor_pictures($uid);
  
  // If we're using the realname module
  if (module_exists("realname")) {
    $name = $user->realname;  
  }
  else {
    $name = $user->name;
  }
  
  $output .= "<p class='eduglu-about-top-contributor-name'>" . l($name, "user/" . $user->uid) . "</p>";
  $output .= "<strong>Posts</strong> ";
  $output .= ($top_posters[$uid]) ? $top_posters[$uid] : "0";
  $output .= "<br /><strong>Comments</strong> ";
  $output .= ($top_commenters[$uid]) ? $top_commenters[$uid] : "0";
  $output .= "</div>";
  
  return $output;
}
