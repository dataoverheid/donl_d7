<?php

/**
 * @file
 * Implements all OWMS core metatags in a very very simplified manner.
 * Also adds some other metatags to the advanced section.
 */
 
 
/**
 * Implements hook_metatag_config_default_alter().
 *
 * Sets the default values in the settings screen which are used after installing the module.
 */
function cw_owms_metatag_config_default_alter(array &$configs) {
  foreach ($configs as &$config) {
    switch ($config->instance) {
      case 'global':
        $config->config += array(
          'dcterms.identifier' => array('value' => '[current-page:url:absolute]'),
          'dcterms.title' => array('value' => '[current-page:title]'),
          'dcterms.type' => array('value' => 'webpagina'),
          'dcterms.language' => array('value' => 'nl-NL'),
          'dcterms.spatial' => array('value' => 'Nederland'),
          'canonical' => array('value' => '[current-page:url:absolute]'), //this is a field from the metatag core module
          'type' => array('value' => 'webpagina'),
        );
        break;
      case 'global:frontpage':
        break;
      case 'node':
        $config->config += array(
          'dcterms.modified' => array('value' => '[node:changed:custom:d-m-Y]'),
          'dcterms.available' => array('value' => '[node:changed:custom:d-m-Y]'),
          'dcterms.created' => array('value' => '[node:created:custom:d-m-Y]'),
          'available' => array('value' => '[node:changed:custom:d-m-Y]'),
          );
        break;
      case 'taxonomy_term':
        //set the default for this required field as the current date
        $config->config += array(
          'dcterms.modified' => array('value' => date('d-m-Y')),
         );
        break;
      case 'user':
        //set the default for this required field as the current date
        $config->config += array(
          'dcterms.modified' => array('value' => date('d-m-Y')),
         );
        break;
    }
  }
}


/**
 * Implements hook_metatag_info().
 *
 * Create the form for the settings and node edit pages.
 */
