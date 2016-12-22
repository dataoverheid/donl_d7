<?php

function donl_dashboard_get_feedback($data_eigenaar) {

  $query = db_select('node', 'n');
  $query->join('field_data_field_fd_data_eigenaar', 'fdffde', 'n.nid = fdffde.entity_id');
  $query->fields('n', array('title', 'created'));
  $query->condition('type', 'feedback_dataset', '=');
  if (isset($data_eigenaar)) {
    $query->condition('field_fd_data_eigenaar_value', $data_eigenaar, '=');
  }
  $query->orderBy('n.created', 'DESC');
  $query->range(0, 5);
  $result = $query->execute();

  $html = '<ul>';
  while ($record = $result->fetchAssoc()) {
    $html .= '<li>' . $record['title'] . '</li>';
  }
  $html .= '</ul>';

  return array(
    'class'=> 'feedback',
    'title' => 'Laatste feedbackverzoeken',
    'content' => $html,
  );
}