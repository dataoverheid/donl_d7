<?php
/**
 * @file
 * features_content_type_evenementen.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function features_content_type_evenementen_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'events';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Events';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Alle evenementen';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Opnieuw instellen';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['class'] = 'document_tree';
  $handler->display->display_options['style_options']['wrapper_class'] = '';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Kop: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = 'Alle Open Data evenementen op een rij. Heeft u een Open Data event dat u vermeld wilt hebben? <a href="/contact">Neem contact met ons op.</a>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* Veld: Inhoud: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Veld: Inhoud: Datum */
  $handler->display->display_options['fields']['field_ev_datum']['id'] = 'field_ev_datum';
  $handler->display->display_options['fields']['field_ev_datum']['table'] = 'field_data_field_ev_datum';
  $handler->display->display_options['fields']['field_ev_datum']['field'] = 'field_ev_datum';
  $handler->display->display_options['fields']['field_ev_datum']['label'] = '';
  $handler->display->display_options['fields']['field_ev_datum']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ev_datum']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ev_datum']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Veld: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[title] - [field_ev_datum]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Sort criterion: Inhoud: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  /* Filter criterion: Inhoud: Gepubliceerd */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Inhoud: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'evenement' => 'evenement',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Inhoud: Datum -  start date (field_ev_datum) */
  $handler->display->display_options['filters']['field_ev_datum_value']['id'] = 'field_ev_datum_value';
  $handler->display->display_options['filters']['field_ev_datum_value']['table'] = 'field_data_field_ev_datum';
  $handler->display->display_options['filters']['field_ev_datum_value']['field'] = 'field_ev_datum_value';
  $handler->display->display_options['filters']['field_ev_datum_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_ev_datum_value']['group'] = 2;
  $handler->display->display_options['filters']['field_ev_datum_value']['default_date'] = 'now';
  /* Filter criterion: Inhoud: Datum - end date (field_ev_datum:value2) */
  $handler->display->display_options['filters']['field_ev_datum_value2']['id'] = 'field_ev_datum_value2';
  $handler->display->display_options['filters']['field_ev_datum_value2']['table'] = 'field_data_field_ev_datum';
  $handler->display->display_options['filters']['field_ev_datum_value2']['field'] = 'field_ev_datum_value2';
  $handler->display->display_options['filters']['field_ev_datum_value2']['operator'] = '>=';
  $handler->display->display_options['filters']['field_ev_datum_value2']['group'] = 2;
  $handler->display->display_options['filters']['field_ev_datum_value2']['default_date'] = 'now';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'interactie/events/alle-evenementen';

  /* Display: Blok */
  $handler = $view->new_display('block', 'Blok', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Data Events';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Voet: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<a href="/interactie/events/alle-evenementen">Bekijk alle events</a>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Veld: Inhoud: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Veld: Inhoud: Datum */
  $handler->display->display_options['fields']['field_ev_datum']['id'] = 'field_ev_datum';
  $handler->display->display_options['fields']['field_ev_datum']['table'] = 'field_data_field_ev_datum';
  $handler->display->display_options['fields']['field_ev_datum']['field'] = 'field_ev_datum';
  $handler->display->display_options['fields']['field_ev_datum']['label'] = '';
  $handler->display->display_options['fields']['field_ev_datum']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ev_datum']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ev_datum']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Veld: Inhoud: Organisator */
  $handler->display->display_options['fields']['field_ev_organisator']['id'] = 'field_ev_organisator';
  $handler->display->display_options['fields']['field_ev_organisator']['table'] = 'field_data_field_ev_organisator';
  $handler->display->display_options['fields']['field_ev_organisator']['field'] = 'field_ev_organisator';
  $handler->display->display_options['fields']['field_ev_organisator']['label'] = '';
  $handler->display->display_options['fields']['field_ev_organisator']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ev_organisator']['element_label_colon'] = FALSE;
  /* Veld: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_ev_datum] | [field_ev_organisator]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $translatables['events'] = array(
    t('Master'),
    t('Alle evenementen'),
    t('more'),
    t('Apply'),
    t('Opnieuw instellen'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Alle Open Data evenementen op een rij. Heeft u een Open Data event dat u vermeld wilt hebben? <a href="/contact">Neem contact met ons op.</a>'),
    t('[title] - [field_ev_datum]'),
    t('Page'),
    t('Blok'),
    t('Data Events'),
    t('<a href="/interactie/events/alle-evenementen">Bekijk alle events</a>'),
    t('[field_ev_datum] | [field_ev_organisator]'),
  );
  $export['events'] = $view;

  return $export;
}
