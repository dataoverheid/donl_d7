<?php

/**
 * Implements of hook_views_data();
 */
function donl_dashboard_linkchecker_views_data() {
  $data = array();

  $data['donl_dashboard_link_check_datasets']['table']['group'] = t('Link check datasets');

  $data['donl_dashboard_link_check_datasets']['table']['base'] = array(
    'field' => 'dataset_id',
    'title' => t('Link check datasets'),
    'access query tag' => 'access_content',
  );

  $data['donl_dashboard_link_check_datasets']['dataset_id'] = array(
    'title' => t('Dataset id'),
    'help' => t('Dataset id'),
    'field' => array(
      'handler' => 'views_handler_field',
      'click sortable' => TRUE,
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_string',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_string',
    ),
    'relationship' => array(
      'title' => t('Datasources'),
      'help' => t("The recourses attached to this dataset."),
      'base' => 'donl_dashboard_link_check_resources',
      'base field' => 'dataset_id',
      'handler' => 'views_handler_relationship',
      'label' => t('Datasources'),
    ),
  );

  $data['donl_dashboard_link_check_datasets']['dataset_name'] = array(
    'title' => t('Dataset name'),
    'help' => t('Dataset name'),
    'field' => array(
      'handler' => 'views_handler_field',
      'click sortable' => TRUE,
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_string',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_string',
    ),
  );

  $data['donl_dashboard_link_check_datasets']['dataset_maintainer'] = array(
    'title' => t('Dataset maintainer'),
    'help' => t('Dataset maintainer'),
    'field' => array(
      'handler' => 'views_handler_field',
      'click sortable' => TRUE,
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_string',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_string',
    ),
  );

  $data['donl_dashboard_link_check_datasets']['dataset_catalog'] = array(
    'title' => t('Dataset catalog'),
    'help' => t('Dataset catalog'),
    'field' => array(
      'handler' => 'views_handler_field',
      'click sortable' => TRUE,
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_string',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_string',
    ),
  );

  $data['donl_dashboard_link_check_datasets']['dataset_theme'] = array(
    'title' => t('Dataset theme'),
    'help' => t('Dataset theme'),
    'field' => array(
      'handler' => 'views_handler_field',
      'click sortable' => TRUE,
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_string',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_string',
    ),
  );

  $data['donl_dashboard_link_check_datasets']['dataset_sub_theme'] = array(
    'title' => t('Dataset sub theme'),
    'help' => t('Dataset sub theme'),
    'field' => array(
      'handler' => 'views_handler_field',
      'click sortable' => TRUE,
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_string',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_string',
    ),
  );

  $data['donl_dashboard_link_check_datasets']['dataset_state'] = array(
    'title' => t('Dataset status'),
    'help' => t('Dataset status'),
    'field' => array(
      'handler' => 'views_handler_field',
      'click sortable' => TRUE,
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_numeric',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_numeric',
    ),
  );

  $data['donl_dashboard_link_check_datasets']['dataset_working_resources'] = array(
    'title' => t('Working recources'),
    'help' => t('Working recources'),
    'field' => array(
      'handler' => 'views_handler_field',
      'click sortable' => TRUE,
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'filter' => array(
      'handler' => 'views_handler_field_numeric',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_numeric',
    ),
  );

  $data['donl_dashboard_link_check_datasets']['dataset_percentage_broken_resources'] = array(
    'title' => t('Percentage broken recources'),
    'help' => t('Percentage broken recources'),
    'field' => array(
      'handler' => 'views_handler_field',
      'click sortable' => TRUE,
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'filter' => array(
      'handler' => 'views_handler_field_numeric',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_numeric',
    ),
  );

  $data['donl_dashboard_link_check_datasets']['dataset_percentage_working_resources'] = array(
    'title' => t('Percentage working resources'),
    'help' => t('Percentage working resources'),
    'field' => array(
      'handler' => 'views_handler_field',
      'click sortable' => TRUE,
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'filter' => array(
      'handler' => 'views_handler_field_numeric',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_numeric',
    ),
  );

  $data['donl_dashboard_link_check_datasets']['dataset_broken_resources'] = array(
    'title' => t('Broken recources'),
    'help' => t('Broken recources'),
    'field' => array(
      'handler' => 'views_handler_field',
      'click sortable' => TRUE,
      'float' => TRUE,
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'filter' => array(
      'handler' => 'views_handler_field_numeric',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_numeric',
    ),
  );

  $data['donl_dashboard_link_check_datasets']['dataset_total_resources'] = array(
    'title' => t('Total resources'),
    'help' => t('Total resources'),
    'field' => array(
      'handler' => 'views_handler_field',
      'click sortable' => TRUE,
      'float' => TRUE,
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'filter' => array(
      'handler' => 'views_handler_field_numeric',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_numeric',
    ),
  );

  $data['donl_dashboard_link_check_datasets']['dataset_organization_type'] = array(
    'title' => t('Dataset organization type'),
    'help' => t('Dataset organization type'),
    'field' => array(
      'handler' => 'views_handler_field',
      'click sortable' => TRUE,
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_string',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_string',
    ),
  );

  $data['donl_dashboard_link_check_datasets']['dataset_organization_part_of'] = array(
    'title' => t('Dataset organization part of'),
    'help' => t('Dataset organization part of'),
    'field' => array(
      'handler' => 'views_handler_field',
      'click sortable' => TRUE,
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_string',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_string',
    ),
  );

  $data['donl_dashboard_link_check_datasets']['timestamp'] = array(
    'title' => t('Timestamp'),
    'help' => t('Timestamp'),
    'field' => array(
      'handler' => 'views_handler_field_date',
      'click sortable' => TRUE,
    ),
    'sort' => array(
      'handler' => 'views_handler_sort_date',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_date',
    ),
  );

  $data['donl_dashboard_link_check_datasets']['dataset_date_planned'] = array(
    'title' => t('Date planned'),
    'help' => t('Date planned'),
    'field' => array(
      'handler' => 'views_handler_field_date',
      'click sortable' => TRUE,
    ),
    'sort' => array(
      'handler' => 'views_handler_sort_date',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_date',
    ),
  );

  $data['donl_dashboard_link_check_datasets']['dataset_calendar_state'] = array(
    'title' => t('Calendar state'),
    'help' => t('Calendar state'),
    'field' => array(
      'handler' => 'views_handler_field',
      'click sortable' => TRUE,
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_string',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_string',
    ),
  );


  $data['donl_dashboard_link_check_resources']['table']['group'] = t('Link check resources');

  $data['donl_dashboard_link_check_resources']['dataset_id'] = array(
    'title' => t('Dataset id'),
    'help' => t('Dataset id'),
    'field' => array(
      'handler' => 'views_handler_field',
      'click sortable' => TRUE,
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_string',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_string',
    ),
  );


  $data['donl_dashboard_link_check_resources']['resource_id'] = array(
    'title' => t('Resource id'),
    'help' => t('Resource id'),
    'field' => array(
      'handler' => 'views_handler_field',
      'click sortable' => TRUE,
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_string',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_string',
    ),
  );

  $data['donl_dashboard_link_check_resources']['resource_name'] = array(
    'title' => t('Resource name'),
    'help' => t('Resource name'),
    'field' => array(
      'handler' => 'views_handler_field',
      'click sortable' => TRUE,
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_string',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_string',
    ),
  );

  $data['donl_dashboard_link_check_resources']['state'] = array(
    'title' => t('State'),
    'help' => t('State'),
    'field' => array(
      'handler' => 'views_handler_field',
      'click sortable' => TRUE,
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_string',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_string',
    ),
  );

  /*
  $data['donl_dashboard_link_check_resources']['state_code'] = array(
    'title' => t('State code'),
    'help' => t('State code'),
    'field' => array(
      'handler' => 'views_handler_field',
      'click sortable' => TRUE,
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_string',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_string',
    ),
  );

  $data['donl_dashboard_link_check_resources']['state_report'] = array(
    'title' => t('State report'),
    'help' => t('State report'),
    'field' => array(
      'handler' => 'views_handler_field',
      'click sortable' => TRUE,
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_string',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_string',
    ),
  );
  */

  return $data;
}