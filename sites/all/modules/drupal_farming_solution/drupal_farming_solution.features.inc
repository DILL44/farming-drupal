<?php
/**
 * @file
 * drupal_farming_solution.features.inc
 */

/**
 * Implements hook_views_api().
 */
function drupal_farming_solution_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function drupal_farming_solution_node_info() {
  $items = array(
    'carrousel' => array(
      'name' => t('carrousel'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
