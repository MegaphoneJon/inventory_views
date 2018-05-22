<?php
/**
 * @file
 * inventory_views.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function inventory_views_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ansible|node|server|form';
  $field_group->group_name = 'group_ansible';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'server';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Ansible Fields',
    'weight' => '16',
    'children' => array(
      0 => 'field_groups',
      1 => 'field_ansible_user',
      2 => 'field_linode_id',
      3 => 'field_linode_plan',
      4 => 'field_hostname',
      5 => 'field_timezone',
      6 => 'field_incoming_email',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Ansible Fields',
      'instance_settings' => array(
        'required_fields' => 0,
        'id' => '',
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_ansible|node|server|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_git|node|website|form';
  $field_group->group_name = 'group_git';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'website';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Git',
    'weight' => '16',
    'children' => array(
      0 => 'field_internal_repo',
      1 => 'field_git_repo_owner',
      2 => 'field_git_repo_name',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-git field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_git|node|website|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_overrides|node|website|form';
  $field_group->group_name = 'group_overrides';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'website';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Overrides',
    'weight' => '14',
    'children' => array(
      0 => 'field_gitroot_override',
      1 => 'field_cms_db_name_override',
      2 => 'field_cms_db_name',
      3 => 'field_crm_db_name_override',
      4 => 'field_crm_db_name',
      5 => 'field_db_user_override',
      6 => 'field_db_user',
      7 => 'field_gitroot',
      8 => 'field_civiroot_override',
      9 => 'field_civiroot',
      10 => 'field_civicrm_custom_path_overri',
      11 => 'field_civicrm_custom_path',
      12 => 'field_civicrm_files_path_overrid',
      13 => 'field_civicrm_files_path',
      14 => 'field_git_repo_url_override',
      15 => 'field_git_repo_push_url_override',
      16 => 'field_git_repo_url',
      17 => 'field_git_repo_push_url',
      18 => 'field_crm_logging_db_name',
      19 => 'field_cms_table_prefix',
      20 => '_add_existing_field',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Overrides',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-overrides field-group-fieldset',
        'description' => 'You can override default settings for Ansible here, but you shouldn\'t need to unless a) incorporating an existing site with non-standard settings, b) using a non-internal git repo.',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_overrides|node|website|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_site_deploy|node|website|form';
  $field_group->group_name = 'group_site_deploy';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'website';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Site Deploy Settings',
    'weight' => '15',
    'children' => array(
      0 => 'field_site_title',
      1 => 'field_admin_email',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Site Deploy Settings',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-site-deploy field-group-fieldset',
        'description' => 'You only need to fill these out if you\'re creating a new site via Ansible.',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_site_deploy|node|website|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Ansible Fields');
  t('Git');
  t('Overrides');
  t('Site Deploy Settings');

  return $field_groups;
}
