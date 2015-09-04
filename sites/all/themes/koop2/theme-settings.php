<?php
/**
 * Implements hook_form_system_theme_settings_alter()
 */
function koop2_form_system_theme_settings_alter(&$form, $form_state) {
  unset($form['theme_settings']['toggle_logo']);
  unset($form['theme_settings']['toggle_favicon']);
  unset($form['logo']);
  unset($form['favicon']);
}

