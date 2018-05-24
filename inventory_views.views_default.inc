<?php
/**
 * @file
 * inventory_views.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function inventory_views_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'client_list';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'civicrm_contact';
  $view->human_name = 'Client List';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Client List';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'id' => 'id',
    'nick_name' => 'nick_name',
    'current_employer' => 'current_employer',
  );
  $handler->display->display_options['style_options']['default'] = 'nick_name';
  $handler->display->display_options['style_options']['info'] = array(
    'id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nick_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'current_employer' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: CiviCRM Contacts: Contact ID */
  $handler->display->display_options['fields']['id']['id'] = 'id';
  $handler->display->display_options['fields']['id']['table'] = 'civicrm_contact';
  $handler->display->display_options['fields']['id']['field'] = 'id';
  $handler->display->display_options['fields']['id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['id']['separator'] = '';
  /* Field: CiviCRM Contacts: Nickname */
  $handler->display->display_options['fields']['nick_name']['id'] = 'nick_name';
  $handler->display->display_options['fields']['nick_name']['table'] = 'civicrm_contact';
  $handler->display->display_options['fields']['nick_name']['field'] = 'nick_name';
  $handler->display->display_options['fields']['nick_name']['label'] = 'Short Name';
  $handler->display->display_options['fields']['nick_name']['element_label_colon'] = FALSE;
  /* Field: CiviCRM Contacts: Organization Name */
  $handler->display->display_options['fields']['current_employer']['id'] = 'current_employer';
  $handler->display->display_options['fields']['current_employer']['table'] = 'civicrm_contact';
  $handler->display->display_options['fields']['current_employer']['field'] = 'current_employer';
  $handler->display->display_options['fields']['current_employer']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['current_employer']['alter']['path'] = '/civicrm/contact/view?reset=1&cid=[id]';
  $handler->display->display_options['fields']['current_employer']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Redmine';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a href="https://hq.megaphonetech.com/projects/[nick_name]/issues">Redmine</a>';
  /* Sort criterion: CiviCRM Contacts: Nickname */
  $handler->display->display_options['sorts']['nick_name']['id'] = 'nick_name';
  $handler->display->display_options['sorts']['nick_name']['table'] = 'civicrm_contact';
  $handler->display->display_options['sorts']['nick_name']['field'] = 'nick_name';
  /* Filter criterion: CiviCRM Groups: Group ID */
  $handler->display->display_options['filters']['id']['id'] = 'id';
  $handler->display->display_options['filters']['id']['table'] = 'civicrm_group';
  $handler->display->display_options['filters']['id']['field'] = 'id';
  $handler->display->display_options['filters']['id']['value']['value'] = '2';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'client-list';

  /* Display: Entity Reference */
  $handler = $view->new_display('entityreference', 'Entity Reference', 'entityreference_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'nick_name' => 'nick_name',
    'current_employer' => 0,
    'nothing' => 0,
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: CiviCRM Contacts: Nickname */
  $handler->display->display_options['fields']['nick_name']['id'] = 'nick_name';
  $handler->display->display_options['fields']['nick_name']['table'] = 'civicrm_contact';
  $handler->display->display_options['fields']['nick_name']['field'] = 'nick_name';
  $handler->display->display_options['fields']['nick_name']['label'] = '';
  $handler->display->display_options['fields']['nick_name']['element_label_colon'] = FALSE;
  /* Field: CiviCRM Contacts: Organization Name */
  $handler->display->display_options['fields']['current_employer']['id'] = 'current_employer';
  $handler->display->display_options['fields']['current_employer']['table'] = 'civicrm_contact';
  $handler->display->display_options['fields']['current_employer']['field'] = 'current_employer';
  $handler->display->display_options['fields']['current_employer']['label'] = '';
  $handler->display->display_options['fields']['current_employer']['element_label_colon'] = FALSE;
  $export['client_list'] = $view;

  $view = new view();
  $view->name = 'contract_list';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Contract List';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Contract List';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Header: Global: Unfiltered text */
  $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['label'] = '"New Contract" link';
  $handler->display->display_options['header']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['header']['area_text_custom']['content'] = '<a href="/node/add/contract?destination=contract-list">New Contract</a>';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_client_target_id']['id'] = 'field_client_target_id';
  $handler->display->display_options['relationships']['field_client_target_id']['table'] = 'field_data_field_client';
  $handler->display->display_options['relationships']['field_client_target_id']['field'] = 'field_client_target_id';
  /* Field: CiviCRM Contacts: Contact ID */
  $handler->display->display_options['fields']['id']['id'] = 'id';
  $handler->display->display_options['fields']['id']['table'] = 'civicrm_contact';
  $handler->display->display_options['fields']['id']['field'] = 'id';
  $handler->display->display_options['fields']['id']['relationship'] = 'field_client_target_id';
  $handler->display->display_options['fields']['id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['id']['separator'] = '';
  /* Field: CiviCRM Contacts: Nickname */
  $handler->display->display_options['fields']['nick_name_1']['id'] = 'nick_name_1';
  $handler->display->display_options['fields']['nick_name_1']['table'] = 'civicrm_contact';
  $handler->display->display_options['fields']['nick_name_1']['field'] = 'nick_name';
  $handler->display->display_options['fields']['nick_name_1']['relationship'] = 'field_client_target_id';
  $handler->display->display_options['fields']['nick_name_1']['label'] = 'Nickname-no link';
  $handler->display->display_options['fields']['nick_name_1']['exclude'] = TRUE;
  /* Field: CiviCRM Contacts: Nickname */
  $handler->display->display_options['fields']['nick_name']['id'] = 'nick_name';
  $handler->display->display_options['fields']['nick_name']['table'] = 'civicrm_contact';
  $handler->display->display_options['fields']['nick_name']['field'] = 'nick_name';
  $handler->display->display_options['fields']['nick_name']['relationship'] = 'field_client_target_id';
  $handler->display->display_options['fields']['nick_name']['label'] = 'Client';
  $handler->display->display_options['fields']['nick_name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nick_name']['alter']['path'] = '/civicrm/contact/view?reset=1&cid=[id]';
  $handler->display->display_options['fields']['nick_name']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Contract';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Signed contract */
  $handler->display->display_options['fields']['field_signed_contract']['id'] = 'field_signed_contract';
  $handler->display->display_options['fields']['field_signed_contract']['table'] = 'field_data_field_signed_contract';
  $handler->display->display_options['fields']['field_signed_contract']['field'] = 'field_signed_contract';
  $handler->display->display_options['fields']['field_signed_contract']['label'] = 'Link to contract';
  $handler->display->display_options['fields']['field_signed_contract']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_signed_contract']['click_sort_column'] = 'fid';
  /* Field: Content: Contract Type */
  $handler->display->display_options['fields']['field_contract_type']['id'] = 'field_contract_type';
  $handler->display->display_options['fields']['field_contract_type']['table'] = 'field_data_field_contract_type';
  $handler->display->display_options['fields']['field_contract_type']['field'] = 'field_contract_type';
  $handler->display->display_options['fields']['field_contract_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_contract_type']['delta_offset'] = '0';
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Notes */
  $handler->display->display_options['fields']['field_notes']['id'] = 'field_notes';
  $handler->display->display_options['fields']['field_notes']['table'] = 'field_data_field_notes';
  $handler->display->display_options['fields']['field_notes']['field'] = 'field_notes';
  $handler->display->display_options['fields']['field_notes']['element_label_colon'] = FALSE;
  /* Field: Content: Version */
  $handler->display->display_options['fields']['field_version']['id'] = 'field_version';
  $handler->display->display_options['fields']['field_version']['table'] = 'field_data_field_version';
  $handler->display->display_options['fields']['field_version']['field'] = 'field_version';
  $handler->display->display_options['fields']['field_version']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_version']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '1',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* Field: Content: Delete link */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['label'] = '';
  $handler->display->display_options['fields']['delete_node']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Links';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a href="/server-list?nick_name=[nick_name_1]">Servers</a>  
<a href="/website-list?nick_name=[nick_name_1]">Websites</a>  ';
  /* Sort criterion: CiviCRM Contacts: Nickname */
  $handler->display->display_options['sorts']['nick_name']['id'] = 'nick_name';
  $handler->display->display_options['sorts']['nick_name']['table'] = 'civicrm_contact';
  $handler->display->display_options['sorts']['nick_name']['field'] = 'nick_name';
  $handler->display->display_options['sorts']['nick_name']['relationship'] = 'field_client_target_id';
  /* Filter criterion: CiviCRM Contacts: Nickname */
  $handler->display->display_options['filters']['nick_name']['id'] = 'nick_name';
  $handler->display->display_options['filters']['nick_name']['table'] = 'civicrm_contact';
  $handler->display->display_options['filters']['nick_name']['field'] = 'nick_name';
  $handler->display->display_options['filters']['nick_name']['relationship'] = 'field_client_target_id';
  $handler->display->display_options['filters']['nick_name']['group'] = 1;
  $handler->display->display_options['filters']['nick_name']['exposed'] = TRUE;
  $handler->display->display_options['filters']['nick_name']['expose']['operator_id'] = 'nick_name_op';
  $handler->display->display_options['filters']['nick_name']['expose']['label'] = 'Client';
  $handler->display->display_options['filters']['nick_name']['expose']['operator'] = 'nick_name_op';
  $handler->display->display_options['filters']['nick_name']['expose']['identifier'] = 'nick_name';
  $handler->display->display_options['filters']['nick_name']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'contract' => 'contract',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Active (field_active) */
  $handler->display->display_options['filters']['field_active_value']['id'] = 'field_active_value';
  $handler->display->display_options['filters']['field_active_value']['table'] = 'field_data_field_active';
  $handler->display->display_options['filters']['field_active_value']['field'] = 'field_active_value';
  $handler->display->display_options['filters']['field_active_value']['group'] = 1;
  $handler->display->display_options['filters']['field_active_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_active_value']['expose']['operator_id'] = 'field_active_value_op';
  $handler->display->display_options['filters']['field_active_value']['expose']['label'] = 'Active Contract?';
  $handler->display->display_options['filters']['field_active_value']['expose']['operator'] = 'field_active_value_op';
  $handler->display->display_options['filters']['field_active_value']['expose']['identifier'] = 'field_active_value';
  $handler->display->display_options['filters']['field_active_value']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_active_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Contract Type (field_contract_type) */
  $handler->display->display_options['filters']['field_contract_type_value']['id'] = 'field_contract_type_value';
  $handler->display->display_options['filters']['field_contract_type_value']['table'] = 'field_data_field_contract_type';
  $handler->display->display_options['filters']['field_contract_type_value']['field'] = 'field_contract_type_value';
  $handler->display->display_options['filters']['field_contract_type_value']['group'] = 1;
  $handler->display->display_options['filters']['field_contract_type_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_contract_type_value']['expose']['operator_id'] = 'field_contract_type_value_op';
  $handler->display->display_options['filters']['field_contract_type_value']['expose']['label'] = 'Contract Type(s)';
  $handler->display->display_options['filters']['field_contract_type_value']['expose']['operator'] = 'field_contract_type_value_op';
  $handler->display->display_options['filters']['field_contract_type_value']['expose']['identifier'] = 'field_contract_type_value';
  $handler->display->display_options['filters']['field_contract_type_value']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_contract_type_value']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_contract_type_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Contract';
  $handler->display->display_options['filters']['title']['expose']['description'] = 'For easily switching between different lsits';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'contract-list';
  $export['contract_list'] = $view;

  $view = new view();
  $view->name = 'server_list';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Server List';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Server List';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'nid' => 'nid',
    'id' => 'id',
    'nick_name' => 'nick_name',
    'title' => 'title',
    'field_contract' => 'field_contract',
    'field_notes' => 'field_notes',
    'field_operating_system' => 'field_operating_system',
    'field_username' => 'field_username',
    'field_ssh_port' => 'field_ssh_port',
    'field_rsa_key_fingerprint' => 'field_rsa_key_fingerprint',
    'field_hosting_company' => 'field_hosting_company',
    'field_backup_method' => 'field_backup_method',
    'edit_node' => 'edit_node',
    'delete_node' => 'delete_node',
    'nothing' => 'nothing',
    'field_ansible' => 'field_ansible',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nick_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_contract' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_notes' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_operating_system' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_username' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ssh_port' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_rsa_key_fingerprint' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_hosting_company' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_backup_method' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'delete_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ansible' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Header: Global: Unfiltered text */
  $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['label'] = 'Server List Header';
  $handler->display->display_options['header']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['header']['area_text_custom']['content'] = '<a href="/node/add/server?destination=server-list">New Server</a>';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_client_target_id']['id'] = 'field_client_target_id';
  $handler->display->display_options['relationships']['field_client_target_id']['table'] = 'field_data_field_client';
  $handler->display->display_options['relationships']['field_client_target_id']['field'] = 'field_client_target_id';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: CiviCRM Contacts: Contact ID */
  $handler->display->display_options['fields']['id']['id'] = 'id';
  $handler->display->display_options['fields']['id']['table'] = 'civicrm_contact';
  $handler->display->display_options['fields']['id']['field'] = 'id';
  $handler->display->display_options['fields']['id']['relationship'] = 'field_client_target_id';
  $handler->display->display_options['fields']['id']['exclude'] = TRUE;
  /* Field: CiviCRM Contacts: Nickname */
  $handler->display->display_options['fields']['nick_name']['id'] = 'nick_name';
  $handler->display->display_options['fields']['nick_name']['table'] = 'civicrm_contact';
  $handler->display->display_options['fields']['nick_name']['field'] = 'nick_name';
  $handler->display->display_options['fields']['nick_name']['relationship'] = 'field_client_target_id';
  $handler->display->display_options['fields']['nick_name']['label'] = 'Client';
  $handler->display->display_options['fields']['nick_name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nick_name']['alter']['path'] = '/civicrm/contact/view?reset=1&cid=[id]';
  $handler->display->display_options['fields']['nick_name']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'FQDN';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Contract */
  $handler->display->display_options['fields']['field_contract']['id'] = 'field_contract';
  $handler->display->display_options['fields']['field_contract']['table'] = 'field_data_field_contract';
  $handler->display->display_options['fields']['field_contract']['field'] = 'field_contract';
  $handler->display->display_options['fields']['field_contract']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_contract']['alter']['path'] = '/contract-list?&title=[field_contract]';
  $handler->display->display_options['fields']['field_contract']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_contract']['type'] = 'node_reference_plain';
  /* Field: Content: Notes */
  $handler->display->display_options['fields']['field_notes']['id'] = 'field_notes';
  $handler->display->display_options['fields']['field_notes']['table'] = 'field_data_field_notes';
  $handler->display->display_options['fields']['field_notes']['field'] = 'field_notes';
  $handler->display->display_options['fields']['field_notes']['element_label_colon'] = FALSE;
  /* Field: Content: Operating System */
  $handler->display->display_options['fields']['field_operating_system']['id'] = 'field_operating_system';
  $handler->display->display_options['fields']['field_operating_system']['table'] = 'field_data_field_operating_system';
  $handler->display->display_options['fields']['field_operating_system']['field'] = 'field_operating_system';
  $handler->display->display_options['fields']['field_operating_system']['element_label_colon'] = FALSE;
  /* Field: Content: Username */
  $handler->display->display_options['fields']['field_username']['id'] = 'field_username';
  $handler->display->display_options['fields']['field_username']['table'] = 'field_data_field_username';
  $handler->display->display_options['fields']['field_username']['field'] = 'field_username';
  $handler->display->display_options['fields']['field_username']['element_label_colon'] = FALSE;
  /* Field: Content: SSH port */
  $handler->display->display_options['fields']['field_ssh_port']['id'] = 'field_ssh_port';
  $handler->display->display_options['fields']['field_ssh_port']['table'] = 'field_data_field_ssh_port';
  $handler->display->display_options['fields']['field_ssh_port']['field'] = 'field_ssh_port';
  $handler->display->display_options['fields']['field_ssh_port']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ssh_port']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Hosting Company */
  $handler->display->display_options['fields']['field_hosting_company']['id'] = 'field_hosting_company';
  $handler->display->display_options['fields']['field_hosting_company']['table'] = 'field_data_field_hosting_company';
  $handler->display->display_options['fields']['field_hosting_company']['field'] = 'field_hosting_company';
  $handler->display->display_options['fields']['field_hosting_company']['element_label_colon'] = FALSE;
  /* Field: Content: Backup Method */
  $handler->display->display_options['fields']['field_backup_method']['id'] = 'field_backup_method';
  $handler->display->display_options['fields']['field_backup_method']['table'] = 'field_data_field_backup_method';
  $handler->display->display_options['fields']['field_backup_method']['field'] = 'field_backup_method';
  $handler->display->display_options['fields']['field_backup_method']['element_label_colon'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* Field: Content: Delete link */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['label'] = '';
  $handler->display->display_options['fields']['delete_node']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Links';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a href="/website-list?field_server_nid=[nid]">Websites</a>  ';
  /* Field: Content: Ansible */
  $handler->display->display_options['fields']['field_ansible']['id'] = 'field_ansible';
  $handler->display->display_options['fields']['field_ansible']['table'] = 'field_data_field_ansible';
  $handler->display->display_options['fields']['field_ansible']['field'] = 'field_ansible';
  /* Field: Content: Ansible Group */
  $handler->display->display_options['fields']['field_groups']['id'] = 'field_groups';
  $handler->display->display_options['fields']['field_groups']['table'] = 'field_data_field_groups';
  $handler->display->display_options['fields']['field_groups']['field'] = 'field_groups';
  $handler->display->display_options['fields']['field_groups']['label'] = 'group';
  $handler->display->display_options['fields']['field_groups']['type'] = 'taxonomy_term_reference_plain';
  /* Sort criterion: CiviCRM Contacts: Nickname */
  $handler->display->display_options['sorts']['nick_name']['id'] = 'nick_name';
  $handler->display->display_options['sorts']['nick_name']['table'] = 'civicrm_contact';
  $handler->display->display_options['sorts']['nick_name']['field'] = 'nick_name';
  $handler->display->display_options['sorts']['nick_name']['relationship'] = 'field_client_target_id';
  /* Contextual filter: Content: Contract (field_contract) */
  $handler->display->display_options['arguments']['field_contract_nid']['id'] = 'field_contract_nid';
  $handler->display->display_options['arguments']['field_contract_nid']['table'] = 'field_data_field_contract';
  $handler->display->display_options['arguments']['field_contract_nid']['field'] = 'field_contract_nid';
  $handler->display->display_options['arguments']['field_contract_nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_contract_nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_contract_nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_contract_nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'server' => 'server',
  );
  /* Filter criterion: CiviCRM Contacts: Nickname */
  $handler->display->display_options['filters']['nick_name']['id'] = 'nick_name';
  $handler->display->display_options['filters']['nick_name']['table'] = 'civicrm_contact';
  $handler->display->display_options['filters']['nick_name']['field'] = 'nick_name';
  $handler->display->display_options['filters']['nick_name']['relationship'] = 'field_client_target_id';
  $handler->display->display_options['filters']['nick_name']['exposed'] = TRUE;
  $handler->display->display_options['filters']['nick_name']['expose']['operator_id'] = 'nick_name_op';
  $handler->display->display_options['filters']['nick_name']['expose']['label'] = 'Client';
  $handler->display->display_options['filters']['nick_name']['expose']['operator'] = 'nick_name_op';
  $handler->display->display_options['filters']['nick_name']['expose']['identifier'] = 'nick_name';
  $handler->display->display_options['filters']['nick_name']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'FQDN';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Active (field_active) */
  $handler->display->display_options['filters']['field_active_value']['id'] = 'field_active_value';
  $handler->display->display_options['filters']['field_active_value']['table'] = 'field_data_field_active';
  $handler->display->display_options['filters']['field_active_value']['field'] = 'field_active_value';
  $handler->display->display_options['filters']['field_active_value']['value'] = array(
    1 => '1',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'server-list';

  /* Display: Ansible Servers */
  $handler = $view->new_display('services', 'Ansible Servers', 'services_1');
  $handler->display->display_options['display_description'] = 'A list to output to Ansible for dynamic inventory management';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: CiviCRM Contacts: Contact ID */
  $handler->display->display_options['fields']['id']['id'] = 'id';
  $handler->display->display_options['fields']['id']['table'] = 'civicrm_contact';
  $handler->display->display_options['fields']['id']['field'] = 'id';
  $handler->display->display_options['fields']['id']['relationship'] = 'field_client_target_id';
  $handler->display->display_options['fields']['id']['exclude'] = TRUE;
  /* Field: CiviCRM Contacts: Nickname */
  $handler->display->display_options['fields']['nick_name']['id'] = 'nick_name';
  $handler->display->display_options['fields']['nick_name']['table'] = 'civicrm_contact';
  $handler->display->display_options['fields']['nick_name']['field'] = 'nick_name';
  $handler->display->display_options['fields']['nick_name']['relationship'] = 'field_client_target_id';
  $handler->display->display_options['fields']['nick_name']['label'] = 'Client';
  $handler->display->display_options['fields']['nick_name']['alter']['path'] = '/civicrm/contact/view?reset=1&cid=[id]';
  $handler->display->display_options['fields']['nick_name']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'FQDN';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Contract */
  $handler->display->display_options['fields']['field_contract']['id'] = 'field_contract';
  $handler->display->display_options['fields']['field_contract']['table'] = 'field_data_field_contract';
  $handler->display->display_options['fields']['field_contract']['field'] = 'field_contract';
  $handler->display->display_options['fields']['field_contract']['alter']['path'] = '/contract-list?&title=[field_contract]';
  $handler->display->display_options['fields']['field_contract']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_contract']['type'] = 'node_reference_plain';
  $handler->display->display_options['fields']['field_contract']['settings'] = array(
    'data_element_key' => '',
    'skip_safe' => 0,
    'skip_empty_values' => 0,
  );
  /* Field: Content: Notes */
  $handler->display->display_options['fields']['field_notes']['id'] = 'field_notes';
  $handler->display->display_options['fields']['field_notes']['table'] = 'field_data_field_notes';
  $handler->display->display_options['fields']['field_notes']['field'] = 'field_notes';
  $handler->display->display_options['fields']['field_notes']['element_label_colon'] = FALSE;
  /* Field: Content: Operating System */
  $handler->display->display_options['fields']['field_operating_system']['id'] = 'field_operating_system';
  $handler->display->display_options['fields']['field_operating_system']['table'] = 'field_data_field_operating_system';
  $handler->display->display_options['fields']['field_operating_system']['field'] = 'field_operating_system';
  $handler->display->display_options['fields']['field_operating_system']['element_label_colon'] = FALSE;
  /* Field: Content: Username */
  $handler->display->display_options['fields']['field_username']['id'] = 'field_username';
  $handler->display->display_options['fields']['field_username']['table'] = 'field_data_field_username';
  $handler->display->display_options['fields']['field_username']['field'] = 'field_username';
  $handler->display->display_options['fields']['field_username']['element_label_colon'] = FALSE;
  /* Field: Content: SSH port */
  $handler->display->display_options['fields']['field_ssh_port']['id'] = 'field_ssh_port';
  $handler->display->display_options['fields']['field_ssh_port']['table'] = 'field_data_field_ssh_port';
  $handler->display->display_options['fields']['field_ssh_port']['field'] = 'field_ssh_port';
  $handler->display->display_options['fields']['field_ssh_port']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ssh_port']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Hosting Company */
  $handler->display->display_options['fields']['field_hosting_company']['id'] = 'field_hosting_company';
  $handler->display->display_options['fields']['field_hosting_company']['table'] = 'field_data_field_hosting_company';
  $handler->display->display_options['fields']['field_hosting_company']['field'] = 'field_hosting_company';
  $handler->display->display_options['fields']['field_hosting_company']['element_label_colon'] = FALSE;
  /* Field: Content: Backup Method */
  $handler->display->display_options['fields']['field_backup_method']['id'] = 'field_backup_method';
  $handler->display->display_options['fields']['field_backup_method']['table'] = 'field_data_field_backup_method';
  $handler->display->display_options['fields']['field_backup_method']['field'] = 'field_backup_method';
  $handler->display->display_options['fields']['field_backup_method']['element_label_colon'] = FALSE;
  /* Field: Content: Ansible Group */
  $handler->display->display_options['fields']['field_groups']['id'] = 'field_groups';
  $handler->display->display_options['fields']['field_groups']['table'] = 'field_data_field_groups';
  $handler->display->display_options['fields']['field_groups']['field'] = 'field_groups';
  $handler->display->display_options['fields']['field_groups']['label'] = 'Group';
  $handler->display->display_options['fields']['field_groups']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_groups']['delta_offset'] = '0';
  /* Field: Content: Ansible User */
  $handler->display->display_options['fields']['field_ansible_user']['id'] = 'field_ansible_user';
  $handler->display->display_options['fields']['field_ansible_user']['table'] = 'field_data_field_ansible_user';
  $handler->display->display_options['fields']['field_ansible_user']['field'] = 'field_ansible_user';
  $handler->display->display_options['fields']['field_ansible_user']['label'] = 'Ansible_User';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* Field: Content: linode_id */
  $handler->display->display_options['fields']['field_linode_id']['id'] = 'field_linode_id';
  $handler->display->display_options['fields']['field_linode_id']['table'] = 'field_data_field_linode_id';
  $handler->display->display_options['fields']['field_linode_id']['field'] = 'field_linode_id';
  $handler->display->display_options['fields']['field_linode_id']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Linode Plan */
  $handler->display->display_options['fields']['field_linode_plan']['id'] = 'field_linode_plan';
  $handler->display->display_options['fields']['field_linode_plan']['table'] = 'field_data_field_linode_plan';
  $handler->display->display_options['fields']['field_linode_plan']['field'] = 'field_linode_plan';
  $handler->display->display_options['fields']['field_linode_plan']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_linode_plan']['alter']['text'] = '[field_linode_plan-value]';
  /* Field: Content: IPv4 Address */
  $handler->display->display_options['fields']['field_ipv4_address']['id'] = 'field_ipv4_address';
  $handler->display->display_options['fields']['field_ipv4_address']['table'] = 'field_data_field_ipv4_address';
  $handler->display->display_options['fields']['field_ipv4_address']['field'] = 'field_ipv4_address';
  $handler->display->display_options['fields']['field_ipv4_address']['label'] = 'ansible_host';
  $handler->display->display_options['fields']['field_ipv4_address']['click_sort_column'] = 'start';
  $handler->display->display_options['fields']['field_ipv4_address']['type'] = 'field_ipaddress_shorthand';
  /* Field: Content: hostname */
  $handler->display->display_options['fields']['field_hostname']['id'] = 'field_hostname';
  $handler->display->display_options['fields']['field_hostname']['table'] = 'field_data_field_hostname';
  $handler->display->display_options['fields']['field_hostname']['field'] = 'field_hostname';
  /* Field: Content: timezone */
  $handler->display->display_options['fields']['field_timezone']['id'] = 'field_timezone';
  $handler->display->display_options['fields']['field_timezone']['table'] = 'field_data_field_timezone';
  $handler->display->display_options['fields']['field_timezone']['field'] = 'field_timezone';
  /* Field: Content: Ansible User */
  $handler->display->display_options['fields']['field_ansible_user_1']['id'] = 'field_ansible_user_1';
  $handler->display->display_options['fields']['field_ansible_user_1']['table'] = 'field_data_field_ansible_user';
  $handler->display->display_options['fields']['field_ansible_user_1']['field'] = 'field_ansible_user';
  $handler->display->display_options['fields']['field_ansible_user_1']['label'] = 'ansible_user_2';
  /* Field: Content: Incoming Email */
  $handler->display->display_options['fields']['field_incoming_email']['id'] = 'field_incoming_email';
  $handler->display->display_options['fields']['field_incoming_email']['table'] = 'field_data_field_incoming_email';
  $handler->display->display_options['fields']['field_incoming_email']['field'] = 'field_incoming_email';
  /* Field: Content: SSH Keys */
  $handler->display->display_options['fields']['field_ssh_keys']['id'] = 'field_ssh_keys';
  $handler->display->display_options['fields']['field_ssh_keys']['table'] = 'field_data_field_ssh_keys';
  $handler->display->display_options['fields']['field_ssh_keys']['field'] = 'field_ssh_keys';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'server' => 'server',
  );
  /* Filter criterion: CiviCRM Contacts: Nickname */
  $handler->display->display_options['filters']['nick_name']['id'] = 'nick_name';
  $handler->display->display_options['filters']['nick_name']['table'] = 'civicrm_contact';
  $handler->display->display_options['filters']['nick_name']['field'] = 'nick_name';
  $handler->display->display_options['filters']['nick_name']['relationship'] = 'field_client_target_id';
  $handler->display->display_options['filters']['nick_name']['exposed'] = TRUE;
  $handler->display->display_options['filters']['nick_name']['expose']['operator_id'] = 'nick_name_op';
  $handler->display->display_options['filters']['nick_name']['expose']['label'] = 'Client';
  $handler->display->display_options['filters']['nick_name']['expose']['operator'] = 'nick_name_op';
  $handler->display->display_options['filters']['nick_name']['expose']['identifier'] = 'nick_name';
  $handler->display->display_options['filters']['nick_name']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'FQDN';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Ansible (field_ansible) */
  $handler->display->display_options['filters']['field_ansible_value']['id'] = 'field_ansible_value';
  $handler->display->display_options['filters']['field_ansible_value']['table'] = 'field_data_field_ansible';
  $handler->display->display_options['filters']['field_ansible_value']['field'] = 'field_ansible_value';
  $handler->display->display_options['filters']['field_ansible_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['path'] = 'servers';
  $export['server_list'] = $view;

  $view = new view();
  $view->name = 'website_list';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Website List';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Website List';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Website List Header';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<a href="/node/add/website?destination=website-list">New Website</a>';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  /* Relationship: Content: Contract (field_contract) */
  $handler->display->display_options['relationships']['field_contract_nid']['id'] = 'field_contract_nid';
  $handler->display->display_options['relationships']['field_contract_nid']['table'] = 'field_data_field_contract';
  $handler->display->display_options['relationships']['field_contract_nid']['field'] = 'field_contract_nid';
  $handler->display->display_options['relationships']['field_contract_nid']['label'] = 'Contract';
  $handler->display->display_options['relationships']['field_contract_nid']['delta'] = '-1';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_client_target_id']['id'] = 'field_client_target_id';
  $handler->display->display_options['relationships']['field_client_target_id']['table'] = 'field_data_field_client';
  $handler->display->display_options['relationships']['field_client_target_id']['field'] = 'field_client_target_id';
  $handler->display->display_options['relationships']['field_client_target_id']['relationship'] = 'field_contract_nid';
  /* Relationship: Content: Server (field_server) */
  $handler->display->display_options['relationships']['field_server_nid']['id'] = 'field_server_nid';
  $handler->display->display_options['relationships']['field_server_nid']['table'] = 'field_data_field_server';
  $handler->display->display_options['relationships']['field_server_nid']['field'] = 'field_server_nid';
  $handler->display->display_options['relationships']['field_server_nid']['delta'] = '-1';
  /* Relationship: Content: Canonical Website (field_canonical_website) */
  $handler->display->display_options['relationships']['field_canonical_website_nid']['id'] = 'field_canonical_website_nid';
  $handler->display->display_options['relationships']['field_canonical_website_nid']['table'] = 'field_data_field_canonical_website';
  $handler->display->display_options['relationships']['field_canonical_website_nid']['field'] = 'field_canonical_website_nid';
  $handler->display->display_options['relationships']['field_canonical_website_nid']['delta'] = '-1';
  /* Relationship: Content: Server (field_server) */
  $handler->display->display_options['relationships']['field_server_nid_1']['id'] = 'field_server_nid_1';
  $handler->display->display_options['relationships']['field_server_nid_1']['table'] = 'field_data_field_server';
  $handler->display->display_options['relationships']['field_server_nid_1']['field'] = 'field_server_nid';
  $handler->display->display_options['relationships']['field_server_nid_1']['relationship'] = 'field_canonical_website_nid';
  $handler->display->display_options['relationships']['field_server_nid_1']['label'] = 'canonical_server';
  $handler->display->display_options['relationships']['field_server_nid_1']['delta'] = '-1';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_client_target_id_1']['id'] = 'field_client_target_id_1';
  $handler->display->display_options['relationships']['field_client_target_id_1']['table'] = 'field_data_field_client';
  $handler->display->display_options['relationships']['field_client_target_id_1']['field'] = 'field_client_target_id';
  $handler->display->display_options['relationships']['field_client_target_id_1']['relationship'] = 'field_server_nid_1';
  $handler->display->display_options['relationships']['field_client_target_id_1']['label'] = 'Canonical Server Client';
  /* Field: Content: Active */
  $handler->display->display_options['fields']['field_active']['id'] = 'field_active';
  $handler->display->display_options['fields']['field_active']['table'] = 'field_data_field_active';
  $handler->display->display_options['fields']['field_active']['field'] = 'field_active';
  $handler->display->display_options['fields']['field_active']['type'] = 'list_key';
  /* Field: CiviCRM Contacts: Contact ID */
  $handler->display->display_options['fields']['id']['id'] = 'id';
  $handler->display->display_options['fields']['id']['table'] = 'civicrm_contact';
  $handler->display->display_options['fields']['id']['field'] = 'id';
  $handler->display->display_options['fields']['id']['relationship'] = 'field_client_target_id';
  $handler->display->display_options['fields']['id']['exclude'] = TRUE;
  /* Field: CiviCRM Contacts: Nickname */
  $handler->display->display_options['fields']['nick_name']['id'] = 'nick_name';
  $handler->display->display_options['fields']['nick_name']['table'] = 'civicrm_contact';
  $handler->display->display_options['fields']['nick_name']['field'] = 'nick_name';
  $handler->display->display_options['fields']['nick_name']['relationship'] = 'field_client_target_id';
  $handler->display->display_options['fields']['nick_name']['label'] = 'Client';
  $handler->display->display_options['fields']['nick_name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nick_name']['alter']['path'] = '/civicrm/contact/view?reset=1&cid=[id]';
  $handler->display->display_options['fields']['nick_name']['element_label_colon'] = FALSE;
  /* Field: Content: Deployment Environment */
  $handler->display->display_options['fields']['field_deployment_environment']['id'] = 'field_deployment_environment';
  $handler->display->display_options['fields']['field_deployment_environment']['table'] = 'field_data_field_deployment_environment';
  $handler->display->display_options['fields']['field_deployment_environment']['field'] = 'field_deployment_environment';
  $handler->display->display_options['fields']['field_deployment_environment']['label'] = 'Env';
  $handler->display->display_options['fields']['field_deployment_environment']['element_label_colon'] = FALSE;
  /* Field: Content: Primary URL */
  $handler->display->display_options['fields']['field_primary_url_1']['id'] = 'field_primary_url_1';
  $handler->display->display_options['fields']['field_primary_url_1']['table'] = 'field_data_field_primary_url';
  $handler->display->display_options['fields']['field_primary_url_1']['field'] = 'field_primary_url';
  $handler->display->display_options['fields']['field_primary_url_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_primary_url_1']['settings'] = array(
    'trim_length' => '80',
    'nofollow' => 0,
  );
  /* Field: Content: CMS */
  $handler->display->display_options['fields']['field_cms']['id'] = 'field_cms';
  $handler->display->display_options['fields']['field_cms']['table'] = 'field_data_field_cms';
  $handler->display->display_options['fields']['field_cms']['field'] = 'field_cms';
  $handler->display->display_options['fields']['field_cms']['element_label_colon'] = FALSE;
  /* Field: Content: CiviCRM */
  $handler->display->display_options['fields']['field_civicrm']['id'] = 'field_civicrm';
  $handler->display->display_options['fields']['field_civicrm']['table'] = 'field_data_field_civicrm';
  $handler->display->display_options['fields']['field_civicrm']['field'] = 'field_civicrm';
  $handler->display->display_options['fields']['field_civicrm']['element_label_colon'] = FALSE;
  /* Field: Content: Server */
  $handler->display->display_options['fields']['field_server']['id'] = 'field_server';
  $handler->display->display_options['fields']['field_server']['table'] = 'field_data_field_server';
  $handler->display->display_options['fields']['field_server']['field'] = 'field_server';
  $handler->display->display_options['fields']['field_server']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_server']['alter']['path'] = '/server-list?&title=[field_server]';
  $handler->display->display_options['fields']['field_server']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_server']['type'] = 'node_reference_plain';
  /* Field: Content: Contract */
  $handler->display->display_options['fields']['field_contract']['id'] = 'field_contract';
  $handler->display->display_options['fields']['field_contract']['table'] = 'field_data_field_contract';
  $handler->display->display_options['fields']['field_contract']['field'] = 'field_contract';
  $handler->display->display_options['fields']['field_contract']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_contract']['alter']['path'] = '/contract-list?&title=[field_contract]';
  $handler->display->display_options['fields']['field_contract']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_contract']['type'] = 'node_reference_plain';
  /* Field: Content: Description */
  $handler->display->display_options['fields']['field_description']['id'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['table'] = 'field_data_field_description';
  $handler->display->display_options['fields']['field_description']['field'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['element_label_colon'] = FALSE;
  /* Field: Content: webroot */
  $handler->display->display_options['fields']['field_webroot']['id'] = 'field_webroot';
  $handler->display->display_options['fields']['field_webroot']['table'] = 'field_data_field_webroot';
  $handler->display->display_options['fields']['field_webroot']['field'] = 'field_webroot';
  $handler->display->display_options['fields']['field_webroot']['element_label_colon'] = FALSE;
  /* Field: Content: Canonical Website */
  $handler->display->display_options['fields']['field_canonical_website']['id'] = 'field_canonical_website';
  $handler->display->display_options['fields']['field_canonical_website']['table'] = 'field_data_field_canonical_website';
  $handler->display->display_options['fields']['field_canonical_website']['field'] = 'field_canonical_website';
  /* Field: Content: Clone link */
  $handler->display->display_options['fields']['clone_node']['id'] = 'clone_node';
  $handler->display->display_options['fields']['clone_node']['table'] = 'node';
  $handler->display->display_options['fields']['clone_node']['field'] = 'clone_node';
  $handler->display->display_options['fields']['clone_node']['label'] = '';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* Field: Content: Delete link */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['label'] = '';
  $handler->display->display_options['fields']['delete_node']['element_label_colon'] = FALSE;
  /* Sort criterion: CiviCRM Contacts: Nickname */
  $handler->display->display_options['sorts']['nick_name']['id'] = 'nick_name';
  $handler->display->display_options['sorts']['nick_name']['table'] = 'civicrm_contact';
  $handler->display->display_options['sorts']['nick_name']['field'] = 'nick_name';
  $handler->display->display_options['sorts']['nick_name']['relationship'] = 'field_client_target_id';
  /* Sort criterion: Content: Deployment Environment (field_deployment_environment) */
  $handler->display->display_options['sorts']['field_deployment_environment_value']['id'] = 'field_deployment_environment_value';
  $handler->display->display_options['sorts']['field_deployment_environment_value']['table'] = 'field_data_field_deployment_environment';
  $handler->display->display_options['sorts']['field_deployment_environment_value']['field'] = 'field_deployment_environment_value';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'website' => 'website',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: CiviCRM Contacts: Nickname */
  $handler->display->display_options['filters']['nick_name']['id'] = 'nick_name';
  $handler->display->display_options['filters']['nick_name']['table'] = 'civicrm_contact';
  $handler->display->display_options['filters']['nick_name']['field'] = 'nick_name';
  $handler->display->display_options['filters']['nick_name']['relationship'] = 'field_client_target_id';
  $handler->display->display_options['filters']['nick_name']['group'] = 1;
  $handler->display->display_options['filters']['nick_name']['exposed'] = TRUE;
  $handler->display->display_options['filters']['nick_name']['expose']['operator_id'] = 'nick_name_op';
  $handler->display->display_options['filters']['nick_name']['expose']['label'] = 'Client';
  $handler->display->display_options['filters']['nick_name']['expose']['operator'] = 'nick_name_op';
  $handler->display->display_options['filters']['nick_name']['expose']['identifier'] = 'nick_name';
  $handler->display->display_options['filters']['nick_name']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Deployment Environment (field_deployment_environment) */
  $handler->display->display_options['filters']['field_deployment_environment_value']['id'] = 'field_deployment_environment_value';
  $handler->display->display_options['filters']['field_deployment_environment_value']['table'] = 'field_data_field_deployment_environment';
  $handler->display->display_options['filters']['field_deployment_environment_value']['field'] = 'field_deployment_environment_value';
  $handler->display->display_options['filters']['field_deployment_environment_value']['group'] = 1;
  $handler->display->display_options['filters']['field_deployment_environment_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_deployment_environment_value']['expose']['operator_id'] = 'field_deployment_environment_value_op';
  $handler->display->display_options['filters']['field_deployment_environment_value']['expose']['label'] = 'Env';
  $handler->display->display_options['filters']['field_deployment_environment_value']['expose']['operator'] = 'field_deployment_environment_value_op';
  $handler->display->display_options['filters']['field_deployment_environment_value']['expose']['identifier'] = 'field_deployment_environment_value';
  $handler->display->display_options['filters']['field_deployment_environment_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Server (field_server) */
  $handler->display->display_options['filters']['field_server_nid']['id'] = 'field_server_nid';
  $handler->display->display_options['filters']['field_server_nid']['table'] = 'field_data_field_server';
  $handler->display->display_options['filters']['field_server_nid']['field'] = 'field_server_nid';
  $handler->display->display_options['filters']['field_server_nid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_server_nid']['expose']['operator_id'] = 'field_server_nid_op';
  $handler->display->display_options['filters']['field_server_nid']['expose']['label'] = 'Server';
  $handler->display->display_options['filters']['field_server_nid']['expose']['operator'] = 'field_server_nid_op';
  $handler->display->display_options['filters']['field_server_nid']['expose']['identifier'] = 'field_server_nid';
  $handler->display->display_options['filters']['field_server_nid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Contract Type (field_contract_type) */
  $handler->display->display_options['filters']['field_contract_type_value']['id'] = 'field_contract_type_value';
  $handler->display->display_options['filters']['field_contract_type_value']['table'] = 'field_data_field_contract_type';
  $handler->display->display_options['filters']['field_contract_type_value']['field'] = 'field_contract_type_value';
  $handler->display->display_options['filters']['field_contract_type_value']['relationship'] = 'field_contract_nid';
  $handler->display->display_options['filters']['field_contract_type_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_contract_type_value']['expose']['operator_id'] = 'field_contract_type_value_op';
  $handler->display->display_options['filters']['field_contract_type_value']['expose']['label'] = 'Contract Type';
  $handler->display->display_options['filters']['field_contract_type_value']['expose']['operator'] = 'field_contract_type_value_op';
  $handler->display->display_options['filters']['field_contract_type_value']['expose']['identifier'] = 'field_contract_type_value';
  $handler->display->display_options['filters']['field_contract_type_value']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_contract_type_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'website-list';

  /* Display: Services */
  $handler = $view->new_display('services', 'Services', 'services_1');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_server_nid';
  $handler->display->display_options['fields']['title']['label'] = 'Server';
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Primary URL */
  $handler->display->display_options['fields']['field_primary_url_1']['id'] = 'field_primary_url_1';
  $handler->display->display_options['fields']['field_primary_url_1']['table'] = 'field_data_field_primary_url';
  $handler->display->display_options['fields']['field_primary_url_1']['field'] = 'field_primary_url';
  $handler->display->display_options['fields']['field_primary_url_1']['label'] = 'primary_url';
  $handler->display->display_options['fields']['field_primary_url_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_primary_url_1']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_primary_url_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_primary_url_1']['settings'] = array(
    'trim_length' => '80',
    'nofollow' => 0,
  );
  /* Field: Content: Deployment Environment */
  $handler->display->display_options['fields']['field_deployment_environment']['id'] = 'field_deployment_environment';
  $handler->display->display_options['fields']['field_deployment_environment']['table'] = 'field_data_field_deployment_environment';
  $handler->display->display_options['fields']['field_deployment_environment']['field'] = 'field_deployment_environment';
  $handler->display->display_options['fields']['field_deployment_environment']['label'] = 'Env';
  $handler->display->display_options['fields']['field_deployment_environment']['element_label_colon'] = FALSE;
  /* Field: Content: CMS */
  $handler->display->display_options['fields']['field_cms']['id'] = 'field_cms';
  $handler->display->display_options['fields']['field_cms']['table'] = 'field_data_field_cms';
  $handler->display->display_options['fields']['field_cms']['field'] = 'field_cms';
  $handler->display->display_options['fields']['field_cms']['element_label_colon'] = FALSE;
  /* Field: Content: CiviCRM */
  $handler->display->display_options['fields']['field_civicrm']['id'] = 'field_civicrm';
  $handler->display->display_options['fields']['field_civicrm']['table'] = 'field_data_field_civicrm';
  $handler->display->display_options['fields']['field_civicrm']['field'] = 'field_civicrm';
  $handler->display->display_options['fields']['field_civicrm']['element_label_colon'] = FALSE;
  /* Field: Content: webroot */
  $handler->display->display_options['fields']['field_webroot']['id'] = 'field_webroot';
  $handler->display->display_options['fields']['field_webroot']['table'] = 'field_data_field_webroot';
  $handler->display->display_options['fields']['field_webroot']['field'] = 'field_webroot';
  $handler->display->display_options['fields']['field_webroot']['element_label_colon'] = FALSE;
  /* Field: Content: Bare URL */
  $handler->display->display_options['fields']['field_bare_url']['id'] = 'field_bare_url';
  $handler->display->display_options['fields']['field_bare_url']['table'] = 'field_data_field_bare_url';
  $handler->display->display_options['fields']['field_bare_url']['field'] = 'field_bare_url';
  $handler->display->display_options['fields']['field_bare_url']['label'] = 'bare_url';
  /* Field: Content: git repo name */
  $handler->display->display_options['fields']['field_git_repo_name']['id'] = 'field_git_repo_name';
  $handler->display->display_options['fields']['field_git_repo_name']['table'] = 'field_data_field_git_repo_name';
  $handler->display->display_options['fields']['field_git_repo_name']['field'] = 'field_git_repo_name';
  $handler->display->display_options['fields']['field_git_repo_name']['label'] = 'git_repo_name';
  /* Field: Content: git repo owner */
  $handler->display->display_options['fields']['field_git_repo_owner']['id'] = 'field_git_repo_owner';
  $handler->display->display_options['fields']['field_git_repo_owner']['table'] = 'field_data_field_git_repo_owner';
  $handler->display->display_options['fields']['field_git_repo_owner']['field'] = 'field_git_repo_owner';
  $handler->display->display_options['fields']['field_git_repo_owner']['label'] = 'git_repo_owner';
  /* Field: Content: git repo push url computed */
  $handler->display->display_options['fields']['field_git_repo_push_url']['id'] = 'field_git_repo_push_url';
  $handler->display->display_options['fields']['field_git_repo_push_url']['table'] = 'field_data_field_git_repo_push_url';
  $handler->display->display_options['fields']['field_git_repo_push_url']['field'] = 'field_git_repo_push_url';
  $handler->display->display_options['fields']['field_git_repo_push_url']['label'] = 'git_repo_push_url';
  $handler->display->display_options['fields']['field_git_repo_push_url']['type'] = 'text_default';
  /* Field: Content: git repo url computed */
  $handler->display->display_options['fields']['field_git_repo_url']['id'] = 'field_git_repo_url';
  $handler->display->display_options['fields']['field_git_repo_url']['table'] = 'field_data_field_git_repo_url';
  $handler->display->display_options['fields']['field_git_repo_url']['field'] = 'field_git_repo_url';
  $handler->display->display_options['fields']['field_git_repo_url']['label'] = 'git_repo_url';
  $handler->display->display_options['fields']['field_git_repo_url']['type'] = 'text_default';
  /* Field: Content: Internal Repo */
  $handler->display->display_options['fields']['field_internal_repo']['id'] = 'field_internal_repo';
  $handler->display->display_options['fields']['field_internal_repo']['table'] = 'field_data_field_internal_repo';
  $handler->display->display_options['fields']['field_internal_repo']['field'] = 'field_internal_repo';
  $handler->display->display_options['fields']['field_internal_repo']['label'] = 'internal_repo';
  /* Field: Content: Run As User */
  $handler->display->display_options['fields']['field_run_as_user']['id'] = 'field_run_as_user';
  $handler->display->display_options['fields']['field_run_as_user']['table'] = 'field_data_field_run_as_user';
  $handler->display->display_options['fields']['field_run_as_user']['field'] = 'field_run_as_user';
  $handler->display->display_options['fields']['field_run_as_user']['label'] = 'run_as_user';
  /* Field: Content: gitroot_computed */
  $handler->display->display_options['fields']['field_gitroot']['id'] = 'field_gitroot';
  $handler->display->display_options['fields']['field_gitroot']['table'] = 'field_data_field_gitroot';
  $handler->display->display_options['fields']['field_gitroot']['field'] = 'field_gitroot';
  $handler->display->display_options['fields']['field_gitroot']['label'] = 'gitroot';
  /* Field: Content: cms_db_name_computed */
  $handler->display->display_options['fields']['field_cms_db_name']['id'] = 'field_cms_db_name';
  $handler->display->display_options['fields']['field_cms_db_name']['table'] = 'field_data_field_cms_db_name';
  $handler->display->display_options['fields']['field_cms_db_name']['field'] = 'field_cms_db_name';
  $handler->display->display_options['fields']['field_cms_db_name']['label'] = 'cms_db_name';
  /* Field: Content: crm_db_name_computed */
  $handler->display->display_options['fields']['field_crm_db_name']['id'] = 'field_crm_db_name';
  $handler->display->display_options['fields']['field_crm_db_name']['table'] = 'field_data_field_crm_db_name';
  $handler->display->display_options['fields']['field_crm_db_name']['field'] = 'field_crm_db_name';
  $handler->display->display_options['fields']['field_crm_db_name']['label'] = 'crm_db_name';
  /* Field: Content: db_user_computed */
  $handler->display->display_options['fields']['field_db_user']['id'] = 'field_db_user';
  $handler->display->display_options['fields']['field_db_user']['table'] = 'field_data_field_db_user';
  $handler->display->display_options['fields']['field_db_user']['field'] = 'field_db_user';
  $handler->display->display_options['fields']['field_db_user']['label'] = 'db_user';
  /* Field: Content: Site Title */
  $handler->display->display_options['fields']['field_site_title']['id'] = 'field_site_title';
  $handler->display->display_options['fields']['field_site_title']['table'] = 'field_data_field_site_title';
  $handler->display->display_options['fields']['field_site_title']['field'] = 'field_site_title';
  $handler->display->display_options['fields']['field_site_title']['label'] = 'site_title';
  /* Field: Content: Admin Email */
  $handler->display->display_options['fields']['field_admin_email']['id'] = 'field_admin_email';
  $handler->display->display_options['fields']['field_admin_email']['table'] = 'field_data_field_admin_email';
  $handler->display->display_options['fields']['field_admin_email']['field'] = 'field_admin_email';
  $handler->display->display_options['fields']['field_admin_email']['label'] = 'admin_email';
  /* Field: Content: civicrm_custom_path_computed */
  $handler->display->display_options['fields']['field_civicrm_custom_path']['id'] = 'field_civicrm_custom_path';
  $handler->display->display_options['fields']['field_civicrm_custom_path']['table'] = 'field_data_field_civicrm_custom_path';
  $handler->display->display_options['fields']['field_civicrm_custom_path']['field'] = 'field_civicrm_custom_path';
  $handler->display->display_options['fields']['field_civicrm_custom_path']['label'] = 'civicrm_custom_path';
  /* Field: Content: civicrm_files_path_computed */
  $handler->display->display_options['fields']['field_civicrm_files_path']['id'] = 'field_civicrm_files_path';
  $handler->display->display_options['fields']['field_civicrm_files_path']['table'] = 'field_data_field_civicrm_files_path';
  $handler->display->display_options['fields']['field_civicrm_files_path']['field'] = 'field_civicrm_files_path';
  $handler->display->display_options['fields']['field_civicrm_files_path']['label'] = 'civicrm_files_path';
  /* Field: Content: civicrm_settings_php_path */
  $handler->display->display_options['fields']['field_civicrm_settings_php_path']['id'] = 'field_civicrm_settings_php_path';
  $handler->display->display_options['fields']['field_civicrm_settings_php_path']['table'] = 'field_data_field_civicrm_settings_php_path';
  $handler->display->display_options['fields']['field_civicrm_settings_php_path']['field'] = 'field_civicrm_settings_php_path';
  /* Field: Content: civiroot_computed */
  $handler->display->display_options['fields']['field_civiroot']['id'] = 'field_civiroot';
  $handler->display->display_options['fields']['field_civiroot']['table'] = 'field_data_field_civiroot';
  $handler->display->display_options['fields']['field_civiroot']['field'] = 'field_civiroot';
  $handler->display->display_options['fields']['field_civiroot']['label'] = 'civiroot';
  /* Field: CiviCRM Contacts: Nickname */
  $handler->display->display_options['fields']['nick_name']['id'] = 'nick_name';
  $handler->display->display_options['fields']['nick_name']['table'] = 'civicrm_contact';
  $handler->display->display_options['fields']['nick_name']['field'] = 'nick_name';
  $handler->display->display_options['fields']['nick_name']['relationship'] = 'field_client_target_id';
  $handler->display->display_options['fields']['nick_name']['label'] = 'client';
  /* Field: Content: CRM Logging DB Name */
  $handler->display->display_options['fields']['field_crm_logging_db_name']['id'] = 'field_crm_logging_db_name';
  $handler->display->display_options['fields']['field_crm_logging_db_name']['table'] = 'field_data_field_crm_logging_db_name';
  $handler->display->display_options['fields']['field_crm_logging_db_name']['field'] = 'field_crm_logging_db_name';
  $handler->display->display_options['fields']['field_crm_logging_db_name']['label'] = 'crm_logging_db_name';
  /* Field: Content: CMS Table Prefix */
  $handler->display->display_options['fields']['field_cms_table_prefix']['id'] = 'field_cms_table_prefix';
  $handler->display->display_options['fields']['field_cms_table_prefix']['table'] = 'field_data_field_cms_table_prefix';
  $handler->display->display_options['fields']['field_cms_table_prefix']['field'] = 'field_cms_table_prefix';
  $handler->display->display_options['fields']['field_cms_table_prefix']['label'] = 'cms_table_prefix';
  /* Field: Content: crm_db_name_computed */
  $handler->display->display_options['fields']['field_crm_db_name_1']['id'] = 'field_crm_db_name_1';
  $handler->display->display_options['fields']['field_crm_db_name_1']['table'] = 'field_data_field_crm_db_name';
  $handler->display->display_options['fields']['field_crm_db_name_1']['field'] = 'field_crm_db_name';
  $handler->display->display_options['fields']['field_crm_db_name_1']['relationship'] = 'field_canonical_website_nid';
  $handler->display->display_options['fields']['field_crm_db_name_1']['label'] = 'canonical_crm_db_name';
  /* Field: Content: cms_db_name_computed */
  $handler->display->display_options['fields']['field_cms_db_name_1']['id'] = 'field_cms_db_name_1';
  $handler->display->display_options['fields']['field_cms_db_name_1']['table'] = 'field_data_field_cms_db_name';
  $handler->display->display_options['fields']['field_cms_db_name_1']['field'] = 'field_cms_db_name';
  $handler->display->display_options['fields']['field_cms_db_name_1']['relationship'] = 'field_canonical_website_nid';
  $handler->display->display_options['fields']['field_cms_db_name_1']['label'] = 'canonical_cms_db_name';
  /* Field: Content: hostname */
  $handler->display->display_options['fields']['field_hostname']['id'] = 'field_hostname';
  $handler->display->display_options['fields']['field_hostname']['table'] = 'field_data_field_hostname';
  $handler->display->display_options['fields']['field_hostname']['field'] = 'field_hostname';
  $handler->display->display_options['fields']['field_hostname']['relationship'] = 'field_server_nid_1';
  $handler->display->display_options['fields']['field_hostname']['label'] = 'canonical_hostname';
  /* Field: Content: Primary URL */
  $handler->display->display_options['fields']['field_primary_url']['id'] = 'field_primary_url';
  $handler->display->display_options['fields']['field_primary_url']['table'] = 'field_data_field_primary_url';
  $handler->display->display_options['fields']['field_primary_url']['field'] = 'field_primary_url';
  $handler->display->display_options['fields']['field_primary_url']['relationship'] = 'field_canonical_website_nid';
  $handler->display->display_options['fields']['field_primary_url']['label'] = 'canonical_primary_url';
  $handler->display->display_options['fields']['field_primary_url']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_primary_url']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_primary_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_primary_url']['settings'] = array(
    'trim_length' => '80',
    'nofollow' => 0,
  );
  /* Field: CiviCRM Contacts: Nickname */
  $handler->display->display_options['fields']['nick_name_1']['id'] = 'nick_name_1';
  $handler->display->display_options['fields']['nick_name_1']['table'] = 'civicrm_contact';
  $handler->display->display_options['fields']['nick_name_1']['field'] = 'nick_name';
  $handler->display->display_options['fields']['nick_name_1']['relationship'] = 'field_client_target_id_1';
  $handler->display->display_options['fields']['nick_name_1']['label'] = 'canonical_server_client';
  /* Field: Content: Contract Type */
  $handler->display->display_options['fields']['field_contract_type']['id'] = 'field_contract_type';
  $handler->display->display_options['fields']['field_contract_type']['table'] = 'field_data_field_contract_type';
  $handler->display->display_options['fields']['field_contract_type']['field'] = 'field_contract_type';
  $handler->display->display_options['fields']['field_contract_type']['relationship'] = 'field_contract_nid';
  $handler->display->display_options['fields']['field_contract_type']['label'] = 'contract_type';
  $handler->display->display_options['fields']['field_contract_type']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'website' => 'website',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['relationship'] = 'field_server_nid';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Title';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Active (field_active) */
  $handler->display->display_options['filters']['field_active_value']['id'] = 'field_active_value';
  $handler->display->display_options['filters']['field_active_value']['table'] = 'field_data_field_active';
  $handler->display->display_options['filters']['field_active_value']['field'] = 'field_active_value';
  $handler->display->display_options['filters']['field_active_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['path'] = 'websites';
  $export['website_list'] = $view;

  return $export;
}
