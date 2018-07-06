<?php
/**
 * @file
 * uoe_profile.jw_player_presets.inc
 */

/**
 * Implements hook_default_jw_player_presets().
 */
function uoe_profile_default_jw_player_presets() {
  $export = array();

  $jw_player_preset = new stdClass();
  $jw_player_preset->disabled = FALSE; /* Edit this to true to make a default jw_player_preset disabled initially */
  $jw_player_preset->api_version = 1;
  $jw_player_preset->preset_name = 'uoe_jw_profile_preset';
  $jw_player_preset->machine_name = 'uoe_jw_profile_preset';
  $jw_player_preset->description = 'UoE streaming media service JW preset for profile pages';
  $jw_player_preset->settings = array(
    'primary' => 'html5',
    'responsive' => 1,
    'width' => '100',
    'height' => '100',
    'aspectratio' => '16:9',
    'controls' => 1,
    'skin' => '',
    'stretching' => 'uniform',
    'autostart' => 0,
  );
  $export['uoe_jw_profile_preset'] = $jw_player_preset;

  return $export;
}
