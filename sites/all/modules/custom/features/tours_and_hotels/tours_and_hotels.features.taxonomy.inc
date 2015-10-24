<?php
/**
 * @file
 * tours_and_hotels.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function tours_and_hotels_taxonomy_default_vocabularies() {
  return array(
    'attractions' => array(
      'name' => 'Attractions',
      'machine_name' => 'attractions',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
