function generate_donl_widget(url, search) {
  $.getJSON(url + search, function (data) {
    var text = '';
    $.each(data.result.results, function (key, dataset) {
      console.log(dataset);
      text += '<div class="dataset">';
      text += '<div class="title"><a href="' + url + 'dataset/' + dataset.id + '">' + dataset.title + '</a></div>';
      text += '<div class="notes">' + dataset.notes + '</div>';

      if (dataset.resources.length != 0) {
        text += '<table><caption>Bronnen</caption>';
        text += '<thead><thead><th>Bron</th><th>Formaat</th><th>Laatste update</th></thead>';
        text += '<tbody>';
        $.each(dataset.resources, function (k, resource) {
          text += '<tr><td><a href="' + url + 'dataset/' + dataset.id + '/resource/' + resource.id + '">' + resource.name + '</a></td><td>' + resource.format + '</td><td>' + resource.last_modified + '</td></tr>';
          text += resource.name;
        });
        text += '</tbody></table>';
      }

      text += '</div>';
    });
    $('#donl-dataset-widget').append(text);
  });
}