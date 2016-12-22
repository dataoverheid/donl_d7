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
  $handler->display->display_options['row_options']['inline'] = array(
    'field_dv_data_eigenaar' => 'field_dv_data_eigenaar',
  );
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<h2>Overzicht dataverzoeken</h2>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['empty'] = TRUE;
  $handler->display->display_options['footer']['area']['content'] = 'Dataverzoeken die sinds 1 januari 2015 zijn ingediend via data.overheid.nl zijn in het bovenstaand overzicht beschikbaar. Alleen in behandeling genomen dataverzoeken worden gepubliceerd. Persoonlijke gegevens van aanvrager en/of aanbieders worden niet getoond of verwijderd uit de aanvraag voor publicatie. ';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  /* Field: Content: Fase */
  $handler->display->display_options['fields']['field_dv_fase']['id'] = 'field_dv_fase';
  $handler->display->display_options['fields']['field_dv_fase']['table'] = 'field_data_field_dv_fase';
  $handler->display->display_options['fields']['field_dv_fase']['field'] = 'field_dv_fase';
  $handler->display->display_options['fields']['field_dv_fase']['label'] = '';
  $handler->display->display_options['fields']['field_dv_fase']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_dv_fase']['element_label_colon'] = FALSE;
  /* Field: Content: Aanvraag datum */
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
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<h2>[title]</h2>
<!--- <span>[field_dv_gevraagde_data]</span>--->
<!---<span>[field_dv_thema]</span>--->
<span>Aangevraagd op: [field_dv_datum], <!-- Status: [field_dv_status],--> Fase: [field_dv_fase]</span>';
  $handler->display->display_options['fields']['title']['element_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_dv_status']['id'] = 'field_dv_status';
  $handler->display->display_options['fields']['field_dv_status']['table'] = 'field_data_field_dv_status';
  $handler->display->display_options['fields']['field_dv_status']['field'] = 'field_dv_status';
  $handler->display->display_options['fields']['field_dv_status']['element_type'] = 'strong';
  $handler->display->display_options['fields']['field_dv_status']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_dv_status']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_dv_status']['element_wrapper_type'] = 'span';
  $handler->display->display_options['fields']['field_dv_status']['element_default_classes'] = FALSE;
  /* Field: Content: Gevraagde data */
  $handler->display->display_options['fields']['field_dv_gevraagde_data']['id'] = 'field_dv_gevraagde_data';
  $handler->display->display_options['fields']['field_dv_gevraagde_data']['table'] = 'field_data_field_dv_gevraagde_data';
  $handler->display->display_options['fields']['field_dv_gevraagde_data']['field'] = 'field_dv_gevraagde_data';
  $handler->display->display_options['fields']['field_dv_gevraagde_data']['label'] = '';
  $handler->display->display_options['fields']['field_dv_gevraagde_data']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_dv_gevraagde_data']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['field_dv_gevraagde_data']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_dv_gevraagde_data']['element_type'] = '0';
  $handler->display->display_options['fields']['field_dv_gevraagde_data']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_dv_gevraagde_data']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_dv_gevraagde_data']['element_wrapper_type'] = 'span';
  $handler->display->display_options['fields']['field_dv_gevraagde_data']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_dv_gevraagde_data']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_dv_gevraagde_data']['settings'] = array(
    'trim_length' => '400',
  );
  /* Field: Content: Thema dataverzoek */
  $handler->display->display_options['fields']['field_dv_thema']['id'] = 'field_dv_thema';
  $handler->display->display_options['fields']['field_dv_thema']['table'] = 'field_data_field_dv_thema';
  $handler->display->display_options['fields']['field_dv_thema']['field'] = 'field_dv_thema';
  $handler->display->display_options['fields']['field_dv_thema']['label'] = 'Thema: ';
  $handler->display->display_options['fields']['field_dv_thema']['element_type'] = 'strong';
  $handler->display->display_options['fields']['field_dv_thema']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_dv_thema']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_dv_thema']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_dv_thema']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_dv_thema']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_dv_thema']['delta_limit'] = '5';
  $handler->display->display_options['fields']['field_dv_thema']['delta_offset'] = '0';
  /* Field: Field: Data-eigenaar */
  $handler->display->display_options['fields']['field_dv_data_eigenaar']['id'] = 'field_dv_data_eigenaar';
  $handler->display->display_options['fields']['field_dv_data_eigenaar']['table'] = 'field_data_field_dv_data_eigenaar';
  $handler->display->display_options['fields']['field_dv_data_eigenaar']['field'] = 'field_dv_data_eigenaar';
  $handler->display->display_options['fields']['field_dv_data_eigenaar']['label'] = 'Actiehouder';
  $handler->display->display_options['fields']['field_dv_data_eigenaar']['element_type'] = 'strong';
  $handler->display->display_options['fields']['field_dv_data_eigenaar']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_dv_data_eigenaar']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_dv_data_eigenaar']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_dv_data_eigenaar']['empty'] = 'Geen actiehouder';
  $handler->display->display_options['fields']['field_dv_data_eigenaar']['delta_offset'] = '0';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Status (field_dv_status) */
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
  /* Filter criterion: Content: Fase (field_dv_fase) */
  $handler->display->display_options['filters']['field_dv_fase_value']['id'] = 'field_dv_fase_value';
  $handler->display->display_options['filters']['field_dv_fase_value']['table'] = 'field_data_field_dv_fase';
  $handler->display->display_options['filters']['field_dv_fase_value']['field'] = 'field_dv_fase_value';
  $handler->display->display_options['filters']['field_dv_fase_value']['group'] = 1;
  $handler->display->display_options['filters']['field_dv_fase_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_dv_fase_value']['expose']['operator_id'] = 'field_dv_fase_value_op';
  $handler->display->display_options['filters']['field_dv_fase_value']['expose']['label'] = 'Fase';
  $handler->display->display_options['filters']['field_dv_fase_value']['expose']['operator'] = 'field_dv_fase_value_op';
  $handler->display->display_options['filters']['field_dv_fase_value']['expose']['identifier'] = 'field_dv_fase_value';
  $handler->display->display_options['filters']['field_dv_fase_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    7 => 0,
    5 => 0,
    6 => 0,
    4 => 0,
    3 => 0,
    9 => 0,
    13 => 0,
    8 => 0,
    12 => 0,
    10 => 0,
    14 => 0,
    11 => 0,
  );
  /* Filter criterion: Content: Thema dataverzoek (field_dv_thema) */
  $handler->display->display_options['filters']['field_dv_thema_tid']['id'] = 'field_dv_thema_tid';
  $handler->display->display_options['filters']['field_dv_thema_tid']['table'] = 'field_data_field_dv_thema';
  $handler->display->display_options['filters']['field_dv_thema_tid']['field'] = 'field_dv_thema_tid';
  $handler->display->display_options['filters']['field_dv_thema_tid']['value'] = '';
  $handler->display->display_options['filters']['field_dv_thema_tid']['group'] = 1;
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
    13 => 0,
    8 => 0,
    12 => 0,
    10 => 0,
    14 => 0,
    11 => 0,
  );
  $handler->display->display_options['filters']['field_dv_thema_tid']['vocabulary'] = 'taxonomiebeleidsagenda';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'dataverzoek' => 'dataverzoek',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Field: Data-eigenaar (field_dv_data_eigenaar) */
  $handler->display->display_options['filters']['field_dv_data_eigenaar_tid']['id'] = 'field_dv_data_eigenaar_tid';
  $handler->display->display_options['filters']['field_dv_data_eigenaar_tid']['table'] = 'field_data_field_dv_data_eigenaar';
  $handler->display->display_options['filters']['field_dv_data_eigenaar_tid']['field'] = 'field_dv_data_eigenaar_tid';
  $handler->display->display_options['filters']['field_dv_data_eigenaar_tid']['value'] = '';
  $handler->display->display_options['filters']['field_dv_data_eigenaar_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_dv_data_eigenaar_tid']['expose']['operator_id'] = 'field_dv_data_eigenaar_tid_op';
  $handler->display->display_options['filters']['field_dv_data_eigenaar_tid']['expose']['label'] = 'Actiehouder';
  $handler->display->display_options['filters']['field_dv_data_eigenaar_tid']['expose']['operator'] = 'field_dv_data_eigenaar_tid_op';
  $handler->display->display_options['filters']['field_dv_data_eigenaar_tid']['expose']['identifier'] = 'field_dv_data_eigenaar_tid';
  $handler->display->display_options['filters']['field_dv_data_eigenaar_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_dv_data_eigenaar_tid']['expose']['remember_roles'] = array(
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
    11 => 0,
  );
  $handler->display->display_options['filters']['field_dv_data_eigenaar_tid']['vocabulary'] = 'overheidsorganisatie';
  /* Filter criterion: Inhoud: Titel */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Naam';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'field-dv-title-wrapper';
  $handler->display->display_options['filters']['title']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    7 => 0,
    5 => 0,
    6 => 0,
    4 => 0,
    3 => 0,
    9 => 0,
    13 => 0,
    8 => 0,
    12 => 0,
    10 => 0,
    14 => 0,
    11 => 0,
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
    t('<h2>Overzicht dataverzoeken</h2>'),
    t('Dataverzoeken die sinds 1 januari 2015 zijn ingediend via data.overheid.nl zijn in het bovenstaand overzicht beschikbaar. Alleen in behandeling genomen dataverzoeken worden gepubliceerd. Persoonlijke gegevens van aanvrager en/of aanbieders worden niet getoond of verwijderd uit de aanvraag voor publicatie. '),
    t('<h2>[title]</h2>
<!--- <span>[field_dv_gevraagde_data]</span>--->
<!---<span>[field_dv_thema]</span>--->
<span>Aangevraagd op: [field_dv_datum], <!-- Status: [field_dv_status],--> Fase: [field_dv_fase]</span>'),
    t('Status'),
    t('Thema: '),
    t('Actiehouder'),
    t('Geen actiehouder'),
    t('Fase'),
    t('Thema dataverzoek'),
    t('Naam'),
    t('Page'),
  );
  $export['data_verzoeken'] = $view;

  return $export;
}
