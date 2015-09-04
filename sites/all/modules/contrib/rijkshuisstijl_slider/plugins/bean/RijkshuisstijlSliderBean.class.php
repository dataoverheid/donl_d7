<?php
/**
 * @file
 * Contains RijkshuisstijlSliderBean.
 */

/**
 * The class of our rijkshuisstijl bean slider
 */
class RijkshuisstijlSliderBean extends BeanPlugin {
  /**
   * Implements BeanPlugin::view().
   */
  public function view($bean, $content, $view_mode='default', $langcode=NULL) {
    // Replace the original content array with our own.
    $content = array(
      // Get all slides as renderable arrays.
      'slides' => field_view_field('bean', $bean, 'field_rhs_slider_slide', 'rijkshuisstijl_slider'),
    );

    // Renderable array for the slide tabs.
    $content['tabs'] = array(
      '#theme' => 'item_list',
      '#attributes' => array(
        'class' => array('tabs'),
      ),
    );

    // Get the current path variable from the url.
    $current_path = (isset($_GET['q'])) ? $_GET['q'] : '<front>';

    // Add a tab to the slider for each slide.
    foreach (element_children($content['slides']) as $slide_index) {
      // Add an unique identifier to each slide.
      $slide_identifier = 'slide-' . ($slide_index + 1);
      $content['slides'][$slide_index]['#attributes']['id'] = $slide_identifier;

      $content['tabs']['#items'][$slide_index] = array(
        'data' => l($slide_index + 1, $current_path, array(
          // We add the slide_identifier as fragment to the url,
          // so in the non-JS version you can still anchor slides.
          'fragment' => $slide_identifier,
        )),
        // The .box and .closed class is used to give the tabs the same color
        // as the selected one of the theme.
        'class' => array(
          'box', 'closed', 'tabs-item', 'tabs-item-' . ($slide_index + 1),
        ),
      );

      // If it is the first child, add a class indicating this
      // as the current item.
      if (0 === $slide_index) {
        $content['tabs']['#items'][$slide_index]['class'][] = 'current';
      }
    }

    // Renderable array for the control buttons.
    $content['controls'] = array(
      '#theme' => 'item_list',
      '#attributes' => array(
        'class' => 'controls',
      ),
      '#items' => array(
        // The play/pause button.
        array(
          'data' => l(t('<span>Pause</span>'), $current_path, array(
            'html' => TRUE,
            'fragment' => 'play',
            'attributes' => array(
              'class' => array('pause'),
            ),
          )),
          'class' => array('controls-item', 'controls-item-play'),
        ),
      ),
    );

    return $content;
  }
}
