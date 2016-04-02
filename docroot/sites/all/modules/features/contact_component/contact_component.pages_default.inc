<?php
/**
 * @file
 * contact_component.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function contact_component_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'contact_site__panel_context_2e4bf5d0-ab99-43bb-b305-7d334f6e97e8';
  $handler->task = 'contact_site';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Contact',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
  );
  $display = new panels_display();
  $display->layout = 'bootstrap_threecol_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => array(
        'column_type' => 'col-sm',
        'column_size' => '4',
        'offset_type' => 'col-sm-offset',
        'offset_size' => '0',
      ),
      'middle' => array(
        'column_type' => 'col-sm',
        'column_size' => '12',
        'offset_type' => 'col-sm-offset',
        'offset_size' => '0',
      ),
      'right' => NULL,
      'bottom' => NULL,
    ),
    'middle' => array(
      'style' => 'bootstrap_region',
    ),
    'left' => array(
      'style' => 'bootstrap_region',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '45d2ffe6-0a32-4453-bcec-97a810b0c8cc';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-b101f3b3-110c-4eaa-9fdf-8d0fe3a6dd8a';
    $pane->panel = 'left';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => 'Use this form to contact me for ____.  Additionally please feel free to reach out to me on LinkedIn.',
      'format' => 'filtered_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'b101f3b3-110c-4eaa-9fdf-8d0fe3a6dd8a';
    $display->content['new-b101f3b3-110c-4eaa-9fdf-8d0fe3a6dd8a'] = $pane;
    $display->panels['left'][0] = 'new-b101f3b3-110c-4eaa-9fdf-8d0fe3a6dd8a';
    $pane = new stdClass();
    $pane->pid = 'new-7b37033d-d5ce-40b9-95b5-4cfae1be36c2';
    $pane->panel = 'middle';
    $pane->type = 'contact';
    $pane->subtype = 'contact';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '<none>',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '7b37033d-d5ce-40b9-95b5-4cfae1be36c2';
    $display->content['new-7b37033d-d5ce-40b9-95b5-4cfae1be36c2'] = $pane;
    $display->panels['middle'][0] = 'new-7b37033d-d5ce-40b9-95b5-4cfae1be36c2';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-7b37033d-d5ce-40b9-95b5-4cfae1be36c2';
  $handler->conf['display'] = $display;
  $export['contact_site__panel_context_2e4bf5d0-ab99-43bb-b305-7d334f6e97e8'] = $handler;

  return $export;
}
