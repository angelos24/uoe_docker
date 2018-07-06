<?php
/**
 * @file
 * uoe_profile.features.ckeditor_profile.inc
 */

/**
 * Implements hook_ckeditor_profile_defaults().
 */
function uoe_profile_ckeditor_profile_defaults() {
  $data = array(
    'uoe_profile_biography' => array(
      'name' => 'uoe_profile_biography',
      'settings' => array(
        'ss' => 2,
        'toolbar' => '[
    [\'Cut\',\'Copy\',\'Paste\',\'PasteText\'],
    [\'Undo\',\'Redo\'],
    [\'NumberedList\',\'BulletedList\',\'addTab\'],
    [\'Outdent\',\'Indent\'],
    [\'Table\'],
    [\'linkit\'],
    [\'Maximize\'],
    \'/\',
    [\'Format\',\'Styles\'],
    [\'uoe_blockquote\',\'featurebox\'],
    [\'Bold\',\'Superscript\',\'Subscript\',\'abbr\',\'cite\',\'Language\']
]',
        'expand' => 't',
        'default' => 't',
        'show_toggle' => 'f',
        'uicolor' => 'default',
        'uicolor_user' => 'default',
        'width' => '100%',
        'lang' => 'en',
        'auto_lang' => 't',
        'language_direction' => 'default',
        'allowed_content' => 't',
        'extraAllowedContent' => '',
        'enter_mode' => 'p',
        'shift_enter_mode' => 'br',
        'font_format' => 'p;h2;h3;h4;h5;h6',
        'custom_formatting' => 'f',
        'formatting' => array(
          'custom_formatting_options' => array(
            'indent' => 'indent',
            'breakBeforeOpen' => 'breakBeforeOpen',
            'breakAfterOpen' => 'breakAfterOpen',
            'breakAfterClose' => 'breakAfterClose',
            'breakBeforeClose' => 0,
            'pre_indent' => 0,
          ),
        ),
        'css_mode' => 'self',
        'css_path' => '%tassets/theme.css,%u../../modules/custom/uoe_ckeditor/ckeditor.css',
        'css_style' => 'self',
        'styles_path' => '%m../../../custom/uoe_ckeditor/ckeditor.styles.js',
        'filebrowser' => 'none',
        'filebrowser_image' => '',
        'filebrowser_flash' => '',
        'UserFilesPath' => '%b%f/',
        'UserFilesAbsolutePath' => '%d%b%f/',
        'forcePasteAsPlainText' => 'f',
        'html_entities' => 'f',
        'scayt_autoStartup' => 'f',
        'theme_config_js' => 'f',
        'js_conf' => 'config.removePlugins = "link";
config.language_list = ["bg:Bulgarian","cs:Czech","da:Danish","de:German","et:Estonian","el:Greek","en:English","es:Spanish","fi:Finnish","fr:French","ga:Irish","gd:Gaelic","hu:Hungarian","is:Icelandic","it:Italian","la:Latin","lv:Latvian","lt:Lithuanian","mt:Maltese","nl:Dutch","no:Norwegian","pl:Polish","pt:Portuguese","ro:Romanian","sk:Slovak","sl:Slovene","sv:Swedish","we:Welsh"];',
        'loadPlugins' => array(
          'abbr' => array(
            'name' => 'abbr',
            'desc' => 'Support for abbreviations',
            'path' => '%base_path%sites/all/modules/custom/uoe_ckeditor/plugins/abbr/',
            'buttons' => array(
              'abbr' => array(
                'label' => 'Abbreviation',
                'icon' => 'icons/abbr.png',
              ),
            ),
          ),
          'cite' => array(
            'name' => 'cite',
            'desc' => 'Support for citations',
            'path' => '%base_path%sites/all/modules/custom/uoe_ckeditor/plugins/citation/',
            'buttons' => array(
              'cite' => array(
                'label' => 'Citations',
                'icon' => 'icons/cite.png',
              ),
            ),
          ),
          'drupalbreaks' => array(
            'name' => 'drupalbreaks',
            'desc' => 'Plugin for inserting Drupal teaser and page breaks.',
            'path' => '%plugin_dir%drupalbreaks/',
            'buttons' => array(
              'DrupalBreak' => array(
                'label' => 'DrupalBreak',
                'icon' => 'images/drupalbreak.png',
              ),
            ),
            'default' => 't',
          ),
          'featurebox' => array(
            'name' => 'featurebox',
            'desc' => 'Create a feature box',
            'path' => '%base_path%sites/all/modules/custom/uoe_ckeditor/plugins/featurebox/',
            'default' => 't',
            'buttons' => array(
              'featurebox' => array(
                'label' => 'Create a feature box',
                'icon' => 'icons/featurebox.png',
              ),
            ),
          ),
          'linkit' => array(
            'name' => 'linkit',
            'desc' => 'Support for Linkit module',
            'path' => '%base_path%sites/all/modules/contrib/linkit/editors/ckeditor/',
            'buttons' => array(
              'linkit' => array(
                'label' => 'Linkit',
                'icon' => 'linkit.png',
              ),
            ),
          ),
          'tabber' => array(
            'name' => 'tabber',
            'desc' => 'Create tabs with CKeditor',
            'path' => '%base_path%sites/all/modules/contrib/ckeditor_tabber/tabber/',
            'buttons' => array(
              'addTab' => array(
                'icon' => 'icons/tabber.png',
                'label' => 'Add tab',
              ),
            ),
          ),
          'tabber_ext' => array(
            'name' => 'tabber_ext',
            'desc' => 'Extend the tabber plugin',
            'path' => '%base_path%sites/all/modules/custom/uoe_ckeditor/plugins/tabber_ext/',
            'buttons' => FALSE,
          ),
          'uoe_blockquote' => array(
            'name' => 'uoe_blockquote',
            'desc' => 'Create a blockquote',
            'path' => '%base_path%sites/all/modules/custom/uoe_ckeditor/plugins/uoe_blockquote/',
            'default' => 't',
            'buttons' => array(
              'uoe_blockquote' => array(
                'label' => 'Create a block quote',
                'icon' => 'icons/uoe_blockquote.png',
              ),
            ),
          ),
          'uoe_links' => array(
            'name' => 'uoe_links',
            'desc' => 'Support for University of Edinburgh internal links',
            'path' => '%base_path%sites/all/modules/custom/uoe_links/ckeditor/',
            'buttons' => array(),
          ),
        ),
      ),
      'input_formats' => array(
        'uoe_profile_biography_format' => 'UoE Profile Biography Format',
      ),
    ),

    'uoe_profile_profile' => array(
      'name' => 'uoe_profile_profile',
      'settings' => array(
        'ss' => 2,
        'toolbar' => '[
    [\'Cut\',\'Copy\',\'Paste\',\'PasteText\'],
    [\'Undo\',\'Redo\'],
    [\'NumberedList\',\'BulletedList\'],
    [\'Outdent\',\'Indent\'],
    [\'linkit\'],
    \'/\',
    [\'Format\'],
    [\'abbr\',\'Bold\',\'Subscript\',\'Superscript\',\'Language\']
]',
        'expand' => 't',
        'default' => 't',
        'show_toggle' => 'f',
        'uicolor' => 'default',
        'uicolor_user' => 'default',
        'width' => '100%',
        'lang' => 'en',
        'auto_lang' => 't',
        'language_direction' => 'default',
        'allowed_content' => 't',
        'extraAllowedContent' => '',
        'enter_mode' => 'p',
        'shift_enter_mode' => 'br',
        'font_format' => 'p;h3',
        'custom_formatting' => 'f',
        'formatting' => array(
          'custom_formatting_options' => array(
            'indent' => 'indent',
            'breakBeforeOpen' => 'breakBeforeOpen',
            'breakAfterOpen' => 'breakAfterOpen',
            'breakAfterClose' => 'breakAfterClose',
            'breakBeforeClose' => 0,
            'pre_indent' => 0,
          ),
        ),
        'css_mode' => 'theme',
        'css_path' => '',
        'css_style' => 'self',
        'styles_path' => '',
        'filebrowser' => 'none',
        'filebrowser_image' => '',
        'filebrowser_flash' => '',
        'UserFilesPath' => '%b%f/',
        'UserFilesAbsolutePath' => '%d%b%f/',
        'forcePasteAsPlainText' => 'f',
        'html_entities' => 'f',
        'scayt_autoStartup' => 'f',
        'theme_config_js' => 'f',
        'js_conf' => 'config.removePlugins = "link";
config.language_list = ["bg:Bulgarian","cs:Czech","da:Danish","de:German","et:Estonian","el:Greek","en:English","es:Spanish","fi:Finnish","fr:French","ga:Irish","gd:Gaelic","hu:Hungarian","is:Icelandic","it:Italian","la:Latin","lv:Latvian","lt:Lithuanian","mt:Maltese","nl:Dutch","no:Norwegian","pl:Polish","pt:Portuguese","ro:Romanian","sk:Slovak","sl:Slovene","sv:Swedish","we:Welsh"];',
        'loadPlugins' => array(
          'abbr' => array(
            'name' => 'abbr',
            'desc' => 'Support for abbreviations',
            'path' => '%base_path%sites/all/modules/custom/uoe_ckeditor/plugins/abbr/',
            'buttons' => array(
              'abbr' => array(
                'label' => 'Abbreviation',
                'icon' => 'icons/abbr.png',
              ),
            ),
          ),
          'drupalbreaks' => array(
            'name' => 'drupalbreaks',
            'desc' => 'Plugin for inserting Drupal teaser and page breaks.',
            'path' => '%plugin_dir%drupalbreaks/',
            'buttons' => array(
              'DrupalBreak' => array(
                'label' => 'DrupalBreak',
                'icon' => 'images/drupalbreak.png',
              ),
            ),
            'default' => 't',
          ),
          'linkit' => array(
            'name' => 'linkit',
            'desc' => 'Support for Linkit module',
            'path' => '%base_path%sites/all/modules/contrib/linkit/editors/ckeditor/',
            'buttons' => array(
              'linkit' => array(
                'label' => 'Linkit',
                'icon' => 'linkit.png',
              ),
            ),
          ),
          'picture_ckeditor' => array(
            'name' => 'picture_ckeditor',
            'desc' => 'Support responsive images with the Picture module.',
            'buttons' => FALSE,
            'path' => '%base_path%sites/all/modules/contrib/picture/ckeditor/plugins/',
            'default' => 't',
          ),
          'uoe_links' => array(
            'name' => 'uoe_links',
            'desc' => 'Support for University of Edinburgh internal links',
            'path' => '%base_path%sites/all/modules/custom/uoe_links/ckeditor/',
            'buttons' => FALSE,
          ),
        ),
      ),
      'input_formats' => array(
        'uoe_profile_format' => 'UoE Profile format',
      ),
    ),
  );
  return $data;
}
