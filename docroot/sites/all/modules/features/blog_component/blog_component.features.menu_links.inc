<?php
/**
 * @file
 * blog_component.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function blog_component_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: user-menu_blog:<front>.
  $menu_links['user-menu_blog:<front>'] = array(
    'menu_name' => 'user-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Blog',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'user-menu_blog:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Blog');

  return $menu_links;
}
