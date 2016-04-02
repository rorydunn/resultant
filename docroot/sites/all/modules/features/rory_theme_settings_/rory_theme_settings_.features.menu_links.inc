<?php
/**
 * @file
 * rory_theme_settings_.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function rory_theme_settings__menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-footer-menu_github:https://github.com/rorydunn.
  $menu_links['menu-footer-menu_github:https://github.com/rorydunn'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'https://github.com/rorydunn',
    'router_path' => '',
    'link_title' => 'GitHub',
    'options' => array(
      'attributes' => array(
        'target' => '_blank',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-footer-menu_github:https://github.com/rorydunn',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-menu_linkedin:https://www.linkedin.com/in/rory-dunn-b19a8748.
  $menu_links['menu-footer-menu_linkedin:https://www.linkedin.com/in/rory-dunn-b19a8748'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'https://www.linkedin.com/in/rory-dunn-b19a8748',
    'router_path' => '',
    'link_title' => 'LinkedIn',
    'options' => array(
      'identifier' => 'menu-footer-menu_linkedin:https://www.linkedin.com/in/rory-dunn-b19a8748',
      'attributes' => array(
        'target' => '_blank',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('GitHub');
  t('LinkedIn');

  return $menu_links;
}
