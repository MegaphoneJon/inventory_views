<?php
/**
 * @file
 * inventory_views.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function inventory_views_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: navigation_client-list:client-list.
  $menu_links['navigation_client-list:client-list'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'client-list',
    'router_path' => 'client-list',
    'link_title' => 'Client List',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'navigation_client-list:client-list',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'navigation_inventory:<front>',
  );
  // Exported menu link: navigation_contract-list:contract-list.
  $menu_links['navigation_contract-list:contract-list'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'contract-list',
    'router_path' => 'contract-list',
    'link_title' => 'Contract List',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'navigation_contract-list:contract-list',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 1,
    'customized' => 1,
    'parent_identifier' => 'navigation_inventory:<front>',
  );
  // Exported menu link: navigation_inventory:<front>.
  $menu_links['navigation_inventory:<front>'] = array(
    'menu_name' => 'navigation',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Inventory',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'navigation_inventory:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => 3,
    'customized' => 1,
  );
  // Exported menu link: navigation_server-list:server-list.
  $menu_links['navigation_server-list:server-list'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'server-list',
    'router_path' => 'server-list',
    'link_title' => 'Server List',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'navigation_server-list:server-list',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 2,
    'customized' => 1,
    'parent_identifier' => 'navigation_inventory:<front>',
  );
  // Exported menu link: navigation_website-list:website-list.
  $menu_links['navigation_website-list:website-list'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'website-list',
    'router_path' => 'website-list',
    'link_title' => 'Website List',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'navigation_website-list:website-list',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 3,
    'customized' => 1,
    'parent_identifier' => 'navigation_inventory:<front>',
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Client List');
  t('Contract List');
  t('Inventory');
  t('Server List');
  t('Website List');

  return $menu_links;
}
