<?php
/**
 * Implements hook_form_FORM_ID_alter().
 *
 * @param $form
 *   The form.
 * @param $form_state
 *   The form state.
 */
function traveljordan_form_system_theme_settings_alter(&$form, &$form_state) {

  $form['travel_settings'] = array(
	'#type' => 'vertical_tabs',
	'#title' => 'Theme specific Custom Settings'
  );

  //contact information for the travel jordan agency

  $form['contact_group']  = array(
  	'#type' => 'fieldset',
  	 '#title' => t('Contact Information'),
  	'#group' => 'travel_settings'
  	);

  $form['contact_group']['site_address'] = array(
    '#type' => 'textarea',
    '#title' => t('Site Address'),
    '#default_value' => theme_get_setting('site_address','traveljordan'),
  	'#group' => 'travel_settings'
  );

  $form['contact_group']['site_phone'] = array(
    '#type' => 'textfield',
    '#title' => t('Site Phone'),
    '#default_value' => theme_get_setting('site_phone','traveljordan'),
  	'#group' => 'travel_settings'
  );

  $form['contact_group']['site_mail'] = array(
    '#type' => 'textfield',
    '#title' => t('Site Email'),
    '#default_value' => theme_get_setting('site_mail','traveljordan'),
    '#group' => 'travel_settings'
  );


  $form['contact_group']['help'] = array(
    '#markup' => t('These values will be displayed in the website'),
     '#group' => 'travel_settings'
  );


  //Settings for the Why Travel with us
  


}