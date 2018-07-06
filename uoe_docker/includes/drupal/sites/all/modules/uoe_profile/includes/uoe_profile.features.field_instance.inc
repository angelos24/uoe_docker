<?php
/**
 * @file
 * uoe_profile.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function uoe_profile_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-uoe_profile-field_affiliation_link'.
  $field_instances['node-uoe_profile-field_affiliation_link'] = array(
    'bundle' => 'uoe_profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Provide links to research centre websites that you are associated with.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 43,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_node_atom_full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_node_atom_summary' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_overview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_overview_high' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_overview_medium' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_affiliation_link',
    'label' => 'Affiliated research centres',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 0,
      'attributes' => array(
        'class' => '',
        'configurable_class' => 0,
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'linkit' => array(
        'enable' => 0,
        'insert_plugin' => '',
      ),
      'rel_remove' => 'default',
      'title' => 'optional',
      'title_label_use_field_label' => 0,
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 'optional',
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 17,
    ),
  );

  // Exported field_instance: 'node-uoe_profile-field_meta_desc'
  $field_instances['node-uoe_profile-field_meta_desc'] = array(
    'bundle' => 'uoe_profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Appears in webpage source code, most commonly seen in search engine results. If left blank, summary text on the content tab will be used.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
      'entityreference_view_widget' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_node_atom_full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_node_atom_summary' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_overview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_overview_high' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_overview_medium' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_meta_desc',
    'label' => 'Description',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'plain_text' => 'plain_text',
          'uoe_text_format' => 'uoe_text_format',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'plain_text' => array(
              'weight' => 10,
            ),
            'uoe_text_format' => array(
              'weight' => 0,
            ),
          ),
        ),
      ),
      'context' => 'debug',
      'context_default' => 'sdl_editor_representation',
      'dnd_enabled' => 0,
      'linkit' => array(
        'enable' => 0,
        'insert_plugin' => '',
      ),
      'mee_enabled' => 0,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 3,
      ),
      'type' => 'text_textarea',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'node-uoe_profile-field_meta_keywords'
  $field_instances['node-uoe_profile-field_meta_keywords'] = array(
    'bundle' => 'uoe_profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Separate keywords and phrases with commas.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
      'entityreference_view_widget' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_node_atom_full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_node_atom_summary' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_overview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_overview_high' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_overview_medium' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_meta_keywords',
    'label' => 'Keywords',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'plain_text' => 'plain_text',
          'uoe_text_format' => 'uoe_text_format',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'plain_text' => array(
              'weight' => 10,
            ),
            'uoe_text_format' => array(
              'weight' => 0,
            ),
          ),
        ),
      ),
      'context' => 'debug',
      'context_default' => 'sdl_editor_representation',
      'dnd_enabled' => 0,
      'linkit' => array(
        'enable' => 0,
        'insert_plugin' => '',
      ),
      'mee_enabled' => 0,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'node-uoe_profile-field_meta_noindex'
  $field_instances['node-uoe_profile-field_meta_noindex'] = array(
    'bundle' => 'uoe_profile',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => 'Ask search engines not to include the page in their results. It is up to the search engine whether to honour this request. This does not mean the page will be confidential.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
      'entityreference_view_widget' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_node_atom_full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_node_atom_summary' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_overview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_overview_high' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_overview_medium' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_meta_noindex',
    'label' => 'Search engine indexing',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'uoe_metadata',
      'settings' => array(
        'display_label' => 0,
      ),
      'type' => 'uoe_metadata_options_onoff',
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'node-uoe_profile-field_slug'
  $field_instances['node-uoe_profile-field_slug'] = array(
    'bundle' => 'uoe_profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'safeword',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_node_atom_full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_node_atom_summary' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_overview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_overview_high' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_overview_medium' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_slug',
    'label' => 'URL segment',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'safeword',
      'settings' => array(),
      'type' => 'safeword_machine_name_only',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-uoe_profile-field_uoe_affiliations'.
  $field_instances['node-uoe_profile-field_uoe_affiliations'] = array(
    'bundle' => 'uoe_profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Provide information on any membership of professional bodies, committees and administrative roles, or external appointments such as membership of trusts/boards.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 36,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_node_atom_full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_node_atom_summary' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_overview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_overview_high' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_overview_medium' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_uoe_affiliations',
    'label' => 'Responsibilities & affiliations',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'plain_text' => 0,
          'uoe_code_format' => 0,
          'uoe_custom_html_format' => 0,
          'uoe_feeds_format' => 0,
          'uoe_footer_format' => 0,
          'uoe_html_atom_pane_text_format' => 0,
          'uoe_profile_format' => 'uoe_profile_format',
          'uoe_proxy_code_format' => 0,
          'uoe_proxy_format' => 0,
          'uoe_proxy_report_format' => 0,
          'uoe_static_pane_text_format' => 0,
          'uoe_text_format' => 0,
          'uoe_webform_text_format' => 0,
        ),
        'allowed_formats_toggle' => 1,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'plain_text' => array(
              'weight' => 10,
            ),
            'uoe_code_format' => array(
              'weight' => 0,
            ),
            'uoe_custom_html_format' => array(
              'weight' => 0,
            ),
            'uoe_feeds_format' => array(
              'weight' => 0,
            ),
            'uoe_footer_format' => array(
              'weight' => 0,
            ),
            'uoe_html_atom_pane_text_format' => array(
              'weight' => 0,
            ),
            'uoe_profile_format' => array(
              'weight' => 0,
            ),
            'uoe_proxy_code_format' => array(
              'weight' => 0,
            ),
            'uoe_proxy_format' => array(
              'weight' => 0,
            ),
            'uoe_proxy_report_format' => array(
              'weight' => 0,
            ),
            'uoe_static_pane_text_format' => array(
              'weight' => 0,
            ),
            'uoe_text_format' => array(
              'weight' => 0,
            ),
            'uoe_webform_text_format' => array(
              'weight' => 0,
            ),
          ),
        ),
      ),
      'linkit' => array(
        'enable' => 0,
        'insert_plugin' => '',
      ),
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 17,
    ),
  );

  // Exported field_instance: 'node-uoe_profile-field_uoe_biography'.
  $field_instances['node-uoe_profile-field_uoe_biography'] = array(
    'bundle' => 'uoe_profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 33,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_node_atom_full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_node_atom_summary' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_overview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_overview_high' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_overview_medium' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_uoe_biography',
    'label' => 'Biography',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'plain_text' => 0,
          'uoe_code_format' => 0,
          'uoe_custom_html_format' => 0,
          'uoe_feeds_format' => 0,
          'uoe_footer_format' => 0,
          'uoe_html_atom_pane_text_format' => 0,
          'uoe_profile_biography_format' => 'uoe_profile_biography_format',
          'uoe_profile_format' => 0,
          'uoe_proxy_code_format' => 0,
          'uoe_proxy_format' => 0,
          'uoe_proxy_report_format' => 0,
          'uoe_static_pane_text_format' => 0,
          'uoe_text_format' => 0,
          'uoe_webform_text_format' => 0,
        ),
        'allowed_formats_toggle' => 1,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'plain_text' => array(
              'weight' => 10,
            ),
            'uoe_code_format' => array(
              'weight' => 0,
            ),
            'uoe_custom_html_format' => array(
              'weight' => 0,
            ),
            'uoe_feeds_format' => array(
              'weight' => 0,
            ),
            'uoe_footer_format' => array(
              'weight' => 0,
            ),
            'uoe_html_atom_pane_text_format' => array(
              'weight' => 0,
            ),
            'uoe_profile_format' => array(
              'weight' => 0,
            ),
            'uoe_proxy_code_format' => array(
              'weight' => 0,
            ),
            'uoe_proxy_format' => array(
              'weight' => 0,
            ),
            'uoe_proxy_report_format' => array(
              'weight' => 0,
            ),
            'uoe_static_pane_text_format' => array(
              'weight' => 0,
            ),
            'uoe_text_format' => array(
              'weight' => 0,
            ),
            'uoe_webform_text_format' => array(
              'weight' => 0,
            ),
          ),
        ),
      ),
      'linkit' => array(
        'enable' => 0,
        'insert_plugin' => '',
      ),
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 14,
    ),
  );

  // Exported field_instance: 'node-uoe_profile-field_uoe_contact_address'.
  $field_instances['node-uoe_profile-field_uoe_contact_address'] = array(
    'bundle' => 'uoe_profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Do not include a comma at the end of each line.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 23,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_node_atom_full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_node_atom_summary' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_overview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_overview_high' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_overview_medium' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_uoe_contact_address',
    'label' => 'Street address',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'plain_text' => 'plain_text',
          'uoe_code_format' => 0,
          'uoe_custom_html_format' => 0,
          'uoe_feeds_format' => 0,
          'uoe_footer_format' => 0,
          'uoe_html_atom_pane_text_format' => 0,
          'uoe_profile_format' => 0,
          'uoe_proxy_code_format' => 0,
          'uoe_proxy_format' => 0,
          'uoe_proxy_report_format' => 0,
          'uoe_static_pane_text_format' => 0,
          'uoe_text_format' => 0,
          'uoe_webform_text_format' => 0,
        ),
        'allowed_formats_toggle' => 1,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'plain_text' => array(
              'weight' => 10,
            ),
            'uoe_code_format' => array(
              'weight' => 0,
            ),
            'uoe_custom_html_format' => array(
              'weight' => 0,
            ),
            'uoe_feeds_format' => array(
              'weight' => 0,
            ),
            'uoe_footer_format' => array(
              'weight' => 0,
            ),
            'uoe_html_atom_pane_text_format' => array(
              'weight' => 0,
            ),
            'uoe_profile_format' => array(
              'weight' => 0,
            ),
            'uoe_proxy_code_format' => array(
              'weight' => 0,
            ),
            'uoe_proxy_format' => array(
              'weight' => 0,
            ),
            'uoe_proxy_report_format' => array(
              'weight' => 0,
            ),
            'uoe_static_pane_text_format' => array(
              'weight' => 0,
            ),
            'uoe_text_format' => array(
              'weight' => 0,
            ),
            'uoe_webform_text_format' => array(
              'weight' => 0,
            ),
          ),
        ),
      ),
      'linkit' => array(
        'enable' => 0,
        'insert_plugin' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 3,
      ),
      'type' => 'text_textarea',
      'weight' => 14,
    ),
  );

  // Exported field_instance: 'node-uoe_profile-field_uoe_contact_address_2'.
  $field_instances['node-uoe_profile-field_uoe_contact_address_2'] = array(
    'bundle' => 'uoe_profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Do not include a comma at the end of each line.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 30,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_node_atom_full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_node_atom_summary' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_overview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_overview_high' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_overview_medium' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_uoe_contact_address_2',
    'label' => 'Secondary Street Address',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'plain_text' => 'plain_text',
          'uoe_code_format' => 'uoe_code_format',
          'uoe_custom_html_format' => 'uoe_custom_html_format',
          'uoe_feeds_format' => 'uoe_feeds_format',
          'uoe_footer_format' => 'uoe_footer_format',
          'uoe_html_atom_pane_text_format' => 'uoe_html_atom_pane_text_format',
          'uoe_proxy_code_format' => 'uoe_proxy_code_format',
          'uoe_proxy_format' => 'uoe_proxy_format',
          'uoe_proxy_report_format' => 'uoe_proxy_report_format',
          'uoe_static_pane_text_format' => 'uoe_static_pane_text_format',
          'uoe_text_format' => 'uoe_text_format',
          'uoe_webform_text_format' => 'uoe_webform_text_format',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'plain_text' => array(
              'weight' => 10,
            ),
            'uoe_code_format' => array(
              'weight' => 0,
            ),
            'uoe_custom_html_format' => array(
              'weight' => 0,
            ),
            'uoe_feeds_format' => array(
              'weight' => 0,
            ),
            'uoe_footer_format' => array(
              'weight' => 0,
            ),
            'uoe_html_atom_pane_text_format' => array(
              'weight' => 0,
            ),
            'uoe_proxy_code_format' => array(
              'weight' => 0,
            ),
            'uoe_proxy_format' => array(
              'weight' => 0,
            ),
            'uoe_proxy_report_format' => array(
              'weight' => 0,
            ),
            'uoe_static_pane_text_format' => array(
              'weight' => 0,
            ),
            'uoe_text_format' => array(
              'weight' => 0,
            ),
            'uoe_webform_text_format' => array(
              'weight' => 0,
            ),
          ),
        ),
      ),
      'linkit' => array(
        'enable' => 0,
        'insert_plugin' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 3,
      ),
      'type' => 'text_textarea',
      'weight' => 15,
    ),
  );

  // Exported field_instance: 'node-uoe_profile-field_uoe_contact_awards'.
  $field_instances['node-uoe_profile-field_uoe_contact_awards'] = array(
    'bundle' => 'uoe_profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Use this field for qualifications and honours.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 13,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_node_atom_full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_node_atom_summary' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_overview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_overview_high' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_overview_medium' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_uoe_contact_awards',
    'label' => 'Awards',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'plain_text' => 'plain_text',
          'uoe_code_format' => 'uoe_code_format',
          'uoe_custom_html_format' => 0,
          'uoe_feeds_format' => 0,
          'uoe_footer_format' => 0,
          'uoe_html_atom_pane_text_format' => 0,
          'uoe_profile_format' => 0,
          'uoe_proxy_code_format' => 0,
          'uoe_proxy_format' => 0,
          'uoe_proxy_report_format' => 0,
          'uoe_static_pane_text_format' => 'uoe_static_pane_text_format',
          'uoe_text_format' => 'uoe_text_format',
          'uoe_webform_text_format' => 0,
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'plain_text' => array(
              'weight' => 10,
            ),
            'uoe_code_format' => array(
              'weight' => 0,
            ),
            'uoe_custom_html_format' => array(
              'weight' => 0,
            ),
            'uoe_feeds_format' => array(
              'weight' => 0,
            ),
            'uoe_footer_format' => array(
              'weight' => 0,
            ),
            'uoe_html_atom_pane_text_format' => array(
              'weight' => 0,
            ),
            'uoe_profile_format' => array(
              'weight' => 0,
            ),
            'uoe_proxy_code_format' => array(
              'weight' => 0,
            ),
            'uoe_proxy_format' => array(
              'weight' => 0,
            ),
            'uoe_proxy_report_format' => array(
              'weight' => 0,
            ),
            'uoe_static_pane_text_format' => array(
              'weight' => 0,
            ),
            'uoe_text_format' => array(
              'weight' => 0,
            ),
            'uoe_webform_text_format' => array(
              'weight' => 0,
            ),
          ),
        ),
      ),
      'linkit' => array(
        'enable' => 0,
        'insert_plugin' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-uoe_profile-field_uoe_contact_email'.
  $field_instances['node-uoe_profile-field_uoe_contact_email'] = array(
    'bundle' => 'uoe_profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'This should be an email address in the form: <a href="mailto:someone@ed.ac.uk">someone@ed.ac.uk</a>. The text added to this field will automatically generate a clickable link.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 20,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_node_atom_full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_node_atom_summary' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_overview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_overview_high' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_overview_medium' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_uoe_contact_email',
    'label' => 'Email',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'plain_text' => 'plain_text',
          'uoe_code_format' => 'uoe_code_format',
          'uoe_static_pane_text_format' => 'uoe_static_pane_text_format',
          'uoe_text_format' => 'uoe_text_format',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'plain_text' => array(
              'weight' => 10,
            ),
            'uoe_code_format' => array(
              'weight' => 0,
            ),
            'uoe_static_pane_text_format' => array(
              'weight' => 0,
            ),
            'uoe_text_format' => array(
              'weight' => 0,
            ),
          ),
        ),
      ),
      'context' => 'debug',
      'context_default' => 'sdl_editor_representation',
      'dnd_enabled' => 0,
      'linkit' => array(
        'enable' => 0,
        'insert_plugin' => '',
      ),
      'mee_enabled' => 0,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 36,
    ),
  );

  // Exported field_instance: 'node-uoe_profile-field_uoe_contact_family_name'.
  $field_instances['node-uoe_profile-field_uoe_contact_family_name'] = array(
    'bundle' => 'uoe_profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Your second name or surname.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 10,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_node_atom_full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_node_atom_summary' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_overview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_overview_high' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_overview_medium' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_uoe_contact_family_name',
    'label' => 'Family name',
    'required' => 1,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'plain_text' => 'plain_text',
          'uoe_code_format' => 'uoe_code_format',
          'uoe_custom_html_format' => 0,
          'uoe_feeds_format' => 0,
          'uoe_footer_format' => 0,
          'uoe_html_atom_pane_text_format' => 0,
          'uoe_profile_format' => 0,
          'uoe_proxy_code_format' => 0,
          'uoe_proxy_format' => 0,
          'uoe_proxy_report_format' => 0,
          'uoe_static_pane_text_format' => 'uoe_static_pane_text_format',
          'uoe_text_format' => 'uoe_text_format',
          'uoe_webform_text_format' => 0,
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'plain_text' => array(
              'weight' => 10,
            ),
            'uoe_code_format' => array(
              'weight' => 0,
            ),
            'uoe_custom_html_format' => array(
              'weight' => 0,
            ),
            'uoe_feeds_format' => array(
              'weight' => 0,
            ),
            'uoe_footer_format' => array(
              'weight' => 0,
            ),
            'uoe_html_atom_pane_text_format' => array(
              'weight' => 0,
            ),
            'uoe_profile_format' => array(
              'weight' => 0,
            ),
            'uoe_proxy_code_format' => array(
              'weight' => 0,
            ),
            'uoe_proxy_format' => array(
              'weight' => 0,
            ),
            'uoe_proxy_report_format' => array(
              'weight' => 0,
            ),
            'uoe_static_pane_text_format' => array(
              'weight' => 0,
            ),
            'uoe_text_format' => array(
              'weight' => 0,
            ),
            'uoe_webform_text_format' => array(
              'weight' => 0,
            ),
          ),
        ),
      ),
      'linkit' => array(
        'enable' => 0,
        'insert_plugin' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-uoe_profile-field_uoe_contact_fax'.
  $field_instances['node-uoe_profile-field_uoe_contact_fax'] = array(
    'bundle' => 'uoe_profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'If your audiences include people overseas, include the international dialling code: +44 (0)131',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 16,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_node_atom_full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_node_atom_summary' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_overview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_overview_high' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_overview_medium' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_uoe_contact_fax',
    'label' => 'Fax',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'plain_text' => 'plain_text',
          'uoe_code_format' => 'uoe_code_format',
          'uoe_static_pane_text_format' => 'uoe_static_pane_text_format',
          'uoe_text_format' => 'uoe_text_format',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'plain_text' => array(
              'weight' => 10,
            ),
            'uoe_code_format' => array(
              'weight' => 0,
            ),
            'uoe_static_pane_text_format' => array(
              'weight' => 0,
            ),
            'uoe_text_format' => array(
              'weight' => 0,
            ),
          ),
        ),
      ),
      'context' => 'debug',
      'context_default' => 'sdl_editor_representation',
      'dnd_enabled' => 0,
      'linkit' => array(
        'enable' => 0,
        'insert_plugin' => '',
      ),
      'mee_enabled' => 0,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 37,
    ),
  );

  // Exported field_instance: 'node-uoe_profile-field_uoe_contact_given_name'.
  $field_instances['node-uoe_profile-field_uoe_contact_given_name'] = array(
    'bundle' => 'uoe_profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'The name by which you are normally addressed. For example, Jim and not James, if this is what you prefer. Initials are an alternative, but generally appear less friendly and approachable.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 8,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_node_atom_full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_node_atom_summary' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_overview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_overview_high' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_overview_medium' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_uoe_contact_given_name',
    'label' => 'First name',
    'required' => 1,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'plain_text' => 'plain_text',
          'uoe_code_format' => 'uoe_code_format',
          'uoe_custom_html_format' => 0,
          'uoe_feeds_format' => 0,
          'uoe_footer_format' => 0,
          'uoe_html_atom_pane_text_format' => 0,
          'uoe_proxy_code_format' => 0,
          'uoe_proxy_format' => 0,
          'uoe_proxy_report_format' => 0,
          'uoe_static_pane_text_format' => 'uoe_static_pane_text_format',
          'uoe_text_format' => 'uoe_text_format',
          'uoe_webform_text_format' => 0,
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'plain_text' => array(
              'weight' => 10,
            ),
            'uoe_code_format' => array(
              'weight' => 0,
            ),
            'uoe_custom_html_format' => array(
              'weight' => 0,
            ),
            'uoe_feeds_format' => array(
              'weight' => 0,
            ),
            'uoe_footer_format' => array(
              'weight' => 0,
            ),
            'uoe_html_atom_pane_text_format' => array(
              'weight' => 0,
            ),
            'uoe_proxy_code_format' => array(
              'weight' => 0,
            ),
            'uoe_proxy_format' => array(
              'weight' => 0,
            ),
            'uoe_proxy_report_format' => array(
              'weight' => 0,
            ),
            'uoe_static_pane_text_format' => array(
              'weight' => 0,
            ),
            'uoe_text_format' => array(
              'weight' => 0,
            ),
            'uoe_webform_text_format' => array(
              'weight' => 0,
            ),
          ),
        ),
      ),
      'linkit' => array(
        'enable' => 0,
        'insert_plugin' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-uoe_profile-field_uoe_contact_locality'.
  $field_instances['node-uoe_profile-field_uoe_contact_locality'] = array(
    'bundle' => 'uoe_profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'The town or city part of the address. Do not include punctuation at the end.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 24,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_node_atom_full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_node_atom_summary' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_overview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_overview_high' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_overview_medium' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_uoe_contact_locality',
    'label' => 'Locality',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'plain_text' => 'plain_text',
          'uoe_code_format' => 'uoe_code_format',
          'uoe_static_pane_text_format' => 'uoe_static_pane_text_format',
          'uoe_text_format' => 'uoe_text_format',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'plain_text' => array(
              'weight' => 10,
            ),
            'uoe_code_format' => array(
              'weight' => 0,
            ),
            'uoe_static_pane_text_format' => array(
              'weight' => 0,
            ),
            'uoe_text_format' => array(
              'weight' => 0,
            ),
          ),
        ),
      ),
      'context' => 'debug',
      'context_default' => 'sdl_editor_representation',
      'dnd_enabled' => 0,
      'linkit' => array(
        'enable' => 0,
        'insert_plugin' => '',
      ),
      'mee_enabled' => 0,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 15,
    ),
  );

  // Exported field_instance: 'node-uoe_profile-field_uoe_contact_locality_2'.
  $field_instances['node-uoe_profile-field_uoe_contact_locality_2'] = array(
    'bundle' => 'uoe_profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'The town or city part of the address. Do not include punctuation at the end.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 31,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_node_atom_full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_node_atom_summary' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_overview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_overview_high' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_overview_medium' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_uoe_contact_locality_2',
    'label' => 'Secondary locality',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'plain_text' => 'plain_text',
          'uoe_code_format' => 'uoe_code_format',
          'uoe_custom_html_format' => 'uoe_custom_html_format',
          'uoe_feeds_format' => 'uoe_feeds_format',
          'uoe_footer_format' => 'uoe_footer_format',
          'uoe_html_atom_pane_text_format' => 'uoe_html_atom_pane_text_format',
          'uoe_proxy_code_format' => 'uoe_proxy_code_format',
          'uoe_proxy_format' => 'uoe_proxy_format',
          'uoe_proxy_report_format' => 'uoe_proxy_report_format',
          'uoe_static_pane_text_format' => 'uoe_static_pane_text_format',
          'uoe_text_format' => 'uoe_text_format',
          'uoe_webform_text_format' => 'uoe_webform_text_format',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'plain_text' => array(
              'weight' => 10,
            ),
            'uoe_code_format' => array(
              'weight' => 0,
            ),
            'uoe_custom_html_format' => array(
              'weight' => 0,
            ),
            'uoe_feeds_format' => array(
              'weight' => 0,
            ),
            'uoe_footer_format' => array(
              'weight' => 0,
            ),
            'uoe_html_atom_pane_text_format' => array(
              'weight' => 0,
            ),
            'uoe_proxy_code_format' => array(
              'weight' => 0,
            ),
            'uoe_proxy_format' => array(
              'weight' => 0,
            ),
            'uoe_proxy_report_format' => array(
              'weight' => 0,
            ),
            'uoe_static_pane_text_format' => array(
              'weight' => 0,
            ),
            'uoe_text_format' => array(
              'weight' => 0,
            ),
            'uoe_webform_text_format' => array(
              'weight' => 0,
            ),
          ),
        ),
      ),
      'linkit' => array(
        'enable' => 0,
        'insert_plugin' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 16,
    ),
  );

  // Exported field_instance: 'node-uoe_profile-field_uoe_contact_middle_name'.
  $field_instances['node-uoe_profile-field_uoe_contact_middle_name'] = array(
    'bundle' => 'uoe_profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Additional first names, or initials.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 9,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_node_atom_full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_node_atom_summary' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_overview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_overview_high' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_overview_medium' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_uoe_contact_middle_name',
    'label' => 'Additional name',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'plain_text' => 'plain_text',
          'uoe_code_format' => 'uoe_code_format',
          'uoe_static_pane_text_format' => 'uoe_static_pane_text_format',
          'uoe_text_format' => 'uoe_text_format',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'plain_text' => array(
              'weight' => 10,
            ),
            'uoe_code_format' => array(
              'weight' => 0,
            ),
            'uoe_static_pane_text_format' => array(
              'weight' => 0,
            ),
            'uoe_text_format' => array(
              'weight' => 0,
            ),
          ),
        ),
      ),
      'context' => 'debug',
      'context_default' => 'sdl_editor_representation',
      'dnd_enabled' => 0,
      'linkit' => array(
        'enable' => 0,
        'insert_plugin' => '',
      ),
      'mee_enabled' => 0,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-uoe_profile-field_uoe_contact_org_1'.
  $field_instances['node-uoe_profile-field_uoe_contact_org_1'] = array(
    'bundle' => 'uoe_profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Start with the most specific sub unit for Organisation 1. Use as many or as few Organisation fields as are necessary. It is not necessary to list \'The University of Edinburgh\'.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 15,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_node_atom_full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_node_atom_summary' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_overview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_overview_high' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_overview_medium' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_uoe_contact_org_1',
    'label' => 'Organisation 1',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'plain_text' => 'plain_text',
          'uoe_code_format' => 'uoe_code_format',
          'uoe_custom_html_format' => 0,
          'uoe_feeds_format' => 0,
          'uoe_footer_format' => 0,
          'uoe_html_atom_pane_text_format' => 0,
          'uoe_proxy_code_format' => 0,
          'uoe_proxy_format' => 0,
          'uoe_proxy_report_format' => 0,
          'uoe_static_pane_text_format' => 'uoe_static_pane_text_format',
          'uoe_text_format' => 'uoe_text_format',
          'uoe_webform_text_format' => 0,
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'plain_text' => array(
              'weight' => 10,
            ),
            'uoe_code_format' => array(
              'weight' => 0,
            ),
            'uoe_custom_html_format' => array(
              'weight' => 0,
            ),
            'uoe_feeds_format' => array(
              'weight' => 0,
            ),
            'uoe_footer_format' => array(
              'weight' => 0,
            ),
            'uoe_html_atom_pane_text_format' => array(
              'weight' => 0,
            ),
            'uoe_proxy_code_format' => array(
              'weight' => 0,
            ),
            'uoe_proxy_format' => array(
              'weight' => 0,
            ),
            'uoe_proxy_report_format' => array(
              'weight' => 0,
            ),
            'uoe_static_pane_text_format' => array(
              'weight' => 0,
            ),
            'uoe_text_format' => array(
              'weight' => 0,
            ),
            'uoe_webform_text_format' => array(
              'weight' => 0,
            ),
          ),
        ),
      ),
      'linkit' => array(
        'enable' => 0,
        'insert_plugin' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'node-uoe_profile-field_uoe_contact_org_2'.
  $field_instances['node-uoe_profile-field_uoe_contact_org_2'] = array(
    'bundle' => 'uoe_profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 16,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_node_atom_full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_node_atom_summary' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_overview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_overview_high' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_overview_medium' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_uoe_contact_org_2',
    'label' => 'Organisation 2',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'plain_text' => 'plain_text',
          'uoe_code_format' => 'uoe_code_format',
          'uoe_static_pane_text_format' => 'uoe_static_pane_text_format',
          'uoe_text_format' => 'uoe_text_format',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'plain_text' => array(
              'weight' => 10,
            ),
            'uoe_code_format' => array(
              'weight' => 0,
            ),
            'uoe_static_pane_text_format' => array(
              'weight' => 0,
            ),
            'uoe_text_format' => array(
              'weight' => 0,
            ),
          ),
        ),
      ),
      'context' => 'debug',
      'context_default' => 'sdl_editor_representation',
      'dnd_enabled' => 0,
      'linkit' => array(
        'enable' => 0,
        'insert_plugin' => '',
      ),
      'mee_enabled' => 0,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'node-uoe_profile-field_uoe_contact_org_3'.
  $field_instances['node-uoe_profile-field_uoe_contact_org_3'] = array(
    'bundle' => 'uoe_profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 17,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_node_atom_full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_node_atom_summary' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_overview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_overview_high' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_overview_medium' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_uoe_contact_org_3',
    'label' => 'Organisation 3',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'plain_text' => 'plain_text',
          'uoe_code_format' => 'uoe_code_format',
          'uoe_static_pane_text_format' => 'uoe_static_pane_text_format',
          'uoe_text_format' => 'uoe_text_format',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'plain_text' => array(
              'weight' => 10,
            ),
            'uoe_code_format' => array(
              'weight' => 0,
            ),
            'uoe_static_pane_text_format' => array(
              'weight' => 0,
            ),
            'uoe_text_format' => array(
              'weight' => 0,
            ),
          ),
        ),
      ),
      'context' => 'debug',
      'context_default' => 'sdl_editor_representation',
      'dnd_enabled' => 0,
      'linkit' => array(
        'enable' => 0,
        'insert_plugin' => '',
      ),
      'mee_enabled' => 0,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'node-uoe_profile-field_uoe_contact_point'.
  $field_instances['node-uoe_profile-field_uoe_contact_point'] = array(
    'bundle' => 'uoe_profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Use this field to select the type of extra details i.e. web, social media, mobile phone and additional work phone.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'uoe_contact_points',
        'settings' => array(),
        'type' => 'uoe_contact_point_list_display',
        'weight' => 28,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_node_atom_full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_node_atom_summary' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_overview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_overview_high' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_overview_medium' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_uoe_contact_point',
    'label' => 'Extra details',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'uoe_contact_points',
      'settings' => array(),
      'type' => 'uoe_contact_point_widget',
      'weight' => 41,
    ),
  );

  // Exported field_instance: 'node-uoe_profile-field_uoe_contact_postcode'.
  $field_instances['node-uoe_profile-field_uoe_contact_postcode'] = array(
    'bundle' => 'uoe_profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Separate the two parts of the postcode with a space.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 25,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_node_atom_full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_node_atom_summary' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_overview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_overview_high' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_overview_medium' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_uoe_contact_postcode',
    'label' => 'Postcode',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'plain_text' => 'plain_text',
          'uoe_code_format' => 'uoe_code_format',
          'uoe_static_pane_text_format' => 'uoe_static_pane_text_format',
          'uoe_text_format' => 'uoe_text_format',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'plain_text' => array(
              'weight' => 10,
            ),
            'uoe_code_format' => array(
              'weight' => 0,
            ),
            'uoe_static_pane_text_format' => array(
              'weight' => 0,
            ),
            'uoe_text_format' => array(
              'weight' => 0,
            ),
          ),
        ),
      ),
      'context' => 'debug',
      'context_default' => 'sdl_editor_representation',
      'dnd_enabled' => 0,
      'linkit' => array(
        'enable' => 0,
        'insert_plugin' => '',
      ),
      'mee_enabled' => 0,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 16,
    ),
  );

  // Exported field_instance: 'node-uoe_profile-field_uoe_contact_postcode_2'.
  $field_instances['node-uoe_profile-field_uoe_contact_postcode_2'] = array(
    'bundle' => 'uoe_profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Separate the two parts of the postcode with a space.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 32,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_node_atom_full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_node_atom_summary' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_overview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_overview_high' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_overview_medium' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_uoe_contact_postcode_2',
    'label' => 'Secondary postcode',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'plain_text' => 'plain_text',
          'uoe_code_format' => 'uoe_code_format',
          'uoe_custom_html_format' => 'uoe_custom_html_format',
          'uoe_feeds_format' => 'uoe_feeds_format',
          'uoe_footer_format' => 'uoe_footer_format',
          'uoe_html_atom_pane_text_format' => 'uoe_html_atom_pane_text_format',
          'uoe_proxy_code_format' => 'uoe_proxy_code_format',
          'uoe_proxy_format' => 'uoe_proxy_format',
          'uoe_proxy_report_format' => 'uoe_proxy_report_format',
          'uoe_static_pane_text_format' => 'uoe_static_pane_text_format',
          'uoe_text_format' => 'uoe_text_format',
          'uoe_webform_text_format' => 'uoe_webform_text_format',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'plain_text' => array(
              'weight' => 10,
            ),
            'uoe_code_format' => array(
              'weight' => 0,
            ),
            'uoe_custom_html_format' => array(
              'weight' => 0,
            ),
            'uoe_feeds_format' => array(
              'weight' => 0,
            ),
            'uoe_footer_format' => array(
              'weight' => 0,
            ),
            'uoe_html_atom_pane_text_format' => array(
              'weight' => 0,
            ),
            'uoe_proxy_code_format' => array(
              'weight' => 0,
            ),
            'uoe_proxy_format' => array(
              'weight' => 0,
            ),
            'uoe_proxy_report_format' => array(
              'weight' => 0,
            ),
            'uoe_static_pane_text_format' => array(
              'weight' => 0,
            ),
            'uoe_text_format' => array(
              'weight' => 0,
            ),
            'uoe_webform_text_format' => array(
              'weight' => 0,
            ),
          ),
        ),
      ),
      'linkit' => array(
        'enable' => 0,
        'insert_plugin' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 17,
    ),
  );

  // Exported field_instance: 'node-uoe_profile-field_uoe_contact_prefix'.
  $field_instances['node-uoe_profile-field_uoe_contact_prefix'] = array(
    'bundle' => 'uoe_profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Use common abbreviations and contractions (Mr, Ms, Dr). Don\'t use full stops. For example: Dr not Dr. Leaving it out will make contact information appear less formal and more approachable.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 11,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_node_atom_full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_node_atom_summary' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_overview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_overview_high' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_overview_medium' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_uoe_contact_prefix',
    'label' => 'Personal title',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'plain_text' => 'plain_text',
          'uoe_code_format' => 'uoe_code_format',
          'uoe_custom_html_format' => 0,
          'uoe_feeds_format' => 0,
          'uoe_footer_format' => 0,
          'uoe_html_atom_pane_text_format' => 0,
          'uoe_profile_format' => 0,
          'uoe_proxy_code_format' => 0,
          'uoe_proxy_format' => 0,
          'uoe_proxy_report_format' => 0,
          'uoe_static_pane_text_format' => 'uoe_static_pane_text_format',
          'uoe_text_format' => 'uoe_text_format',
          'uoe_webform_text_format' => 0,
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'plain_text' => array(
              'weight' => 10,
            ),
            'uoe_code_format' => array(
              'weight' => 0,
            ),
            'uoe_custom_html_format' => array(
              'weight' => 0,
            ),
            'uoe_feeds_format' => array(
              'weight' => 0,
            ),
            'uoe_footer_format' => array(
              'weight' => 0,
            ),
            'uoe_html_atom_pane_text_format' => array(
              'weight' => 0,
            ),
            'uoe_profile_format' => array(
              'weight' => 0,
            ),
            'uoe_proxy_code_format' => array(
              'weight' => 0,
            ),
            'uoe_proxy_format' => array(
              'weight' => 0,
            ),
            'uoe_proxy_report_format' => array(
              'weight' => 0,
            ),
            'uoe_static_pane_text_format' => array(
              'weight' => 0,
            ),
            'uoe_text_format' => array(
              'weight' => 0,
            ),
            'uoe_webform_text_format' => array(
              'weight' => 0,
            ),
          ),
        ),
      ),
      'linkit' => array(
        'enable' => 0,
        'insert_plugin' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-uoe_profile-field_uoe_contact_role'.
  $field_instances['node-uoe_profile-field_uoe_contact_role'] = array(
    'bundle' => 'uoe_profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'The role sets the context in which you might be contacted. You may set multiple roles if this is appropriate to you.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 12,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_node_atom_full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_node_atom_summary' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_overview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_overview_high' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_overview_medium' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_uoe_contact_role',
    'label' => 'Role',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'plain_text' => 'plain_text',
          'uoe_code_format' => 'uoe_code_format',
          'uoe_custom_html_format' => 0,
          'uoe_feeds_format' => 0,
          'uoe_footer_format' => 0,
          'uoe_html_atom_pane_text_format' => 0,
          'uoe_profile_format' => 0,
          'uoe_proxy_code_format' => 0,
          'uoe_proxy_format' => 0,
          'uoe_proxy_report_format' => 0,
          'uoe_static_pane_text_format' => 'uoe_static_pane_text_format',
          'uoe_text_format' => 'uoe_text_format',
          'uoe_webform_text_format' => 0,
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'plain_text' => array(
              'weight' => 10,
            ),
            'uoe_code_format' => array(
              'weight' => 0,
            ),
            'uoe_custom_html_format' => array(
              'weight' => 0,
            ),
            'uoe_feeds_format' => array(
              'weight' => 0,
            ),
            'uoe_footer_format' => array(
              'weight' => 0,
            ),
            'uoe_html_atom_pane_text_format' => array(
              'weight' => 0,
            ),
            'uoe_profile_format' => array(
              'weight' => 0,
            ),
            'uoe_proxy_code_format' => array(
              'weight' => 0,
            ),
            'uoe_proxy_format' => array(
              'weight' => 0,
            ),
            'uoe_proxy_report_format' => array(
              'weight' => 0,
            ),
            'uoe_static_pane_text_format' => array(
              'weight' => 0,
            ),
            'uoe_text_format' => array(
              'weight' => 0,
            ),
            'uoe_webform_text_format' => array(
              'weight' => 0,
            ),
          ),
        ),
      ),
      'linkit' => array(
        'enable' => 0,
        'insert_plugin' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-uoe_profile-field_uoe_contact_times'.
  $field_instances['node-uoe_profile-field_uoe_contact_times'] = array(
    'bundle' => 'uoe_profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Use this space to outline when you are available (contact times).',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 26,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_node_atom_full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_node_atom_summary' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_overview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_overview_high' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_overview_medium' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_uoe_contact_times',
    'label' => 'Availability',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'plain_text' => 'plain_text',
          'uoe_code_format' => 0,
          'uoe_custom_html_format' => 0,
          'uoe_feeds_format' => 0,
          'uoe_footer_format' => 0,
          'uoe_html_atom_pane_text_format' => 0,
          'uoe_profile_format' => 0,
          'uoe_proxy_code_format' => 0,
          'uoe_proxy_format' => 0,
          'uoe_proxy_report_format' => 0,
          'uoe_static_pane_text_format' => 0,
          'uoe_text_format' => 0,
          'uoe_webform_text_format' => 0,
        ),
        'allowed_formats_toggle' => 1,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'plain_text' => array(
              'weight' => 10,
            ),
            'uoe_code_format' => array(
              'weight' => 0,
            ),
            'uoe_custom_html_format' => array(
              'weight' => 0,
            ),
            'uoe_feeds_format' => array(
              'weight' => 0,
            ),
            'uoe_footer_format' => array(
              'weight' => 0,
            ),
            'uoe_html_atom_pane_text_format' => array(
              'weight' => 0,
            ),
            'uoe_profile_format' => array(
              'weight' => 0,
            ),
            'uoe_proxy_code_format' => array(
              'weight' => 0,
            ),
            'uoe_proxy_format' => array(
              'weight' => 0,
            ),
            'uoe_proxy_report_format' => array(
              'weight' => 0,
            ),
            'uoe_static_pane_text_format' => array(
              'weight' => 0,
            ),
            'uoe_text_format' => array(
              'weight' => 0,
            ),
            'uoe_webform_text_format' => array(
              'weight' => 0,
            ),
          ),
        ),
      ),
      'linkit' => array(
        'enable' => 0,
        'insert_plugin' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 38,
    ),
  );

  // Exported field_instance: 'node-uoe_profile-field_uoe_contact_work_phone'.
  $field_instances['node-uoe_profile-field_uoe_contact_work_phone'] = array(
    'bundle' => 'uoe_profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'This should be a University phone number. If your preferred number is a mobile, leave this field blank and include your mobile number using the \'Add extra details\' feature below. Include sufficient detail for your target audiences. Unless you\'re sure that the contact details are exclusively for internal audiences, you should include the standard telephone dialling (STD) code. If your audiences include people overseas, include the international dialling code: +44 (0)131. Prioritise information needed by external audiences over internal audiences. (University staff typically know how to shorten a phone number to create the internal extension version).',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 19,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_node_atom_full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_node_atom_summary' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_overview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_overview_high' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_overview_medium' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_uoe_contact_work_phone',
    'label' => 'Work phone',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'plain_text' => 'plain_text',
          'uoe_code_format' => 'uoe_code_format',
          'uoe_custom_html_format' => 0,
          'uoe_feeds_format' => 0,
          'uoe_footer_format' => 0,
          'uoe_html_atom_pane_text_format' => 0,
          'uoe_profile_format' => 0,
          'uoe_proxy_code_format' => 0,
          'uoe_proxy_format' => 0,
          'uoe_proxy_report_format' => 0,
          'uoe_static_pane_text_format' => 'uoe_static_pane_text_format',
          'uoe_text_format' => 'uoe_text_format',
          'uoe_webform_text_format' => 0,
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'plain_text' => array(
              'weight' => 10,
            ),
            'uoe_code_format' => array(
              'weight' => 0,
            ),
            'uoe_custom_html_format' => array(
              'weight' => 0,
            ),
            'uoe_feeds_format' => array(
              'weight' => 0,
            ),
            'uoe_footer_format' => array(
              'weight' => 0,
            ),
            'uoe_html_atom_pane_text_format' => array(
              'weight' => 0,
            ),
            'uoe_profile_format' => array(
              'weight' => 0,
            ),
            'uoe_proxy_code_format' => array(
              'weight' => 0,
            ),
            'uoe_proxy_format' => array(
              'weight' => 0,
            ),
            'uoe_proxy_report_format' => array(
              'weight' => 0,
            ),
            'uoe_static_pane_text_format' => array(
              'weight' => 0,
            ),
            'uoe_text_format' => array(
              'weight' => 0,
            ),
            'uoe_webform_text_format' => array(
              'weight' => 0,
            ),
          ),
        ),
      ),
      'linkit' => array(
        'enable' => 0,
        'insert_plugin' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 35,
    ),
  );

  // Exported field_instance: 'node-uoe_profile-field_uoe_current_grants'.
  $field_instances['node-uoe_profile-field_uoe_current_grants'] = array(
    'bundle' => 'uoe_profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 58,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_node_atom_full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_node_atom_summary' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_overview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_overview_high' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_overview_medium' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_uoe_current_grants',
    'label' => 'Current grants held',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'plain_text' => 'plain_text',
          'uoe_code_format' => 'uoe_code_format',
          'uoe_custom_html_format' => 'uoe_custom_html_format',
          'uoe_feeds_format' => 'uoe_feeds_format',
          'uoe_footer_format' => 'uoe_footer_format',
          'uoe_html_atom_pane_text_format' => 'uoe_html_atom_pane_text_format',
          'uoe_profile_format' => 'uoe_profile_format',
          'uoe_proxy_code_format' => 'uoe_proxy_code_format',
          'uoe_proxy_format' => 'uoe_proxy_format',
          'uoe_proxy_report_format' => 'uoe_proxy_report_format',
          'uoe_static_pane_text_format' => 'uoe_static_pane_text_format',
          'uoe_text_format' => 'uoe_text_format',
          'uoe_webform_text_format' => 'uoe_webform_text_format',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'plain_text' => array(
              'weight' => 10,
            ),
            'uoe_code_format' => array(
              'weight' => 0,
            ),
            'uoe_custom_html_format' => array(
              'weight' => 0,
            ),
            'uoe_feeds_format' => array(
              'weight' => 0,
            ),
            'uoe_footer_format' => array(
              'weight' => 0,
            ),
            'uoe_html_atom_pane_text_format' => array(
              'weight' => 0,
            ),
            'uoe_profile_format' => array(
              'weight' => 0,
            ),
            'uoe_proxy_code_format' => array(
              'weight' => 0,
            ),
            'uoe_proxy_format' => array(
              'weight' => 0,
            ),
            'uoe_proxy_report_format' => array(
              'weight' => 0,
            ),
            'uoe_static_pane_text_format' => array(
              'weight' => 0,
            ),
            'uoe_text_format' => array(
              'weight' => 0,
            ),
            'uoe_webform_text_format' => array(
              'weight' => 0,
            ),
          ),
        ),
      ),
      'linkit' => array(
        'enable' => 0,
        'insert_plugin' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 21,
    ),
  );

  // Exported field_instance: 'node-uoe_profile-field_uoe_current_interests'.
  $field_instances['node-uoe_profile-field_uoe_current_interests'] = array(
    'bundle' => 'uoe_profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 39,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_node_atom_full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_node_atom_summary' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_overview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_overview_high' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_overview_medium' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_uoe_current_interests',
    'label' => 'Current research interests',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'plain_text' => 0,
          'uoe_code_format' => 0,
          'uoe_custom_html_format' => 0,
          'uoe_feeds_format' => 0,
          'uoe_footer_format' => 0,
          'uoe_html_atom_pane_text_format' => 0,
          'uoe_proxy_code_format' => 0,
          'uoe_proxy_format' => 0,
          'uoe_proxy_report_format' => 0,
          'uoe_static_pane_text_format' => 0,
          'uoe_text_format' => 0,
          'uoe_webform_text_format' => 0,
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'plain_text' => array(
              'weight' => 10,
            ),
            'uoe_code_format' => array(
              'weight' => 0,
            ),
            'uoe_custom_html_format' => array(
              'weight' => 0,
            ),
            'uoe_feeds_format' => array(
              'weight' => 0,
            ),
            'uoe_footer_format' => array(
              'weight' => 0,
            ),
            'uoe_html_atom_pane_text_format' => array(
              'weight' => 0,
            ),
            'uoe_proxy_code_format' => array(
              'weight' => 0,
            ),
            'uoe_proxy_format' => array(
              'weight' => 0,
            ),
            'uoe_proxy_report_format' => array(
              'weight' => 0,
            ),
            'uoe_static_pane_text_format' => array(
              'weight' => 0,
            ),
            'uoe_text_format' => array(
              'weight' => 0,
            ),
            'uoe_webform_text_format' => array(
              'weight' => 0,
            ),
          ),
        ),
      ),
      'linkit' => array(
        'enable' => 0,
        'insert_plugin' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 14,
    ),
  );

  // Exported field_instance: 'node-uoe_profile-field_uoe_current_supervised'.
  $field_instances['node-uoe_profile-field_uoe_current_supervised'] = array(
    'bundle' => 'uoe_profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 49,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_node_atom_full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_node_atom_summary' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_overview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_overview_high' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_overview_medium' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_uoe_current_supervised',
    'label' => 'Students supervised - current',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'plain_text' => 0,
          'uoe_code_format' => 0,
          'uoe_custom_html_format' => 0,
          'uoe_feeds_format' => 0,
          'uoe_footer_format' => 0,
          'uoe_html_atom_pane_text_format' => 0,
          'uoe_profile_format' => 'uoe_profile_format',
          'uoe_proxy_code_format' => 0,
          'uoe_proxy_format' => 0,
          'uoe_proxy_report_format' => 0,
          'uoe_static_pane_text_format' => 0,
          'uoe_text_format' => 0,
          'uoe_webform_text_format' => 0,
        ),
        'allowed_formats_toggle' => 1,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'plain_text' => array(
              'weight' => 10,
            ),
            'uoe_code_format' => array(
              'weight' => 0,
            ),
            'uoe_custom_html_format' => array(
              'weight' => 0,
            ),
            'uoe_feeds_format' => array(
              'weight' => 0,
            ),
            'uoe_footer_format' => array(
              'weight' => 0,
            ),
            'uoe_html_atom_pane_text_format' => array(
              'weight' => 0,
            ),
            'uoe_profile_format' => array(
              'weight' => 0,
            ),
            'uoe_proxy_code_format' => array(
              'weight' => 0,
            ),
            'uoe_proxy_format' => array(
              'weight' => 0,
            ),
            'uoe_proxy_report_format' => array(
              'weight' => 0,
            ),
            'uoe_static_pane_text_format' => array(
              'weight' => 0,
            ),
            'uoe_text_format' => array(
              'weight' => 0,
            ),
            'uoe_webform_text_format' => array(
              'weight' => 0,
            ),
          ),
        ),
      ),
      'linkit' => array(
        'enable' => 0,
        'insert_plugin' => '',
      ),
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 25,
    ),
  );

  // Exported field_instance: 'node-uoe_profile-field_uoe_cv'.
  $field_instances['node-uoe_profile-field_uoe_cv'] = array(
    'bundle' => 'uoe_profile',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => 34,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_node_atom_full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_node_atom_summary' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_overview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_overview_high' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_overview_medium' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_uoe_cv',
    'label' => 'CV',
    'required' => 0,
    'settings' => array(
      'description_field' => 0,
      'file_directory' => '',
      'file_extensions' => 'pdf',
      'filefield_paths' => array(
        'active_updating' => 0,
        'file_name' => array(
          'options' => array(
            'pathauto' => 0,
            'slashes' => 0,
            'transliterate' => 0,
          ),
          'value' => '[node:nid].[file:ffp-extension-original]',
        ),
        'file_path' => array(
          'options' => array(
            'pathauto' => 0,
            'slashes' => 0,
            'transliterate' => 0,
          ),
          'value' => 'profile/cv',
        ),
        'redirect' => 0,
        'retroactive_update' => 0,
      ),
      'filefield_paths_enabled' => 1,
      'max_filesize' => '5 MB',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'file',
      'settings' => array(
        'filefield_sources' => array(
          'filefield_sources' => array(
            'attach' => 0,
            'clipboard' => 0,
            'plupload' => 0,
            'reference' => 0,
            'remote' => 0,
            'upload' => 'upload',
          ),
          'source_attach' => array(
            'absolute' => 0,
            'attach_mode' => 'move',
            'path' => 'file_attach',
          ),
          'source_imce' => array(
            'imce_mode' => 0,
          ),
          'source_reference' => array(
            'autocomplete' => 0,
            'search_all_fields' => 0,
          ),
        ),
        'progress_indicator' => 'throbber',
      ),
      'type' => 'file_generic',
      'weight' => 15,
    ),
  );

  // Exported field_instance: 'node-uoe_profile-field_uoe_group_content_1'.
  $field_instances['node-uoe_profile-field_uoe_group_content_1'] = array(
    'bundle' => 'uoe_profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 52,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_node_atom_full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_node_atom_summary' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_overview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_overview_high' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_overview_medium' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_uoe_group_content_1',
    'label' => 'Category 1 content',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'plain_text' => 0,
          'uoe_code_format' => 0,
          'uoe_custom_html_format' => 0,
          'uoe_feeds_format' => 0,
          'uoe_footer_format' => 0,
          'uoe_html_atom_pane_text_format' => 0,
          'uoe_profile_format' => 'uoe_profile_format',
          'uoe_proxy_code_format' => 0,
          'uoe_proxy_format' => 0,
          'uoe_proxy_report_format' => 0,
          'uoe_static_pane_text_format' => 0,
          'uoe_text_format' => 0,
          'uoe_webform_text_format' => 0,
        ),
        'allowed_formats_toggle' => 1,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'plain_text' => array(
              'weight' => 10,
            ),
            'uoe_code_format' => array(
              'weight' => 0,
            ),
            'uoe_custom_html_format' => array(
              'weight' => 0,
            ),
            'uoe_feeds_format' => array(
              'weight' => 0,
            ),
            'uoe_footer_format' => array(
              'weight' => 0,
            ),
            'uoe_html_atom_pane_text_format' => array(
              'weight' => 0,
            ),
            'uoe_profile_format' => array(
              'weight' => 0,
            ),
            'uoe_proxy_code_format' => array(
              'weight' => 0,
            ),
            'uoe_proxy_format' => array(
              'weight' => 0,
            ),
            'uoe_proxy_report_format' => array(
              'weight' => 0,
            ),
            'uoe_static_pane_text_format' => array(
              'weight' => 0,
            ),
            'uoe_text_format' => array(
              'weight' => 0,
            ),
            'uoe_webform_text_format' => array(
              'weight' => 0,
            ),
          ),
        ),
      ),
      'linkit' => array(
        'enable' => 0,
        'insert_plugin' => '',
      ),
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 28,
    ),
  );

  // Exported field_instance: 'node-uoe_profile-field_uoe_group_content_2'.
  $field_instances['node-uoe_profile-field_uoe_group_content_2'] = array(
    'bundle' => 'uoe_profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 54,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_node_atom_full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_node_atom_summary' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_overview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_overview_high' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_overview_medium' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_uoe_group_content_2',
    'label' => 'Category 2 content',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'plain_text' => 0,
          'uoe_code_format' => 0,
          'uoe_custom_html_format' => 0,
          'uoe_feeds_format' => 0,
          'uoe_footer_format' => 0,
          'uoe_html_atom_pane_text_format' => 0,
          'uoe_profile_format' => 'uoe_profile_format',
          'uoe_proxy_code_format' => 0,
          'uoe_proxy_format' => 0,
          'uoe_proxy_report_format' => 0,
          'uoe_static_pane_text_format' => 0,
          'uoe_text_format' => 0,
          'uoe_webform_text_format' => 0,
        ),
        'allowed_formats_toggle' => 1,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'plain_text' => array(
              'weight' => 10,
            ),
            'uoe_code_format' => array(
              'weight' => 0,
            ),
            'uoe_custom_html_format' => array(
              'weight' => 0,
            ),
            'uoe_feeds_format' => array(
              'weight' => 0,
            ),
            'uoe_footer_format' => array(
              'weight' => 0,
            ),
            'uoe_html_atom_pane_text_format' => array(
              'weight' => 0,
            ),
            'uoe_profile_format' => array(
              'weight' => 0,
            ),
            'uoe_proxy_code_format' => array(
              'weight' => 0,
            ),
            'uoe_proxy_format' => array(
              'weight' => 0,
            ),
            'uoe_proxy_report_format' => array(
              'weight' => 0,
            ),
            'uoe_static_pane_text_format' => array(
              'weight' => 0,
            ),
            'uoe_text_format' => array(
              'weight' => 0,
            ),
            'uoe_webform_text_format' => array(
              'weight' => 0,
            ),
          ),
        ),
      ),
      'linkit' => array(
        'enable' => 0,
        'insert_plugin' => '',
      ),
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 30,
    ),
  );

  // Exported field_instance: 'node-uoe_profile-field_uoe_group_heading_1'.
  $field_instances['node-uoe_profile-field_uoe_group_heading_1'] = array(
    'bundle' => 'uoe_profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'You can create additional categories or headings to appear on your page here, if required.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 51,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_node_atom_full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_node_atom_summary' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_overview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_overview_high' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_overview_medium' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_uoe_group_heading_1',
    'label' => 'Category 1 heading',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'plain_text' => 'plain_text',
          'uoe_code_format' => 'uoe_code_format',
          'uoe_custom_html_format' => 'uoe_custom_html_format',
          'uoe_feeds_format' => 'uoe_feeds_format',
          'uoe_footer_format' => 'uoe_footer_format',
          'uoe_html_atom_pane_text_format' => 'uoe_html_atom_pane_text_format',
          'uoe_profile_format' => 0,
          'uoe_proxy_code_format' => 'uoe_proxy_code_format',
          'uoe_proxy_format' => 'uoe_proxy_format',
          'uoe_proxy_report_format' => 'uoe_proxy_report_format',
          'uoe_static_pane_text_format' => 'uoe_static_pane_text_format',
          'uoe_text_format' => 'uoe_text_format',
          'uoe_webform_text_format' => 'uoe_webform_text_format',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'plain_text' => array(
              'weight' => 10,
            ),
            'uoe_code_format' => array(
              'weight' => 0,
            ),
            'uoe_custom_html_format' => array(
              'weight' => 0,
            ),
            'uoe_feeds_format' => array(
              'weight' => 0,
            ),
            'uoe_footer_format' => array(
              'weight' => 0,
            ),
            'uoe_html_atom_pane_text_format' => array(
              'weight' => 0,
            ),
            'uoe_profile_format' => array(
              'weight' => 0,
            ),
            'uoe_proxy_code_format' => array(
              'weight' => 0,
            ),
            'uoe_proxy_format' => array(
              'weight' => 0,
            ),
            'uoe_proxy_report_format' => array(
              'weight' => 0,
            ),
            'uoe_static_pane_text_format' => array(
              'weight' => 0,
            ),
            'uoe_text_format' => array(
              'weight' => 0,
            ),
            'uoe_webform_text_format' => array(
              'weight' => 0,
            ),
          ),
        ),
      ),
      'linkit' => array(
        'enable' => 0,
        'insert_plugin' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 27,
    ),
  );

  // Exported field_instance: 'node-uoe_profile-field_uoe_group_heading_2'.
  $field_instances['node-uoe_profile-field_uoe_group_heading_2'] = array(
    'bundle' => 'uoe_profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'You can create additional categories or headings to appear on your page here, if required.
',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 53,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_node_atom_full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_node_atom_summary' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_overview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_overview_high' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_overview_medium' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_uoe_group_heading_2',
    'label' => 'Category 2 heading',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'plain_text' => 'plain_text',
          'uoe_code_format' => 'uoe_code_format',
          'uoe_custom_html_format' => 'uoe_custom_html_format',
          'uoe_feeds_format' => 'uoe_feeds_format',
          'uoe_footer_format' => 'uoe_footer_format',
          'uoe_html_atom_pane_text_format' => 'uoe_html_atom_pane_text_format',
          'uoe_profile_format' => 0,
          'uoe_proxy_code_format' => 'uoe_proxy_code_format',
          'uoe_proxy_format' => 'uoe_proxy_format',
          'uoe_proxy_report_format' => 'uoe_proxy_report_format',
          'uoe_static_pane_text_format' => 'uoe_static_pane_text_format',
          'uoe_text_format' => 'uoe_text_format',
          'uoe_webform_text_format' => 'uoe_webform_text_format',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'plain_text' => array(
              'weight' => 10,
            ),
            'uoe_code_format' => array(
              'weight' => 0,
            ),
            'uoe_custom_html_format' => array(
              'weight' => 0,
            ),
            'uoe_feeds_format' => array(
              'weight' => 0,
            ),
            'uoe_footer_format' => array(
              'weight' => 0,
            ),
            'uoe_html_atom_pane_text_format' => array(
              'weight' => 0,
            ),
            'uoe_profile_format' => array(
              'weight' => 0,
            ),
            'uoe_proxy_code_format' => array(
              'weight' => 0,
            ),
            'uoe_proxy_format' => array(
              'weight' => 0,
            ),
            'uoe_proxy_report_format' => array(
              'weight' => 0,
            ),
            'uoe_static_pane_text_format' => array(
              'weight' => 0,
            ),
            'uoe_text_format' => array(
              'weight' => 0,
            ),
            'uoe_webform_text_format' => array(
              'weight' => 0,
            ),
          ),
        ),
      ),
      'linkit' => array(
        'enable' => 0,
        'insert_plugin' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 29,
    ),
  );

  // Exported field_instance: 'node-uoe_profile-field_uoe_interests'.
  $field_instances['node-uoe_profile-field_uoe_interests'] = array(
    'bundle' => 'uoe_profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 37,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_node_atom_full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_node_atom_summary' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_overview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_overview_high' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_overview_medium' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_uoe_interests',
    'label' => 'Summary of research interests',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'plain_text' => 0,
          'uoe_code_format' => 0,
          'uoe_custom_html_format' => 0,
          'uoe_feeds_format' => 0,
          'uoe_footer_format' => 0,
          'uoe_html_atom_pane_text_format' => 0,
          'uoe_profile_format' => 'uoe_profile_format',
          'uoe_proxy_code_format' => 0,
          'uoe_proxy_format' => 0,
          'uoe_proxy_report_format' => 0,
          'uoe_static_pane_text_format' => 0,
          'uoe_text_format' => 0,
          'uoe_webform_text_format' => 0,
        ),
        'allowed_formats_toggle' => 1,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'plain_text' => array(
              'weight' => 10,
            ),
            'uoe_code_format' => array(
              'weight' => 0,
            ),
            'uoe_custom_html_format' => array(
              'weight' => 0,
            ),
            'uoe_feeds_format' => array(
              'weight' => 0,
            ),
            'uoe_footer_format' => array(
              'weight' => 0,
            ),
            'uoe_html_atom_pane_text_format' => array(
              'weight' => 0,
            ),
            'uoe_profile_format' => array(
              'weight' => 0,
            ),
            'uoe_proxy_code_format' => array(
              'weight' => 0,
            ),
            'uoe_proxy_format' => array(
              'weight' => 0,
            ),
            'uoe_proxy_report_format' => array(
              'weight' => 0,
            ),
            'uoe_static_pane_text_format' => array(
              'weight' => 0,
            ),
            'uoe_text_format' => array(
              'weight' => 0,
            ),
            'uoe_webform_text_format' => array(
              'weight' => 0,
            ),
          ),
        ),
      ),
      'linkit' => array(
        'enable' => 0,
        'insert_plugin' => '',
      ),
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 13,
    ),
  );

  // Exported field_instance: 'node-uoe_profile-field_uoe_knowledge'.
  $field_instances['node-uoe_profile-field_uoe_knowledge'] = array(
    'bundle' => 'uoe_profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 41,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_node_atom_full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_node_atom_summary' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_overview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_overview_high' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_overview_medium' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_uoe_knowledge',
    'label' => 'Knowledge exchange/impact',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'plain_text' => 0,
          'uoe_code_format' => 0,
          'uoe_custom_html_format' => 0,
          'uoe_feeds_format' => 0,
          'uoe_footer_format' => 0,
          'uoe_html_atom_pane_text_format' => 0,
          'uoe_profile_format' => 'uoe_profile_format',
          'uoe_proxy_code_format' => 0,
          'uoe_proxy_format' => 0,
          'uoe_proxy_report_format' => 0,
          'uoe_static_pane_text_format' => 0,
          'uoe_text_format' => 0,
          'uoe_webform_text_format' => 0,
        ),
        'allowed_formats_toggle' => 1,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'plain_text' => array(
              'weight' => 10,
            ),
            'uoe_code_format' => array(
              'weight' => 0,
            ),
            'uoe_custom_html_format' => array(
              'weight' => 0,
            ),
            'uoe_feeds_format' => array(
              'weight' => 0,
            ),
            'uoe_footer_format' => array(
              'weight' => 0,
            ),
            'uoe_html_atom_pane_text_format' => array(
              'weight' => 0,
            ),
            'uoe_profile_format' => array(
              'weight' => 0,
            ),
            'uoe_proxy_code_format' => array(
              'weight' => 0,
            ),
            'uoe_proxy_format' => array(
              'weight' => 0,
            ),
            'uoe_proxy_report_format' => array(
              'weight' => 0,
            ),
            'uoe_static_pane_text_format' => array(
              'weight' => 0,
            ),
            'uoe_text_format' => array(
              'weight' => 0,
            ),
            'uoe_webform_text_format' => array(
              'weight' => 0,
            ),
          ),
        ),
      ),
      'linkit' => array(
        'enable' => 0,
        'insert_plugin' => '',
      ),
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 16,
    ),
  );

  // Exported field_instance: 'node-uoe_profile-field_uoe_past_interests'.
  $field_instances['node-uoe_profile-field_uoe_past_interests'] = array(
    'bundle' => 'uoe_profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 40,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_node_atom_full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_node_atom_summary' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_overview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_overview_high' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_overview_medium' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_uoe_past_interests',
    'label' => 'Past research interests',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'plain_text' => 'plain_text',
          'uoe_code_format' => 'uoe_code_format',
          'uoe_custom_html_format' => 'uoe_custom_html_format',
          'uoe_feeds_format' => 'uoe_feeds_format',
          'uoe_footer_format' => 'uoe_footer_format',
          'uoe_html_atom_pane_text_format' => 'uoe_html_atom_pane_text_format',
          'uoe_proxy_code_format' => 'uoe_proxy_code_format',
          'uoe_proxy_format' => 'uoe_proxy_format',
          'uoe_proxy_report_format' => 'uoe_proxy_report_format',
          'uoe_static_pane_text_format' => 'uoe_static_pane_text_format',
          'uoe_text_format' => 'uoe_text_format',
          'uoe_webform_text_format' => 'uoe_webform_text_format',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'plain_text' => array(
              'weight' => 10,
            ),
            'uoe_code_format' => array(
              'weight' => 0,
            ),
            'uoe_custom_html_format' => array(
              'weight' => 0,
            ),
            'uoe_feeds_format' => array(
              'weight' => 0,
            ),
            'uoe_footer_format' => array(
              'weight' => 0,
            ),
            'uoe_html_atom_pane_text_format' => array(
              'weight' => 0,
            ),
            'uoe_proxy_code_format' => array(
              'weight' => 0,
            ),
            'uoe_proxy_format' => array(
              'weight' => 0,
            ),
            'uoe_proxy_report_format' => array(
              'weight' => 0,
            ),
            'uoe_static_pane_text_format' => array(
              'weight' => 0,
            ),
            'uoe_text_format' => array(
              'weight' => 0,
            ),
            'uoe_webform_text_format' => array(
              'weight' => 0,
            ),
          ),
        ),
      ),
      'linkit' => array(
        'enable' => 0,
        'insert_plugin' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 15,
    ),
  );

  // Exported field_instance: 'node-uoe_profile-field_uoe_pg_teaching'.
  $field_instances['node-uoe_profile-field_uoe_pg_teaching'] = array(
    'bundle' => 'uoe_profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 46,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_node_atom_full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_node_atom_summary' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_overview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_overview_high' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_overview_medium' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_uoe_pg_teaching',
    'label' => 'Postgraduate teaching responsibility',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'plain_text' => 0,
          'uoe_code_format' => 0,
          'uoe_custom_html_format' => 0,
          'uoe_feeds_format' => 0,
          'uoe_footer_format' => 0,
          'uoe_html_atom_pane_text_format' => 0,
          'uoe_profile_format' => 'uoe_profile_format',
          'uoe_proxy_code_format' => 0,
          'uoe_proxy_format' => 0,
          'uoe_proxy_report_format' => 0,
          'uoe_static_pane_text_format' => 0,
          'uoe_text_format' => 0,
          'uoe_webform_text_format' => 0,
        ),
        'allowed_formats_toggle' => 1,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'plain_text' => array(
              'weight' => 10,
            ),
            'uoe_code_format' => array(
              'weight' => 0,
            ),
            'uoe_custom_html_format' => array(
              'weight' => 0,
            ),
            'uoe_feeds_format' => array(
              'weight' => 0,
            ),
            'uoe_footer_format' => array(
              'weight' => 0,
            ),
            'uoe_html_atom_pane_text_format' => array(
              'weight' => 0,
            ),
            'uoe_profile_format' => array(
              'weight' => 0,
            ),
            'uoe_proxy_code_format' => array(
              'weight' => 0,
            ),
            'uoe_proxy_format' => array(
              'weight' => 0,
            ),
            'uoe_proxy_report_format' => array(
              'weight' => 0,
            ),
            'uoe_static_pane_text_format' => array(
              'weight' => 0,
            ),
            'uoe_text_format' => array(
              'weight' => 0,
            ),
            'uoe_webform_text_format' => array(
              'weight' => 0,
            ),
          ),
        ),
      ),
      'linkit' => array(
        'enable' => 0,
        'insert_plugin' => '',
      ),
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 22,
    ),
  );

  // Exported field_instance: 'node-uoe_profile-field_uoe_phd_enquiries'.
  $field_instances['node-uoe_profile-field_uoe_phd_enquiries'] = array(
    'bundle' => 'uoe_profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 47,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_node_atom_full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_node_atom_summary' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_overview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_overview_high' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_overview_medium' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_uoe_phd_enquiries',
    'label' => 'Open to enquiries about PhD supervision',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 23,
    ),
  );

  // Exported field_instance: 'node-uoe_profile-field_uoe_previous_grants'.
  $field_instances['node-uoe_profile-field_uoe_previous_grants'] = array(
    'bundle' => 'uoe_profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 59,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_node_atom_full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_node_atom_summary' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_overview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_overview_high' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_overview_medium' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_uoe_previous_grants',
    'label' => 'Previous grants held',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'plain_text' => 'plain_text',
          'uoe_code_format' => 'uoe_code_format',
          'uoe_custom_html_format' => 'uoe_custom_html_format',
          'uoe_feeds_format' => 'uoe_feeds_format',
          'uoe_footer_format' => 'uoe_footer_format',
          'uoe_html_atom_pane_text_format' => 'uoe_html_atom_pane_text_format',
          'uoe_profile_format' => 'uoe_profile_format',
          'uoe_proxy_code_format' => 'uoe_proxy_code_format',
          'uoe_proxy_format' => 'uoe_proxy_format',
          'uoe_proxy_report_format' => 'uoe_proxy_report_format',
          'uoe_static_pane_text_format' => 'uoe_static_pane_text_format',
          'uoe_text_format' => 'uoe_text_format',
          'uoe_webform_text_format' => 'uoe_webform_text_format',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'plain_text' => array(
              'weight' => 10,
            ),
            'uoe_code_format' => array(
              'weight' => 0,
            ),
            'uoe_custom_html_format' => array(
              'weight' => 0,
            ),
            'uoe_feeds_format' => array(
              'weight' => 0,
            ),
            'uoe_footer_format' => array(
              'weight' => 0,
            ),
            'uoe_html_atom_pane_text_format' => array(
              'weight' => 0,
            ),
            'uoe_profile_format' => array(
              'weight' => 0,
            ),
            'uoe_proxy_code_format' => array(
              'weight' => 0,
            ),
            'uoe_proxy_format' => array(
              'weight' => 0,
            ),
            'uoe_proxy_report_format' => array(
              'weight' => 0,
            ),
            'uoe_static_pane_text_format' => array(
              'weight' => 0,
            ),
            'uoe_text_format' => array(
              'weight' => 0,
            ),
            'uoe_webform_text_format' => array(
              'weight' => 0,
            ),
          ),
        ),
      ),
      'linkit' => array(
        'enable' => 0,
        'insert_plugin' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 22,
    ),
  );

  // Exported field_instance: 'node-uoe_profile-field_uoe_profile_picture'.
  $field_instances['node-uoe_profile-field_uoe_profile_picture'] = array(
    'bundle' => 'uoe_profile',
    'deleted' => 0,
    'description' => 'The image should be a head-and-shoulders shot in which you are facing the camera.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => 'uoe_profile_picture',
        ),
        'type' => 'image',
        'weight' => 61,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_node_atom_full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_node_atom_summary' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_overview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_overview_high' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_overview_medium' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_uoe_profile_picture',
    'label' => 'Profile picture',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'alt_field_required' => 0,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'filefield_paths' => array(
        'active_updating' => 0,
        'file_name' => array(
          'options' => array(
            'pathauto' => 0,
            'slashes' => 0,
            'transliterate' => 0,
          ),
          'value' => '[file:ffp-name-only-original].[file:ffp-extension-original]',
        ),
        'file_path' => array(
          'options' => array(
            'pathauto' => 0,
            'slashes' => 0,
            'transliterate' => 0,
          ),
          'value' => '',
        ),
        'redirect' => 0,
        'retroactive_update' => 0,
      ),
      'filefield_paths_enabled' => 1,
      'max_filesize' => '2 MB',
      'max_resolution' => '',
      'min_resolution' => '100x130',
      'title_field' => 0,
      'title_field_required' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'filefield_sources' => array(
          'filefield_sources' => array(
            'attach' => 0,
            'clipboard' => 0,
            'plupload' => 0,
            'reference' => 0,
            'remote' => 0,
            'upload' => 'upload',
          ),
          'source_attach' => array(
            'absolute' => 0,
            'attach_mode' => 'move',
            'path' => 'file_attach',
          ),
          'source_imce' => array(
            'imce_mode' => 0,
          ),
          'source_reference' => array(
            'autocomplete' => 0,
            'search_all_fields' => 0,
          ),
        ),
        'preview_image_style' => 'uoe_profile_picture',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'node-uoe_profile-field_uoe_profile_user'.
  $field_instances['node-uoe_profile-field_uoe_profile_user'] = array(
    'bundle' => 'uoe_profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'This profile page\'s username.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 60,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_node_atom_full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_node_atom_summary' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_overview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_overview_high' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_overview_medium' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_uoe_profile_user',
    'label' => 'Profile user',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'references_dialog_add' => 0,
        'references_dialog_edit' => 0,
        'references_dialog_search' => 0,
        'references_dialog_search_view' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => -1,
    ),
  );

  // Exported field_instance: 'node-uoe_profile-field_uoe_project_activity'.
  $field_instances['node-uoe_profile-field_uoe_project_activity'] = array(
    'bundle' => 'uoe_profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 42,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_node_atom_full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_node_atom_summary' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_overview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_overview_high' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_overview_medium' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_uoe_project_activity',
    'label' => 'Project activity summary',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'plain_text' => 0,
          'uoe_code_format' => 0,
          'uoe_custom_html_format' => 0,
          'uoe_feeds_format' => 0,
          'uoe_footer_format' => 0,
          'uoe_html_atom_pane_text_format' => 0,
          'uoe_profile_format' => 'uoe_profile_format',
          'uoe_proxy_code_format' => 0,
          'uoe_proxy_format' => 0,
          'uoe_proxy_report_format' => 0,
          'uoe_static_pane_text_format' => 0,
          'uoe_text_format' => 0,
          'uoe_webform_text_format' => 0,
        ),
        'allowed_formats_toggle' => 1,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'plain_text' => array(
              'weight' => 10,
            ),
            'uoe_code_format' => array(
              'weight' => 0,
            ),
            'uoe_custom_html_format' => array(
              'weight' => 0,
            ),
            'uoe_feeds_format' => array(
              'weight' => 0,
            ),
            'uoe_footer_format' => array(
              'weight' => 0,
            ),
            'uoe_html_atom_pane_text_format' => array(
              'weight' => 0,
            ),
            'uoe_profile_format' => array(
              'weight' => 0,
            ),
            'uoe_proxy_code_format' => array(
              'weight' => 0,
            ),
            'uoe_proxy_format' => array(
              'weight' => 0,
            ),
            'uoe_proxy_report_format' => array(
              'weight' => 0,
            ),
            'uoe_static_pane_text_format' => array(
              'weight' => 0,
            ),
            'uoe_text_format' => array(
              'weight' => 0,
            ),
            'uoe_webform_text_format' => array(
              'weight' => 0,
            ),
          ),
        ),
      ),
      'linkit' => array(
        'enable' => 0,
        'insert_plugin' => '',
      ),
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 20,
    ),
  );

  // Exported field_instance: 'node-uoe_profile-field_uoe_public_media'.
  $field_instances['node-uoe_profile-field_uoe_public_media'] = array(
    'bundle' => 'uoe_profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 57,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_node_atom_full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_node_atom_summary' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_overview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_overview_high' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_overview_medium' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_uoe_public_media',
    'label' => 'Media, public talks, interviews',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'plain_text' => 0,
          'uoe_code_format' => 0,
          'uoe_custom_html_format' => 0,
          'uoe_feeds_format' => 0,
          'uoe_footer_format' => 0,
          'uoe_html_atom_pane_text_format' => 0,
          'uoe_profile_format' => 'uoe_profile_format',
          'uoe_proxy_code_format' => 0,
          'uoe_proxy_format' => 0,
          'uoe_proxy_report_format' => 0,
          'uoe_static_pane_text_format' => 0,
          'uoe_text_format' => 0,
          'uoe_webform_text_format' => 0,
        ),
        'allowed_formats_toggle' => 1,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'plain_text' => array(
              'weight' => 10,
            ),
            'uoe_code_format' => array(
              'weight' => 0,
            ),
            'uoe_custom_html_format' => array(
              'weight' => 0,
            ),
            'uoe_feeds_format' => array(
              'weight' => 0,
            ),
            'uoe_footer_format' => array(
              'weight' => 0,
            ),
            'uoe_html_atom_pane_text_format' => array(
              'weight' => 0,
            ),
            'uoe_profile_format' => array(
              'weight' => 0,
            ),
            'uoe_proxy_code_format' => array(
              'weight' => 0,
            ),
            'uoe_proxy_format' => array(
              'weight' => 0,
            ),
            'uoe_proxy_report_format' => array(
              'weight' => 0,
            ),
            'uoe_static_pane_text_format' => array(
              'weight' => 0,
            ),
            'uoe_text_format' => array(
              'weight' => 0,
            ),
            'uoe_webform_text_format' => array(
              'weight' => 0,
            ),
          ),
        ),
      ),
      'linkit' => array(
        'enable' => 0,
        'insert_plugin' => '',
      ),
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 33,
    ),
  );

  // Exported field_instance: 'node-uoe_profile-field_uoe_pure'.
  $field_instances['node-uoe_profile-field_uoe_pure'] = array(
    'bundle' => 'uoe_profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'uoe_profile',
        'settings' => array(),
        'type' => 'uoe_profile_pure_formatter',
        'weight' => 65,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_node_atom_full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_node_atom_summary' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_overview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_overview_high' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_overview_medium' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_uoe_pure',
    'label' => 'PURE publications',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'plain_text' => 'plain_text',
          'uoe_code_format' => 'uoe_code_format',
          'uoe_custom_html_format' => 'uoe_custom_html_format',
          'uoe_feeds_format' => 'uoe_feeds_format',
          'uoe_footer_format' => 'uoe_footer_format',
          'uoe_html_atom_pane_text_format' => 'uoe_html_atom_pane_text_format',
          'uoe_profile_format' => 'uoe_profile_format',
          'uoe_proxy_code_format' => 'uoe_proxy_code_format',
          'uoe_proxy_format' => 'uoe_proxy_format',
          'uoe_proxy_report_format' => 'uoe_proxy_report_format',
          'uoe_static_pane_text_format' => 'uoe_static_pane_text_format',
          'uoe_text_format' => 'uoe_text_format',
          'uoe_webform_text_format' => 'uoe_webform_text_format',
        ),
        'allowed_formats_toggle' => 1,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'plain_text' => array(
              'weight' => 10,
            ),
            'uoe_code_format' => array(
              'weight' => 0,
            ),
            'uoe_custom_html_format' => array(
              'weight' => 0,
            ),
            'uoe_feeds_format' => array(
              'weight' => 0,
            ),
            'uoe_footer_format' => array(
              'weight' => 0,
            ),
            'uoe_html_atom_pane_text_format' => array(
              'weight' => 0,
            ),
            'uoe_profile_format' => array(
              'weight' => 0,
            ),
            'uoe_proxy_code_format' => array(
              'weight' => 0,
            ),
            'uoe_proxy_format' => array(
              'weight' => 0,
            ),
            'uoe_proxy_report_format' => array(
              'weight' => 0,
            ),
            'uoe_static_pane_text_format' => array(
              'weight' => 0,
            ),
            'uoe_text_format' => array(
              'weight' => 0,
            ),
            'uoe_webform_text_format' => array(
              'weight' => 0,
            ),
          ),
        ),
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'uoe_profile',
      'settings' => array(),
      'type' => 'uoe_profile_pure_content',
      'weight' => 17,
    ),
  );

  // Exported field_instance: 'node-uoe_profile-field_uoe_pure_highlighted'.
  $field_instances['node-uoe_profile-field_uoe_pure_highlighted'] = array(
    'bundle' => 'uoe_profile',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 64,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_node_atom_full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_node_atom_summary' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_overview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_overview_high' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_overview_medium' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_uoe_pure_highlighted',
    'label' => 'Highlighted publications only',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 15,
    ),
  );

  // Exported field_instance: 'node-uoe_profile-field_uoe_pure_id'.
  $field_instances['node-uoe_profile-field_uoe_pure_id'] = array(
    'bundle' => 'uoe_profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Enter your PURE ID, which can be found from your profile in the Edinburgh Research Explorer, if you want to include publications.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 44,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_node_atom_full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_node_atom_summary' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_overview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_overview_high' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_overview_medium' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_uoe_pure_id',
    'label' => 'Pure ID',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'plain_text' => 'plain_text',
          'uoe_code_format' => 'uoe_code_format',
          'uoe_custom_html_format' => 'uoe_custom_html_format',
          'uoe_feeds_format' => 'uoe_feeds_format',
          'uoe_footer_format' => 'uoe_footer_format',
          'uoe_html_atom_pane_text_format' => 'uoe_html_atom_pane_text_format',
          'uoe_profile_format' => 0,
          'uoe_proxy_code_format' => 'uoe_proxy_code_format',
          'uoe_proxy_format' => 'uoe_proxy_format',
          'uoe_proxy_report_format' => 'uoe_proxy_report_format',
          'uoe_static_pane_text_format' => 'uoe_static_pane_text_format',
          'uoe_text_format' => 'uoe_text_format',
          'uoe_webform_text_format' => 'uoe_webform_text_format',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'plain_text' => array(
              'weight' => 10,
            ),
            'uoe_code_format' => array(
              'weight' => 0,
            ),
            'uoe_custom_html_format' => array(
              'weight' => 0,
            ),
            'uoe_feeds_format' => array(
              'weight' => 0,
            ),
            'uoe_footer_format' => array(
              'weight' => 0,
            ),
            'uoe_html_atom_pane_text_format' => array(
              'weight' => 0,
            ),
            'uoe_profile_format' => array(
              'weight' => 0,
            ),
            'uoe_proxy_code_format' => array(
              'weight' => 0,
            ),
            'uoe_proxy_format' => array(
              'weight' => 0,
            ),
            'uoe_proxy_report_format' => array(
              'weight' => 0,
            ),
            'uoe_static_pane_text_format' => array(
              'weight' => 0,
            ),
            'uoe_text_format' => array(
              'weight' => 0,
            ),
            'uoe_webform_text_format' => array(
              'weight' => 0,
            ),
          ),
        ),
      ),
      'linkit' => array(
        'enable' => 0,
        'insert_plugin' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 13,
    ),
  );

  // Exported field_instance: 'node-uoe_profile-field_uoe_pure_limit'.
  $field_instances['node-uoe_profile-field_uoe_pure_limit'] = array(
    'bundle' => 'uoe_profile',
    'default_value' => array(
      0 => array(
        'value' => 10,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 63,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_node_atom_full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_node_atom_summary' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_overview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_overview_high' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_overview_medium' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_uoe_pure_limit',
    'label' => 'Number of publications to list',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 14,
    ),
  );

  // Exported field_instance: 'node-uoe_profile-field_uoe_pure_updated'.
  $field_instances['node-uoe_profile-field_uoe_pure_updated'] = array(
    'bundle' => 'uoe_profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 66,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_node_atom_full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_node_atom_summary' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_overview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_overview_high' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_overview_medium' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_uoe_pure_updated',
    'label' => 'Last updated from PURE',
    'required' => 0,
    'settings' => array(
      'default_value' => 'blank',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'uoe_profile',
      'settings' => array(),
      'type' => 'uoe_profile_pure_date',
      'weight' => 18,
    ),
  );

  // Exported field_instance: 'node-uoe_profile-field_uoe_qualifications'.
  $field_instances['node-uoe_profile-field_uoe_qualifications'] = array(
    'bundle' => 'uoe_profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 35,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_node_atom_full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_node_atom_summary' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_overview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_overview_high' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_overview_medium' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_uoe_qualifications',
    'label' => 'Qualifications',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'plain_text' => 0,
          'uoe_code_format' => 0,
          'uoe_custom_html_format' => 0,
          'uoe_feeds_format' => 0,
          'uoe_footer_format' => 0,
          'uoe_html_atom_pane_text_format' => 0,
          'uoe_profile_format' => 'uoe_profile_format',
          'uoe_proxy_code_format' => 0,
          'uoe_proxy_format' => 0,
          'uoe_proxy_report_format' => 0,
          'uoe_static_pane_text_format' => 0,
          'uoe_text_format' => 0,
          'uoe_webform_text_format' => 0,
        ),
        'allowed_formats_toggle' => 1,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'plain_text' => array(
              'weight' => 10,
            ),
            'uoe_code_format' => array(
              'weight' => 0,
            ),
            'uoe_custom_html_format' => array(
              'weight' => 0,
            ),
            'uoe_feeds_format' => array(
              'weight' => 0,
            ),
            'uoe_footer_format' => array(
              'weight' => 0,
            ),
            'uoe_html_atom_pane_text_format' => array(
              'weight' => 0,
            ),
            'uoe_profile_format' => array(
              'weight' => 0,
            ),
            'uoe_proxy_code_format' => array(
              'weight' => 0,
            ),
            'uoe_proxy_format' => array(
              'weight' => 0,
            ),
            'uoe_proxy_report_format' => array(
              'weight' => 0,
            ),
            'uoe_static_pane_text_format' => array(
              'weight' => 0,
            ),
            'uoe_text_format' => array(
              'weight' => 0,
            ),
            'uoe_webform_text_format' => array(
              'weight' => 0,
            ),
          ),
        ),
      ),
      'linkit' => array(
        'enable' => 0,
        'insert_plugin' => '',
      ),
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 16,
    ),
  );

  // Exported field_instance: 'node-uoe_profile-field_uoe_supervised_past'.
  $field_instances['node-uoe_profile-field_uoe_supervised_past'] = array(
    'bundle' => 'uoe_profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 50,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_node_atom_full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_node_atom_summary' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_overview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_overview_high' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_overview_medium' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_uoe_supervised_past',
    'label' => 'Students supervised - past',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'plain_text' => 0,
          'uoe_code_format' => 0,
          'uoe_custom_html_format' => 0,
          'uoe_feeds_format' => 0,
          'uoe_footer_format' => 0,
          'uoe_html_atom_pane_text_format' => 0,
          'uoe_profile_format' => 'uoe_profile_format',
          'uoe_proxy_code_format' => 0,
          'uoe_proxy_format' => 0,
          'uoe_proxy_report_format' => 0,
          'uoe_static_pane_text_format' => 0,
          'uoe_text_format' => 0,
          'uoe_webform_text_format' => 0,
        ),
        'allowed_formats_toggle' => 1,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'plain_text' => array(
              'weight' => 10,
            ),
            'uoe_code_format' => array(
              'weight' => 0,
            ),
            'uoe_custom_html_format' => array(
              'weight' => 0,
            ),
            'uoe_feeds_format' => array(
              'weight' => 0,
            ),
            'uoe_footer_format' => array(
              'weight' => 0,
            ),
            'uoe_html_atom_pane_text_format' => array(
              'weight' => 0,
            ),
            'uoe_profile_format' => array(
              'weight' => 0,
            ),
            'uoe_proxy_code_format' => array(
              'weight' => 0,
            ),
            'uoe_proxy_format' => array(
              'weight' => 0,
            ),
            'uoe_proxy_report_format' => array(
              'weight' => 0,
            ),
            'uoe_static_pane_text_format' => array(
              'weight' => 0,
            ),
            'uoe_text_format' => array(
              'weight' => 0,
            ),
            'uoe_webform_text_format' => array(
              'weight' => 0,
            ),
          ),
        ),
      ),
      'linkit' => array(
        'enable' => 0,
        'insert_plugin' => '',
      ),
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 26,
    ),
  );

  // Exported field_instance: 'node-uoe_profile-field_uoe_supervision'.
  $field_instances['node-uoe_profile-field_uoe_supervision'] = array(
    'bundle' => 'uoe_profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 48,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_node_atom_full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_node_atom_summary' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_overview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_overview_high' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_overview_medium' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_uoe_supervision',
    'label' => 'Supervision info',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'plain_text' => 0,
          'uoe_code_format' => 0,
          'uoe_custom_html_format' => 0,
          'uoe_feeds_format' => 0,
          'uoe_footer_format' => 0,
          'uoe_html_atom_pane_text_format' => 0,
          'uoe_profile_format' => 'uoe_profile_format',
          'uoe_proxy_code_format' => 0,
          'uoe_proxy_format' => 0,
          'uoe_proxy_report_format' => 0,
          'uoe_static_pane_text_format' => 0,
          'uoe_text_format' => 0,
          'uoe_webform_text_format' => 0,
        ),
        'allowed_formats_toggle' => 1,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'plain_text' => array(
              'weight' => 10,
            ),
            'uoe_code_format' => array(
              'weight' => 0,
            ),
            'uoe_custom_html_format' => array(
              'weight' => 0,
            ),
            'uoe_feeds_format' => array(
              'weight' => 0,
            ),
            'uoe_footer_format' => array(
              'weight' => 0,
            ),
            'uoe_html_atom_pane_text_format' => array(
              'weight' => 0,
            ),
            'uoe_profile_format' => array(
              'weight' => 0,
            ),
            'uoe_proxy_code_format' => array(
              'weight' => 0,
            ),
            'uoe_proxy_format' => array(
              'weight' => 0,
            ),
            'uoe_proxy_report_format' => array(
              'weight' => 0,
            ),
            'uoe_static_pane_text_format' => array(
              'weight' => 0,
            ),
            'uoe_text_format' => array(
              'weight' => 0,
            ),
            'uoe_webform_text_format' => array(
              'weight' => 0,
            ),
          ),
        ),
      ),
      'linkit' => array(
        'enable' => 0,
        'insert_plugin' => '',
      ),
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 24,
    ),
  );

  // Exported field_instance: 'node-uoe_profile-field_uoe_ug_teaching'.
  $field_instances['node-uoe_profile-field_uoe_ug_teaching'] = array(
    'bundle' => 'uoe_profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 45,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_node_atom_full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_node_atom_summary' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_overview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_overview_high' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_overview_medium' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_uoe_ug_teaching',
    'label' => 'Undergraduate teaching responsibility',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'plain_text' => 0,
          'uoe_code_format' => 0,
          'uoe_custom_html_format' => 0,
          'uoe_feeds_format' => 0,
          'uoe_footer_format' => 0,
          'uoe_html_atom_pane_text_format' => 0,
          'uoe_profile_format' => 'uoe_profile_format',
          'uoe_proxy_code_format' => 0,
          'uoe_proxy_format' => 0,
          'uoe_proxy_report_format' => 0,
          'uoe_static_pane_text_format' => 0,
          'uoe_text_format' => 0,
          'uoe_webform_text_format' => 0,
        ),
        'allowed_formats_toggle' => 1,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'plain_text' => array(
              'weight' => 10,
            ),
            'uoe_code_format' => array(
              'weight' => 0,
            ),
            'uoe_custom_html_format' => array(
              'weight' => 0,
            ),
            'uoe_feeds_format' => array(
              'weight' => 0,
            ),
            'uoe_footer_format' => array(
              'weight' => 0,
            ),
            'uoe_html_atom_pane_text_format' => array(
              'weight' => 0,
            ),
            'uoe_profile_format' => array(
              'weight' => 0,
            ),
            'uoe_proxy_code_format' => array(
              'weight' => 0,
            ),
            'uoe_proxy_format' => array(
              'weight' => 0,
            ),
            'uoe_proxy_report_format' => array(
              'weight' => 0,
            ),
            'uoe_static_pane_text_format' => array(
              'weight' => 0,
            ),
            'uoe_text_format' => array(
              'weight' => 0,
            ),
            'uoe_webform_text_format' => array(
              'weight' => 0,
            ),
          ),
        ),
      ),
      'linkit' => array(
        'enable' => 0,
        'insert_plugin' => '',
      ),
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 21,
    ),
  );

  // Exported field_instance: 'node-uoe_profile-field_uoe_video'.
  $field_instances['node-uoe_profile-field_uoe_video'] = array(
    'bundle' => 'uoe_profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Video hosted on Media Hopper at <a href="https://media.ed.ac.uk">media.ed.ac.uk</a>.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'uoe_media_hopper_field',
        'settings' => array(),
        'type' => 'uoe_media_hopper_field_embedded_video',
        'weight' => 55,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_node_atom_full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_node_atom_summary' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_overview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_overview_high' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_overview_medium' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_uoe_video',
    'label' => 'Embedded Video',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'uoe_media_hopper_field',
      'settings' => array(),
      'type' => 'uoe_media_hopper_field_embed_markup',
      'weight' => 31,
    ),
  );

  // Exported field_instance: 'node-uoe_profile-field_uoe_video_link'.
  $field_instances['node-uoe_profile-field_uoe_video_link'] = array(
    'bundle' => 'uoe_profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Provide other video resources you wish to link from your profile page.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 56,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_node_atom_full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_node_atom_summary' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_overview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_overview_high' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_overview_medium' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_uoe_video_link',
    'label' => 'Extra video links',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 1,
      'attributes' => array(
        'class' => '',
        'configurable_class' => 0,
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'linkit' => array(
        'enable' => 0,
        'insert_plugin' => '',
      ),
      'rel_remove' => 'default',
      'title' => 'optional',
      'title_label_use_field_label' => 0,
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 32,
    ),
  );

  // Exported field_instance: 'node-uoe_profile-field_website_link'.
  $field_instances['node-uoe_profile-field_website_link'] = array(
    'bundle' => 'uoe_profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Provide links to organisational unit websites that you are associated with.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 38,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_node_atom_full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_node_atom_summary' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_overview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_overview_high' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uoe_overview_medium' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_website_link',
    'label' => 'Business unit websites',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 0,
      'attributes' => array(
        'class' => '',
        'configurable_class' => 0,
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'linkit' => array(
        'enable' => 0,
        'insert_plugin' => '',
      ),
      'rel_remove' => 'default',
      'title' => 'optional',
      'title_label_use_field_label' => 0,
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 'optional',
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 13,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Additional first names, or initials.');
  t('Additional name');
  t('Affiliated research centres');
  t('Availability');
  t('Awards');
  t('Biography');
  t('Business unit websites');
  t('CV');
  t('Category 1 content');
  t('Category 1 heading');
  t('Category 2 content');
  t('Category 2 heading');
  t('Current grants held');
  t('Current research interests');
  t('Do not include a comma at the end of each line.');
  t('Email');
  t('Embedded Video');
  t('Enter your PURE ID, which can be found from your profile in the Edinburgh Research Explorer, if you want to include publications.');
  t('Extra details');
  t('Extra video links');
  t('Family name');
  t('Fax');
  t('First name');
  t('Highlighted publications only');
  t('If your audiences include people overseas, include the international dialling code: +44 (0)131');
  t('Knowledge exchange/impact');
  t('Last updated from PURE');
  t('Locality');
  t('Media, public talks, interviews');
  t('Number of publications to list');
  t('Open to enquiries about PhD supervision');
  t('Organisation 1');
  t('Organisation 2');
  t('Organisation 3');
  t('PURE publications');
  t('Past research interests');
  t('Personal title');
  t('Postcode');
  t('Postgraduate teaching responsibility');
  t('Previous grants held');
  t('Profile picture');
  t('Profile user');
  t('Project activity summary');
  t('Provide information on any membership of professional bodies, committees and administrative roles, or external appointments such as membership of trusts/boards.');
  t('Provide links to organisational unit websites that you are associated with.');
  t('Provide links to research centre websites that you are associated with.');
  t('Provide other video resources you wish to link from your profile page.');
  t('Pure ID');
  t('Qualifications');
  t('Responsibilities & affiliations');
  t('Role');
  t('Secondary Street Address');
  t('Secondary locality');
  t('Secondary postcode');
  t('Separate the two parts of the postcode with a space.');
  t('Start with the most specific sub unit for Organisation 1. Use as many or as few Organisation fields as are necessary. It is not necessary to list \'The University of Edinburgh\'.');
  t('Street address');
  t('Students supervised - current');
  t('Students supervised - past');
  t('Summary of research interests');
  t('Supervision info');
  t('The image should be a head-and-shoulders shot in which you are facing the camera.');
  t('The name by which you are normally addressed. For example, Jim and not James, if this is what you prefer. Initials are an alternative, but generally appear less friendly and approachable.');
  t('The role sets the context in which you might be contacted. You may set multiple roles if this is appropriate to you.');
  t('The town or city part of the address. Do not include punctuation at the end.');
  t('This profile page\'s username.');
  t('This should be a University phone number. If your preferred number is a mobile, leave this field blank and include your mobile number using the \'Add extra details\' feature below. Include sufficient detail for your target audiences. Unless you\'re sure that the contact details are exclusively for internal audiences, you should include the standard telephone dialling (STD) code. If your audiences include people overseas, include the international dialling code: +44 (0)131. Prioritise information needed by external audiences over internal audiences. (University staff typically know how to shorten a phone number to create the internal extension version).');
  t('This should be an email address in the form: <a href="mailto:someone@ed.ac.uk">someone@ed.ac.uk</a>. The text added to this field will automatically generate a clickable link.');
  t('URL segment');
  t('Undergraduate teaching responsibility');
  t('Use common abbreviations and contractions (Mr, Ms, Dr). Don\'t use full stops. For example: Dr not Dr. Leaving it out will make contact information appear less formal and more approachable.');
  t('Use this field for qualifications and honours.');
  t('Use this field to select the type of extra details i.e. web, social media, mobile phone and additional work phone.');
  t('Use this space to outline when you are available (contact times).');
  t('Video hosted on Media Hopper at <a href="https://media.ed.ac.uk">media.ed.ac.uk</a>.');
  t('Work phone');
  t('You can create additional categories or headings to appear on your page here, if required.');
  t('Your second name or surname.');

  return $field_instances;
}
