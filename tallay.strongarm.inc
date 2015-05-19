<?php
/**
 * @file
 * tallay.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function tallay_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_meeting';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_meeting'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_meeting';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_meeting'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_meeting';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_meeting'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_meeting';
  $strongarm->value = '1';
  $export['node_preview_meeting'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_meeting';
  $strongarm->value = 1;
  $export['node_submitted_meeting'] = $strongarm;

  return $export;
}
