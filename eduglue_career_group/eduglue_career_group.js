if (Drupal.jsEnabled) {
  $(document).ready(function() {
    $('.alumni-profile-toggle').click( function() {
      $(this).parent().parent().next().toggle();
    });
  });
}
