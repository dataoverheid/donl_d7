# Donl_d7
https://data.overheid.nl Drupal 7 project

Het data.overheid portaal is opgebouwd uit 2 open source producten. Voor de catalogus van de datasets is gebruik gemaakt van CKAN (http://ckan.org) en Drupal (https://www.drupal.org) voor de rest. Bij het opzetten is vooral gekeken naar de implementatie van (http://data.gov.uk) welke ook te vinden is op github (https://github.com/datagovuk).

Onderstaande handleiding zal op een beknopte wijze uitleggen hoe u zelf een kopie van het data.overheid portaal kunt opzetten.


## INSTALLEREN DRUPAL
Op het moment van schrijven bevat deze github nog een volledige instantie van de Drupal core. Deze core is een instantie van de Drupal 7.x branch. Hierbij steven wij ernaar dat 7.x ten alle tijden vervangen kan worden door de laatste versie van de Drupal 7.x branch.

Voor het installeren van het Drupal 7 gedeelte van de site is er een installatie profiel gemaakt. Dit profiel dien je aan te roepen tijdens de normale installatie procedure van Drupal.

Voor het installeren van Drupal zelf verwijzen we u door naar de installatie handleiding van Drupal: https://www.drupal.org/documentation/install

### Drupal modules
Binnen dit project zijn alle modules al opgenomen. Deze zijn onderverdeelt in de mappen "contrib", "custom" en "features". Dit is een standaard onderverdeling binnen de Drupal community, maar is niet standaard meegenomen in de Drupal core. Belangrijk voor om te weten is dat we er naar streven dat u ten alle tijden de modules binnen de contrib map kunt vervangen met de laatste versie uit dezelfde major branch (alle 7.x-1.x versies zijn dus vervangbaar met andere 7.x-1.x versies, maar niet standaard met 7.x-2.x versies).


## INSTALLEREN CKAN
Binnen data.overheid wordt gebruik gemaakt van de 2.x branch van CKAN. Hierbij streven wij ernaar dat 2.x ten alle tijden vervangen kan worden door de laatste versie van de CKAN 2.x branch. De CKAN core kunt u downloaden via https://github.com/ckan/ckan

Voor het installeren van CKAN zelf verwijzen we u door naar de installatie handleiding van CKAN: http://docs.ckan.org/en/latest/maintaining/installing/index.html


### Installeren CKAN extenties
Naast CKAN zelf zijn onderstaande CKAN extenties geinstalleerd. Achter elke extentie vindt U een link naar de plaats waar deze extentie te downloaden is.

* ckanext-donl (https://github.com/dataoverheid/ckanext-donl)
* ckanext-report (https://github.com/datagovuk/ckanext-report)
* ckanext-qa (https://github.com/ckan/ckanext-qa)
* ckanext-dgu (https://github.com/datagovuk/ckanext-dgu)
* ckanext-dcat (https://github.com/ckan/ckanext-dcat)


### Instellingen CKAN
Voor een goede werking van bovenstaande extenties dienen er verschillende instellingen binnen CKAN's ini bestanden goed gezet te worden. Via onderstaande link kan je een voorbeeld bestand vinden van de who.ini en de production.ini bestanden. Dit zijn de bestanden die momenteel op de live omgeving worden gebruikt, maar vanuit veiligheids overwegingen hebben we alle gevoelige informatie verwijdert.

https://github.com/dataoverheid/ckan_settings
