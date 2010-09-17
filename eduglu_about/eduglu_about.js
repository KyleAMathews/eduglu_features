Drupal.behaviors.edugluAboutMembersStripping = function(context) {  
  $(".view-eduglu-about-members tr").mouseover(function(){$(this).addClass("over");}).mouseout(function(){$(this).removeClass("over");});
  $(".view-eduglu-about-members tr:odd").addClass("striped");
}
