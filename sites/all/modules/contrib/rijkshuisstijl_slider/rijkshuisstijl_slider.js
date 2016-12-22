/**
 * @file
 *
 * Javascript to add slider functionality to the module's beans.
 */

(function ($) {
  Drupal.rijkshuisstijlSlider = Drupal.rijkshuisstijlSlider || {};

  Drupal.behaviors.rijkshuisstijlSlider = {
    attach: function (context) {
      $('.block-bean-rijkshuisstijl-slider:not(.block-bean-rijkshuisstijl-slider-processed)', context).each(function () {
        // Set the initial state of the slider.
        $(this).once('block-bean-rijkshuisstijl-slider', Drupal.rijkshuisstijlSlider.init);
      });
    }
  }

  Drupal.rijkshuisstijlSlider.advance = function (slider, next) {
    if (slider.timeoutID) {
      clearTimeout(slider.timeoutID);
    }

    slider.next = next;
    Drupal.rijkshuisstijlSlider.animate(slider);
  }

  Drupal.rijkshuisstijlSlider.animate = function (slider) {
    if (slider.busy || slider.pause) {
      return;
    }

    slider.busy = true;
    var animation = function (callback) {
      $('.field-collection-item-field-rhs-slider-slide:eq(' + slider.current + ')', slider.element).fadeOut(slider.fadeOut, function () {
        $('.tabs-item:eq(' + slider.current + ')', slider.element).removeClass('current');
        $('.tabs-item:eq(' + slider.next + ')', slider.element).addClass('current');

        $('.field-collection-item-field-rhs-slider-slide:eq(' + slider.next + ')', slider.element).fadeIn(slider.fadeIn, callback);
      });
    }

    animation(function () {
      slider.current = slider.next;
      slider.busy = false;
      Drupal.rijkshuisstijlSlider.slide(slider);
    });
  }

  Drupal.rijkshuisstijlSlider.init = function () {
    var slider = {timeout: 2000, fadeIn: 400, fadeOut: 800, current: 0, busy: false, pause: false};
    slider.element = this;
    slider.slides = $('.field-collection-item-field-rhs-slider-slide', slider.element).size();

    $('.controls-item a', slider.element).click(function () {
      slider.pause = !slider.pause;

      if (slider.pause) {
        $(this).removeClass('pause').addClass('play');
      } else {
        $(this).removeClass('play').addClass('pause');
        slider.busy = false;

        slider.timeoutID = setTimeout(function () {
          Drupal.rijkshuisstijlSlider.slide(slider);
        }, slider.timeout);
      }

      return false;
    });

    $('.tabs .tabs-item a', slider.element).click(function () {
      Drupal.rijkshuisstijlSlider.advance(slider, $(this).parent().index());
      return false;
    });

    if (slider.timeout) {
      slider.timeoutID = setTimeout(function () {
        Drupal.rijkshuisstijlSlider.slide(slider);
      }, slider.timeout);
    }
  }

  Drupal.rijkshuisstijlSlider.slide = function (slider) {
    slider.next = (slider.current + 1 < slider.slides) ? slider.current + 1 : 0;

    if (slider.timeout) {
      slider.timeoutID = setTimeout(function () {
        Drupal.rijkshuisstijlSlider.animate(slider, Drupal.rijkshuisstijlSlider.slide);
      }, slider.timeout);
    }
  }
})(jQuery);
