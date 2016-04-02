<?php
/**
 * @file
 * contact_component.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function contact_component_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: user-menu_contact:contact.
  $menu_links['user-menu_contact:contact'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'contact',
    'router_path' => 'contact',
    'link_title' => 'Contact',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'user-menu_contact:contact',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Contact');

  return $menu_links;
}
