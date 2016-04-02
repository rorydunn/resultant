<?php
/**
 * @file
 * rory_theme_settings_.captcha.inc
 */

/**
 * Implements hook_captcha_default_points().
 */
function rory_theme_settings__captcha_default_points() {
  $export = array();

  $captcha = new stdClass();
  $captcha->disabled = FALSE; /* Edit this to true to make a default captcha disabled initially */
  $captcha->api_version = 1;
  $captcha->form_id = 'contact_site_form';
  $captcha->module = 'image_captcha';
  $captcha->captcha_type = 'Image';
  $export['contact_site_form'] = $captcha;

  return $export;
}
