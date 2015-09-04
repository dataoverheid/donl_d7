(function ($) {
  $(document).ready(function() {
    // Collapse the list on load
    $('ul.accordion-tree > li > ul').hide();

    $('ul.accordion-tree > li').click(function() {
      $(this).toggleClass('open');
      $(this).find('ul').slideToggle(300);
    });
  });

	$(document).ready(function(){
		donl_update_number_of_results();
		$('#search-maintainer').keyup(function(){
			donl_filter_maintainer();
		});
		$('#search-maintainer-form').submit(function(e){
			e.preventDefault();
			donl_filter_maintainer();
		});
		function donl_filter_maintainer() {
		   var valThis = $('#search-maintainer').val().toLowerCase();
		    if(valThis == ""){
		        $('#maintainer_list > li').show();
		    } else {
		        $('#maintainer_list > li').each(function(){
		            var text = $(this).text().toLowerCase();
		            (text.indexOf(valThis) >= 0) ? $(this).show() : $(this).hide();
		        });
		   };
		   donl_update_number_of_results();
		}
		function donl_update_number_of_results() {
			var res = $('#maintainer_list > li:visible').length;
			$('#search-maintainer-results').text(res);
		}
	});

})(jQuery);
