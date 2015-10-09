<?php
/**
 * @file
 * Default theme implementation to display a single Drupal page.
 *
 * The doctype, html, head and body tags are not in this template. Instead they
 * can be found in the html.tpl.php template in this directory.
 *
 * Available variables:
 *
 * General utility variables:
 * - $base_path: The base URL path of the Drupal installation. At the very
 *   least, this will always default to /.
 * - $directory: The directory the template is located in, e.g. modules/system
 *   or themes/bartik.
 * - $is_front: TRUE if the current page is the front page.
 * - $logged_in: TRUE if the user is registered and signed in.
 * - $is_admin: TRUE if the user has permission to access administration pages.
 *
 * Site identity:
 * - $front_page: The URL of the front page. Use this instead of $base_path,
 *   when linking to the front page. This includes the language domain or
 *   prefix.
 * - $logo: The path to the logo image, as defined in theme configuration.
 * - $site_name: The name of the site, empty when display has been disabled
 *   in theme settings.
 * - $site_slogan: The slogan of the site, empty when display has been disabled
 *   in theme settings.
 *
 * Navigation:
 * - $main_menu (array): An array containing the Main menu links for the
 *   site, if they have been configured.
 * - $secondary_menu (array): An array containing the Secondary menu links for
 *   the site, if they have been configured.
 * - $breadcrumb: The breadcrumb trail for the current page.
 *
 * Page content (in order of occurrence in the default page.tpl.php):
 * - $title_prefix (array): An array containing additional output populated by
 *   modules, intended to be displayed in front of the main title tag that
 *   appears in the template.
 * - $title: The page title, for use in the actual HTML content.
 * - $title_suffix (array): An array containing additional output populated by
 *   modules, intended to be displayed after the main title tag that appears in
 *   the template.
 * - $messages: HTML for status and error messages. Should be displayed
 *   prominently.
 * - $tabs (array): Tabs linking to any sub-pages beneath the current page
 *   (e.g., the view and edit tabs when displaying a node).
 * - $action_links (array): Actions local to the page, such as 'Add menu' on the
 *   menu administration interface.
 * - $feed_icons: A string of all feed icons for the current page.
 * - $node: The node object, if there is an automatically-loaded node
 *   associated with the page, and the node ID is the second argument
 *   in the page's path (e.g. node/12345 and node/12345/revisions, but not
 *   comment/reply/12345).
 *
 * Regions:
 * - $page['help']: Dynamic help text, mostly for admin pages.
 * - $page['highlighted']: Items for the highlighted content region.
 * - $page['content']: The main content of the current page.
 * - $page['sidebar_first']: Items for the first sidebar.
 * - $page['sidebar_second']: Items for the second sidebar.
 * - $page['header']: Items for the header region.
 * - $page['footer']: Items for the footer region.
 *
 * @see bootstrap_preprocess_page()
 * @see template_preprocess()
 * @see template_preprocess_page()
 * @see bootstrap_process_page()
 * @see template_process()
 * @see html.tpl.php
 *
 * @ingroup themeable
 */
?>
<header id="navbar" role="banner">
  <div class="container">
    <div class="row">
      <div class="col-md-4 pull-left">
        <?php if (!empty($site_name)): ?>
        <a class="name navbar-brand" href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>"><?php print $site_name; ?></a>
        <?php endif; ?>
      </div>
      
      <div class="col-md-4 pull-right">
        <?php print render($page['header']); ?>
      </div>

    </div>
    <div class="<?php print $navbar_classes; ?>">
    <div class="navbar-header">
      <!-- .btn-navbar is used as the toggle for collapsed navbar content -->
      <button type="button" class="navbar-toggle" data-toggle="collapse" data-target=".navbar-collapse">
        <span class="sr-only">Toggle navigation</span>
        <span class="icon-bar"></span>
        <span class="icon-bar"></span>
        <span class="icon-bar"></span>
      </button>
    </div>

    <?php if (!empty($primary_nav) || !empty($secondary_nav) || !empty($page['navigation'])): ?>
      <div class="navbar-collapse collapse">
        <nav role="navigation" class="my_nav">
          <?php if (!empty($primary_nav)): ?>
            <?php print render($primary_nav); ?>
          <?php endif; ?>
          <?php if (!empty($secondary_nav)): ?>
            <?php print render($secondary_nav); ?>
          <?php endif; ?>
          <?php if (!empty($page['navigation'])): ?>
            <?php print render($page['navigation']); ?>
          <?php endif; ?>
            <div class="right_num">
              <h2><i class="fa fa-phone"></i>
              <?php print check_plain(theme_get_setting('site_phone','traveljordan')); ?>
              </h2>
            </div>
        </nav>
      </div>
    <?php endif; ?>
    </div>
  </div>
