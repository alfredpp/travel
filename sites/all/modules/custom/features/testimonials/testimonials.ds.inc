<?php
/**
 * @file
 * testimonials.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function testimonials_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|testimonials|boxes';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'testimonials';
  $ds_layout->view_mode = 'boxes';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_left',
        1 => 'group_right',
        2 => 'field_image',
        3 => 'body',
        4 => 'title',
        5 => 'field_rating',
        6 => 'group_wrapper',
      ),
    ),
    'fields' => array(
      'group_left' => 'ds_content',
      'group_right' => 'ds_content',
      'field_image' => 'ds_content',
      'body' => 'ds_content',
      'title' => 'ds_content',
      'field_rating' => 'ds_content',
      'group_wrapper' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
      'ds_hidden' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'hide_page_title' => '0',
    'page_option_title' => '',
    'hide_sidebars' => 0,
  );
  $export['node|testimonials|boxes'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|testimonials|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'testimonials';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_top',
        1 => 'field_image',
        2 => 'group_bottom',
        3 => 'title',
        4 => 'body',
        5 => 'field_rating',
      ),
    ),
    'fields' => array(
      'group_top' => 'ds_content',
      'field_image' => 'ds_content',
      'group_bottom' => 'ds_content',
      'title' => 'ds_content',
      'body' => 'ds_content',
      'field_rating' => 'ds_content',
    ),
    'classes' => array(
      'layout_class' => array(
        '' => '',
      ),
    ),
    'wrappers' => array(
      'ds_content' => 'div',
      'ds_hidden' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
    'hide_page_title' => '0',
    'page_option_title' => '',
    'hide_sidebars' => 0,
  );
  $export['node|testimonials|teaser'] = $ds_layout;

  return $export;
}
