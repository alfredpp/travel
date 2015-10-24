<?php
/**
 * @file
 * tours_and_hotels.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function tours_and_hotels_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_basic|node|tours|form';
  $field_group->group_name = 'group_basic';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'tours';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_groups';
  $field_group->data = array(
    'label' => 'Basic Information',
    'weight' => '6',
    'children' => array(
      0 => 'body',
      1 => 'field_image',
      2 => 'title',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-basic field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_basic|node|tours|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_column|node|tours|boxes';
  $field_group->group_name = 'group_column';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'tours';
  $field_group->mode = 'boxes';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Col',
    'weight' => '0',
    'children' => array(
      0 => 'field_image',
      1 => 'group_details',
      2 => 'group_hover',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Col',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'col-lg-3 col-md-3 col-sm-3 col-xs-12 package',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_column|node|tours|boxes'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_details|node|tours|boxes';
  $field_group->group_name = 'group_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'tours';
  $field_group->mode = 'boxes';
  $field_group->parent_name = 'group_column';
  $field_group->data = array(
    'label' => 'Tour Details',
    'weight' => '3',
    'children' => array(
      0 => 'body',
      1 => 'title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Tour Details',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'tour-box-details ',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_details|node|tours|boxes'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_gallery|node|tours|form';
  $field_group->group_name = 'group_gallery';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'tours';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_groups';
  $field_group->data = array(
    'label' => 'Gallery',
    'weight' => '9',
    'children' => array(
      0 => 'field_gallery_images',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-gallery field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_gallery|node|tours|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_groups|node|tours|form';
  $field_group->group_name = 'group_groups';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'tours';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Groups',
    'weight' => '0',
    'children' => array(
      0 => 'group_basic',
      1 => 'group_itinerary',
      2 => 'group_gallery',
      3 => 'group_tour_details',
      4 => 'group_hotel_information',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-groups field-group-tabs',
      ),
    ),
  );
  $export['group_groups|node|tours|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_hotel_information|node|tours|form';
  $field_group->group_name = 'group_hotel_information';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'tours';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_groups';
  $field_group->data = array(
    'label' => 'Hotel Information',
    'weight' => '10',
    'children' => array(
      0 => 'field_tour_hotel',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-hotel-information field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_hotel_information|node|tours|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_items|node|tours|default';
  $field_group->group_name = 'group_items';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'tours';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_pills';
  $field_group->data = array(
    'label' => 'Overview',
    'weight' => '6',
    'children' => array(
      0 => 'body',
      1 => 'field_image',
      2 => 'field_tour_itinerary',
    ),
    'format_type' => 'bootstrap_fieldgroup_nav_item',
    'format_settings' => array(
      'label' => 'Overview',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $export['group_items|node|tours|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_itinerary|node|tours|form';
  $field_group->group_name = 'group_itinerary';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'tours';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_groups';
  $field_group->data = array(
    'label' => 'Tour Itinerary',
    'weight' => '8',
    'children' => array(
      0 => 'field_tour_itinerary',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-itinerary field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_itinerary|node|tours|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pills|node|tours|default';
  $field_group->group_name = 'group_pills';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'tours';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Pills',
    'weight' => '5',
    'children' => array(
      0 => 'group_items',
      1 => 'group_reviews',
      2 => 'group_photos',
      3 => 'group_itinerary',
      4 => 'group_hotel',
      5 => 'group_qna',
    ),
    'format_type' => 'bootstrap_fieldgroup_nav',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-pills field-group-bootstrap_fieldgroup_nav',
        'bootstrap_nav_type' => 'tabs',
        'bootstrap_stacked' => 0,
        'bootstrap_orientation' => 0,
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_pills|node|tours|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tour_details|node|tours|form';
  $field_group->group_name = 'group_tour_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'tours';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_groups';
  $field_group->data = array(
    'label' => 'Tour Details',
    'weight' => '7',
    'children' => array(
      0 => 'field_attractions',
      1 => 'field_tour_type',
      2 => 'field_number_of_days',
      3 => 'field_number_of_nights',
      4 => 'field_special_offer',
      5 => 'field_tour_theme',
      6 => 'field_tour_price',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-tour-details field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_tour_details|node|tours|form'] = $field_group;

  return $export;
}
