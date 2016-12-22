<?php

function koop_waardelijsten_import_form($form, &$form_state) {

  $vocabularies = array();
  foreach(taxonomy_vocabulary_get_names() as $vocabulary) {
    $vocabularies[$vocabulary->vid] = $vocabulary->name;
  }

  $form['file'] = array(
    '#type' => 'managed_file',
    '#title' => t('File'),
    '#required' => TRUE,
    '#upload_validators' => array(
      'file_validate_extensions' => array('csv'),
    ),
  );

  $form['file_delimiter'] = array(
    '#type' => 'select',
    '#title' => t('File delimiter'),
    '#required' => TRUE,
    '#options' => array(
      'comma' => ', (comma)',
      'semicolon' => '; (semicolon)',
      'tab' => '  (tab)',
    ),
    '#default_value' => 'tab',
  );

  $form['vocabulary'] = array(
    '#type' => 'select',
    '#title' => t('Import into'),
    '#options' => $vocabularies,
    '#required' => TRUE,
  );

  $form['row'] = array(
    '#type' => 'textfield',
    '#title' => t('Start at row'),
    '#required' => TRUE,
    '#default_value' => 1,
    '#element_validate' => array('element_validate_integer_positive'),
  );

  $form['title'] = array(
    '#type' => 'textfield',
    '#title' => t('Which column contains the title'),
    '#required' => TRUE,
    '#default_value' => 1,
    '#element_validate' => array('element_validate_integer_positive'),
  );

  $form['uri'] = array(
    '#type' => 'textfield',
    '#title' => t('Which column contains the URI'),
    '#required' => TRUE,
    '#default_value' => 2,
    '#element_validate' => array('element_validate_integer_positive'),
  );

  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Import csv'),
  );

  return $form;
}


function koop_waardelijsten_import_form_validate(&$form, &$form_state) {
  if (isset($form_state['values']['file']) && !empty($form_state['values']['file'])) {
    $file = file_load($form_state['values']['file']);
    $file->status = FILE_STATUS_PERMANENT;
    file_save($file);
  }
}


function koop_waardelijsten_import_form_submit(&$form, &$form_state) {
  $file = file_load($form_state['values']['file']);

  if (($handle = fopen($file->uri, "r")) !== FALSE) {
    $row = 1;
    while (($data = fgetcsv($handle, 1000, koop_waardelijsten_get_file_delmiiter($form_state['values']['file_delimiter']))) !== FALSE) {
      if ($row >= $form_state['values']['row']) {
        $name = (isset($data[$form_state['values']['title']-1]) ? $data[$form_state['values']['title']-1] : NULL);
        $uri = (isset($data[$form_state['values']['uri']-1]) ? $data[$form_state['values']['uri']-1] : NULL);
        if (!empty($name) && !empty($uri)) {
          $term = new stdClass();
          $term->vid = $form_state['values']['vocabulary'];
          $term->name = $data[$form_state['values']['title'] - 1];
          $term->field_uri_organisatie[LANGUAGE_NONE][0]['value'] = $data[$form_state['values']['uri'] - 1];
          taxonomy_term_save($term);
        }
      }
      $row++;
    }
    fclose($handle);
  }

  file_delete($file, TRUE);
}


function koop_waardelijsten_get_file_delmiiter($delimiter) {
  switch ($delimiter) {
    case 'comma' :
      return ",";
      break;
    case 'semicolon' :
      return ";";
      break;
    case 'tab' :
      return "\t";
      break;
  }

  return ',';
}