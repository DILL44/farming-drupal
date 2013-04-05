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
	$block['propulse'] = array(
			'info' => t('propulse'),
			'cache' => DRUPAL_NO_CACHE,
	);
	return $block;
}

function drupal_farming_solution_block_view($delta = '') {
  $block = array();
  switch ($delta) {
    case 'beta':
      $block['subject'] = t('');
      $block['content'] = '<img id="beta" src="/sites/all/modules/drupal_farming_solution/image/beta.png" title="beta" alt="beta"/>';
      break;
    case 'propulse':
    	$block['subject'] = t('');
      	$block['content'] = 'Utilise la solution <a href="http://www.acquia.com">aquila
      			<img style="display: inline;vertical-align: middle;" title="aquila" src="/sites/all/modules/drupal_farming_solution/image/sprite-acquia.png" alt="aquila"/></a>
				basé sur <a href="www.drupal.org">drupal
      			<img style="display: inline;vertical-align: middle;" title="drupal" src="/sites/all/modules/drupal_farming_solution/image/drupal.png" alt="drupal"/></a>
				. Utilise le thème <a href="http://www.drupalizing.com">
				<img style="display: inline;vertical-align: middle;" title="corporate clean" src="/sites/all/modules/drupal_farming_solution/image/logo.png" alt="corporate clean"/>
				de drupalizing</a>
      			. Developpée par <a href="http://www.developpement-internet-logiciel-libre.net/">
				<img style="display: inline;vertical-align: middle;" title="corporate clean" src="/sites/all/modules/drupal_farming_solution/image/dill.png" alt="dill"/>
      			</a>.';
      	break;
  }
  return $block;
}
	