<?php
/**
 * @file
 * rory_theme_settings_.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function rory_theme_settings__ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "captcha" && $api == "captcha") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
