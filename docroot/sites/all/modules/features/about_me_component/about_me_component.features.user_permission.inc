<?php
/**
 * @file
 * about_me_component.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function about_me_component_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create resume content'.
  $permissions['create resume content'] = array(
    'name' => 'create resume content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any resume content'.
  $permissions['delete any resume content'] = array(
    'name' => 'delete any resume content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own resume content'.
  $permissions['delete own resume content'] = array(
    'name' => 'delete own resume content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any resume content'.
  $permissions['edit any resume content'] = array(
    'name' => 'edit any resume content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own resume content'.
  $permissions['edit own resume content'] = array(
    'name' => 'edit own resume content',
    'roles' => array(),
    'module' => 'node',
  );

  return $permissions;
}