function cw_owms_metatag_info() {
  $info['groups']['owms-core'] = array(
    'label' => t('OWMS Core'),
  );
  $info['tags']['dcterms.identifier'] = array(
    'label' => t('Identificatie'),
    'description' => t('Eenduidige verwijzing naar het informatieobject binnen een bepaalde context.'),
    'class' => 'DrupalTextMetaTag',
    'group' => 'owms-core',
    'schema' => 'xsd:anyURI',
    'form' => array(
      '#required' => true,
    ),
    'element'	 => array(
      '#theme' => 'cw_owms',	
    ),
  );
  $info['tags']['dcterms.title'] = array(
    'label' => t('Titel'),
    'description' => t('De naam die gegeven is aan het informatieobject.'),
    'class' => 'DrupalTextMetaTag',
    'group' => 'owms-core',
    'form' => array(
      '#required' => true,
    ),
    'element' => array(
      '#theme' => 'cw_owms',
    ),
  );  
  $info['tags']['dcterms.type'] = array(
    'label' => t('Informatietype'),
    'description' => t('Aard of soort van het informatieobject.'),
    'class' => 'DrupalTextMetaTag',
    'group' => 'owms-core',
    'form' => array(
      '#type' => 'select',
      '#options' => _metatag_owms_core_metatag_type_options(),
      '#required' => true,
      '#empty_option' => t('- None -'),
    ),
    'element' => array(
      '#theme' => 'cw_owms',
    ),
  );
  $info['tags']['dcterms.language'] = array(
    'label' => t('Taal'),
    'description' => t('Taal van het informatieobject.'),
    'class' => 'DrupalTextMetaTag',
    'group' => 'owms-core',
    'form' => array(
      '#type' => 'select',
      '#options' => _metatag_owms_core_metatag_language_options(),
      '#required' => true,
      '#multiple' => false, //TODO: according to specification may have multiple values, but for a webpage this is not practical
      '#empty_option' => t('- None -'),
    ),
    'element' => array(
      '#theme' => 'cw_owms',
    ),
  );
  $info['tags']['overheid.authority'] = array(
    'label' => t('Eindverantwoordelijke'),
    'description' => t('Overheidsorganisatie die de wettelijke verantwoordelijkheid draat voor de inhoude (strekking) van het informatieobject.'),
    'class' => 'DrupalTextMetaTag',
    'group' => 'owms-core',
    'form' => array(
      '#type' => 'select',
      '#options' => _metatag_owms_core_metatag_authority_options(),
      '#empty_option' => t('- None -'),
      '#required' => false,
      '#multiple' => false, //TODO: according to specification may have multiple values
    ),
    'element' => array(
      '#theme' => 'cw_owms',
    ),
  );  
  $info['tags']['dcterms.creator'] = array(
    'label' => t('Maker'),
    'description' => t('Organisatie die de eindverantwoordelijkheid draagt voor het cre&euml;ren van het informatieobject.'),
    'class' => 'DrupalTextMetaTag',
    'group' => 'owms-core',
    'form' => array(
      '#type' => 'select',
      '#options' => _metatag_owms_core_metatag_authority_options(),
      '#empty_option' => t('- None -'),
      '#required' => true,
      '#multiple' => false, //TODO: according to specification may have multiple values
    ),
    'element' => array(
      '#theme' => 'cw_owms',
    ),
  );  
  
  $info['tags']['dcterms.modified'] = array(
    'label' => t('Datum laatste wijziging'),
    'description' => t('Datum waarop het informatieobject gemaakt is of voor het laatst inhoudelijk is gewijzigd.' . 
                       ' Formaat: dd-mm-jjjj, Bijvoorbeeld: 27-01-2000'),
    'class' => 'DrupalTextMetaTag',
    'group' => 'owms-core',
    'form' => array(
      '#required' => true,
    ),
    'element' => array(
      '#theme' => 'cw_owms',
    ),
  );
  
  $info['tags']['dcterms.temporal.start'] = array(
    'label' => t('Start geldigheid '),
    'description' => t('Bereik in tijd van het informatieobject.' . 
                       ' Formaat: dd-mm-jjjj, Bijvoorbeeld: 27-01-2000'),
    'class' => 'DrupalTextMetaTag',
    'group' => 'owms-core',
    'form' => array(
      '#required' => false,
    ),
    'element' => array(
      '#theme' => 'cw_owms',
    ),
  );
    
  $info['tags']['dcterms.temporal.einde'] = array(
    'label' => t('Einde geldigheid'),
    'description' => t('Bereik in tijd van het informatieobject.' . 
                       ' Formaat: dd-mm-jjjj, Bijvoorbeeld: 27-01-2000'),
    'class' => 'DrupalTextMetaTag',
    'group' => 'owms-core',
    'form' => array(
      '#required' => false,
    ),
    'element' => array(
      '#theme' => 'metatag_owms_core',
    ),
  );
  
  //TODO: use agent and location and multiple values
  $info['tags']['dcterms.spatial'] = array(
    'label' => t('Koninkrijksdeel'),
    'description' => t('Geografische aanduiding van de plek op aarde waar het informatieobject betrekking op heeft.'),
    'class' => 'DrupalTextMetaTag',
    'group' => 'owms-core',
    'form' => array(
      '#required' => false,
    ),
    'element' => array(
      '#theme' => 'metatag_owms_core',
    ),
  );
  //this metatag belongs to the OWMS mantel 
  $info['tags']['dcterms.available'] = array(
    'label' => t('Publicatiedatum'),
    'description' => t('Datum waarop of periode waarin het informatieobject gepubliceerd wordt.' . 
                       ' Formaat: dd-mm-jjjj, Bijvooreeld: 03-12-2000'),
    'class' => 'DrupalTextMetaTag',
    'group' => 'owms-core',
    'form' => array(
      '#required' => false,
    ),
    'element' => array(
      '#theme' => 'metatag_owms_core',
    ),
  );
  //this metatag belongs to the OWMS mantel 
  $info['tags']['dcterms.created'] = array(
    'label' => t('Creatiedatum'),
    'description' => t('Datum waarop het informatieobject gemaakt is.' . 
                       ' Formaat: dd-mm-jjjj, Bijvooreeld: 03-12-2000'),
    'class' => 'DrupalTextMetaTag',
    'group' => 'owms-core',
    'form' => array(
      '#required' => false,
    ),
    'element' => array(
      '#theme' => 'metatag_owms_core',
    ),
  );
  //this metatag does not belong to OWMS
  $info['tags']['type'] = array(
    'label' => t('Contenttype'),
    'class' => 'DrupalTextMetaTag',
    'group' => 'advanced',
    'form' => array(
      '#required' => false,
    ),
    'form' => array(
      '#type' => 'select',
      '#options' => _metatag_owms_core_metatag_type_options(),
      '#required' => false,
      '#empty_option' => t('- None -'),
    ),
    'element' => array(
      '#theme' => 'metatag_owms_core',
    ),
  );  
  //this metatag does not belong to OWMS
  $info['tags']['available'] = array(
    'label' => t('Publicatiedatum'),
    'description' => t('Datum waarop de pagina gepubliceerd is.' . 
                       ' Formaat: dd-mm-jjjj, Bijvooreeld: 03-12-2000'),
    'class' => 'DrupalTextMetaTag',
    'group' => 'advanced',
    'form' => array(
      '#required' => false,
    ),
    'element' => array(
      '#theme' => 'metatag_owms_core',
    ),
  );
  //this metatag does not belong to OWMS
  $info['tags']['wt.cg_n'] = array(
    'label' => t('Webtrends content group'),
    'description' => t('Webtrends Content group tag.'),
    'class' => 'DrupalTextMetaTag',
    'group' => 'advanced',
    'form' => array(
      '#required' => false,
    ),
    'element' => array(
      '#theme' => 'metatag_owms_core',
    ),
  );    
  return $info;
}


/**
 * Populate 'authority' dropdown list from file. 
 *
 * TODO: Dynamic schema
 */
function _metatag_owms_core_metatag_authority_options() {
	$values = _metatag_owms_core_metatag_options('agent');
	//key is the value of the metatag
	//value is the text to display in the list
  foreach($values as $value) { //for all lines
  	$value = ($value);
		$options[$value] = $value; //add the values to the options
	}
  return $options;
}


/**
 * Populate 'type' dropdown list from file. 
 */
function _metatag_owms_core_metatag_type_options() {
	$values = _metatag_owms_core_metatag_options('information_type');
  foreach($values as $value) { //for all lines
		$options[$value] = $value; //add the values to the options
	}
  return $options;
}


/**
 * Populate 'language' dropdown list from file. 
 *
 * @TODO: are we sure we have the right values?
 */
function _metatag_owms_core_metatag_language_options() {
	$values = _metatag_owms_core_metatag_options('language');
  foreach($values as $value) { //for all lines
  	//each line holds the language key and language name
   	list($lang_code, $lang_name) = explode(':', $value);
		$options[$lang_code] = $lang_name; //add the values to the options
	}	
	return $options;
}


/**
 * Load values from a file. File must be UTF-8 encoded!
 */
function _metatag_owms_core_metatag_options($what) {
  $options = array();
	$text = file_get_contents(drupal_get_path('module', 'cw_owms') . '/lists/' . $what . '.txt');
	$options = explode(PHP_EOL, $text); //retrieve all lines
	foreach($options as $key => $value) {
		$options[$key] = trim($value);
	}
	return $options;
}

