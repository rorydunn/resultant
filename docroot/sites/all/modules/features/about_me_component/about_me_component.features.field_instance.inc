<?php
/**
 * @file
 * about_me_component.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function about_me_component_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-resume-field_file'.
  $field_instances['node-resume-field_file'] = array(
    'bundle' => 'resume',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_file',
    'label' => 'File',
    'required' => 0,
    'settings' => array(
      'description_field' => 0,
      'file_directory' => '',
      'file_extensions' => 'pdf doc docx',
      'max_filesize' => '10 MB',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'file',
      'settings' => array(
        'imce_filefield_on' => 0,
        'progress_indicator' => 'throbber',
      ),
      'type' => 'file_generic',
      'weight' => -4,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('File');

  return $field_instances;
}
