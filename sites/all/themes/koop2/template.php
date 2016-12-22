<?php
/**
 *Insert additional variables into the page template.
 */
function koop2_process_page(&$variables) {
  $variables['site_name2'] = variable_get('site_name2', '');

  drupal_add_js('(function ($) {
    $(document).ready(function () {
      loadPageEventsAndPresentation();
    });
  })(jQuery);', array('type' => 'inline', 'group' => JS_THEME, 'scope' => 'header'));
     
//  drupal_add_js("Modernizr.load([{test : Modernizr.mq('only all'),nope : 'js/respond.min.js'},{test: Modernizr.touch,yep: 'js/KOOP_webapp_touch.js'},,]);", array('type' => 'inline', 'group' => JS_THEME, 'scope' => 'header'));
}



function koop2_menu_link__menu_secondary_menu_data_($variables) {
  $element = $variables['element'];

  // Add menu-item name as class
  $element['#attributes']['class'][] = drupal_html_class($element['#title']);


  if(in_array('active-trail', $element['#attributes']['class']) || in_array('active', $element['#attributes']['class'])) {
    $element['#attributes']['class'][] = 'selected';
  }

  $sub_menu = '';
  if ($element['#below']) {
    $sub_menu = drupal_render($element['#below']);
  }
  $output = l($element['#title'], $element['#href'], $element['#localized_options']);


  return '<li' . drupal_attributes($element['#attributes']) . '>' . $output . $sub_menu . '</li>';
}



function koop2_menu_link__main_menu($variables) {
  $element = $variables['element'];
  $sub_menu = '';

  // Add menu-item name as class
  $element['#attributes']['class'][] = drupal_html_class($element['#title']);


  if(in_array('active-trail', $element['#attributes']['class']) || in_array('active', $element['#attributes']['class'])) {
    $element['#attributes']['class'][] = 'selected';
  }
  
  if ($element['#below']) {
    $sub_menu = drupal_render($element['#below']);
  }
  $output = l($element['#title'], $element['#href'], $element['#localized_options']);
  
  
  return '<li' . drupal_attributes($element['#attributes']) . '>' . $output . $sub_menu . '</li>';
}



function koop2_preprocess_views_exposed_form(&$vars, $hook) {
  $ids = array(
    'views-exposed-form-data-verzoeken-page',
    'views-exposed-form-dashboard-page',
  );
  if(in_array($vars['form']['#id'], $ids)) {
    $vars['form']['submit']['#value'] = t('Search');
    unset($vars['form']['submit']['#printed']);
    $vars['button'] = drupal_render($vars['form']['submit']);
  }
}


function koop2_breadcrumb($variables) {
  $breadcrumb = $variables['breadcrumb'];

  // Not all paths are assigned to a menu item, so we have to use some
  // code to give the remaining path's an breadcrumb.
  $arg0 = arg(0);
  $arg1 = arg(1);
  if(isset($arg1) && $arg0 == 'node' && is_numeric($arg1)) {
    $node = node_load($arg1);
  }

  if(isset($node)) {
    if($node->type == 'dataverzoek') {
      $breadcrumb[] = '<a href="/dataverzoeken" title="" class="active">Dataverzoeken</a>';
    }
  }

  if (!empty($breadcrumb)) {
    // Provide a navigational heading to give context for breadcrumb links to
    // screen-reader users. Make the heading invisible with .element-invisible.
    $output = '<h2 class="element-invisible">' . t('You are here') . '</h2>';

    $output .= '<div class="breadcrumb">' . implode(' ', $breadcrumb) . '</div>';
    return $output;
  }
}

function koop2_preprocess_html($variables) {

  $meta_ie_edge= array(
      '#type' => 'html_tag',
      '#tag' => 'meta',
      '#attributes' => array(
          'http-equiv' => 'X-UA-Compatible',
          'content' =>  'IE=edge,chrome=1',
      ),
      '#weight' => -99999,
  );
  // Add header meta tag for IE to head
  drupal_add_html_head($meta_ie_edge, 'meta_ie_edge');

}