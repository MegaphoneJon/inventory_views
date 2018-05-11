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
  $handler->display->display_options['access']['type'] = 'none';
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
  $handler->display->display_options['fields']['current_employer']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Redmine';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a href="https://hq.megaphonetech.com/projects/[nick_name]">Redmine</a>';
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
  /* Field: Content: RSA key fingerprint */
  $handler->display->display_options['fields']['field_rsa_key_fingerprint']['id'] = 'field_rsa_key_fingerprint';
  $handler->display->display_options['fields']['field_rsa_key_fingerprint']['table'] = 'field_data_field_rsa_key_fingerprint';
  $handler->display->display_options['fields']['field_rsa_key_fingerprint']['field'] = 'field_rsa_key_fingerprint';
  $handler->display->display_options['fields']['field_rsa_key_fingerprint']['element_label_colon'] = FALSE;
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

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'server-list';
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
  /* Field: Content: gitroot */
  $handler->display->display_options['fields']['field_gitroot']['id'] = 'field_gitroot';
  $handler->display->display_options['fields']['field_gitroot']['table'] = 'field_data_field_gitroot';
  $handler->display->display_options['fields']['field_gitroot']['field'] = 'field_gitroot';
  $handler->display->display_options['fields']['field_gitroot']['element_label_colon'] = FALSE;
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
  $export['website_list'] = $view;

  return $export;
}
