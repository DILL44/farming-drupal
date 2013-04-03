<?php
/**
 * @file
 * drupal_farming_solution.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function drupal_farming_solution_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'carrousel';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Carrousel';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Carrousel';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Réinitialiser';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'slider-item';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Champ: Contenu: Image */
  $handler->display->display_options['fields']['field_carrousel_image']['id'] = 'field_carrousel_image';
  $handler->display->display_options['fields']['field_carrousel_image']['table'] = 'field_data_field_carrousel_image';
  $handler->display->display_options['fields']['field_carrousel_image']['field'] = 'field_carrousel_image';
  $handler->display->display_options['fields']['field_carrousel_image']['label'] = '';
  $handler->display->display_options['fields']['field_carrousel_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_carrousel_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_carrousel_image']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => '',
  );
  /* Champ: Contenu: Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h1';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Champ: Contenu: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Filter criterion: Contenu: Publié */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Contenu: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'carrousel' => 'carrousel',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_carrousel');
  $translatables['carrousel'] = array(
    t('Master'),
    t('Carrousel'),
    t('more'),
    t('Apply'),
    t('Réinitialiser'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Block'),
  );
  $export['carrousel'] = $view;

  return $export;
}
