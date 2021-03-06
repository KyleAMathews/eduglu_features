<?php

/**
 * Implementation of hook_strongarm().
 */
function eduglu_core_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'allowed_html_3';
  $strongarm->value = '<a><em><strong><small><sup><sub><cite><blockquote><code><ul><ol><li><dl><dt><dd><h1><h2><h3><h4><img><br><br /><p><div><span><b><i><font><color><embed><object><python><java><css><php><html> <strike><table><caption><thead><tbody><tr><td><pre><iframe><p><fieldset><legend>';

  $export['allowed_html_3'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_medium';
  $strongarm->value = 'D, m/d/Y - g:ia';

  $export['date_format_medium'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_short';
  $strongarm->value = 'j M Y - g:ia';

  $export['date_format_short'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_time';
  $strongarm->value = 'g:ia';

  $export['date_format_time'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'filter_default_format';
  $strongarm->value = '3';

  $export['filter_default_format'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'filter_html_3';
  $strongarm->value = '1';

  $export['filter_html_3'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'filter_html_help_3';
  $strongarm->value = 1;

  $export['filter_html_help_3'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'filter_html_nofollow_3';
  $strongarm->value = 0;

  $export['filter_html_nofollow_3'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'filter_url_length_3';
  $strongarm->value = '100';

  $export['filter_url_length_3'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'filter_url_length_4';
  $strongarm->value = '100';

  $export['filter_url_length_4'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'imageapi_jpeg_quality';
  $strongarm->value = '85';

  $export['imageapi_jpeg_quality'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_primary_links_source';
  $strongarm->value = 'features';

  $export['menu_primary_links_source'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'og_home_page_view';
  $strongarm->value = 'og_ghp_ron';

  $export['og_home_page_view'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'purl_method_spaces_og';
  $strongarm->value = 'path';

  $export['purl_method_spaces_og'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'purl_types';
  $strongarm->value = array(
    'path' => 'path',
    'pair' => 0,
    'subdomain' => 0,
    'domain' => 0,
    'extension' => 0,
    'useragent' => 0,
    'querystring' => 0,
  );

  $export['purl_types'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_frontpage';
  $strongarm->value = 'eduglu_front_page_redirect';

  $export['site_frontpage'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'spaces_features';
  $strongarm->value = array(
    'eduglu_blog' => '0',
    'eduglu_groups' => '1',
    'eduglu_welcome' => '1',
    'spaces_dashboard' => '1',
  );

  $export['spaces_features'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'tipsy';
  $strongarm->value = array(
    'drupal_forms' => array(
      'forms' => 0,
      'options' => array(
        'fade' => 1,
        'gravity' => 'autoWE',
        'delayIn' => '0',
        'delayOut' => '0',
        'trigger' => 'focus',
        'opacity' => '0.8',
        'offset' => '0',
      ),
    ),
    'custom_selectors' => array(
      0 => array(
        'selector' => '.tipsy',
        'options' => array(
          'fade' => 1,
          'gravity' => 'autoNS',
          'trigger' => 'hover',
          'delayIn' => '0',
          'delayOut' => '0',
          'opacity' => '0.8',
          'offset' => '0',
          'html' => 0,
          'title' => 'title',
        ),
      ),
      1 => array(
        'selector' => 'a.flag',
        'options' => array(
          'fade' => 1,
          'gravity' => 'autoNS',
          'trigger' => 'hover',
          'delayIn' => '125',
          'delayOut' => '0',
          'opacity' => '0.8',
          'offset' => '0',
          'html' => 0,
          'title' => 'title',
        ),
      ),
    ),
  );

  $export['tipsy'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'typogrify_is_amp_on_3';
  $strongarm->value = 1;

  $export['typogrify_is_amp_on_3'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'typogrify_is_amp_on_4';
  $strongarm->value = 1;

  $export['typogrify_is_amp_on_4'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'typogrify_is_caps_on_3';
  $strongarm->value = 1;

  $export['typogrify_is_caps_on_3'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'typogrify_is_caps_on_4';
  $strongarm->value = 1;

  $export['typogrify_is_caps_on_4'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'typogrify_is_initial_quotes_on_3';
  $strongarm->value = 1;

  $export['typogrify_is_initial_quotes_on_3'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'typogrify_is_initial_quotes_on_4';
  $strongarm->value = 1;

  $export['typogrify_is_initial_quotes_on_4'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'typogrify_is_widont_on_3';
  $strongarm->value = 1;

  $export['typogrify_is_widont_on_3'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'typogrify_is_widont_on_4';
  $strongarm->value = 1;

  $export['typogrify_is_widont_on_4'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'typogrify_use_ff_ligature_3';
  $strongarm->value = 0;

  $export['typogrify_use_ff_ligature_3'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'typogrify_use_ff_ligature_4';
  $strongarm->value = 0;

  $export['typogrify_use_ff_ligature_4'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'typogrify_use_ffi_ligature_3';
  $strongarm->value = 0;

  $export['typogrify_use_ffi_ligature_3'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'typogrify_use_ffi_ligature_4';
  $strongarm->value = 0;

  $export['typogrify_use_ffi_ligature_4'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'typogrify_use_ffl_ligature_3';
  $strongarm->value = 0;

  $export['typogrify_use_ffl_ligature_3'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'typogrify_use_ffl_ligature_4';
  $strongarm->value = 0;

  $export['typogrify_use_ffl_ligature_4'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'typogrify_use_fi_ligature_3';
  $strongarm->value = 0;

  $export['typogrify_use_fi_ligature_3'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'typogrify_use_fi_ligature_4';
  $strongarm->value = 0;

  $export['typogrify_use_fi_ligature_4'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'typogrify_use_fl_ligature_1';
  $strongarm->value = 0;

  $export['typogrify_use_fl_ligature_1'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'typogrify_use_fl_ligature_2';
  $strongarm->value = 1;

  $export['typogrify_use_fl_ligature_2'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'typogrify_use_ft_ligature_1';
  $strongarm->value = 0;

  $export['typogrify_use_ft_ligature_1'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'typogrify_use_ft_ligature_2';
  $strongarm->value = 1;

  $export['typogrify_use_ft_ligature_2'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'typogrify_use_ss_ligature_1';
  $strongarm->value = 0;

  $export['typogrify_use_ss_ligature_1'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'typogrify_use_ss_ligature_2';
  $strongarm->value = 1;

  $export['typogrify_use_ss_ligature_2'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'typogrify_use_st_ligature_3';
  $strongarm->value = 0;

  $export['typogrify_use_st_ligature_3'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'typogrify_use_st_ligature_4';
  $strongarm->value = 0;

  $export['typogrify_use_st_ligature_4'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'typogrify_use_unicode_for_->>_3';
  $strongarm->value = 1;

  $export['typogrify_use_unicode_for_->>_3'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'typogrify_use_unicode_for_->>_4';
  $strongarm->value = 1;

  $export['typogrify_use_unicode_for_->>_4'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'typogrify_use_unicode_for_->_3';
  $strongarm->value = 1;

  $export['typogrify_use_unicode_for_->_3'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'typogrify_use_unicode_for_->_4';
  $strongarm->value = 1;

  $export['typogrify_use_unicode_for_->_4'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'typogrify_use_unicode_for_->|_3';
  $strongarm->value = 1;

  $export['typogrify_use_unicode_for_->|_3'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'typogrify_use_unicode_for_->|_4';
  $strongarm->value = 1;

  $export['typogrify_use_unicode_for_->|_4'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'typogrify_use_unicode_for_<->_3';
  $strongarm->value = 1;

  $export['typogrify_use_unicode_for_<->_3'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'typogrify_use_unicode_for_<->_4';
  $strongarm->value = 1;

  $export['typogrify_use_unicode_for_<->_4'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'typogrify_use_unicode_for_<-_3';
  $strongarm->value = 1;

  $export['typogrify_use_unicode_for_<-_3'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'typogrify_use_unicode_for_<-_4';
  $strongarm->value = 1;

  $export['typogrify_use_unicode_for_<-_4'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'typogrify_use_unicode_for_<<-_3';
  $strongarm->value = 1;

  $export['typogrify_use_unicode_for_<<-_3'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'typogrify_use_unicode_for_<<-_4';
  $strongarm->value = 1;

  $export['typogrify_use_unicode_for_<<-_4'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'typogrify_use_unicode_for_<=>_3';
  $strongarm->value = 1;

  $export['typogrify_use_unicode_for_<=>_3'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'typogrify_use_unicode_for_<=>_4';
  $strongarm->value = 1;

  $export['typogrify_use_unicode_for_<=>_4'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'typogrify_use_unicode_for_<=_3';
  $strongarm->value = 1;

  $export['typogrify_use_unicode_for_<=_3'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'typogrify_use_unicode_for_<=_4';
  $strongarm->value = 1;

  $export['typogrify_use_unicode_for_<=_4'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'typogrify_use_unicode_for_=>_3';
  $strongarm->value = 1;

  $export['typogrify_use_unicode_for_=>_3'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'typogrify_use_unicode_for_=>_4';
  $strongarm->value = 1;

  $export['typogrify_use_unicode_for_=>_4'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'typogrify_use_unicode_for_|<-_3';
  $strongarm->value = 1;

  $export['typogrify_use_unicode_for_|<-_3'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'typogrify_use_unicode_for_|<-_4';
  $strongarm->value = 1;

  $export['typogrify_use_unicode_for_|<-_4'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'upload_extensions_default';
  $strongarm->value = 'jpg jpeg gif png txt doc docx xls xlsx pdf ppt pptx pps odt ods odp py rb zip java swf pages key numbers gz tar bz2';

  $export['upload_extensions_default'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'upload_list_default';
  $strongarm->value = '1';

  $export['upload_list_default'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'upload_uploadsize_default';
  $strongarm->value = '20';

  $export['upload_uploadsize_default'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'upload_usersize_default';
  $strongarm->value = '200';

  $export['upload_usersize_default'] = $strongarm;
  return $export;
}
