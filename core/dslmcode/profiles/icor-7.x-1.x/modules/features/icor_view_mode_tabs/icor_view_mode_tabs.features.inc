<?php
/**
 * @file
 * icor_view_mode_tabs.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function icor_view_mode_tabs_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
