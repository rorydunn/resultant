<?php
/**
 * @file
 * about_me_component.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function about_me_component_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: user-menu_about-me:about.
  $menu_links['user-menu_about-me:about'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'about',
    'router_path' => 'about',
    'link_title' => 'About Me',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'user-menu_about-me:about',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('About Me');

  return $menu_links;
}
