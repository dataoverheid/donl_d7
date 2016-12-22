<?php
/**
 * @file
 * features_views_dashboard.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function features_views_dashboard_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'datakalender';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'donl_dashboard_link_check_datasets';
  $view->human_name = 'datakalender';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Overzicht kwaliteit datasets';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '21600';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '21600';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Zoeken';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Toon alles';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« eerste';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ vorige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'volgende ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'laatste »';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'dataset_id' => 'dataset_id',
    'dataset_maintainer' => 'dataset_maintainer',
    'dataset_name' => 'dataset_name',
    'dataset_theme' => 'dataset_theme',
    'dataset_calendar_state' => 'dataset_calendar_state',
    'dataset_date_planned' => 'dataset_date_planned',
    'dataset_date_planned_1' => 'dataset_date_planned_1',
  );
  $handler->display->display_options['style_options']['default'] = 'dataset_date_planned';
  $handler->display->display_options['style_options']['info'] = array(
    'dataset_id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'dataset_maintainer' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'dataset_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'dataset_theme' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'dataset_calendar_state' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'dataset_date_planned' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'dataset_date_planned_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Kop: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['content'] = '@total resultaten gevonden - @per_page per pagina';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Er voldoen geen resultaten aan uw filter-instellingen.';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  /* Veld: Link check datasets: Dataset id */
  $handler->display->display_options['fields']['dataset_id']['id'] = 'dataset_id';
  $handler->display->display_options['fields']['dataset_id']['table'] = 'donl_dashboard_link_check_datasets';
  $handler->display->display_options['fields']['dataset_id']['field'] = 'dataset_id';
  $handler->display->display_options['fields']['dataset_id']['label'] = '';
  $handler->display->display_options['fields']['dataset_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['dataset_id']['element_label_colon'] = FALSE;
  /* Veld: Link check datasets: Dataset maintainer */
  $handler->display->display_options['fields']['dataset_maintainer']['id'] = 'dataset_maintainer';
  $handler->display->display_options['fields']['dataset_maintainer']['table'] = 'donl_dashboard_link_check_datasets';
  $handler->display->display_options['fields']['dataset_maintainer']['field'] = 'dataset_maintainer';
  $handler->display->display_options['fields']['dataset_maintainer']['label'] = 'Data-eigenaar';
  $handler->display->display_options['fields']['dataset_maintainer']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['dataset_maintainer']['alter']['path'] = 'monitor?data_eigenaar=[dataset_maintainer]';
  /* Veld: Link check datasets: Dataset name */
  $handler->display->display_options['fields']['dataset_name']['id'] = 'dataset_name';
  $handler->display->display_options['fields']['dataset_name']['table'] = 'donl_dashboard_link_check_datasets';
  $handler->display->display_options['fields']['dataset_name']['field'] = 'dataset_name';
  $handler->display->display_options['fields']['dataset_name']['label'] = 'Dataset';
  $handler->display->display_options['fields']['dataset_name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['dataset_name']['alter']['path'] = 'data/dataset/[dataset_id]';
  /* Veld: Link check datasets: Dataset theme */
  $handler->display->display_options['fields']['dataset_theme']['id'] = 'dataset_theme';
  $handler->display->display_options['fields']['dataset_theme']['table'] = 'donl_dashboard_link_check_datasets';
  $handler->display->display_options['fields']['dataset_theme']['field'] = 'dataset_theme';
  $handler->display->display_options['fields']['dataset_theme']['label'] = 'Thema';
  /* Veld: Link check datasets: Calendar state */
  $handler->display->display_options['fields']['dataset_calendar_state']['id'] = 'dataset_calendar_state';
  $handler->display->display_options['fields']['dataset_calendar_state']['table'] = 'donl_dashboard_link_check_datasets';
  $handler->display->display_options['fields']['dataset_calendar_state']['field'] = 'dataset_calendar_state';
  $handler->display->display_options['fields']['dataset_calendar_state']['label'] = 'Status';
  /* Veld: Link check datasets: Date planned */
  $handler->display->display_options['fields']['dataset_date_planned']['id'] = 'dataset_date_planned';
  $handler->display->display_options['fields']['dataset_date_planned']['table'] = 'donl_dashboard_link_check_datasets';
  $handler->display->display_options['fields']['dataset_date_planned']['field'] = 'dataset_date_planned';
  $handler->display->display_options['fields']['dataset_date_planned']['label'] = 'Datum';
  $handler->display->display_options['fields']['dataset_date_planned']['date_format'] = 'custom';
  $handler->display->display_options['fields']['dataset_date_planned']['custom_date_format'] = 'd-m-Y';
  $handler->display->display_options['fields']['dataset_date_planned']['second_date_format'] = 'long';
  /* Veld: Link check datasets: Date planned */
  $handler->display->display_options['fields']['dataset_date_planned_1']['id'] = 'dataset_date_planned_1';
  $handler->display->display_options['fields']['dataset_date_planned_1']['table'] = 'donl_dashboard_link_check_datasets';
  $handler->display->display_options['fields']['dataset_date_planned_1']['field'] = 'dataset_date_planned';
  $handler->display->display_options['fields']['dataset_date_planned_1']['label'] = 'Op schema';
  $handler->display->display_options['fields']['dataset_date_planned_1']['date_format'] = 'custom';
  $handler->display->display_options['fields']['dataset_date_planned_1']['custom_date_format'] = 'U';
  $handler->display->display_options['fields']['dataset_date_planned_1']['second_date_format'] = 'long';
  /* Contextual filter: Link check datasets: Dataset maintainer */
  $handler->display->display_options['arguments']['dataset_maintainer']['id'] = 'dataset_maintainer';
  $handler->display->display_options['arguments']['dataset_maintainer']['table'] = 'donl_dashboard_link_check_datasets';
  $handler->display->display_options['arguments']['dataset_maintainer']['field'] = 'dataset_maintainer';
  $handler->display->display_options['arguments']['dataset_maintainer']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['dataset_maintainer']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['dataset_maintainer']['summary']['format'] = 'default_summary';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  /* Filter criterion: Link check datasets: Dataset maintainer */
  $handler->display->display_options['filters']['dataset_maintainer']['id'] = 'dataset_maintainer';
  $handler->display->display_options['filters']['dataset_maintainer']['table'] = 'donl_dashboard_link_check_datasets';
  $handler->display->display_options['filters']['dataset_maintainer']['field'] = 'dataset_maintainer';
  $handler->display->display_options['filters']['dataset_maintainer']['group'] = 1;
  $handler->display->display_options['filters']['dataset_maintainer']['exposed'] = TRUE;
  $handler->display->display_options['filters']['dataset_maintainer']['expose']['operator_id'] = 'dataset_maintainer_op';
  $handler->display->display_options['filters']['dataset_maintainer']['expose']['label'] = 'Data-eigenaar';
  $handler->display->display_options['filters']['dataset_maintainer']['expose']['operator'] = 'dataset_maintainer_op';
  $handler->display->display_options['filters']['dataset_maintainer']['expose']['identifier'] = 'donl_maintainer_select';
  $handler->display->display_options['filters']['dataset_maintainer']['expose']['remember_roles'] = array(
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
  /* Filter criterion: Link check datasets: Calendar state */
  $handler->display->display_options['filters']['dataset_calendar_state']['id'] = 'dataset_calendar_state';
  $handler->display->display_options['filters']['dataset_calendar_state']['table'] = 'donl_dashboard_link_check_datasets';
  $handler->display->display_options['filters']['dataset_calendar_state']['field'] = 'dataset_calendar_state';
  $handler->display->display_options['filters']['dataset_calendar_state']['group'] = 1;
  $handler->display->display_options['filters']['dataset_calendar_state']['exposed'] = TRUE;
  $handler->display->display_options['filters']['dataset_calendar_state']['expose']['operator_id'] = 'dataset_calendar_state_op';
  $handler->display->display_options['filters']['dataset_calendar_state']['expose']['label'] = 'Status';
  $handler->display->display_options['filters']['dataset_calendar_state']['expose']['operator'] = 'dataset_calendar_state_op';
  $handler->display->display_options['filters']['dataset_calendar_state']['expose']['identifier'] = 'dataset_calendar_state';
  $handler->display->display_options['filters']['dataset_calendar_state']['expose']['remember_roles'] = array(
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
  /* Filter criterion: Link check datasets: Dataset theme */
  $handler->display->display_options['filters']['dataset_theme']['id'] = 'dataset_theme';
  $handler->display->display_options['filters']['dataset_theme']['table'] = 'donl_dashboard_link_check_datasets';
  $handler->display->display_options['filters']['dataset_theme']['field'] = 'dataset_theme';
  $handler->display->display_options['filters']['dataset_theme']['group'] = 1;
  $handler->display->display_options['filters']['dataset_theme']['exposed'] = TRUE;
  $handler->display->display_options['filters']['dataset_theme']['expose']['operator_id'] = 'dataset_theme_op';
  $handler->display->display_options['filters']['dataset_theme']['expose']['label'] = 'Thema';
  $handler->display->display_options['filters']['dataset_theme']['expose']['operator'] = 'dataset_theme_op';
  $handler->display->display_options['filters']['dataset_theme']['expose']['identifier'] = 'dataset_theme';
  $handler->display->display_options['filters']['dataset_theme']['expose']['remember_roles'] = array(
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
  /* Filter criterion: Link check datasets: Date planned */
  $handler->display->display_options['filters']['dataset_date_planned']['id'] = 'dataset_date_planned';
  $handler->display->display_options['filters']['dataset_date_planned']['table'] = 'donl_dashboard_link_check_datasets';
  $handler->display->display_options['filters']['dataset_date_planned']['field'] = 'dataset_date_planned';
  $handler->display->display_options['filters']['dataset_date_planned']['operator'] = 'between';
  $handler->display->display_options['filters']['dataset_date_planned']['group'] = 1;
  $handler->display->display_options['filters']['dataset_date_planned']['exposed'] = TRUE;
  $handler->display->display_options['filters']['dataset_date_planned']['expose']['operator_id'] = 'dataset_date_planned_op';
  $handler->display->display_options['filters']['dataset_date_planned']['expose']['label'] = 'Periode';
  $handler->display->display_options['filters']['dataset_date_planned']['expose']['operator'] = 'dataset_date_planned_op';
  $handler->display->display_options['filters']['dataset_date_planned']['expose']['identifier'] = 'dataset_date_planned';
  $handler->display->display_options['filters']['dataset_date_planned']['expose']['remember_roles'] = array(
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
  /* Filter criterion: Link check datasets: Calendar state */
  $handler->display->display_options['filters']['dataset_calendar_state_1']['id'] = 'dataset_calendar_state_1';
  $handler->display->display_options['filters']['dataset_calendar_state_1']['table'] = 'donl_dashboard_link_check_datasets';
  $handler->display->display_options['filters']['dataset_calendar_state_1']['field'] = 'dataset_calendar_state';
  $handler->display->display_options['filters']['dataset_calendar_state_1']['value'] = 'In onderzoek';
  $handler->display->display_options['filters']['dataset_calendar_state_1']['group'] = 2;
  /* Filter criterion: Link check datasets: Calendar state */
  $handler->display->display_options['filters']['dataset_calendar_state_2']['id'] = 'dataset_calendar_state_2';
  $handler->display->display_options['filters']['dataset_calendar_state_2']['table'] = 'donl_dashboard_link_check_datasets';
  $handler->display->display_options['filters']['dataset_calendar_state_2']['field'] = 'dataset_calendar_state';
  $handler->display->display_options['filters']['dataset_calendar_state_2']['value'] = 'Gepland';
  $handler->display->display_options['filters']['dataset_calendar_state_2']['group'] = 2;
  /* Filter criterion: Link check datasets: Dataset catalog */
  $handler->display->display_options['filters']['dataset_catalog']['id'] = 'dataset_catalog';
  $handler->display->display_options['filters']['dataset_catalog']['table'] = 'donl_dashboard_link_check_datasets';
  $handler->display->display_options['filters']['dataset_catalog']['field'] = 'dataset_catalog';
  $handler->display->display_options['filters']['dataset_catalog']['exposed'] = TRUE;
  $handler->display->display_options['filters']['dataset_catalog']['expose']['operator_id'] = 'dataset_catalog_op';
  $handler->display->display_options['filters']['dataset_catalog']['expose']['label'] = 'Dataset catalog';
  $handler->display->display_options['filters']['dataset_catalog']['expose']['operator'] = 'dataset_catalog_op';
  $handler->display->display_options['filters']['dataset_catalog']['expose']['identifier'] = 'dataset_catalog';
  $handler->display->display_options['filters']['dataset_catalog']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['path'] = 'monitor/datakalender';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Datakalender';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $translatables['datakalender'] = array(
    t('Master'),
    t('Overzicht kwaliteit datasets'),
    t('more'),
    t('Zoeken'),
    t('Toon alles'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« eerste'),
    t('‹ vorige'),
    t('volgende ›'),
    t('laatste »'),
    t('@total resultaten gevonden - @per_page per pagina'),
    t('Er voldoen geen resultaten aan uw filter-instellingen.'),
    t('Data-eigenaar'),
    t('Dataset'),
    t('Thema'),
    t('Status'),
    t('Datum'),
    t('Op schema'),
    t('Alle'),
    t('Periode'),
    t('Dataset catalog'),
    t('Page'),
  );
  $export['datakalender'] = $view;

  $view = new view();
  $view->name = 'linkcheck';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'donl_dashboard_link_check_datasets';
  $view->human_name = 'linkcheck (resources)';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Overzicht niet werkende bronnen';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '21600';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '21600';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Zoeken';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Toon alles';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '5';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« eerste';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ vorige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'volgende ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'laatste »';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'dataset_id' => 'dataset_id',
    'resource_id' => 'resource_id',
    'dataset_name' => 'dataset_name',
    'resource_name' => 'resource_name',
    'state_report' => 'state_report',
    'state_code' => 'state_code',
    'dataset_broken_resources' => 'dataset_broken_resources',
    'dataset_working_resources' => 'dataset_working_resources',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'dataset_id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'resource_id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'dataset_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'resource_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'state_report' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'state_code' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'dataset_broken_resources' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'dataset_working_resources' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Kop: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['content'] = '@total niet werkende databronnen gevonden.';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Er voldoen geen resultaten aan uw filter-instellingen.';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  /* Relationship: Link check datasets: Datasources */
  $handler->display->display_options['relationships']['dataset_id']['id'] = 'dataset_id';
  $handler->display->display_options['relationships']['dataset_id']['table'] = 'donl_dashboard_link_check_datasets';
  $handler->display->display_options['relationships']['dataset_id']['field'] = 'dataset_id';
  $handler->display->display_options['relationships']['dataset_id']['required'] = TRUE;
  /* Veld: dataset id */
  $handler->display->display_options['fields']['dataset_id']['id'] = 'dataset_id';
  $handler->display->display_options['fields']['dataset_id']['table'] = 'donl_dashboard_link_check_datasets';
  $handler->display->display_options['fields']['dataset_id']['field'] = 'dataset_id';
  $handler->display->display_options['fields']['dataset_id']['ui_name'] = 'dataset id';
  $handler->display->display_options['fields']['dataset_id']['label'] = '';
  $handler->display->display_options['fields']['dataset_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['dataset_id']['element_label_colon'] = FALSE;
  /* Veld: resource id */
  $handler->display->display_options['fields']['resource_id']['id'] = 'resource_id';
  $handler->display->display_options['fields']['resource_id']['table'] = 'donl_dashboard_link_check_resources';
  $handler->display->display_options['fields']['resource_id']['field'] = 'resource_id';
  $handler->display->display_options['fields']['resource_id']['relationship'] = 'dataset_id';
  $handler->display->display_options['fields']['resource_id']['ui_name'] = 'resource id';
  $handler->display->display_options['fields']['resource_id']['label'] = '';
  $handler->display->display_options['fields']['resource_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['resource_id']['element_label_colon'] = FALSE;
  /* Veld: Link check datasets: Dataset name */
  $handler->display->display_options['fields']['dataset_name']['id'] = 'dataset_name';
  $handler->display->display_options['fields']['dataset_name']['table'] = 'donl_dashboard_link_check_datasets';
  $handler->display->display_options['fields']['dataset_name']['field'] = 'dataset_name';
  $handler->display->display_options['fields']['dataset_name']['label'] = 'Dataset';
  $handler->display->display_options['fields']['dataset_name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['dataset_name']['alter']['path'] = '/data/dataset/[dataset_id]';
  /* Veld: Link check resources: Resource name */
  $handler->display->display_options['fields']['resource_name']['id'] = 'resource_name';
  $handler->display->display_options['fields']['resource_name']['table'] = 'donl_dashboard_link_check_resources';
  $handler->display->display_options['fields']['resource_name']['field'] = 'resource_name';
  $handler->display->display_options['fields']['resource_name']['relationship'] = 'dataset_id';
  $handler->display->display_options['fields']['resource_name']['label'] = 'Bron';
  $handler->display->display_options['fields']['resource_name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['resource_name']['alter']['path'] = '/data/dataset/[dataset_id]/resource/[resource_id]';
  $handler->display->display_options['fields']['resource_name']['empty'] = '-';
  /* Filter criterion: Link check resources: State */
  $handler->display->display_options['filters']['state']['id'] = 'state';
  $handler->display->display_options['filters']['state']['table'] = 'donl_dashboard_link_check_resources';
  $handler->display->display_options['filters']['state']['field'] = 'state';
  $handler->display->display_options['filters']['state']['relationship'] = 'dataset_id';
  $handler->display->display_options['filters']['state']['value'] = '0';
  $handler->display->display_options['filters']['state']['group'] = 1;
  /* Filter criterion: Link check datasets: Dataset maintainer */
  $handler->display->display_options['filters']['dataset_maintainer']['id'] = 'dataset_maintainer';
  $handler->display->display_options['filters']['dataset_maintainer']['table'] = 'donl_dashboard_link_check_datasets';
  $handler->display->display_options['filters']['dataset_maintainer']['field'] = 'dataset_maintainer';
  $handler->display->display_options['filters']['dataset_maintainer']['group'] = 1;
  $handler->display->display_options['filters']['dataset_maintainer']['exposed'] = TRUE;
  $handler->display->display_options['filters']['dataset_maintainer']['expose']['operator_id'] = 'dataset_maintainer_op';
  $handler->display->display_options['filters']['dataset_maintainer']['expose']['label'] = 'Data-eigenaar';
  $handler->display->display_options['filters']['dataset_maintainer']['expose']['operator'] = 'dataset_maintainer_op';
  $handler->display->display_options['filters']['dataset_maintainer']['expose']['identifier'] = 'donl_maintainer2_select';
  $handler->display->display_options['filters']['dataset_maintainer']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['path'] = 'monitor/bronnen';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Bronnen';
  $handler->display->display_options['menu']['weight'] = '10';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $translatables['linkcheck'] = array(
    t('Master'),
    t('Overzicht niet werkende bronnen'),
    t('more'),
    t('Zoeken'),
    t('Toon alles'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« eerste'),
    t('‹ vorige'),
    t('volgende ›'),
    t('laatste »'),
    t('@total niet werkende databronnen gevonden.'),
    t('Er voldoen geen resultaten aan uw filter-instellingen.'),
    t('Datasources'),
    t('Dataset'),
    t('Bron'),
    t('-'),
    t('Data-eigenaar'),
    t('Page'),
  );
  $export['linkcheck'] = $view;

  $view = new view();
  $view->name = 'linkcheck2';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'donl_dashboard_link_check_datasets';
  $view->human_name = 'linkcheck (datasets)';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Overzicht kwaliteit datasets';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '21600';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '21600';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Zoeken';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Toon alles';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« eerste';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ vorige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'volgende ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'laatste »';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'dataset_id' => 'dataset_id',
    'dataset_name' => 'dataset_name',
    'dataset_maintainer' => 'dataset_maintainer',
    'dataset_total_resources' => 'dataset_total_resources',
    'dataset_working_resources' => 'dataset_working_resources',
    'dataset_broken_resources' => 'dataset_broken_resources',
    'dataset_theme' => 'dataset_theme',
    'dataset_catalog' => 'dataset_catalog',
    'dataset_organization_part_of' => 'dataset_organization_part_of',
    'dataset_organization_type' => 'dataset_organization_type',
    'dataset_percentage_working_resources' => 'dataset_percentage_working_resources',
    'dataset_state' => 'dataset_state',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'dataset_id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'dataset_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'dataset_maintainer' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'dataset_total_resources' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'dataset_working_resources' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'dataset_broken_resources' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'dataset_theme' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'dataset_catalog' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'dataset_organization_part_of' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'dataset_organization_type' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'dataset_percentage_working_resources' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'dataset_state' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Kop: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['content'] = '@total resultaten gevonden - @per_page per pagina';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Er voldoen geen resultaten aan uw filter-instellingen.';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  /* Veld: Link check datasets: Dataset id */
  $handler->display->display_options['fields']['dataset_id']['id'] = 'dataset_id';
  $handler->display->display_options['fields']['dataset_id']['table'] = 'donl_dashboard_link_check_datasets';
  $handler->display->display_options['fields']['dataset_id']['field'] = 'dataset_id';
  $handler->display->display_options['fields']['dataset_id']['label'] = '';
  $handler->display->display_options['fields']['dataset_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['dataset_id']['element_label_colon'] = FALSE;
  /* Veld: Link check datasets: Dataset name */
  $handler->display->display_options['fields']['dataset_name']['id'] = 'dataset_name';
  $handler->display->display_options['fields']['dataset_name']['table'] = 'donl_dashboard_link_check_datasets';
  $handler->display->display_options['fields']['dataset_name']['field'] = 'dataset_name';
  $handler->display->display_options['fields']['dataset_name']['label'] = 'Dataset';
  $handler->display->display_options['fields']['dataset_name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['dataset_name']['alter']['path'] = 'data/dataset/[dataset_id]';
  /* Veld: Link check datasets: Dataset maintainer */
  $handler->display->display_options['fields']['dataset_maintainer']['id'] = 'dataset_maintainer';
  $handler->display->display_options['fields']['dataset_maintainer']['table'] = 'donl_dashboard_link_check_datasets';
  $handler->display->display_options['fields']['dataset_maintainer']['field'] = 'dataset_maintainer';
  $handler->display->display_options['fields']['dataset_maintainer']['label'] = 'Data-eigenaar';
  $handler->display->display_options['fields']['dataset_maintainer']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['dataset_maintainer']['alter']['path'] = 'monitor?data_eigenaar=[dataset_maintainer]';
  /* Veld: Link check datasets: Total resources */
  $handler->display->display_options['fields']['dataset_total_resources']['id'] = 'dataset_total_resources';
  $handler->display->display_options['fields']['dataset_total_resources']['table'] = 'donl_dashboard_link_check_datasets';
  $handler->display->display_options['fields']['dataset_total_resources']['field'] = 'dataset_total_resources';
  $handler->display->display_options['fields']['dataset_total_resources']['label'] = 'Aantal bronnen';
  $handler->display->display_options['fields']['dataset_total_resources']['exclude'] = TRUE;
  /* Veld: Link check datasets: Working recources */
  $handler->display->display_options['fields']['dataset_working_resources']['id'] = 'dataset_working_resources';
  $handler->display->display_options['fields']['dataset_working_resources']['table'] = 'donl_dashboard_link_check_datasets';
  $handler->display->display_options['fields']['dataset_working_resources']['field'] = 'dataset_working_resources';
  $handler->display->display_options['fields']['dataset_working_resources']['label'] = 'Werkende bronnen';
  $handler->display->display_options['fields']['dataset_working_resources']['exclude'] = TRUE;
  /* Veld: Link check datasets: Broken recources */
  $handler->display->display_options['fields']['dataset_broken_resources']['id'] = 'dataset_broken_resources';
  $handler->display->display_options['fields']['dataset_broken_resources']['table'] = 'donl_dashboard_link_check_datasets';
  $handler->display->display_options['fields']['dataset_broken_resources']['field'] = 'dataset_broken_resources';
  $handler->display->display_options['fields']['dataset_broken_resources']['label'] = 'Kapotte bronnen';
  $handler->display->display_options['fields']['dataset_broken_resources']['exclude'] = TRUE;
  /* Veld: Link check datasets: Dataset theme */
  $handler->display->display_options['fields']['dataset_theme']['id'] = 'dataset_theme';
  $handler->display->display_options['fields']['dataset_theme']['table'] = 'donl_dashboard_link_check_datasets';
  $handler->display->display_options['fields']['dataset_theme']['field'] = 'dataset_theme';
  $handler->display->display_options['fields']['dataset_theme']['exclude'] = TRUE;
  /* Veld: Link check datasets: Dataset catalog */
  $handler->display->display_options['fields']['dataset_catalog']['id'] = 'dataset_catalog';
  $handler->display->display_options['fields']['dataset_catalog']['table'] = 'donl_dashboard_link_check_datasets';
  $handler->display->display_options['fields']['dataset_catalog']['field'] = 'dataset_catalog';
  $handler->display->display_options['fields']['dataset_catalog']['exclude'] = TRUE;
  /* Veld: Link check datasets: Dataset organization part of */
  $handler->display->display_options['fields']['dataset_organization_part_of']['id'] = 'dataset_organization_part_of';
  $handler->display->display_options['fields']['dataset_organization_part_of']['table'] = 'donl_dashboard_link_check_datasets';
  $handler->display->display_options['fields']['dataset_organization_part_of']['field'] = 'dataset_organization_part_of';
  $handler->display->display_options['fields']['dataset_organization_part_of']['exclude'] = TRUE;
  /* Veld: Link check datasets: Dataset organization type */
  $handler->display->display_options['fields']['dataset_organization_type']['id'] = 'dataset_organization_type';
  $handler->display->display_options['fields']['dataset_organization_type']['table'] = 'donl_dashboard_link_check_datasets';
  $handler->display->display_options['fields']['dataset_organization_type']['field'] = 'dataset_organization_type';
  $handler->display->display_options['fields']['dataset_organization_type']['exclude'] = TRUE;
  /* Veld: Link check datasets: Percentage working resources */
  $handler->display->display_options['fields']['dataset_percentage_working_resources']['id'] = 'dataset_percentage_working_resources';
  $handler->display->display_options['fields']['dataset_percentage_working_resources']['table'] = 'donl_dashboard_link_check_datasets';
  $handler->display->display_options['fields']['dataset_percentage_working_resources']['field'] = 'dataset_percentage_working_resources';
  $handler->display->display_options['fields']['dataset_percentage_working_resources']['label'] = 'Link-kwaliteit';
  $handler->display->display_options['fields']['dataset_percentage_working_resources']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['dataset_percentage_working_resources']['alter']['text'] = '[dataset_working_resources] / [dataset_total_resources] - [dataset_percentage_working_resources]%';
  /* Veld: Link check datasets: Dataset status */
  $handler->display->display_options['fields']['dataset_state']['id'] = 'dataset_state';
  $handler->display->display_options['fields']['dataset_state']['table'] = 'donl_dashboard_link_check_datasets';
  $handler->display->display_options['fields']['dataset_state']['field'] = 'dataset_state';
  $handler->display->display_options['fields']['dataset_state']['label'] = 'Status';
  $handler->display->display_options['fields']['dataset_state']['element_type'] = 'span';
  $handler->display->display_options['fields']['dataset_state']['element_class'] = 'status-[dataset_state] status';
  /* Sort criterion: Link check datasets: Broken recources */
  $handler->display->display_options['sorts']['dataset_broken_resources']['id'] = 'dataset_broken_resources';
  $handler->display->display_options['sorts']['dataset_broken_resources']['table'] = 'donl_dashboard_link_check_datasets';
  $handler->display->display_options['sorts']['dataset_broken_resources']['field'] = 'dataset_broken_resources';
  $handler->display->display_options['sorts']['dataset_broken_resources']['order'] = 'DESC';
  /* Sort criterion: Link check datasets: Percentage working resources */
  $handler->display->display_options['sorts']['dataset_percentage_working_resources']['id'] = 'dataset_percentage_working_resources';
  $handler->display->display_options['sorts']['dataset_percentage_working_resources']['table'] = 'donl_dashboard_link_check_datasets';
  $handler->display->display_options['sorts']['dataset_percentage_working_resources']['field'] = 'dataset_percentage_working_resources';
  $handler->display->display_options['sorts']['dataset_percentage_working_resources']['order'] = 'DESC';
  /* Contextual filter: Link check datasets: Dataset maintainer */
  $handler->display->display_options['arguments']['dataset_maintainer']['id'] = 'dataset_maintainer';
  $handler->display->display_options['arguments']['dataset_maintainer']['table'] = 'donl_dashboard_link_check_datasets';
  $handler->display->display_options['arguments']['dataset_maintainer']['field'] = 'dataset_maintainer';
  $handler->display->display_options['arguments']['dataset_maintainer']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['dataset_maintainer']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['dataset_maintainer']['summary']['format'] = 'default_summary';
  /* Filter criterion: Link check datasets: Dataset maintainer */
  $handler->display->display_options['filters']['dataset_maintainer']['id'] = 'dataset_maintainer';
  $handler->display->display_options['filters']['dataset_maintainer']['table'] = 'donl_dashboard_link_check_datasets';
  $handler->display->display_options['filters']['dataset_maintainer']['field'] = 'dataset_maintainer';
  $handler->display->display_options['filters']['dataset_maintainer']['group'] = 1;
  $handler->display->display_options['filters']['dataset_maintainer']['exposed'] = TRUE;
  $handler->display->display_options['filters']['dataset_maintainer']['expose']['operator_id'] = 'dataset_maintainer_op';
  $handler->display->display_options['filters']['dataset_maintainer']['expose']['label'] = 'Data-eigenaar';
  $handler->display->display_options['filters']['dataset_maintainer']['expose']['operator'] = 'dataset_maintainer_op';
  $handler->display->display_options['filters']['dataset_maintainer']['expose']['identifier'] = 'donl_maintainer_select';
  $handler->display->display_options['filters']['dataset_maintainer']['expose']['remember_roles'] = array(
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
  /* Filter criterion: Link check datasets: Dataset status */
  $handler->display->display_options['filters']['dataset_state']['id'] = 'dataset_state';
  $handler->display->display_options['filters']['dataset_state']['table'] = 'donl_dashboard_link_check_datasets';
  $handler->display->display_options['filters']['dataset_state']['field'] = 'dataset_state';
  $handler->display->display_options['filters']['dataset_state']['group'] = 1;
  $handler->display->display_options['filters']['dataset_state']['exposed'] = TRUE;
  $handler->display->display_options['filters']['dataset_state']['expose']['operator_id'] = 'dataset_state_op';
  $handler->display->display_options['filters']['dataset_state']['expose']['label'] = 'Status';
  $handler->display->display_options['filters']['dataset_state']['expose']['operator'] = 'dataset_state_op';
  $handler->display->display_options['filters']['dataset_state']['expose']['identifier'] = 'dataset_state';
  $handler->display->display_options['filters']['dataset_state']['expose']['remember_roles'] = array(
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
  /* Filter criterion: Link check datasets: Dataset catalog */
  $handler->display->display_options['filters']['dataset_catalog']['id'] = 'dataset_catalog';
  $handler->display->display_options['filters']['dataset_catalog']['table'] = 'donl_dashboard_link_check_datasets';
  $handler->display->display_options['filters']['dataset_catalog']['field'] = 'dataset_catalog';
  $handler->display->display_options['filters']['dataset_catalog']['group'] = 1;
  $handler->display->display_options['filters']['dataset_catalog']['exposed'] = TRUE;
  $handler->display->display_options['filters']['dataset_catalog']['expose']['operator_id'] = 'dataset_catalog_op';
  $handler->display->display_options['filters']['dataset_catalog']['expose']['label'] = 'Catalogus';
  $handler->display->display_options['filters']['dataset_catalog']['expose']['operator'] = 'dataset_catalog_op';
  $handler->display->display_options['filters']['dataset_catalog']['expose']['identifier'] = 'dataset_catalog';
  $handler->display->display_options['filters']['dataset_catalog']['expose']['remember_roles'] = array(
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
  /* Filter criterion: Link check datasets: Dataset theme */
  $handler->display->display_options['filters']['dataset_theme']['id'] = 'dataset_theme';
  $handler->display->display_options['filters']['dataset_theme']['table'] = 'donl_dashboard_link_check_datasets';
  $handler->display->display_options['filters']['dataset_theme']['field'] = 'dataset_theme';
  $handler->display->display_options['filters']['dataset_theme']['exposed'] = TRUE;
  $handler->display->display_options['filters']['dataset_theme']['expose']['operator_id'] = 'dataset_theme_op';
  $handler->display->display_options['filters']['dataset_theme']['expose']['label'] = 'Dataset theme';
  $handler->display->display_options['filters']['dataset_theme']['expose']['operator'] = 'dataset_theme_op';
  $handler->display->display_options['filters']['dataset_theme']['expose']['identifier'] = 'dataset_theme';
  $handler->display->display_options['filters']['dataset_theme']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['path'] = 'monitor/datasets';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Datasets';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $translatables['linkcheck2'] = array(
    t('Master'),
    t('Overzicht kwaliteit datasets'),
    t('more'),
    t('Zoeken'),
    t('Toon alles'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« eerste'),
    t('‹ vorige'),
    t('volgende ›'),
    t('laatste »'),
    t('@total resultaten gevonden - @per_page per pagina'),
    t('Er voldoen geen resultaten aan uw filter-instellingen.'),
    t('Dataset'),
    t('Data-eigenaar'),
    t('Aantal bronnen'),
    t('Werkende bronnen'),
    t('Kapotte bronnen'),
    t('Dataset theme'),
    t('Dataset catalog'),
    t('Dataset organization part of'),
    t('Dataset organization type'),
    t('Link-kwaliteit'),
    t('[dataset_working_resources] / [dataset_total_resources] - [dataset_percentage_working_resources]%'),
    t('Status'),
    t('Alle'),
    t('Catalogus'),
    t('Page'),
  );
  $export['linkcheck2'] = $view;

  $view = new view();
  $view->name = 'linkcheck_organisaties_';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'donl_dashboard_link_check_datasets';
  $view->human_name = 'linkcheck (organisaties)';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Overzicht data-eigenaren';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '21600';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '21600';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Zoeken';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Toon alles';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« eerste';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ vorige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'volgende ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'laatste »';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'dataset_organization_type' => 'dataset_organization_type',
    'dataset_organization_part_of' => 'dataset_organization_part_of',
    'dataset_maintainer' => 'dataset_maintainer',
    'dataset_total_resources' => 'dataset_total_resources',
    'dataset_name' => 'dataset_name',
    'dataset_working_resources' => 'dataset_working_resources',
    'dataset_broken_resources' => 'dataset_broken_resources',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'dataset_organization_type' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'dataset_organization_part_of' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'dataset_maintainer' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'dataset_total_resources' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'dataset_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'dataset_working_resources' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'dataset_broken_resources' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Kop: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['content'] = '@total resultaten gevonden - @per_page per pagina';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Er voldoen geen resultaten aan uw filter-instellingen.';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  /* Veld: Link check datasets: Dataset maintainer */
  $handler->display->display_options['fields']['dataset_maintainer']['id'] = 'dataset_maintainer';
  $handler->display->display_options['fields']['dataset_maintainer']['table'] = 'donl_dashboard_link_check_datasets';
  $handler->display->display_options['fields']['dataset_maintainer']['field'] = 'dataset_maintainer';
  $handler->display->display_options['fields']['dataset_maintainer']['label'] = 'Data-eigenaar';
  $handler->display->display_options['fields']['dataset_maintainer']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['dataset_maintainer']['alter']['path'] = 'monitor?data_eigenaar=[dataset_maintainer]';
  /* Veld: Link check datasets: Dataset organization type */
  $handler->display->display_options['fields']['dataset_organization_type']['id'] = 'dataset_organization_type';
  $handler->display->display_options['fields']['dataset_organization_type']['table'] = 'donl_dashboard_link_check_datasets';
  $handler->display->display_options['fields']['dataset_organization_type']['field'] = 'dataset_organization_type';
  $handler->display->display_options['fields']['dataset_organization_type']['label'] = 'Soort organisatie';
  /* Veld: Link check datasets: Dataset organization part of */
  $handler->display->display_options['fields']['dataset_organization_part_of']['id'] = 'dataset_organization_part_of';
  $handler->display->display_options['fields']['dataset_organization_part_of']['table'] = 'donl_dashboard_link_check_datasets';
  $handler->display->display_options['fields']['dataset_organization_part_of']['field'] = 'dataset_organization_part_of';
  $handler->display->display_options['fields']['dataset_organization_part_of']['label'] = 'Valt onder';
  /* Veld: SUM(Link check datasets: Total resources) */
  $handler->display->display_options['fields']['dataset_total_resources']['id'] = 'dataset_total_resources';
  $handler->display->display_options['fields']['dataset_total_resources']['table'] = 'donl_dashboard_link_check_datasets';
  $handler->display->display_options['fields']['dataset_total_resources']['field'] = 'dataset_total_resources';
  $handler->display->display_options['fields']['dataset_total_resources']['group_type'] = 'sum';
  $handler->display->display_options['fields']['dataset_total_resources']['label'] = 'Aantal bronnen';
  $handler->display->display_options['fields']['dataset_total_resources']['exclude'] = TRUE;
  /* Veld: COUNT(Link check datasets: Dataset name) */
  $handler->display->display_options['fields']['dataset_name']['id'] = 'dataset_name';
  $handler->display->display_options['fields']['dataset_name']['table'] = 'donl_dashboard_link_check_datasets';
  $handler->display->display_options['fields']['dataset_name']['field'] = 'dataset_name';
  $handler->display->display_options['fields']['dataset_name']['group_type'] = 'count';
  $handler->display->display_options['fields']['dataset_name']['label'] = 'Datasets';
  /* Veld: SUM(Link check datasets: Working recources) */
  $handler->display->display_options['fields']['dataset_working_resources']['id'] = 'dataset_working_resources';
  $handler->display->display_options['fields']['dataset_working_resources']['table'] = 'donl_dashboard_link_check_datasets';
  $handler->display->display_options['fields']['dataset_working_resources']['field'] = 'dataset_working_resources';
  $handler->display->display_options['fields']['dataset_working_resources']['group_type'] = 'sum';
  $handler->display->display_options['fields']['dataset_working_resources']['label'] = 'Link-kwaliteit';
  $handler->display->display_options['fields']['dataset_working_resources']['alter']['alter_text'] = TRUE;
  /* Veld: SUM(Link check datasets: Broken recources) */
  $handler->display->display_options['fields']['dataset_broken_resources']['id'] = 'dataset_broken_resources';
  $handler->display->display_options['fields']['dataset_broken_resources']['table'] = 'donl_dashboard_link_check_datasets';
  $handler->display->display_options['fields']['dataset_broken_resources']['field'] = 'dataset_broken_resources';
  $handler->display->display_options['fields']['dataset_broken_resources']['group_type'] = 'sum';
  $handler->display->display_options['fields']['dataset_broken_resources']['label'] = 'Status';
  $handler->display->display_options['fields']['dataset_broken_resources']['element_type'] = 'span';
  $handler->display->display_options['fields']['dataset_broken_resources']['element_class'] = 'status-[dataset_broken_resources] status';
  /* Sort criterion: SUM(Link check datasets: Total resources) */
  $handler->display->display_options['sorts']['dataset_total_resources']['id'] = 'dataset_total_resources';
  $handler->display->display_options['sorts']['dataset_total_resources']['table'] = 'donl_dashboard_link_check_datasets';
  $handler->display->display_options['sorts']['dataset_total_resources']['field'] = 'dataset_total_resources';
  $handler->display->display_options['sorts']['dataset_total_resources']['group_type'] = 'sum';
  $handler->display->display_options['sorts']['dataset_total_resources']['order'] = 'DESC';
  $handler->display->display_options['sorts']['dataset_total_resources']['expose']['label'] = 'Total resources';
  /* Contextual filter: Link check datasets: Dataset maintainer */
  $handler->display->display_options['arguments']['dataset_maintainer']['id'] = 'dataset_maintainer';
  $handler->display->display_options['arguments']['dataset_maintainer']['table'] = 'donl_dashboard_link_check_datasets';
  $handler->display->display_options['arguments']['dataset_maintainer']['field'] = 'dataset_maintainer';
  $handler->display->display_options['arguments']['dataset_maintainer']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['dataset_maintainer']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['dataset_maintainer']['summary']['format'] = 'default_summary';
  /* Filter criterion: Link check datasets: Dataset organization type */
  $handler->display->display_options['filters']['dataset_organization_type']['id'] = 'dataset_organization_type';
  $handler->display->display_options['filters']['dataset_organization_type']['table'] = 'donl_dashboard_link_check_datasets';
  $handler->display->display_options['filters']['dataset_organization_type']['field'] = 'dataset_organization_type';
  $handler->display->display_options['filters']['dataset_organization_type']['group'] = 1;
  $handler->display->display_options['filters']['dataset_organization_type']['exposed'] = TRUE;
  $handler->display->display_options['filters']['dataset_organization_type']['expose']['operator_id'] = 'dataset_organization_type_op';
  $handler->display->display_options['filters']['dataset_organization_type']['expose']['label'] = 'Soort organisatie';
  $handler->display->display_options['filters']['dataset_organization_type']['expose']['operator'] = 'dataset_organization_type_op';
  $handler->display->display_options['filters']['dataset_organization_type']['expose']['identifier'] = 'dataset_organization_type';
  $handler->display->display_options['filters']['dataset_organization_type']['expose']['remember_roles'] = array(
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
  /* Filter criterion: Link check datasets: Dataset organization part of */
  $handler->display->display_options['filters']['dataset_organization_part_of']['id'] = 'dataset_organization_part_of';
  $handler->display->display_options['filters']['dataset_organization_part_of']['table'] = 'donl_dashboard_link_check_datasets';
  $handler->display->display_options['filters']['dataset_organization_part_of']['field'] = 'dataset_organization_part_of';
  $handler->display->display_options['filters']['dataset_organization_part_of']['group'] = 1;
  $handler->display->display_options['filters']['dataset_organization_part_of']['exposed'] = TRUE;
  $handler->display->display_options['filters']['dataset_organization_part_of']['expose']['operator_id'] = 'dataset_organization_part_of_op';
  $handler->display->display_options['filters']['dataset_organization_part_of']['expose']['label'] = 'Valt onder';
  $handler->display->display_options['filters']['dataset_organization_part_of']['expose']['operator'] = 'dataset_organization_part_of_op';
  $handler->display->display_options['filters']['dataset_organization_part_of']['expose']['identifier'] = 'dataset_organization_part_of';
  $handler->display->display_options['filters']['dataset_organization_part_of']['expose']['remember_roles'] = array(
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
  /* Filter criterion: Link check datasets: Dataset status */
  $handler->display->display_options['filters']['dataset_state']['id'] = 'dataset_state';
  $handler->display->display_options['filters']['dataset_state']['table'] = 'donl_dashboard_link_check_datasets';
  $handler->display->display_options['filters']['dataset_state']['field'] = 'dataset_state';
  $handler->display->display_options['filters']['dataset_state']['group'] = 1;
  $handler->display->display_options['filters']['dataset_state']['exposed'] = TRUE;
  $handler->display->display_options['filters']['dataset_state']['expose']['operator_id'] = 'dataset_state_op';
  $handler->display->display_options['filters']['dataset_state']['expose']['label'] = 'Status';
  $handler->display->display_options['filters']['dataset_state']['expose']['operator'] = 'dataset_state_op';
  $handler->display->display_options['filters']['dataset_state']['expose']['identifier'] = 'dataset_state';
  $handler->display->display_options['filters']['dataset_state']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['path'] = 'monitor/organisaties';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Organisaties';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $translatables['linkcheck_organisaties_'] = array(
    t('Master'),
    t('Overzicht data-eigenaren'),
    t('more'),
    t('Zoeken'),
    t('Toon alles'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« eerste'),
    t('‹ vorige'),
    t('volgende ›'),
    t('laatste »'),
    t('@total resultaten gevonden - @per_page per pagina'),
    t('Er voldoen geen resultaten aan uw filter-instellingen.'),
    t('Data-eigenaar'),
    t('Soort organisatie'),
    t('Valt onder'),
    t('Aantal bronnen'),
    t('Datasets'),
    t('Link-kwaliteit'),
    t('Status'),
    t('Total resources'),
    t('Alle'),
    t('Page'),
  );
  $export['linkcheck_organisaties_'] = $view;

  $view = new view();
  $view->name = 'linkcheck_thema_';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'donl_dashboard_link_check_datasets';
  $view->human_name = 'linkcheck (thema)';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Overzicht kwaliteit datasets per thema';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '21600';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '21600';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Zoeken';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Toon alles';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« eerste';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ vorige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'volgende ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'laatste »';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'dataset_organization_type' => 'dataset_organization_type',
    'dataset_organization_part_of' => 'dataset_organization_part_of',
    'dataset_maintainer' => 'dataset_maintainer',
    'dataset_total_resources' => 'dataset_total_resources',
    'dataset_name' => 'dataset_name',
    'dataset_working_resources' => 'dataset_working_resources',
    'dataset_broken_resources' => 'dataset_broken_resources',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'dataset_organization_type' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'dataset_organization_part_of' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'dataset_maintainer' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'dataset_total_resources' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'dataset_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'dataset_working_resources' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'dataset_broken_resources' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Er voldoen geen resultaten aan uw filter-instellingen.';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  /* Veld: Link check datasets: Dataset theme */
  $handler->display->display_options['fields']['dataset_theme']['id'] = 'dataset_theme';
  $handler->display->display_options['fields']['dataset_theme']['table'] = 'donl_dashboard_link_check_datasets';
  $handler->display->display_options['fields']['dataset_theme']['field'] = 'dataset_theme';
  $handler->display->display_options['fields']['dataset_theme']['label'] = 'Thema';
  $handler->display->display_options['fields']['dataset_theme']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['dataset_theme']['alter']['path'] = 'monitor?thema=[dataset_theme]';
  $handler->display->display_options['fields']['dataset_theme']['empty'] = '-';
  /* Veld: Link check datasets: Dataset sub theme */
  $handler->display->display_options['fields']['dataset_sub_theme']['id'] = 'dataset_sub_theme';
  $handler->display->display_options['fields']['dataset_sub_theme']['table'] = 'donl_dashboard_link_check_datasets';
  $handler->display->display_options['fields']['dataset_sub_theme']['field'] = 'dataset_sub_theme';
  $handler->display->display_options['fields']['dataset_sub_theme']['label'] = 'Subthema';
  $handler->display->display_options['fields']['dataset_sub_theme']['empty'] = '-';
  /* Veld: SUM(Link check datasets: Total resources) */
  $handler->display->display_options['fields']['dataset_total_resources']['id'] = 'dataset_total_resources';
  $handler->display->display_options['fields']['dataset_total_resources']['table'] = 'donl_dashboard_link_check_datasets';
  $handler->display->display_options['fields']['dataset_total_resources']['field'] = 'dataset_total_resources';
  $handler->display->display_options['fields']['dataset_total_resources']['group_type'] = 'sum';
  $handler->display->display_options['fields']['dataset_total_resources']['label'] = 'Aantal bronnen';
  $handler->display->display_options['fields']['dataset_total_resources']['exclude'] = TRUE;
  /* Veld: COUNT(Link check datasets: Dataset name) */
  $handler->display->display_options['fields']['dataset_name']['id'] = 'dataset_name';
  $handler->display->display_options['fields']['dataset_name']['table'] = 'donl_dashboard_link_check_datasets';
  $handler->display->display_options['fields']['dataset_name']['field'] = 'dataset_name';
  $handler->display->display_options['fields']['dataset_name']['group_type'] = 'count';
  $handler->display->display_options['fields']['dataset_name']['label'] = 'Datasets';
  /* Veld: SUM(Link check datasets: Working recources) */
  $handler->display->display_options['fields']['dataset_working_resources']['id'] = 'dataset_working_resources';
  $handler->display->display_options['fields']['dataset_working_resources']['table'] = 'donl_dashboard_link_check_datasets';
  $handler->display->display_options['fields']['dataset_working_resources']['field'] = 'dataset_working_resources';
  $handler->display->display_options['fields']['dataset_working_resources']['group_type'] = 'sum';
  $handler->display->display_options['fields']['dataset_working_resources']['label'] = 'Link-kwaliteit';
  $handler->display->display_options['fields']['dataset_working_resources']['alter']['alter_text'] = TRUE;
  /* Veld: SUM(Link check datasets: Broken recources) */
  $handler->display->display_options['fields']['dataset_broken_resources']['id'] = 'dataset_broken_resources';
  $handler->display->display_options['fields']['dataset_broken_resources']['table'] = 'donl_dashboard_link_check_datasets';
  $handler->display->display_options['fields']['dataset_broken_resources']['field'] = 'dataset_broken_resources';
  $handler->display->display_options['fields']['dataset_broken_resources']['group_type'] = 'sum';
  $handler->display->display_options['fields']['dataset_broken_resources']['label'] = 'Status';
  $handler->display->display_options['fields']['dataset_broken_resources']['element_type'] = 'span';
  $handler->display->display_options['fields']['dataset_broken_resources']['element_class'] = 'status-[dataset_broken_resources] status';
  /* Sort criterion: SUM(Link check datasets: Total resources) */
  $handler->display->display_options['sorts']['dataset_total_resources']['id'] = 'dataset_total_resources';
  $handler->display->display_options['sorts']['dataset_total_resources']['table'] = 'donl_dashboard_link_check_datasets';
  $handler->display->display_options['sorts']['dataset_total_resources']['field'] = 'dataset_total_resources';
  $handler->display->display_options['sorts']['dataset_total_resources']['group_type'] = 'sum';
  $handler->display->display_options['sorts']['dataset_total_resources']['order'] = 'DESC';
  $handler->display->display_options['sorts']['dataset_total_resources']['expose']['label'] = 'Total resources';
  /* Contextual filter: Link check datasets: Dataset maintainer */
  $handler->display->display_options['arguments']['dataset_maintainer']['id'] = 'dataset_maintainer';
  $handler->display->display_options['arguments']['dataset_maintainer']['table'] = 'donl_dashboard_link_check_datasets';
  $handler->display->display_options['arguments']['dataset_maintainer']['field'] = 'dataset_maintainer';
  $handler->display->display_options['arguments']['dataset_maintainer']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['dataset_maintainer']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['dataset_maintainer']['summary']['format'] = 'default_summary';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'monitor/themas';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Thema\'s';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $translatables['linkcheck_thema_'] = array(
    t('Master'),
    t('Overzicht kwaliteit datasets per thema'),
    t('more'),
    t('Zoeken'),
    t('Toon alles'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« eerste'),
    t('‹ vorige'),
    t('volgende ›'),
    t('laatste »'),
    t('Er voldoen geen resultaten aan uw filter-instellingen.'),
    t('Thema'),
    t('-'),
    t('Subthema'),
    t('Aantal bronnen'),
    t('Datasets'),
    t('Link-kwaliteit'),
    t('Status'),
    t('Total resources'),
    t('Alle'),
    t('Page'),
  );
  $export['linkcheck_thema_'] = $view;

  return $export;
}
