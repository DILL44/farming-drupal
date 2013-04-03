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

function drupal_farming_solution_block_info() {
	// This example comes from node.module.
	$block['beta'] = array(
			'info' => t('beta image'),
			'cache' => DRUPAL_NO_CACHE,
	);
	return $block;
}

function drupal_farming_solution_block_view($delta = '') {
  $block = array();
  switch ($delta) {
    case 'beta':
      $block['subject'] = t('Block Name');
      $block['content'] = '<img id="beta" src="/sites/all/themes/corporateclean/mockup/beta.png" title="beta" alt="beta"/>';
      break;
  }
  return $block;
}
	