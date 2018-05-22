<?php
/**
 * @file
 * inventory_views.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function inventory_views_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_active'.
  $field_bases['field_active'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_active',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        0 => '',
        1 => '',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_boolean',
  );

  // Exported field_base: 'field_admin_email'.
  $field_bases['field_admin_email'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_admin_email',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_agent_forwarding'.
  $field_bases['field_agent_forwarding'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_agent_forwarding',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        0 => '',
        1 => '',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_boolean',
  );

  // Exported field_base: 'field_ansible'.
  $field_bases['field_ansible'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_ansible',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        0 => 0,
        1 => 1,
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_boolean',
  );

  // Exported field_base: 'field_ansible_user'.
  $field_bases['field_ansible_user'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_ansible_user',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_backup_method'.
  $field_bases['field_backup_method'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_backup_method',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_bare_url'.
  $field_bases['field_bare_url'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_bare_url',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'computed_field',
    'settings' => array(
      'code' => '$primary_url = field_get_items($entity_type, $entity, \'field_primary_url\');
$entity_field[0][\'value\'] = preg_replace(\'#^https?://#\', \'\', $primary_url[0][\'value\']);',
      'database' => array(
        'data_default' => '',
        'data_index' => 0,
        'data_length' => 255,
        'data_not_NULL' => 0,
        'data_precision' => 10,
        'data_scale' => 2,
        'data_size' => 'normal',
        'data_type' => 'varchar',
      ),
      'display_format' => '$display_output = $entity_field_item[\'value\'];',
      'recalculate' => 0,
      'store' => 1,
    ),
    'translatable' => 0,
    'type' => 'computed',
  );

  // Exported field_base: 'field_canonical_website'.
  $field_bases['field_canonical_website'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_canonical_website',
    'indexes' => array(
      'nid' => array(
        0 => 'nid',
      ),
    ),
    'locked' => 0,
    'module' => 'node_reference',
    'settings' => array(
      'referenceable_types' => array(
        'article' => 0,
        'contract' => 0,
        'page' => 0,
        'server' => 0,
        'website' => 'website',
      ),
      'view' => array(
        'args' => array(),
        'display_name' => '',
        'view_name' => '',
      ),
    ),
    'translatable' => 0,
    'type' => 'node_reference',
  );

  // Exported field_base: 'field_civicrm'.
  $field_bases['field_civicrm'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_civicrm',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        0 => 'No',
        1 => 'Yes',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_boolean',
  );

  // Exported field_base: 'field_civicrm_custom_path'.
  $field_bases['field_civicrm_custom_path'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_civicrm_custom_path',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'computed_field',
    'settings' => array(
      'code' => '$override = field_get_items($entity_type, $entity, \'field_civicrm_custom_path_overri\');
$cms = field_get_items($entity_type, $entity, \'field_cms\');
$webroot_field = field_get_items($entity_type, $entity, \'field_webroot\');
$webroot = $webroot_field[0][\'value\'];
switch($cms[0][\'value\']) {
  case \'Drupal\':
    $default = $webroot . \'/sites/all/civicrm-custom\';
    break;
  case \'WordPress\':
    $default = $webroot . \'/wp-content/civicrm-custom\';
    break;
  case \'Backdrop\':
  case \'Joomla\':
    $default = $webroot . \'/civicrm-custom\';
    break;
}
$entity_field[0][\'value\'] = array_key_exists(0, $override)  ? $override[0][\'value\'] : $default;',
      'database' => array(
        'data_default' => '',
        'data_index' => 0,
        'data_length' => 255,
        'data_not_NULL' => 0,
        'data_precision' => 10,
        'data_scale' => 2,
        'data_size' => 'normal',
        'data_type' => 'varchar',
      ),
      'display_format' => '$display_output = $entity_field_item[\'value\'];',
      'recalculate' => 0,
      'store' => 1,
    ),
    'translatable' => 0,
    'type' => 'computed',
  );

  // Exported field_base: 'field_civicrm_custom_path_overri'.
  $field_bases['field_civicrm_custom_path_overri'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_civicrm_custom_path_overri',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_civicrm_files_path'.
  $field_bases['field_civicrm_files_path'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_civicrm_files_path',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'computed_field',
    'settings' => array(
      'code' => '$override = field_get_items($entity_type, $entity, \'field_civicrm_files_path_overrid\');
$cms = field_get_items($entity_type, $entity, \'field_cms\');
$webroot_field = field_get_items($entity_type, $entity, \'field_webroot\');
$webroot = $webroot_field[0][\'value\'];
switch($cms[0][\'value\']) {
  case \'Drupal\':
    $default = $webroot . \'/sites/default/files/civicrm\';
    break;
  case \'WordPress\':
    $default = $webroot . \'/wp-content/uploads/civicrm\';
    break;
  case \'Backdrop\':
    $default = $webroot . \'/files/civicrm\';
    break;
  case \'Joomla\':
    $default = $webroot . \'/media/civicrm\';
    break;
}
$entity_field[0][\'value\'] = array_key_exists(0, $override)  ? $override[0][\'value\'] : $default;',
      'database' => array(
        'data_default' => '',
        'data_index' => 0,
        'data_length' => 255,
        'data_not_NULL' => 0,
        'data_precision' => 10,
        'data_scale' => 2,
        'data_size' => 'normal',
        'data_type' => 'varchar',
      ),
      'display_format' => '$display_output = $entity_field_item[\'value\'];',
      'recalculate' => 0,
      'store' => 1,
    ),
    'translatable' => 0,
    'type' => 'computed',
  );

  // Exported field_base: 'field_civicrm_files_path_overrid'.
  $field_bases['field_civicrm_files_path_overrid'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_civicrm_files_path_overrid',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_civicrm_settings_php_path'.
  $field_bases['field_civicrm_settings_php_path'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_civicrm_settings_php_path',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'computed_field',
    'settings' => array(
      'code' => '$cms = field_get_items($entity_type, $entity, \'field_cms\');
$webroot_field = field_get_items($entity_type, $entity, \'field_webroot\');
$webroot = $webroot_field[0][\'value\'];
switch($cms[0][\'value\']) {
  case \'Drupal\':
    $civiroot = $webroot . \'/sites/default\';
    break;
  case \'WordPress\':
    $civiroot = $webroot . \'/wp-content/uploads/civicrm\';
    break;
  case \'Backdrop\':
    $civiroot = $webroot;
    break;
  case \'Joomla\':
    $civiroot = $webroot . \'/administrator/components/com_civicrm\';
    break;
}
$entity_field[0][\'value\'] = $civiroot;
//$default = $civiroot;
//$entity_field[0][\'value\'] = array_key_exists(0, $override)  ? $override[0][\'value\'] : $default;',
      'database' => array(
        'data_default' => '',
        'data_index' => 0,
        'data_length' => 255,
        'data_not_NULL' => 0,
        'data_precision' => 10,
        'data_scale' => 2,
        'data_size' => 'normal',
        'data_type' => 'varchar',
      ),
      'display_format' => '$display_output = $entity_field_item[\'value\'];',
      'recalculate' => 0,
      'store' => 1,
    ),
    'translatable' => 0,
    'type' => 'computed',
  );

  // Exported field_base: 'field_civiroot'.
  $field_bases['field_civiroot'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_civiroot',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'computed_field',
    'settings' => array(
      'code' => '$override = field_get_items($entity_type, $entity, \'field_civiroot_override\');
$cms = field_get_items($entity_type, $entity, \'field_cms\');
$webroot_field = field_get_items($entity_type, $entity, \'field_webroot\');
$webroot = $webroot_field[0][\'value\'];
switch($cms[0][\'value\']) {
  case \'Drupal\':
    $civiroot = $webroot . \'/sites/all/modules/civicrm\';
    break;
  case \'WordPress\':
    $civiroot = $webroot . \'/wp-content/plugins/civicrm/civicrm\';
    break;
  case \'Backdrop\':
    $civiroot = $webroot . \'/modules/civicrm\';
    break;
  case \'Joomla\':
    $civiroot = $webroot . \'/administrator/components/com_civicrm/civicrm\';
    break;
}
$default = $civiroot;
$entity_field[0][\'value\'] = array_key_exists(0, $override)  ? $override[0][\'value\'] : $default;',
      'database' => array(
        'data_default' => '',
        'data_index' => 0,
        'data_length' => 255,
        'data_not_NULL' => 0,
        'data_precision' => 10,
        'data_scale' => 2,
        'data_size' => 'normal',
        'data_type' => 'varchar',
      ),
      'display_format' => '$display_output = $entity_field_item[\'value\'];',
      'recalculate' => 0,
      'store' => 1,
    ),
    'translatable' => 0,
    'type' => 'computed',
  );

  // Exported field_base: 'field_civiroot_override'.
  $field_bases['field_civiroot_override'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_civiroot_override',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_client'.
  $field_bases['field_client'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_client',
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'entityreference',
    'settings' => array(
      'handler' => 'views',
      'handler_settings' => array(
        'behaviors' => array(
          'views-select-list' => array(
            'status' => 0,
          ),
        ),
        'view' => array(
          'args' => array(),
          'display_name' => 'entityreference_1',
          'view_name' => 'client_list',
        ),
      ),
      'target_type' => 'civicrm_contact',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  // Exported field_base: 'field_cms'.
  $field_bases['field_cms'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_cms',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'Drupal' => 'Drupal',
        'Drupal 8' => 'Drupal8',
        'WordPress' => 'WordPress',
        'Joomla' => 'Joomla',
        'Backdrop' => 'Backdrop',
        'Other' => 'Other',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_cms_db_name'.
  $field_bases['field_cms_db_name'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_cms_db_name',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'computed_field',
    'settings' => array(
      'code' => '$override = field_get_items($entity_type, $entity, \'field_cms_db_name_override\');
$cms = field_get_items($entity_type, $entity, \'field_cms\');
// Client is found through the contract - a node ref to an entity ref. Gah.
$contract_ref = field_get_items($entity_type, $entity, \'field_contract\');
$contract_nid = $contract_ref[0][\'nid\'];
$contract = node_load($contract_nid);
$client_id = $contract->field_client[LANGUAGE_NONE][0][\'target_id\'];
civicrm_initialize();
$client_abbrev = civicrm_api3(\'Contact\', \'getvalue\', [\'return\' => "nick_name",  \'id\' => $client_id]);
switch($cms[0][\'value\']) {
  case \'Drupal\':
    $cms_abbrev = \'drupal\';
    break;
  case \'WordPress\':
    $cms_abbrev = \'wp\';
    break;
  case \'Backdrop\':
    $cms_abbrev = \'bd\';
    break;
  case \'Joomla\':
    $cms_abbrev = \'joomla\';
    break;
}
$deploy_env = field_get_items($entity_type, $entity, \'field_deployment_environment\');
switch($deploy_env[0][\'value\']) {
  case \'Live\':
    $deploy_abbrev = \'\';
    break;
  case \'Test\':
    $deploy_abbrev = \'_test\';
    break;
  case \'Dev\':
    $deploy_abbrev = \'_dev\';
    break;
}
$default = $client_abbrev . $deploy_abbrev . \'_\' . $cms_abbrev;
$entity_field[0][\'value\'] = array_key_exists(0, $override)  ? $override[0][\'value\'] : $default;',
      'database' => array(
        'data_default' => '',
        'data_index' => 0,
        'data_length' => 32,
        'data_not_NULL' => 0,
        'data_precision' => 10,
        'data_scale' => 2,
        'data_size' => 'normal',
        'data_type' => 'varchar',
      ),
      'display_format' => '$display_output = $entity_field_item[\'value\'];',
      'recalculate' => 0,
      'store' => 1,
    ),
    'translatable' => 0,
    'type' => 'computed',
  );

  // Exported field_base: 'field_cms_db_name_override'.
  $field_bases['field_cms_db_name_override'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_cms_db_name_override',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_cms_table_prefix'.
  $field_bases['field_cms_table_prefix'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_cms_table_prefix',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_contract'.
  $field_bases['field_contract'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_contract',
    'indexes' => array(
      'nid' => array(
        0 => 'nid',
      ),
    ),
    'locked' => 0,
    'module' => 'node_reference',
    'settings' => array(
      'referenceable_types' => array(
        'article' => 0,
        'contract' => 'contract',
        'page' => 0,
        'server' => 0,
        'website' => 0,
      ),
      'view' => array(
        'args' => array(),
        'display_name' => '',
        'view_name' => '',
      ),
    ),
    'translatable' => 0,
    'type' => 'node_reference',
  );

  // Exported field_base: 'field_contract_type'.
  $field_bases['field_contract_type'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_contract_type',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'Time and Materials' => 'Time and Materials',
        'CMP' => 'Civi Maintenance',
        'BMP' => 'Backdrop Maintenance',
        'DMP' => 'Drupal Maintenance',
        'WMP' => 'WordPress Maintenance',
        'VPS' => 'VPS',
        'Hosting' => 'Hosting',
        'Support' => 'Retainer Support',
        'Other' => 'Other',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_crm_db_name'.
  $field_bases['field_crm_db_name'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_crm_db_name',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'computed_field',
    'settings' => array(
      'code' => '$override = field_get_items($entity_type, $entity, \'field_crm_db_name_override\');
$cms = field_get_items($entity_type, $entity, \'field_cms\');
// Client is found through the contract - a node ref to an entity ref. Gah.
$contract_ref = field_get_items($entity_type, $entity, \'field_contract\');
$contract_nid = $contract_ref[0][\'nid\'];
$contract = node_load($contract_nid);
$client_id = $contract->field_client[LANGUAGE_NONE][0][\'target_id\'];
civicrm_initialize();
$client_abbrev = civicrm_api3(\'Contact\', \'getvalue\', [\'return\' => "nick_name",  \'id\' => $client_id]);

$deploy_env = field_get_items($entity_type, $entity, \'field_deployment_environment\');
switch($deploy_env[0][\'value\']) {
  case \'Live\':
    $deploy_abbrev = \'\';
    break;
  case \'Test\':
    $deploy_abbrev = \'_test\';
    break;
  case \'Dev\':
    $deploy_abbrev = \'_dev\';
    break;
}
$default = $client_abbrev . $deploy_abbrev . \'_civi\';
$entity_field[0][\'value\'] = array_key_exists(0, $override)  ? $override[0][\'value\'] : $default;',
      'database' => array(
        'data_default' => '',
        'data_index' => 0,
        'data_length' => 32,
        'data_not_NULL' => 0,
        'data_precision' => 10,
        'data_scale' => 2,
        'data_size' => 'normal',
        'data_type' => 'varchar',
      ),
      'display_format' => '$display_output = $entity_field_item[\'value\'];',
      'recalculate' => 0,
      'store' => 1,
    ),
    'translatable' => 0,
    'type' => 'computed',
  );

  // Exported field_base: 'field_crm_db_name_override'.
  $field_bases['field_crm_db_name_override'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_crm_db_name_override',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 64,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_crm_logging_db_name'.
  $field_bases['field_crm_logging_db_name'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_crm_logging_db_name',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_date'.
  $field_bases['field_date'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_date',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'date',
    'settings' => array(
      'cache_count' => 4,
      'cache_enabled' => 0,
      'granularity' => array(
        'day' => 'day',
        'hour' => 0,
        'minute' => 0,
        'month' => 'month',
        'second' => 0,
        'year' => 'year',
      ),
      'timezone_db' => '',
      'todate' => 'optional',
      'tz_handling' => 'none',
    ),
    'translatable' => 0,
    'type' => 'datetime',
  );

  // Exported field_base: 'field_db_user'.
  $field_bases['field_db_user'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_db_user',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'computed_field',
    'settings' => array(
      'code' => '$override = field_get_items($entity_type, $entity, \'field_db_user_override\');
$cms = field_get_items($entity_type, $entity, \'field_cms\');
// Client is found through the contract - a node ref to an entity ref. Gah.
$contract_ref = field_get_items($entity_type, $entity, \'field_contract\');
$contract_nid = $contract_ref[0][\'nid\'];
$contract = node_load($contract_nid);
$client_id = $contract->field_client[LANGUAGE_NONE][0][\'target_id\'];
civicrm_initialize();
$client_abbrev = civicrm_api3(\'Contact\', \'getvalue\', [\'return\' => "nick_name",  \'id\' => $client_id]);

$deploy_env = field_get_items($entity_type, $entity, \'field_deployment_environment\');
switch($deploy_env[0][\'value\']) {
  case \'Live\':
    $deploy_abbrev = \'\';
    break;
  case \'Test\':
    $deploy_abbrev = \'_test\';
    break;
  case \'Dev\':
    $deploy_abbrev = \'_dev\';
    break;
}
$default = $client_abbrev . $deploy_abbrev;
$entity_field[0][\'value\'] = array_key_exists(0, $override)  ? $override[0][\'value\'] : $default;',
      'database' => array(
        'data_default' => '',
        'data_index' => 0,
        'data_length' => 32,
        'data_not_NULL' => 0,
        'data_precision' => 10,
        'data_scale' => 2,
        'data_size' => 'normal',
        'data_type' => 'varchar',
      ),
      'display_format' => '$display_output = $entity_field_item[\'value\'];',
      'recalculate' => 0,
      'store' => 1,
    ),
    'translatable' => 0,
    'type' => 'computed',
  );

  // Exported field_base: 'field_db_user_override'.
  $field_bases['field_db_user_override'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_db_user_override',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 64,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_deployment_environment'.
  $field_bases['field_deployment_environment'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_deployment_environment',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'Dev' => 'Dev',
        'Test' => 'Test',
        'Live' => 'Live',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_description'.
  $field_bases['field_description'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_description',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_git_repo_name'.
  $field_bases['field_git_repo_name'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_git_repo_name',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_git_repo_owner'.
  $field_bases['field_git_repo_owner'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_git_repo_owner',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'megaphone' => 'megaphone',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_git_repo_push_url'.
  $field_bases['field_git_repo_push_url'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_git_repo_push_url',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'computed_field',
    'settings' => array(
      'code' => '$override = field_get_items($entity_type, $entity, \'field_git_repo_push_url_override\');
$repo = field_get_items($entity_type, $entity, \'field_git_repo_name\');
$repo_name = $repo[0][\'value\'];
$default = "https://git.megaphonetech.com/megaphone/" . $repo_name . ".git";
// Check to see if this is a trusted server
$serverField = field_get_items($entity_type, $entity, \'field_server\');
$serverNid = $serverField[0][\'nid\'];
$trustedField = field_get_items(\'node\', node_load($serverNid), \'field_agent_forwarding\');
$trusted = $trustedField[0][\'value\'];
if ($trusted) {
  $default = \'ssh://git@git.megaphonetech.com:10022/megaphone/\' . $repo_name . \'.git\';
}
$entity_field[0][\'value\'] = array_key_exists(0, $override)  ? $override[0][\'value\'] : $default;',
      'database' => array(
        'data_default' => '',
        'data_index' => 0,
        'data_length' => 255,
        'data_not_NULL' => 0,
        'data_precision' => 10,
        'data_scale' => 2,
        'data_size' => 'normal',
        'data_type' => 'varchar',
      ),
      'display_format' => '$display_output = $entity_field_item[\'value\'];',
      'recalculate' => 0,
      'store' => 1,
    ),
    'translatable' => 0,
    'type' => 'computed',
  );

  // Exported field_base: 'field_git_repo_push_url_override'.
  $field_bases['field_git_repo_push_url_override'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_git_repo_push_url_override',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_git_repo_url'.
  $field_bases['field_git_repo_url'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_git_repo_url',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'computed_field',
    'settings' => array(
      'code' => '$override = field_get_items($entity_type, $entity, \'field_git_repo_url_override\');
$repo = field_get_items($entity_type, $entity, \'field_git_repo_name\');
$repo_name = $repo[0][\'value\'];
$default = "ssh://git@git.megaphonetech.com:10022/megaphone/" . $repo_name . ".git";
$entity_field[0][\'value\'] = array_key_exists(0, $override)  ? $override[0][\'value\'] : $default;',
      'database' => array(
        'data_default' => '',
        'data_index' => 0,
        'data_length' => 255,
        'data_not_NULL' => 0,
        'data_precision' => 10,
        'data_scale' => 2,
        'data_size' => 'normal',
        'data_type' => 'varchar',
      ),
      'display_format' => '$display_output = $entity_field_item[\'value\'];',
      'recalculate' => 0,
      'store' => 1,
    ),
    'translatable' => 0,
    'type' => 'computed',
  );

  // Exported field_base: 'field_git_repo_url_override'.
  $field_bases['field_git_repo_url_override'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_git_repo_url_override',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_gitroot'.
  $field_bases['field_gitroot'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_gitroot',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'computed_field',
    'settings' => array(
      'code' => '$override = field_get_items($entity_type, $entity, \'field_gitroot_override\');
$default = field_get_items($entity_type, $entity, \'field_webroot\');
$entity_field[0][\'value\'] = array_key_exists(0, $override)  ? $override[0][\'value\'] : $default[0][\'value\'];',
      'database' => array(
        'data_default' => '',
        'data_index' => 0,
        'data_length' => 255,
        'data_not_NULL' => 0,
        'data_precision' => 10,
        'data_scale' => 2,
        'data_size' => 'normal',
        'data_type' => 'varchar',
      ),
      'display_format' => '$display_output = $entity_field_item[\'value\'];',
      'recalculate' => 0,
      'store' => 1,
    ),
    'translatable' => 0,
    'type' => 'computed',
  );

  // Exported field_base: 'field_gitroot_override'.
  $field_bases['field_gitroot_override'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_gitroot_override',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_groups'.
  $field_bases['field_groups'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_groups',
    'indexes' => array(
      'tid' => array(
        0 => 'tid',
      ),
    ),
    'locked' => 0,
    'module' => 'taxonomy',
    'settings' => array(
      'allowed_values' => array(
        0 => array(
          'vocabulary' => 'ansible_groups',
          'parent' => 0,
        ),
      ),
    ),
    'translatable' => 0,
    'type' => 'taxonomy_term_reference',
  );

  // Exported field_base: 'field_hosting_company'.
  $field_bases['field_hosting_company'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_hosting_company',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_hostname'.
  $field_bases['field_hostname'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_hostname',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 25,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_incoming_email'.
  $field_bases['field_incoming_email'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_incoming_email',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        0 => 0,
        1 => 1,
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_boolean',
  );

  // Exported field_base: 'field_internal_repo'.
  $field_bases['field_internal_repo'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_internal_repo',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        0 => 0,
        1 => 1,
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_boolean',
  );

  // Exported field_base: 'field_ipv4_address'.
  $field_bases['field_ipv4_address'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_ipv4_address',
    'indexes' => array(
      'range' => array(
        0 => 'start',
        1 => 'end',
      ),
      'start' => array(
        0 => 'start',
      ),
    ),
    'locked' => 0,
    'module' => 'field_ipaddress',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'field_ipaddress',
  );

  // Exported field_base: 'field_ipv6_address'.
  $field_bases['field_ipv6_address'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_ipv6_address',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_linode_id'.
  $field_bases['field_linode_id'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_linode_id',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'number_integer',
  );

  // Exported field_base: 'field_linode_plan'.
  $field_bases['field_linode_plan'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_linode_plan',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        1 => '1GB',
        2 => '2GB',
        3 => '4GB',
        4 => '8GB',
        5 => '12GB',
        6 => '24GB',
        7 => '48GB',
        8 => '64GB',
        9 => '80GB',
        10 => '16GB (high RAM)',
        11 => '32GB (high RAM)',
        12 => '60GB (high RAM)',
        13 => '100GB (high RAM)',
        14 => '200GB (high RAM)',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_integer',
  );

  // Exported field_base: 'field_notes'.
  $field_bases['field_notes'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_notes',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_operating_system'.
  $field_bases['field_operating_system'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_operating_system',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_primary_url'.
  $field_bases['field_primary_url'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_primary_url',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'url',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'url',
  );

  // Exported field_base: 'field_rsa_key_fingerprint'.
  $field_bases['field_rsa_key_fingerprint'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_rsa_key_fingerprint',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_run_as_user'.
  $field_bases['field_run_as_user'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_run_as_user',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 32,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_server'.
  $field_bases['field_server'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_server',
    'indexes' => array(
      'nid' => array(
        0 => 'nid',
      ),
    ),
    'locked' => 0,
    'module' => 'node_reference',
    'settings' => array(
      'referenceable_types' => array(
        'article' => 0,
        'contract' => 0,
        'page' => 0,
        'server' => 'server',
        'website' => 0,
      ),
      'view' => array(
        'args' => array(),
        'display_name' => '',
        'view_name' => '',
      ),
    ),
    'translatable' => 0,
    'type' => 'node_reference',
  );

  // Exported field_base: 'field_signed_contract'.
  $field_bases['field_signed_contract'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_signed_contract',
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 0,
    'module' => 'file',
    'settings' => array(
      'display_default' => 1,
      'display_field' => 1,
      'uri_scheme' => 'public',
    ),
    'translatable' => 0,
    'type' => 'file',
  );

  // Exported field_base: 'field_site_title'.
  $field_bases['field_site_title'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_site_title',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_ssh_keys'.
  $field_bases['field_ssh_keys'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_ssh_keys',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'text_long',
  );

  // Exported field_base: 'field_ssh_port'.
  $field_bases['field_ssh_port'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_ssh_port',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'number_integer',
  );

  // Exported field_base: 'field_timezone'.
  $field_bases['field_timezone'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_timezone',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'America/New_York' => 'America/New_York',
        'America/Chicago' => 'America/Chicago',
        'America/Denver' => 'America/Denver',
        'America/Los_Angeles' => 'America/Los_Angeles',
        'America/Anchorage' => 'America/Anchorage',
        'Etc/UTC' => 'Etc/UTC',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_username'.
  $field_bases['field_username'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_username',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_version'.
  $field_bases['field_version'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_version',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(
      'decimal_separator' => '.',
    ),
    'translatable' => 0,
    'type' => 'number_float',
  );

  // Exported field_base: 'field_webroot'.
  $field_bases['field_webroot'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_webroot',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  return $field_bases;
}
