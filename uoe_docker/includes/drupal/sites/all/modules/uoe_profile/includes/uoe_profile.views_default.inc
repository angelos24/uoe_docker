<?php
/**
 * @file
 * uoe_profile.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function uoe_profile_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'uoe_profiles';
  $view->description = 'Listing of all published user profiles.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'UoE Profiles';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Profile pages';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['style_plugin'] = 'table';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'Nothing to display message';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No user profiles were found.';
  $handler->display->display_options['empty']['area']['format'] = 'plain_text';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Name';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Field: Role */
  $handler->display->display_options['fields']['field_uoe_contact_role']['id'] = 'field_uoe_contact_role';
  $handler->display->display_options['fields']['field_uoe_contact_role']['table'] = 'field_data_field_uoe_contact_role';
  $handler->display->display_options['fields']['field_uoe_contact_role']['field'] = 'field_uoe_contact_role';
  $handler->display->display_options['fields']['field_uoe_contact_role']['element_label_colon'] = FALSE;
  /* Field: Content: Business unit websites */
  $handler->display->display_options['fields']['field_website_link']['id'] = 'field_website_link';
  $handler->display->display_options['fields']['field_website_link']['table'] = 'field_data_field_website_link';
  $handler->display->display_options['fields']['field_website_link']['field'] = 'field_website_link';
  $handler->display->display_options['fields']['field_website_link']['label'] = 'Business unit(s)';
  $handler->display->display_options['fields']['field_website_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_website_link']['type'] = 'link_title_plain';
  $handler->display->display_options['fields']['field_website_link']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_website_link']['multi_type'] = 'ul';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Sort criterion: Field: Family name (field_uoe_contact_family_name) */
  $handler->display->display_options['sorts']['field_uoe_contact_family_name_value']['id'] = 'field_uoe_contact_family_name_value';
  $handler->display->display_options['sorts']['field_uoe_contact_family_name_value']['table'] = 'field_data_field_uoe_contact_family_name';
  $handler->display->display_options['sorts']['field_uoe_contact_family_name_value']['field'] = 'field_uoe_contact_family_name_value';
  $handler->display->display_options['sorts']['field_uoe_contact_family_name_value']['expose']['label'] = 'Family name (field_uoe_contact_family_name)';
  /* Sort criterion: Field: First name (field_uoe_contact_given_name) */
  $handler->display->display_options['sorts']['field_uoe_contact_given_name_value']['id'] = 'field_uoe_contact_given_name_value';
  $handler->display->display_options['sorts']['field_uoe_contact_given_name_value']['table'] = 'field_data_field_uoe_contact_given_name';
  $handler->display->display_options['sorts']['field_uoe_contact_given_name_value']['field'] = 'field_uoe_contact_given_name_value';
  /* Sort criterion: Content: Nid */
  $handler->display->display_options['sorts']['nid']['id'] = 'nid';
  $handler->display->display_options['sorts']['nid']['table'] = 'node';
  $handler->display->display_options['sorts']['nid']['field'] = 'nid';
  $handler->display->display_options['sorts']['nid']['order'] = 'DESC';
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
    'uoe_profile' => 'uoe_profile',
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'word';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Name';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'nm';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    12 => 0,
    11 => 0,
    13 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    17 => 0,
  );
  $handler->display->display_options['filters']['title']['expose']['autocomplete_filter'] = 1;
  $handler->display->display_options['filters']['title']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['title']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['title']['expose']['autocomplete_field'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['title']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['title']['expose']['autocomplete_dependent'] = 0;
  $handler->display->display_options['filters']['title']['expose']['autocomplete_multiple'] = 1;
  /* Filter criterion: Content: Business unit websites (field_website_link:title) */
  $handler->display->display_options['filters']['field_website_link_title']['id'] = 'field_website_link_title';
  $handler->display->display_options['filters']['field_website_link_title']['table'] = 'field_data_field_website_link';
  $handler->display->display_options['filters']['field_website_link_title']['field'] = 'field_website_link_title';
  $handler->display->display_options['filters']['field_website_link_title']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_website_link_title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_website_link_title']['expose']['operator_id'] = 'field_website_link_title_op';
  $handler->display->display_options['filters']['field_website_link_title']['expose']['label'] = 'Business unit';
  $handler->display->display_options['filters']['field_website_link_title']['expose']['operator'] = 'field_website_link_title_op';
  $handler->display->display_options['filters']['field_website_link_title']['expose']['identifier'] = 'bu';
  $handler->display->display_options['filters']['field_website_link_title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    12 => 0,
    11 => 0,
    13 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    17 => 0,
  );
  $handler->display->display_options['filters']['field_website_link_title']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['field_website_link_title']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['field_website_link_title']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['field_website_link_title']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['field_website_link_title']['expose']['autocomplete_dependent'] = 0;
  $handler->display->display_options['filters']['field_website_link_title']['expose']['autocomplete_multiple'] = 1;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'profile';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Profiles';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['uoe_profiles'] = $view;

  return $export;
}
