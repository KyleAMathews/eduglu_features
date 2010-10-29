Drupal.behaviors.eduglu = function(context) {
  // Add drill-down functionality to eduglu menu blocks.
  if (jQuery().drilldown) {
    $('div.region div.block-eduglu_book:has(ul.menu):not(.eduglu-processed)')
      .addClass('eduglu-processed')
      .each(function() {
        var menu = $(this);
        var trail = '#' + $(this).attr('id') + ' span.trail';
        $(this).drilldown('init', {'activePath': Drupal.settings.edugluBookPath, 'trail': trail});
    });
  }
}
