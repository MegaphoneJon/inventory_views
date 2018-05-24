<?php
/**
 * @file
 * inventory_views.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function inventory_views_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "services" && $api == "services") {
    return array("version" => "3");
  }
}

/**
 * Implements hook_views_api().
 */
function inventory_views_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function inventory_views_node_info() {
  $items = array(
    'contract' => array(
      'name' => t('Contract'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'server' => array(
      'name' => t('Server'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('FQDN'),
      'help' => '',
    ),
    'website' => array(
      'name' => t('Website'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
