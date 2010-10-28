Drupal.behaviors.atrium = function(context) {
  // Add drill-down functionality to atrium menu blocks.
  if (jQuery().drilldown) {
    $('div.region div.block-eduglu_book:has(ul.menu):not(.atrium-processed)')
      .addClass('atrium-processed')
      .each(function() {
        var menu = $(this);
        var trail = '#' + $(this).attr('id') + ' span.trail';
        $(this).drilldown('init', {'activePath': Drupal.settings.atriumBookPath, 'trail': trail});
    });
  }
}
