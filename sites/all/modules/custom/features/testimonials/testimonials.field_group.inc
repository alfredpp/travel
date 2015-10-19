<?php
/**
 * @file
 * testimonials.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function testimonials_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_additional|node|page|form';
  $field_group->group_name = 'group_additional';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'page';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_vtabs';
  $field_group->data = array(
    'label' => 'Additional Information',
    'weight' => '8',
    'children' => array(
      0 => 'field_about_company',
      1 => 'field_image',
      2 => 'path',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-additional field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_additional|node|page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_bottom|node|testimonials|teaser';
  $field_group->group_name = 'group_bottom';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'testimonials';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Testimonial Bottom',
    'weight' => '1',
    'children' => array(
      0 => 'field_rating',
      1 => 'field_image',
      2 => 'title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Testimonial Bottom',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'testimonial-bottom',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_bottom|node|testimonials|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_col_2|node|page|about_layout';
  $field_group->group_name = 'group_col_2';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'page';
  $field_group->mode = 'about_layout';
  $field_group->parent_name = 'group_main_container';
  $field_group->data = array(
    'label' => 'Column Second',
    'weight' => '4',
    'children' => array(
      0 => 'field_image',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Column Second',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'col-md-4 col-xs-12 col-lg-4 box-img',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h2',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_col_2|node|page|about_layout'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_col_3|node|page|about_layout';
  $field_group->group_name = 'group_col_3';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'page';
  $field_group->mode = 'about_layout';
  $field_group->parent_name = 'group_main_container';
  $field_group->data = array(
    'label' => 'Column Third',
    'weight' => '5',
    'children' => array(
      0 => 'body',
      1 => 'site_name',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Column Third',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'col-md-4 col-xs-12 col-lg-4 box-img',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h2',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_col_3|node|page|about_layout'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_column|node|page|about_layout';
  $field_group->group_name = 'group_column';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'page';
  $field_group->mode = 'about_layout';
  $field_group->parent_name = 'group_container';
  $field_group->data = array(
    'label' => 'Column',
    'weight' => '4',
    'children' => array(
      0 => 'field_about_company',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Column',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'col-md-12 col-lg-12 col-xs-12',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h2',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_column|node|page|about_layout'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_container|node|page|about_layout';
  $field_group->group_name = 'group_container';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'page';
  $field_group->mode = 'about_layout';
  $field_group->parent_name = 'group_overview';
  $field_group->data = array(
    'label' => 'Container',
    'weight' => '2',
    'children' => array(
      0 => 'group_column',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Container',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'container',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_container|node|page|about_layout'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_content|node|page|form';
  $field_group->group_name = 'group_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'page';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_vtabs';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => '7',
    'children' => array(
      0 => 'body',
      1 => 'title',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-content field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_content|node|page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_left|node|testimonials|boxes';
  $field_group->group_name = 'group_left';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'testimonials';
  $field_group->mode = 'boxes';
  $field_group->parent_name = 'group_wrapper';
  $field_group->data = array(
    'label' => 'left',
    'weight' => '0',
    'children' => array(
      0 => 'field_image',
      1 => 'title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'left',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'col-md-3 user-details',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_left|node|testimonials|boxes'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_main_container|node|page|about_layout';
  $field_group->group_name = 'group_main_container';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'page';
  $field_group->mode = 'about_layout';
  $field_group->parent_name = 'group_main_section';
  $field_group->data = array(
    'label' => 'Main Container',
    'weight' => '5',
    'children' => array(
      0 => 'group_col_1',
      1 => 'group_col_2',
      2 => 'group_col_3',
      3 => 'group_head',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Main Container',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'container',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_main_container|node|page|about_layout'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_right|node|testimonials|boxes';
  $field_group->group_name = 'group_right';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'testimonials';
  $field_group->mode = 'boxes';
  $field_group->parent_name = 'group_wrapper';
  $field_group->data = array(
    'label' => 'right',
    'weight' => '1',
    'children' => array(
      0 => 'body',
      1 => 'field_rating',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'right',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'col-md-9 testimonial-text',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_right|node|testimonials|boxes'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_top|node|testimonials|teaser';
  $field_group->group_name = 'group_top';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'testimonials';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Testimonial Top',
    'weight' => '0',
    'children' => array(
      0 => 'body',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Testimonial Top',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'testimonial-top',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_top|node|testimonials|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_vtabs|node|page|form';
  $field_group->group_name = 'group_vtabs';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Vertical Tabs',
    'weight' => '0',
    'children' => array(
      0 => 'group_content',
      1 => 'group_additional',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-vtabs field-group-tabs',
      ),
    ),
  );
  $export['group_vtabs|node|page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_wrapper|node|testimonials|boxes';
  $field_group->group_name = 'group_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'testimonials';
  $field_group->mode = 'boxes';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Wrapper',
    'weight' => '15',
    'children' => array(
      0 => 'group_left',
      1 => 'group_right',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Wrapper',
      'instance_settings' => array(
        'id' => '',
        'classes' => ' col-md-12 col-xs-12 testmonial-boxes',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_wrapper|node|testimonials|boxes'] = $field_group;

  return $export;
}
