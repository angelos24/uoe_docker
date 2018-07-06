<?php
/**
 * @file
 * uoe_profile.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function uoe_profile_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_biography|node|uoe_profile|form';
  $field_group->group_name = 'group_biography';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'uoe_profile';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Biography',
    'weight' => '5',
    'children' => array(
      0 => 'field_uoe_affiliations',
      1 => 'field_uoe_biography',
      2 => 'field_uoe_cv',
      3 => 'field_uoe_qualifications',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_biography|node|uoe_profile|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_contact|node|uoe_profile|form';
  $field_group->group_name = 'group_contact';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'uoe_profile';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contact details',
    'weight' => '4',
    'children' => array(
      0 => 'field_uoe_contact_email',
      1 => 'field_uoe_contact_fax',
      2 => 'field_uoe_contact_point',
      3 => 'field_uoe_contact_times',
      4 => 'field_uoe_contact_work_phone',
      5 => 'group_primary_address',
      6 => 'group_secondary_address',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_contact|node|uoe_profile|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_extra|node|uoe_profile|form';
  $field_group->group_name = 'group_extra';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'uoe_profile';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Extra categories',
    'weight' => '12',
    'children' => array(
      0 => 'field_uoe_group_content_1',
      1 => 'field_uoe_group_content_2',
      2 => 'field_uoe_group_heading_1',
      3 => 'field_uoe_group_heading_2',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Extra categories',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_extra|node|uoe_profile|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_info|node|uoe_profile|form';
  $field_group->group_name = 'group_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'uoe_profile';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Individual and organisation info',
    'weight' => '3',
    'children' => array(
      0 => 'field_uoe_contact_awards',
      1 => 'field_uoe_contact_family_name',
      2 => 'field_uoe_contact_given_name',
      3 => 'field_uoe_contact_middle_name',
      4 => 'field_uoe_contact_org_1',
      5 => 'field_uoe_contact_org_2',
      6 => 'field_uoe_contact_org_3',
      7 => 'field_uoe_contact_prefix',
      8 => 'field_uoe_contact_role',
      9 => 'field_uoe_profile_picture',
      10 => 'field_website_link',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_info|node|uoe_profile|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_media|node|uoe_profile|form';
  $field_group->group_name = 'group_media';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'uoe_profile';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Media',
    'weight' => '11',
    'children' => array(
      0 => 'field_uoe_public_media',
      1 => 'field_uoe_video',
      2 => 'field_uoe_video_link',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_media|node|uoe_profile|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_metadata|node|uoe_profile|form';
  $field_group->group_name = 'group_metadata';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'uoe_profile';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Metadata',
    'weight' => '13',
    'children' => array(
      1 => 'field_meta_desc',
      2 => 'field_meta_keywords',
      3 => 'field_meta_noindex',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_metadata|node|uoe_profile|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_primary_address|node|uoe_profile|form';
  $field_group->group_name = 'group_primary_address';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'uoe_profile';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_contact';
  $field_group->data = array(
    'label' => 'Primary address',
    'weight' => '39',
    'children' => array(
      0 => 'field_uoe_contact_address',
      1 => 'field_uoe_contact_locality',
      2 => 'field_uoe_contact_postcode',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Primary address',
      'instance_settings' => array(
        'required_fields' => 0,
        'id' => '',
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_primary_address|node|uoe_profile|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_projects|node|uoe_profile|form';
  $field_group->group_name = 'group_projects';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'uoe_profile';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Projects',
    'weight' => '7',
    'children' => array(
      0 => 'field_uoe_current_grants',
      1 => 'field_uoe_previous_grants',
      2 => 'field_uoe_project_activity',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_projects|node|uoe_profile|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_publications|node|uoe_profile|form';
  $field_group->group_name = 'group_publications';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'uoe_profile';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Publications',
    'weight' => '9',
    'children' => array(
      0 => 'field_uoe_pure_id',
      1 => 'field_uoe_pure_limit',
      2 => 'field_uoe_pure_highlighted',
      3 => 'group_pure',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_publications|node|uoe_profile|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pure|node|uoe_profile|form';
  $field_group->group_name = 'group_pure';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'uoe_profile';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_publications';
  $field_group->data = array(
    'label' => 'Content from PURE',
    'weight' => '16',
    'children' => array(
      0 => 'field_uoe_pure',
      1 => 'field_uoe_pure_updated',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Content from PURE',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-pure field-group-fieldset',
        'description' => 'This content is updated from PURE every four days and when you save this form.  To make changes to the list of publications, please go to PURE.',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_pure|node|uoe_profile|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_research|node|uoe_profile|form';
  $field_group->group_name = 'group_research';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'uoe_profile';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Research',
    'weight' => '6',
    'children' => array(
      0 => 'field_affiliation_link',
      1 => 'field_uoe_current_interests',
      2 => 'field_uoe_interests',
      3 => 'field_uoe_knowledge',
      4 => 'field_uoe_past_interests',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_research|node|uoe_profile|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_secondary_address|node|uoe_profile|form';
  $field_group->group_name = 'group_secondary_address';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'uoe_profile';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_contact';
  $field_group->data = array(
    'label' => 'Secondary address',
    'weight' => '40',
    'children' => array(
      0 => 'field_uoe_contact_address_2',
      1 => 'field_uoe_contact_locality_2',
      2 => 'field_uoe_contact_postcode_2',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Secondary address',
      'instance_settings' => array(
        'required_fields' => 0,
        'id' => '',
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_secondary_address|node|uoe_profile|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_teaching|node|uoe_profile|form';
  $field_group->group_name = 'group_teaching';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'uoe_profile';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Teaching & PhD supervision',
    'weight' => '10',
    'children' => array(
      0 => 'field_uoe_current_supervised',
      1 => 'field_uoe_pg_teaching',
      2 => 'field_uoe_phd_enquiries',
      3 => 'field_uoe_supervised_past',
      4 => 'field_uoe_supervision',
      5 => 'field_uoe_ug_teaching',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_teaching|node|uoe_profile|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Biography');
  t('Contact details');
  t('Content from PURE');
  t('Extra categories');
  t('Individual and organisation info');
  t('Media');
  t('Metadata');
  t('Primary address');
  t('Projects');
  t('Publications');
  t('Research');
  t('Secondary address');
  t('Teaching & PhD supervision');

  return $field_groups;
}
