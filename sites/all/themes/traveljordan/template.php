<?php

/**
 * @file
 * template.php
 */



/**
 * Implements hook_form_alter
 */

function traveljordan_form_alter(&$form, &$form_state, $form_id) {
	switch ($form_id) {
		case 'simplenews_block_form_1':
        $form['mail']['#attributes']['placeholder'] = t('Enter your email here');
        $form['mail']['#title_display'] = 'invisible';
        $form['submit']['#attributes']['class'][] = 'element-invisible';
        $form['#theme_wrappers'] = array('simplenews_form_wrapper');
			break;
    case 'webform_client_form_146':

    break;
    case 'lang_dropdown_form':
      //Add #title property to the language switcher
      //$form['lang_dropdown_select']['#title'] = t('Language');
    break;
    case "mailchimp_signup_subscribe_block_subscription_newsletter_form":
    $form['input_group'] = array(
      '#type' => 'container',
      '#attributes' => array(
        'class' => array('input-group input-group-lg'),
      )
    );
    $form['input_group']['mergevars'] = $form['mergevars'];
    $form['input_group']['mergevars']['EMAIL']['#title'] = "";
    $form['input_group']['actions'] = $form['actions'];
    $form['input_group']['actions']['#prefix'] = '<span class="input-group-btn">';
    $form['input_group']['actions']['#suffix'] = '</span>';
    unset($form['mergevars']);
    unset($form['actions']);
    break;
  }
}


/**
 * Implements hook_preprocess_html
 */

function traveljordan_preprocess_html(&$variables) {
  //Add the required google fonts
  drupal_add_css('http://fonts.googleapis.com/css?family=Lato:100,300,400,700,900,100italic,300italic,400italic,700italic,900italic',
    array('type' => 'external'));

  //bootstrap RTL support
  // drupal_add_css("http://cdn.rawgit.com/morteza/bootstrap-rtl/master/dist/cdnjs/3.3.1/css/bootstrap-rtl.min.css",
  //   array('type' => 'external'));
}



/**
 * Implement hook_theme
 */

function traveljordan_theme() {
  $items = array(
    'simplenews_form_wrapper' => array(
      'render element' => 'element',
    ),
    'aside_block' => array(
    ),
    'aside_contact' => array(
    ),
  );
  return $items;
}

/**
 * Theme function implementation for simplenews_form_wrapper.
 */
function traveljordan_simplenews_form_wrapper($variables) {

  $element = $variables['element'];

  if (isset($element['#action'])) {
    $element['#attributes']['action'] = drupal_strip_dangerous_protocols($element['#action']);
  }
  element_set_attributes($element, array('method', 'id'));
  if (empty($element['#attributes']['accept-charset'])) {
    $element['#attributes']['accept-charset'] = "UTF-8";
  }

  $output  = '<form' . drupal_attributes($element['#attributes']) . '>';
  $output .= '<div class="input-group input-group-lg">';
  $output .=  $variables['element']['#children'];
  $output .= '<span class="input-group-btn">';
  $output .= '<button type="submit" class="btn btn-default">';
  $output .= t('Subscribe');
  $output .= '</button>';
  $output .= '</span>';
  $output .= '</div>';
  $output .= '</form>';

  return $output;
}



/**
 * Overrides theme_menu_tree().
 */
function traveljordan_menu_tree(&$variables) {
  return '<ul class="">' . $variables['tree'] . '</ul>';
}


/**
 * Implements hook_preprocess_page
 */

function traveljordan_preprocess_page(&$variables) {
  global $language;

  $site_name = preg_split('/\s/', $variables['site_name']);

  $variables['site_name'] = $site_name[0] . ' <span> ' . $site_name[1] . ' </span> ' . $site_name[2];


  $variables['address_map_1360x450'] = theme('simple_gmap_output', array(
      'include_map' => TRUE,
      'include_static_map' => 0,
      'include_link' => FALSE,
      'include_text' => TRUE,
      'width' => 1360,
      'height' => 415,
      'url_suffix' => theme_get_setting('site_address', 'traveljordan'),
      'zoom' => 16,
      'information_bubble' => TRUE,
      'link_text' => t('View larger map'),
      'address_text' => false,
      'map_type' => 'm',
      'langcode' => $language->language,
    ));

  $fluid = array('145');

  if(in_array(arg(1), $fluid)) {
    $variables['main_container_class'] = ' class="main-container container-fluid"';
  }
  else {
    $variables['main_container_class'] = ' class="main-container container"';
  }
}



/**
 * Implementation of hook_preprocess_node()
 */

function traveljordan_preprocess_node(&$variables) {


  //Preprocess fields for the tour node
  $node = $variables['node'];

  if ($node->type == 'tours') {
    $link_prefix = '<i class="fa fa-eye"></i>';
    $variables['content']['link_read_more'][0] = array(
      '#markup' => l($link_prefix . 'Read More Info', 'node/'.$node->nid, array('html' => true)),
    );

    $link_prefix = '<i class="fa fa-envelope"></i>';
    $variables['content']['link_request_an_offer'][0] = array(
      '#markup' => l($link_prefix . 'Request an Offer', 'node', array('html' => true)),
    );

    module_load_include('inc', 'reviews', 'includes/reviews.pages'); 
    $form = $form_state = array();
    $variables['review_form'] = drupal_render(drupal_get_form('reviews_add_review', (arg(1))));
  }

  $site_name = preg_split('/\s/', variable_get('site_name'));

  $variables['content']['site_name'][0] = array(
      '#markup' => '<h5>' . $site_name[0] . ' <span> ' . $site_name[1] . ' </span> ' . $site_name[2] . '</h5>',
    );

}



