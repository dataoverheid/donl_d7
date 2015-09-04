<?php
/**
 * @file
 * features_content_type_dataverzoek.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function features_content_type_dataverzoek_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'dashboard';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Dashboard';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Dashboard';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    7 => '7',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Opnieuw instellen';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'chart';
  $handler->display->display_options['style_options']['library'] = '';
  $handler->display->display_options['style_options']['label_field'] = 'field_dv_thema';
  $handler->display->display_options['style_options']['data_fields'] = array(
    'title' => 'title',
    'field_dv_thema' => 'field_dv_thema',
  );
  $handler->display->display_options['style_options']['field_colors'] = array(
    'title' => '#2f7ed8',
    'field_dv_thema' => '#0d233a',
  );
  $handler->display->display_options['style_options']['width'] = '';
  $handler->display->display_options['style_options']['height'] = '';
  $handler->display->display_options['style_options']['xaxis_labels_rotation'] = '0';
  $handler->display->display_options['style_options']['yaxis_labels_rotation'] = '0';
  /* Veld: COUNT(Inhoud: Titel) */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['group_type'] = 'count';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Veld: Inhoud: Thema dataverzoek */
  $handler->display->display_options['fields']['field_dv_thema']['id'] = 'field_dv_thema';
  $handler->display->display_options['fields']['field_dv_thema']['table'] = 'field_data_field_dv_thema';
  $handler->display->display_options['fields']['field_dv_thema']['field'] = 'field_dv_thema';
  $handler->display->display_options['fields']['field_dv_thema']['delta_offset'] = '0';
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
    'dataverzoek' => 'dataverzoek',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Inhoud: Thema dataverzoek (field_dv_thema) */
  $handler->display->display_options['filters']['field_dv_thema_tid']['id'] = 'field_dv_thema_tid';
  $handler->display->display_options['filters']['field_dv_thema_tid']['table'] = 'field_data_field_dv_thema';
  $handler->display->display_options['filters']['field_dv_thema_tid']['field'] = 'field_dv_thema_tid';
  $handler->display->display_options['filters']['field_dv_thema_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_dv_thema_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_dv_thema_tid']['expose']['operator_id'] = 'field_dv_thema_tid_op';
  $handler->display->display_options['filters']['field_dv_thema_tid']['expose']['label'] = 'Thema dataverzoek';
  $handler->display->display_options['filters']['field_dv_thema_tid']['expose']['operator'] = 'field_dv_thema_tid_op';
  $handler->display->display_options['filters']['field_dv_thema_tid']['expose']['identifier'] = 'field_dv_thema_tid';
  $handler->display->display_options['filters']['field_dv_thema_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_dv_thema_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    7 => 0,
    5 => 0,
    6 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_dv_thema_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_dv_thema_tid']['vocabulary'] = 'taxonomiebeleidsagenda';
  /* Filter criterion: Inhoud: Status (field_dv_status) */
  $handler->display->display_options['filters']['field_dv_status_value']['id'] = 'field_dv_status_value';
  $handler->display->display_options['filters']['field_dv_status_value']['table'] = 'field_data_field_dv_status';
  $handler->display->display_options['filters']['field_dv_status_value']['field'] = 'field_dv_status_value';
  $handler->display->display_options['filters']['field_dv_status_value']['group'] = 1;
  $handler->display->display_options['filters']['field_dv_status_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_dv_status_value']['expose']['operator_id'] = 'field_dv_status_value_op';
  $handler->display->display_options['filters']['field_dv_status_value']['expose']['label'] = 'Status';
  $handler->display->display_options['filters']['field_dv_status_value']['expose']['operator'] = 'field_dv_status_value_op';
  $handler->display->display_options['filters']['field_dv_status_value']['expose']['identifier'] = 'field_dv_status_value';
  $handler->display->display_options['filters']['field_dv_status_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    7 => 0,
    5 => 0,
    6 => 0,
    4 => 0,
    3 => 0,
    9 => 0,
    8 => 0,
    10 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'data/dataverzoeken/dashboard';

  /* Display: Bijlage */
  $handler = $view->new_display('attachment', 'Bijlage', 'attachment_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'chart';
  $handler->display->display_options['style_options']['library'] = '';
  $handler->display->display_options['style_options']['label_field'] = 'field_dv_status';
  $handler->display->display_options['style_options']['data_fields'] = array(
    'title' => 'title',
    'field_dv_status' => 0,
  );
  $handler->display->display_options['style_options']['field_colors'] = array(
    'title' => '#2f7ed8',
    'field_dv_status' => '#0d233a',
  );
  $handler->display->display_options['style_options']['width'] = '';
  $handler->display->display_options['style_options']['height'] = '';
  $handler->display->display_options['style_options']['xaxis_labels_rotation'] = '0';
  $handler->display->display_options['style_options']['yaxis_labels_rotation'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Veld: COUNT(Inhoud: Titel) */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['group_type'] = 'count';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Veld: Inhoud: Status */
  $handler->display->display_options['fields']['field_dv_status']['id'] = 'field_dv_status';
  $handler->display->display_options['fields']['field_dv_status']['table'] = 'field_data_field_dv_status';
  $handler->display->display_options['fields']['field_dv_status']['field'] = 'field_dv_status';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $handler->display->display_options['inherit_exposed_filters'] = TRUE;
  $translatables['dashboard'] = array(
    t('Master'),
    t('Dashboard'),
    t('more'),
    t('Apply'),
    t('Opnieuw instellen'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Thema dataverzoek'),
    t('Status'),
    t('Page'),
    t('Bijlage'),
  );
  $export['dashboard'] = $view;

  $view = new view();
  $view->name = 'data_verzoeken';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Data verzoeken';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Dataverzoeken';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Opnieuw instellen';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['class'] = 'search_result';
  $handler->display->display_options['style_options']['wrapper_class'] = '';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Veld: Inhoud: Gevraagde data */
  $handler->display->display_options['fields']['field_dv_gevraagde_data']['id'] = 'field_dv_gevraagde_data';
  $handler->display->display_options['fields']['field_dv_gevraagde_data']['table'] = 'field_data_field_dv_gevraagde_data';
  $handler->display->display_options['fields']['field_dv_gevraagde_data']['field'] = 'field_dv_gevraagde_data';
  $handler->display->display_options['fields']['field_dv_gevraagde_data']['label'] = '';
  $handler->display->display_options['fields']['field_dv_gevraagde_data']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_dv_gevraagde_data']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_dv_gevraagde_data']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['field_dv_gevraagde_data']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_dv_gevraagde_data']['element_type'] = '0';
  $handler->display->display_options['fields']['field_dv_gevraagde_data']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_dv_gevraagde_data']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_dv_gevraagde_data']['element_wrapper_type'] = 'span';
  $handler->display->display_options['fields']['field_dv_gevraagde_data']['element_default_classes'] = FALSE;
  /* Veld: Inhoud: Status */
  $handler->display->display_options['fields']['field_dv_status']['id'] = 'field_dv_status';
  $handler->display->display_options['fields']['field_dv_status']['table'] = 'field_data_field_dv_status';
  $handler->display->display_options['fields']['field_dv_status']['field'] = 'field_dv_status';
  $handler->display->display_options['fields']['field_dv_status']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_dv_status']['element_label_colon'] = FALSE;
  /* Veld: Inhoud: Aanvraag datum */
  $handler->display->display_options['fields']['field_dv_datum']['id'] = 'field_dv_datum';
  $handler->display->display_options['fields']['field_dv_datum']['table'] = 'field_data_field_dv_datum';
  $handler->display->display_options['fields']['field_dv_datum']['field'] = 'field_dv_datum';
  $handler->display->display_options['fields']['field_dv_datum']['label'] = '';
  $handler->display->display_options['fields']['field_dv_datum']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_dv_datum']['element_type'] = '0';
  $handler->display->display_options['fields']['field_dv_datum']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_dv_datum']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_dv_datum']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_dv_datum']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_dv_datum']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Veld: Inhoud: Thema dataverzoek */
  $handler->display->display_options['fields']['field_dv_thema']['id'] = 'field_dv_thema';
  $handler->display->display_options['fields']['field_dv_thema']['table'] = 'field_data_field_dv_thema';
  $handler->display->display_options['fields']['field_dv_thema']['field'] = 'field_dv_thema';
  $handler->display->display_options['fields']['field_dv_thema']['label'] = '';
  $handler->display->display_options['fields']['field_dv_thema']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_dv_thema']['element_type'] = '0';
  $handler->display->display_options['fields']['field_dv_thema']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_dv_thema']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_dv_thema']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_dv_thema']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_dv_thema']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_dv_thema']['delta_offset'] = '0';
  /* Veld: Inhoud: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '[title]
<span>[field_dv_gevraagde_data]</span>
<span>[field_dv_thema]</span>
<span>Aangevraagd op: [field_dv_datum], Status: [field_dv_status]</span>';
  $handler->display->display_options['fields']['title']['element_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Sort criterion: Inhoud: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
    'dataverzoek' => 'dataverzoek',
  );
  /* Filter criterion: Inhoud: Thema dataverzoek (field_dv_thema) */
  $handler->display->display_options['filters']['field_dv_thema_tid']['id'] = 'field_dv_thema_tid';
  $handler->display->display_options['filters']['field_dv_thema_tid']['table'] = 'field_data_field_dv_thema';
  $handler->display->display_options['filters']['field_dv_thema_tid']['field'] = 'field_dv_thema_tid';
  $handler->display->display_options['filters']['field_dv_thema_tid']['value'] = '';
  $handler->display->display_options['filters']['field_dv_thema_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_dv_thema_tid']['expose']['operator_id'] = 'field_dv_thema_tid_op';
  $handler->display->display_options['filters']['field_dv_thema_tid']['expose']['label'] = 'Thema dataverzoek';
  $handler->display->display_options['filters']['field_dv_thema_tid']['expose']['operator'] = 'field_dv_thema_tid_op';
  $handler->display->display_options['filters']['field_dv_thema_tid']['expose']['identifier'] = 'field_dv_thema_tid';
  $handler->display->display_options['filters']['field_dv_thema_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    7 => 0,
    5 => 0,
    6 => 0,
    4 => 0,
    3 => 0,
    9 => 0,
    8 => 0,
    10 => 0,
  );
  $handler->display->display_options['filters']['field_dv_thema_tid']['vocabulary'] = 'taxonomiebeleidsagenda';
  /* Filter criterion: Inhoud: Status (field_dv_status) */
  $handler->display->display_options['filters']['field_dv_status_value']['id'] = 'field_dv_status_value';
  $handler->display->display_options['filters']['field_dv_status_value']['table'] = 'field_data_field_dv_status';
  $handler->display->display_options['filters']['field_dv_status_value']['field'] = 'field_dv_status_value';
  $handler->display->display_options['filters']['field_dv_status_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_dv_status_value']['expose']['operator_id'] = 'field_dv_status_value_op';
  $handler->display->display_options['filters']['field_dv_status_value']['expose']['label'] = 'Status';
  $handler->display->display_options['filters']['field_dv_status_value']['expose']['operator'] = 'field_dv_status_value_op';
  $handler->display->display_options['filters']['field_dv_status_value']['expose']['identifier'] = 'field_dv_status_value';
  $handler->display->display_options['filters']['field_dv_status_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    7 => 0,
    5 => 0,
    6 => 0,
    4 => 0,
    3 => 0,
    9 => 0,
    8 => 0,
    10 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'dataverzoeken';
  $translatables['data_verzoeken'] = array(
    t('Master'),
    t('Dataverzoeken'),
    t('more'),
    t('Apply'),
    t('Opnieuw instellen'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Status'),
    t('[title]
<span>[field_dv_gevraagde_data]</span>
<span>[field_dv_thema]</span>
<span>Aangevraagd op: [field_dv_datum], Status: [field_dv_status]</span>'),
    t('Thema dataverzoek'),
    t('Page'),
  );
  $export['data_verzoeken'] = $view;

  return $export;
}
