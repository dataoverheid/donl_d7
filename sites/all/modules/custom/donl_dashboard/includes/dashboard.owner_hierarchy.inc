<?php
/**
 * Created by PhpStorm.
 * User: tom.vander.wielen
 * Date: 21-1-2016
 * Time: 10:37
 */
function donl_dashboard_get_owner_hierarchy($eigenaar) {
//get organization type and super-organization
  $html = '';
  $owner = taxonomy_term_load(donl_dashboard_get_taxonomy_tid($eigenaar, 'overheidsorganisatie'));
  $soort_organisatie = '-';
  if (!empty($owner->field_soort_organisatie[LANGUAGE_NONE][0]['tid'])) {
    $soort_organisatie_tid = $owner->field_soort_organisatie[LANGUAGE_NONE][0]['tid'];
    $soort_organisatie_term = taxonomy_term_load($soort_organisatie_tid);
    if (!empty($soort_organisatie_term)) {
      $soort_organisatie = $soort_organisatie_term->name;
    }
  }

  $valt_onder = '-';
  if (!empty($owner->field_valt_onder[LANGUAGE_NONE][0]['tid'])) {
    $valt_onder_tid = $owner->field_valt_onder[LANGUAGE_NONE][0]['tid'];
    $valt_onder_term = taxonomy_term_load($valt_onder_tid);
    if (!empty($valt_onder_term)) {
      $valt_onder = $valt_onder_term->name;
    }
  }
  $html .= 'Formele naam: <span>' . $eigenaar . '</span><br>';
  $html .= 'Soort organisatie: <span>' . $soort_organisatie . '</span><br>';
  $html .= 'Valt onder: <span>' . $valt_onder . '</span><br>';


  return array(
    'class' => 'owner_info',
    'title' => 'Naam organisatie',
    'content' => $html,
  );
}