/**
 * Theme webform eleemnts
 */

function traveljordan_webform_element($variables) {
  $variables['element'] += array(
    '#title_display' => 'before',
  );
  $element = $variables['element'];
  if (isset($element['#format']) && $element['#format'] == 'html') {
    $type = 'display';
  }
  else {
    $type = (isset($element['#type']) && !in_array($element['#type'], array('markup', 'textfield', 'webform_email', 'webform_number'))) ? $element['#type'] : $element['#webform_component']['type'];
  }
  $nested_level = $element['#parents'][0] == 'submitted' ? 1 : 0;
  $parents = str_replace('_', '-', implode('--', array_slice($element['#parents'], $nested_level)));
  $wrapper_classes = array(
   'form-group',
   'form-item',
   'webform-component',
   'webform-component-' . $type,
  );
  if (isset($element['#container_class'])) {
    $wrapper_classes[] = $element['#container_class'];
  }
  if (isset($element['#title_display']) && strcmp($element['#title_display'], 'inline') === 0) {
    $wrapper_classes[] = 'webform-container-inline';
  }
  $output = '<div class="' . implode(' ', $wrapper_classes) . '" id="webform-component-' . $parents . '">' . "\n";
  if (!isset($element['#title'])) {
    $element['#title_display'] = 'none';
  }
  $prefix = isset($element['#field_prefix']) ? '<span class="field-prefix">' . _webform_filter_xss($element['#field_prefix']) . '</span> ' : '';
  $suffix = isset($element['#field_suffix']) ? ' <span class="field-suffix">' . _webform_filter_xss($element['#field_suffix']) . '</span>' : '';
  switch ($element['#title_display']) {
    case 'inline':
    case 'before':
    case 'invisible':
      $output .= ' ' . theme('form_element_label', $variables);
      $output .= ' ' . $prefix . $element['#children'] . $suffix . "\n";
      break;
    case 'after':
      $output .= ' ' . $prefix . $element['#children'] . $suffix;
      $output .= ' ' . theme('form_element_label', $variables) . "\n";
      break;
    case 'none':
    case 'attribute':
      $output .= ' ' . $prefix . $element['#children'] . $suffix . "\n";
      break;
  }
  if (!empty($element['#description'])) {
    $output .= ' <div class="description">' . $element['#description'] . "</div>\n";
  }
  $output .= "</div>\n";
  return $output;
}


/**
 * Formats a link.
 */
function traveljordan_link_formatter_link_default($vars) {


  $link_options = $vars['element'];
  unset($link_options['title']);
  unset($link_options['url']);

  if ($vars['field']['bundle'] == 'tour_blocks') {
    $title_icon = '<i class="fa fa-envelope"></i>';
    $vars['element']['title'] = $title_icon . $vars['element']['title'];
  }


  if (isset($link_options['attributes']['class'])) {
    $link_options['attributes']['class'] = array($link_options['attributes']['class']);
  }
  // Display a normal link if both title and URL are available.
  if (!empty($vars['element']['title']) && !empty($vars['element']['url'])) {
    return l($vars['element']['title'], $vars['element']['url'], $link_options);
  }
  // If only a title, display the title.
  elseif (!empty($vars['element']['title'])) {
    return $link_options['html'] ? $vars['element']['title'] : check_plain($vars['element']['title']);
  }
  elseif (!empty($vars['element']['url'])) {
    return l($vars['element']['title'], $vars['element']['url'], $link_options);
  }
}


function traveljordan_ds_fields_info_alter(&$fields, $entity_type) {
  if ($entity_type == 'node') {
   $fields['title']['function'] = 'traveljordan_title_render_function';
  }
}

function traveljordan_title_render_function($field) {
  $output = '';
  $settings = isset($field['formatter_settings']) ? $field['formatter_settings'] : array();
  $settings += $field['properties']['default'];
  // Basic string.
  if (isset($settings['link text'])) {
    $output = t($settings['link text']);
  }
  elseif (isset($field['properties']['entity_render_key']) && isset($field['entity']->{$field['properties']['entity_render_key']})) {
    if ($field['entity_type'] == 'user' && $field['properties']['entity_render_key'] == 'name') {
      $output = format_username($field['entity']);
    }
    else {
      $output = $field['entity']->{$field['properties']['entity_render_key']};
    }
  }

  if (empty($output)) {
    return;
  }

  $output = filter_xss($output, array('em', 'strong', 'b', 'span'));

  // Link.
  if ($settings['link']) {
    if (isset($field['entity']->uri['path'])) {
      $path = $field['entity']->uri['path'];
    }
    else {
      $uri_info = entity_uri($field['entity_type'], $field['entity']);
      $path = $uri_info['path'];
    }
    $output = l($output, $path, array('html' => TRUE));
  }

  // Wrapper and class.
  if (!empty($settings['wrapper'])) {
    $wrapper = check_plain($settings['wrapper']);
    $class = (!empty($settings['class'])) ? ' class="' . check_plain($settings['class']) . '"' : '';
    $output = '<' . $wrapper . $class . '>' . $output . '</' . $wrapper . '>';
  }
  return $output;
}

