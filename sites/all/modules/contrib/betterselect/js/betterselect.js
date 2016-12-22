(function ($) {

  Drupal.behaviors.initBetterSelect = {
    attach: function(context) {
      $('.better-select .form-type-checkbox input[type="checkbox"]').click(function(){
        this.checked ? $(this).parent().addClass('hilight') : $(this).parent().removeClass('hilight');
      }).filter(":checked").parent().addClass('hilight');

      // Scroll to first checked term
      $(".better-select div.form-checkboxes-scroll.better-select-scroll-to-first").each(function(i) {
        $this = $(this);
        $checked = $this.find("input:checked");       
        if($checked.length) {
          $this.animate({
            scrollTop: $checked.offset().top - $this.offset().top - $this.height() / 2
          }, 1);
        }
      });
    }
  }
})(jQuery);