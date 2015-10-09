<?php

/**
 * @file
 * Customize the display of a complete webform.
 *
 * This file may be renamed "webform-form-[nid].tpl.php" to target a specific
 * webform on your site. Or you can leave it "webform-form.tpl.php" to affect
 * all webforms on your site.
 *
 * Available variables:
 * - $form: The complete form array.
 * - $nid: The node ID of the Webform.
 *
 * The $form array contains two main pieces:
 * - $form['submitted']: The main content of the user-created form.
 * - $form['details']: Internal information stored by Webform.
 */
?>

<?php print drupal_render($form['submitted']['help_text']); ?>
	<div class="row">
		<div class="col-sm-6">
			<?php print drupal_render($form['submitted']['first_name']); ?>
		</div>
		<div class="col-sm-6">
			<?php print drupal_render($form['submitted']['last_name']); ?>
		</div>
	</div>

	<div class="row">
		<div class="col-sm-12">
			<?php print drupal_render_children($form); ?>
		</div>
	</div>
