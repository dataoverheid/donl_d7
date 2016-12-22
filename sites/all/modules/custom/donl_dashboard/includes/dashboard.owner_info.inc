<?php

function donl_dashboard_get_owner_info($data_eigenaar) {
  $html = '';
  $owner = taxonomy_term_load(donl_dashboard_get_taxonomy_tid($data_eigenaar, 'overheidsorganisatie'));

  if (isset($owner)) {
    // @todo: Legacy code is such a beautiful thing
    $uri = $owner->field_uri[LANGUAGE_NONE][0]['value'];
    if (empty($uri)) {
      $uri = strip_tags(str_replace(array(
        "\n",
        "\r\n",
        "\r"
      ), '', $owner->description));
    }
    $html .= 'Naam: <span>' . $owner->name . '</span><br>';
    $html .= 'Beschrijving: <span>' . $owner->description . '</span><br>';
    $html .= 'E-mail: <span>' . ($owner->field_dataverzoek_email ? l($owner->field_dataverzoek_email, 'mailto:' . $owner->field_dataverzoek_email, array('absolute' => TRUE)) : 'onbekend') . '</span><br>';
    $html .= 'Website: <span>' . l(($owner->field_website[LANGUAGE_NONE][0]['title'] ? $owner->field_website[LANGUAGE_NONE][0]['title'] : $owner->field_website[LANGUAGE_NONE][0]['url']), $owner->field_website[LANGUAGE_NONE][0]['url']) . '</span><br>';
    $html .= 'URI: <span>' . $uri . '</span><br>';
    $html .= '';
  }
  return array(
    'class' => 'owner_info',
    'title' => 'Over de data-eigenaar',
    'content' => $html,
  );
}