</header>

<?php if(!empty($page['homepage_banner'])): ?>
  <section class="slider">
    <div class="home_banner">
    <?php print render($page['homepage_banner']); ?>
    </div>
  </section>
<?php endif; ?>


<?php if(!$is_front): ?>
  <section class="banner-container">
    <div class="banner">
      <div class="container">
        <div class="pull-left">
          <?php print render($title_prefix); ?>
          <?php if (!empty($title)): ?>
            <h1 class="page-header  my_title"><?php print $title; ?></h1>
          <?php endif; ?>
          <?php print render($title_suffix); ?>
        </div>
        <div class="pull-right nav_right">
          <?php if (!empty($breadcrumb)): print $breadcrumb; endif;?>
       </div>
    </div>
  </div>
  </section>
<?php endif; ?>


<div <?php print $main_container_class; ?>>
  <header role="banner" id="page-header">
    <?php if (!empty($site_slogan)): ?>
      <p class="lead"><?php print $site_slogan; ?></p>
    <?php endif; ?>
  </header> <!-- /#page-header -->

  <div class="row">
    <section id="main-section" <?php print $content_column_class; ?>>
        <?php print $messages; ?>
        <?php if (!empty($tabs)): ?>
          <?php print render($tabs); ?>
        <?php endif; ?>
        <?php if (!empty($page['help'])): ?>
          <?php print render($page['help']); ?>
        <?php endif; ?>
        <?php if (!empty($action_links)): ?>
          <ul class="action-links"><?php print render($action_links); ?></ul>
        <?php endif; ?>
      <?php print render($page['content']); ?>
    </section>


  </div>
</div>

<?php if(arg(0) == 'node' && arg(1) == '1'): ?>
<div class="footer-map">
  <?php print $address_map_1360x450; ?>
</div>
<?php endif; ?>


<?php if(!empty($page['mid_container'])): ?>
  <div class="mid_container">
    <?php print render($page['mid_container']); ?>
  </div>
<?php endif; ?>



<!-- Footer Section -->
<?php if(!empty($page['footer_top'])): ?>
  <div id="footer-top">
        <?php print render($page['footer_top']); ?>
  </div>
<?php endif; ?>

<?php if(!empty($page['footer'])): ?>
  <footer class="footer">
    <div class="container">
      <div class="row">
          <?php print render($page['footer']); ?>
          <!-- Footer Address -->
          <div class="col-lg-3 col-md-3 col-sm-3 col-xs-12 box_1">
            <h2>Contact Info</h2>
            <ul class="contact_info">
              <li>
                <i class="fa fa-map-marker"></i>
                <div><?php print check_markup(t(theme_get_setting('site_address', 'traveljordan'))); ?></div>
              </li>
              <li>
                <i class="fa fa-phone"></i>
                <div><?php print theme_get_setting('site_phone', 'traveljordan'); ?></div>
              </li>
              <li class="env">
                <i class="fa fa-envelope"></i>
                <div><?php print theme_get_setting('site_mail', 'traveljordan'); ?></div>
                </li>
            </ul>
           <div class="social-links">
            <?php 
            print theme('links', 
              array(
                'links' => menu_navigation_links('menu-social-links'), 
                'attributes' => array('class'=> array('links', 'block-menu-menu-social-links')) )
                );
            ?>
              
           </div>

          </div>
      </div>
    </div>
  </footer>
<?php endif; ?>

<?php if(!empty($page['footer_bottom'])): ?>
  <div class="footer-bottom">
    <div class="container">
      <div class="row">
          <?php print render($page['footer_bottom']); ?>
      </div>
    </div>
  </div>
<?php endif; ?>
<!-- Footer End -->