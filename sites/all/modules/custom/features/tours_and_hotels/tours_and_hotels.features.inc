<?php
/**
 * @file
 * tours_and_hotels.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function tours_and_hotels_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function tours_and_hotels_node_info() {
  $items = array(
    'hotels' => array(
      'name' => t('Hotels'),
      'base' => 'node_content',
      'description' => t('Content type to save hotel informations'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'tours' => array(
      'name' => t('Tours'),
      'base' => 'node_content',
      'description' => t('This content type will be used for creating <em>tours</em> on the website.'),
      'has_title' => '1',
      'title_label' => t('Tour Name'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
