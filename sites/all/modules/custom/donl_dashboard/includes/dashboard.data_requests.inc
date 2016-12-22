<?php

function donl_dashboard_get_data_requests($thema, $data_eigenaar) {
  $thema_tid = NULL;
  if (isset($thema)) {
    $thema_tid = donl_dashboard_get_taxonomy_tid($thema, 'taxonomiebeleidsagenda');
  }

  $data_eigenaar_tid = NULL;
  if (isset($data_eigenaar)) {
    $data_eigenaar_tid = donl_dashboard_get_taxonomy_tid($data_eigenaar, 'overheidsorganisatie');
  }

  $status = array();
  $total = 0;

  $query = db_select('node', 'n');
  $query->join('field_data_field_dv_status', 'fdfds', 'n.nid = fdfds.entity_id');
  if (isset($data_eigenaar_tid)) {
    $query->join('field_data_field_dv_data_eigenaar', 'fdfdde', 'n.nid = fdfdde.entity_id');
  }
  if (isset($thema_tid)) {
    $query->join('field_data_field_dv_thema', 'fdfdt', 'n.nid = fdfdt.entity_id');
  }
  $query->fields('fdfds', array('field_dv_status_value'));
  $query->addExpression('COUNT(type)', 'count');
  $query->condition('type', 'dataverzoek', '=');
  if (isset($data_eigenaar_tid)) {
    $query->condition('field_dv_data_eigenaar_tid', $data_eigenaar_tid, '=');
  }
  if (isset($thema_tid)) {
    $query->condition('field_dv_thema_tid', $thema_tid, '=');
  }
  $query->groupBy('field_dv_status_value');
  $result = $query->execute();
  while ($record = $result->fetchAssoc()) {
    $status[] = array(
      'status' => $record['field_dv_status_value'],
      'count' => $record['count'],
    );
    $total += $record['count'];
  }

  $html = 'Totaal <span>' . $total . '</span><br />';
  foreach ($status as $v) {
    $html .= $v['status'] . ' <span>' . $v['count'] . '</span><br />';
  }
  if(isset($data_eigenaar)) {
   $html.='<a href="data_verzoek/aanvragen?data_eigenaar='.$data_eigenaar.'">Doe een dataverzoek</a>';
  }
  return array(
    'class'=>'totaal',
    'title' => 'Dataverzoeken',
    'content' => $html,
  );
}