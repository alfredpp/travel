<?php

/**
 * @file
 * Theme the button for the date component date popup.
 */
$idKey = str_replace('_', '-', $component['form_key']);
?>
<input type="text" id="edit-submitted-<?php print $idKey ?>" class="form-control form-text <?php print implode(' ', $calendar_classes); ?>" alt="<?php print t('Open popup calendar'); ?>" title="<?php print t('Open popup calendar'); ?>" />
<span class="add-on my_icon"><i class="fa fa-calendar"></i></span>