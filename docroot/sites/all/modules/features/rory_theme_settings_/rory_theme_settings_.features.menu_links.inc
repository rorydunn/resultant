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
  // Exported menu link: user-menu_blog:home/.
  $menu_links['user-menu_blog:home/'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'home/',
    'router_path' => 'home',
    'link_title' => 'Blog',
    'options' => array(
      'identifier' => 'user-menu_blog:home/',
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'fragment' => 'blog',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
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
  // Exported menu link: user-menu_log-out:user/logout.
  $menu_links['user-menu_log-out:user/logout'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user/logout',
    'router_path' => 'user/logout',
    'link_title' => 'Log out',
    'options' => array(
      'identifier' => 'user-menu_log-out:user/logout',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 10,
    'customized' => 0,
  );
  // Exported menu link: user-menu_user-account:user.
  $menu_links['user-menu_user-account:user'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user',
    'router_path' => 'user',
    'link_title' => 'User account',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'user-menu_user-account:user',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -10,
    'customized' => 0,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('About Me');
  t('Blog');
  t('Contact');
  t('GitHub');
  t('LinkedIn');
  t('Log out');
  t('User account');

  return $menu_links;
}
