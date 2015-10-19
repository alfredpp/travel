<?php
/**
 * @file
 * testimonials.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function testimonials_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'testimonials_page';
  $mini->category = '';
  $mini->admin_title = 'Testimonials page';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'bootstrap_twocol_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'feb4a865-a85d-41a4-97b3-4b9e7bf9d720';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-93f8120f-f65d-4c2b-adac-90420d588df7';
    $pane->panel = 'left';
    $pane->type = 'views';
    $pane->subtype = 'testimonials';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '2',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block_3',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'col-md-8 col-sm-12 col-lg-8 col-xs-12',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '93f8120f-f65d-4c2b-adac-90420d588df7';
    $display->content['new-93f8120f-f65d-4c2b-adac-90420d588df7'] = $pane;
    $display->panels['left'][0] = 'new-93f8120f-f65d-4c2b-adac-90420d588df7';
    $pane = new stdClass();
    $pane->pid = 'new-642c28f9-310d-4497-ba5b-ed44051c0d93';
    $pane->panel = 'right';
    $pane->type = 'views';
    $pane->subtype = 'testimonials';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '5',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block_2',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'col-md-4 col-lg-4 col-xs-12 col-sm-12',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '642c28f9-310d-4497-ba5b-ed44051c0d93';
    $display->content['new-642c28f9-310d-4497-ba5b-ed44051c0d93'] = $pane;
    $display->panels['right'][0] = 'new-642c28f9-310d-4497-ba5b-ed44051c0d93';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-93f8120f-f65d-4c2b-adac-90420d588df7';
  $mini->display = $display;
  $export['testimonials_page'] = $mini;

  return $export;
}
