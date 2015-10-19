<?php
/**
 * @file
 * testimonials.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function testimonials_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "panels_mini" && $api == "panels_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function testimonials_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function testimonials_node_info() {
  $items = array(
    'page' => array(
      'name' => t('Basic page'),
      'base' => 'node_content',
      'description' => t('Use <em>basic pages</em> for your static content, such as an \'About us\' page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'testimonials' => array(
      'name' => t('Testimonials'),
      'base' => 'node_content',
      'description' => t('This content type would be used to store <em>Client Feedback</em> on the website. '),
      'has_title' => '1',
      'title_label' => t('Your Name'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
