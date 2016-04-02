<?php
/**
 * @file
 * contact_component.features.contact_categories.inc
 */

/**
 * Implements hook_contact_categories_defaults().
 */
function contact_component_contact_categories_defaults() {
  return array(
    'Website feedback' => array(
      'category' => 'Website feedback',
      'recipients' => 'email@email.com',
      'reply' => '',
      'weight' => 0,
      'selected' => 1,
    ),
  );
}
