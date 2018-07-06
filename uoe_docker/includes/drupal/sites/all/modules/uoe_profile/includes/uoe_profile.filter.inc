<?php
/**
 * @file
 * uoe_profile.filter.inc
 */

function uoe_profile_filter_formats() {
  $formats = array();

  // Exported format: UoE Profile Biography Format.
  $formats['uoe_profile_biography_format'] = array(
    'format' => 'uoe_profile_biography_format',
    'name' => 'UoE Profile Biography Format',
    'cache' => 0,
    'status' => 1,
    'weight' => 0,
    'filters' => array(
      'htmlpurifier' => array(
        'weight' => -40,
        'status' => 1,
        'settings' => array(
          'htmlpurifier_config_name' => 'htmlpurifier_advanced',
          'htmlpurifier_help' => 1,
          'htmlpurifier_filter_tips' => 'HTML tags will be transformed to conform to HTML standards.',
          'htmlpurifier_config' => array(
            'Null_Attr.AllowedClasses' => 1,
            'Attr.AllowedFrameTargets' => '',
            'Attr.AllowedRel' => '',
            'Attr.AllowedRev' => '',
            'Null_Attr.ClassUseCDATA' => 1,
            'Null_Attr.DefaultImageAlt' => 1,
            'Attr.DefaultInvalidImage' => '',
            'Attr.DefaultInvalidImageAlt' => 'Invalid image',
            'Attr.DefaultTextDir' => 'ltr',
            'Attr.EnableID' => 0,
            'Attr.ForbiddenClasses' => '',
            'Attr.IDBlacklist' => '',
            'Null_Attr.IDBlacklistRegexp' => 1,
            'Attr.IDPrefix' => '',
            'Attr.IDPrefixLocal' => '',
            'AutoFormat.AutoParagraph' => 1,
            'AutoFormat.Custom' => '',
            'AutoFormat.DisplayLinkURI' => 0,
            'AutoFormat.Linkify' => 1,
            'AutoFormat.PurifierLinkify.DocURL' => '#',
            'AutoFormat.PurifierLinkify' => 0,
            'AutoFormat.RemoveEmpty.RemoveNbsp.Exceptions' => 'td
th',
            'AutoFormat.RemoveEmpty.RemoveNbsp' => 1,
            'AutoFormat.RemoveEmpty' => 0,
            'AutoFormat.RemoveSpansWithoutAttributes' => 0,
            'CSS.AllowImportant' => 0,
            'CSS.AllowTricky' => 0,
            'Null_CSS.AllowedFonts' => 1,
            'Null_CSS.AllowedProperties' => 1,
            'CSS.ForbiddenProperties' => '',
            'CSS.MaxImgLength' => '1200px',
            'CSS.Proprietary' => 0,
            'CSS.Trusted' => 0,
            'Cache.DefinitionImpl' => 'Drupal',
            'Null_Cache.SerializerPath' => 1,
            'Cache.SerializerPermissions' => 493,
            'Core.AggressivelyFixLt' => 1,
            'Core.AllowHostnameUnderscore' => 0,
            'Core.CollectErrors' => 1,
            'Core.ColorKeywords' => 'maroon:#800000
red:#FF0000
orange:#FFA500
yellow:#FFFF00
olive:#808000
purple:#800080
fuchsia:#FF00FF
white:#FFFFFF
lime:#00FF00
green:#008000
navy:#000080
blue:#0000FF
aqua:#00FFFF
teal:#008080
black:#000000
silver:#C0C0C0
gray:#808080
',
            'Core.ConvertDocumentToFragment' => 1,
            'Core.DirectLexLineNumberSyncInterval' => 0,
            'Core.DisableExcludes' => 0,
            'Core.EnableIDNA' => 0,
            'Core.Encoding' => 'utf-8',
            'Core.EscapeInvalidChildren' => 0,
            'Core.EscapeInvalidTags' => 0,
            'Core.EscapeNonASCIICharacters' => 0,
            'Core.HiddenElements' => 'script
style',
            'Core.Language' => 'en',
            'Null_Core.LexerImpl' => 1,
            'Null_Core.MaintainLineNumbers' => 1,
            'Core.NormalizeNewlines' => 1,
            'Core.RemoveInvalidImg' => 1,
            'Core.RemoveProcessingInstructions' => 0,
            'Null_Core.RemoveScriptContents' => 1,
            'Filter.Custom' => '',
            'Filter.ExtractStyleBlocks.Escaping' => 1,
            'Null_Filter.ExtractStyleBlocks.Scope' => 1,
            'Null_Filter.ExtractStyleBlocks.TidyImpl' => 1,
            'Filter.ExtractStyleBlocks' => 0,
            'Filter.YouTube' => 0,
            'Null_HTML.Allowed' => 1,
            'Null_HTML.AllowedAttributes' => 1,
            'HTML.AllowedComments' => '[if IE 9]><video style="display: none;"><![endif]
[if IE 9]></video><![endif]',
            'HTML.AllowedCommentsRegexp' => '/^\\s*((END\\s+)?(scald|copyright)\\=)|(\\{cke_protected\\})/',
            'HTML.AllowedElements' => 'a
abbr
blockquote
caption
cite
col
colgroup
dd
div
dl
dt
footer
h2
h3
h4
h5
h6
li
ol
p
q
span
strong
sub
sup
table
tbody
td
tfoot
th
thead
tr
ul',
            'Null_HTML.AllowedModules' => 1,
            'HTML.Attr.Name.UseCDATA' => 0,
            'HTML.BlockWrapper' => 'p',
            'HTML.CoreModules' => 'Structure
Text
Hypertext
List
NonXMLCommonAttributes
XMLCommonAttributes
CommonAttributes',
            'Null_HTML.CustomDoctype' => 1,
            'HTML.Doctype' => 'XHTML 1.0 Transitional',
            'HTML.FlashAllowFullScreen' => 0,
            'HTML.ForbiddenAttributes' => 'style',
            'HTML.ForbiddenElements' => '',
            'HTML.MaxImgLength' => 1200,
            'HTML.Nofollow' => 0,
            'HTML.Parent' => 'div',
            'HTML.Proprietary' => 0,
            'HTML.SafeEmbed' => 0,
            'HTML.SafeIframe' => 0,
            'HTML.SafeObject' => 0,
            'HTML.SafeScripting' => '',
            'HTML.Strict' => 0,
            'HTML.TargetBlank' => 0,
            'HTML.TidyAdd' => '',
            'HTML.TidyLevel' => 'medium',
            'HTML.TidyRemove' => '',
            'HTML.Trusted' => 0,
            'HTML.XHTML' => 1,
            'Output.CommentScriptContents' => 1,
            'Output.FixInnerHTML' => 1,
            'Output.FlashCompat' => 0,
            'Null_Output.Newline' => 1,
            'Output.SortAttr' => 0,
            'Output.TidyFormat' => 0,
            'Test.ForceNoIconv' => 0,
            'URI.AllowedSchemes' => 'http
https
mailto
ftp
nntp
news',
            'Null_URI.Base' => 1,
            'URI.DefaultScheme' => 'http',
            'URI.Disable' => 0,
            'URI.DisableExternal' => 0,
            'URI.DisableExternalResources' => 0,
            'URI.DisableResources' => 0,
            'Null_URI.Host' => 1,
            'URI.HostBlacklist' => '',
            'URI.MakeAbsolute' => 0,
            'Null_URI.Munge' => 1,
            'URI.MungeResources' => 0,
            'Null_URI.MungeSecretKey' => 1,
            'URI.OverrideAllowedSchemes' => 1,
            'Null_URI.SafeIframeRegexp' => 1,
          ),
        ),
      ),
      'intlinks hide bad' => array(
        'weight' => -38,
        'status' => 1,
        'settings' => array(
          'intlinks_hide_bad_display_tip' => 1,
        ),
      ),
      'intlinks title' => array(
        'weight' => -37,
        'status' => 1,
        'settings' => array(
          'intlinks_title_display_tip' => 1,
        ),
      ),
      'uoe_links' => array(
        'weight' => -36,
        'status' => 1,
        'settings' => array(
          'uoe_links_display_tip' => 1,
          'uoe_links_sanitise_title' => 1,
          'uoe_links_highlight_unpublished' => 1,
        ),
      ),
      'uoe_ldap' => array(
        'weight' => -35,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  // Exported format: UoE Profile format.
  $formats['uoe_profile_format'] = array(
    'format' => 'uoe_profile_format',
    'name' => 'UoE Profile format',
    'cache' => 0,
    'status' => 1,
    'weight' => 0,
    'filters' => array(
      'htmlpurifier' => array(
        'weight' => -48,
        'status' => 1,
        'settings' => array(
          'htmlpurifier_config_name' => 'htmlpurifier_advanced',
          'htmlpurifier_help' => 1,
          'htmlpurifier_filter_tips' => 'HTML tags will be transformed to conform to HTML standards.',
          'htmlpurifier_config' => array(
            'Null_Attr.AllowedClasses' => 1,
            'Attr.AllowedFrameTargets' => '',
            'Attr.AllowedRel' => '',
            'Attr.AllowedRev' => '',
            'Null_Attr.ClassUseCDATA' => 1,
            'Null_Attr.DefaultImageAlt' => 1,
            'Attr.DefaultInvalidImage' => '',
            'Attr.DefaultInvalidImageAlt' => 'Invalid image',
            'Attr.DefaultTextDir' => 'ltr',
            'Attr.EnableID' => 0,
            'Attr.ForbiddenClasses' => '',
            'Attr.IDBlacklist' => '',
            'Null_Attr.IDBlacklistRegexp' => 1,
            'Attr.IDPrefix' => '',
            'Attr.IDPrefixLocal' => '',
            'AutoFormat.AutoParagraph' => 1,
            'AutoFormat.Custom' => '',
            'AutoFormat.DisplayLinkURI' => 0,
            'AutoFormat.Linkify' => 1,
            'AutoFormat.PurifierLinkify.DocURL' => '#%s',
            'AutoFormat.PurifierLinkify' => 0,
            'AutoFormat.RemoveEmpty.RemoveNbsp.Exceptions' => 'td
th',
            'AutoFormat.RemoveEmpty.RemoveNbsp' => 0,
            'AutoFormat.RemoveEmpty' => 0,
            'AutoFormat.RemoveSpansWithoutAttributes' => 0,
            'CSS.AllowImportant' => 0,
            'CSS.AllowTricky' => 0,
            'Null_CSS.AllowedFonts' => 1,
            'Null_CSS.AllowedProperties' => 1,
            'CSS.ForbiddenProperties' => '',
            'CSS.MaxImgLength' => '1200px',
            'CSS.Proprietary' => 0,
            'CSS.Trusted' => 0,
            'Cache.DefinitionImpl' => 'Drupal',
            'Null_Cache.SerializerPath' => 1,
            'Cache.SerializerPermissions' => 493,
            'Core.AggressivelyFixLt' => 1,
            'Core.AllowHostnameUnderscore' => 0,
            'Core.CollectErrors' => 0,
            'Core.ColorKeywords' => 'maroon:#800000
red:#FF0000
orange:#FFA500
yellow:#FFFF00
olive:#808000
purple:#800080
fuchsia:#FF00FF
white:#FFFFFF
lime:#00FF00
green:#008000
navy:#000080
blue:#0000FF
aqua:#00FFFF
teal:#008080
black:#000000
silver:#C0C0C0
gray:#808080
',
            'Core.ConvertDocumentToFragment' => 1,
            'Core.DirectLexLineNumberSyncInterval' => 0,
            'Core.DisableExcludes' => 0,
            'Core.EnableIDNA' => 0,
            'Core.Encoding' => 'utf-8',
            'Core.EscapeInvalidChildren' => 0,
            'Core.EscapeInvalidTags' => 0,
            'Core.EscapeNonASCIICharacters' => 0,
            'Core.HiddenElements' => 'script
style',
            'Core.Language' => 'en',
            'Null_Core.LexerImpl' => 1,
            'Null_Core.MaintainLineNumbers' => 1,
            'Core.NormalizeNewlines' => 1,
            'Core.RemoveInvalidImg' => 1,
            'Core.RemoveProcessingInstructions' => 0,
            'Null_Core.RemoveScriptContents' => 1,
            'Filter.Custom' => '',
            'Filter.ExtractStyleBlocks.Escaping' => 1,
            'Null_Filter.ExtractStyleBlocks.Scope' => 1,
            'Null_Filter.ExtractStyleBlocks.TidyImpl' => 1,
            'Filter.ExtractStyleBlocks' => 0,
            'Filter.YouTube' => 0,
            'Null_HTML.Allowed' => 1,
            'Null_HTML.AllowedAttributes' => 1,
            'HTML.AllowedComments' => '',
            'Null_HTML.AllowedCommentsRegexp' => 1,
            'HTML.AllowedElements' => 'a
abbr
div
h3
li
ol
p
span
strong
sub
sup
ul',
            'Null_HTML.AllowedModules' => 1,
            'HTML.Attr.Name.UseCDATA' => 0,
            'HTML.BlockWrapper' => 'p',
            'HTML.CoreModules' => 'Structure
Text
Hypertext
List
NonXMLCommonAttributes
XMLCommonAttributes
CommonAttributes',
            'Null_HTML.CustomDoctype' => 1,
            'HTML.Doctype' => 'XHTML 1.0 Transitional',
            'HTML.FlashAllowFullScreen' => 0,
            'HTML.ForbiddenAttributes' => 'style',
            'HTML.ForbiddenElements' => '',
            'HTML.MaxImgLength' => 1200,
            'HTML.Nofollow' => 0,
            'HTML.Parent' => 'div',
            'HTML.Proprietary' => 0,
            'HTML.SafeEmbed' => 0,
            'HTML.SafeIframe' => 0,
            'HTML.SafeObject' => 0,
            'HTML.SafeScripting' => '',
            'HTML.Strict' => 0,
            'HTML.TargetBlank' => 0,
            'HTML.TidyAdd' => '',
            'HTML.TidyLevel' => 'medium',
            'HTML.TidyRemove' => '',
            'HTML.Trusted' => 0,
            'HTML.XHTML' => 1,
            'Output.CommentScriptContents' => 1,
            'Output.FixInnerHTML' => 1,
            'Output.FlashCompat' => 0,
            'Null_Output.Newline' => 1,
            'Output.SortAttr' => 0,
            'Output.TidyFormat' => 0,
            'Test.ForceNoIconv' => 0,
            'URI.AllowedSchemes' => 'http
https
mailto
ftp
nntp
news',
            'Null_URI.Base' => 1,
            'URI.DefaultScheme' => 'http',
            'URI.Disable' => 0,
            'URI.DisableExternal' => 0,
            'URI.DisableExternalResources' => 0,
            'URI.DisableResources' => 0,
            'Null_URI.Host' => 1,
            'URI.HostBlacklist' => '',
            'URI.MakeAbsolute' => 0,
            'Null_URI.Munge' => 1,
            'URI.MungeResources' => 0,
            'Null_URI.MungeSecretKey' => 1,
            'URI.OverrideAllowedSchemes' => 1,
            'Null_URI.SafeIframeRegexp' => 1,
          ),
        ),
      ),
      'intlinks hide bad' => array(
        'weight' => -47,
        'status' => 1,
        'settings' => array(
          'intlinks_hide_bad_display_tip' => 1,
        ),
      ),
      'intlinks title' => array(
        'weight' => -46,
        'status' => 1,
        'settings' => array(
          'intlinks_title_display_tip' => 1,
        ),
      ),
      'uoe_links' => array(
        'weight' => -44,
        'status' => 1,
        'settings' => array(
          'uoe_links_display_tip' => 1,
          'uoe_links_sanitise_title' => 1,
          'uoe_links_highlight_unpublished' => 1,
        ),
      ),
      'uoe_ldap' => array(
        'weight' => -39,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  return $formats;
}
