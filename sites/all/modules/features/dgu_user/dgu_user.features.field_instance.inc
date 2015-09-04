<?php
/**
 * @file
 * dgu_user.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function dgu_user_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'user-user-field_pr_adres_organisatie'
  $field_instances['user-user-field_pr_adres_organisatie'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Vul de adresgegevens van het gebouw waarin u werkt.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_pr_adres_organisatie',
    'label' => 'Adres organisatie',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'user-user-field_pr_afdeling'
  $field_instances['user-user-field_pr_afdeling'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Voor welke afdeling werkt u.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_pr_afdeling',
    'label' => 'Afdeling',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'user-user-field_pr_algemeen_email'
  $field_instances['user-user-field_pr_algemeen_email'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Voor een persoonlijke emailadres in. Een persoon die deze dataset kan aanpassen. Zodat data.overheid.nl contact met u kan opnemen als wij vragen hebben over de dataset. Bijvoorbeeld: jan.koopmans@gemeenteamsterdam.nl',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'email',
        'settings' => array(),
        'type' => 'email_default',
        'weight' => 12,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_pr_algemeen_email',
    'label' => 'Algemeen emailadres afdeling',
    'required' => 1,
    'settings' => array(
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'email',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'email_textfield',
      'weight' => 15,
    ),
  );

  // Exported field_instance: 'user-user-field_pr_catalogusbeheerder'
  $field_instances['user-user-field_pr_catalogusbeheerder'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Wie (organsiatie) is de beheerder van waar de dataset te vinden is? Bijvoorbeeld gemeenten zelf of een externe partij zoals Colomby.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 8,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_pr_catalogusbeheerder',
    'label' => 'Catalogusbeheerder',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 13,
    ),
  );

  // Exported field_instance: 'user-user-field_pr_foto'
  $field_instances['user-user-field_pr_foto'] = array(
    'bundle' => 'user',
    'deleted' => 0,
    'description' => 'U kunt een profiel foto plaatsen als u dit wil. Dit is niet verplicht.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 11,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_pr_foto',
    'label' => 'Foto',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '128 KB',
      'max_resolution' => '200x200',
      'min_resolution' => '200x200',
      'title_field' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 16,
    ),
  );

  // Exported field_instance: 'user-user-field_pr_functie'
  $field_instances['user-user-field_pr_functie'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Wat voor functie heeft u bij uw organisatie?',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_pr_functie',
    'label' => 'Uw functie',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'user-user-field_pr_organisatienaam'
  $field_instances['user-user-field_pr_organisatienaam'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Kies uit de waardelijst uw organisatienaam',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_pr_organisatienaam',
    'label' => 'Organisatienaam',
    'required' => 1,
    'settings' => array(
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'user-user-field_pr_organisatienaam_plat'
  $field_instances['user-user-field_pr_organisatienaam_plat'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 14,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_pr_organisatienaam_plat',
    'label' => 'Organisatienaam',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'user-user-field_pr_persoonlijke_email'
  $field_instances['user-user-field_pr_persoonlijke_email'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Voor een persoonlijke emailadres in. Een persoon die deze dataset kan aanpassen. Zodat data.overheid.nl contact met u kan opnemen als wij vragen hebben over de dataset. Bijvoorbeeld: jan.koopmans@gemeenteamsterdam.nl',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'email',
        'settings' => array(),
        'type' => 'email_default',
        'weight' => 9,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_pr_persoonlijke_email',
    'label' => 'Persoonlijke email',
    'required' => 1,
    'settings' => array(
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'email',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'email_textfield',
      'weight' => 14,
    ),
  );

  // Exported field_instance: 'user-user-field_pr_registratiehouder'
  $field_instances['user-user-field_pr_registratiehouder'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Van welke organsiatie is deze dataset( de inhoud). Bijvoorbeeld gemeenten Amsterdam.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_pr_registratiehouder',
    'label' => 'Registratiehouder',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'user-user-field_pr_telefoonnummer'
  $field_instances['user-user-field_pr_telefoonnummer'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Voer hier u telefoonnummer in zodat wij, data.overheid.nl, u kunnen bereiken als u of wij een vraag hebben over de dataset.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_pr_telefoonnummer',
    'label' => 'Telefoonnummer',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'user-user-field_pr_verstrekker'
  $field_instances['user-user-field_pr_verstrekker'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Wie heeft de dataset aangemeld? (orgisatie) Bijvoorbeeld NGR, Colomby of en overheidsorganisatie zelf',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 6,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_pr_verstrekker',
    'label' => 'Verstrekker',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 12,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Adres organisatie');
  t('Afdeling');
  t('Algemeen emailadres afdeling');
  t('Catalogusbeheerder');
  t('Foto');
  t('Kies uit de waardelijst uw organisatienaam');
  t('Organisatienaam');
  t('Persoonlijke email');
  t('Registratiehouder');
  t('Telefoonnummer');
  t('U kunt een profiel foto plaatsen als u dit wil. Dit is niet verplicht.');
  t('Uw functie');
  t('Van welke organsiatie is deze dataset( de inhoud). Bijvoorbeeld gemeenten Amsterdam.');
  t('Verstrekker');
  t('Voer hier u telefoonnummer in zodat wij, data.overheid.nl, u kunnen bereiken als u of wij een vraag hebben over de dataset.');
  t('Voor een persoonlijke emailadres in. Een persoon die deze dataset kan aanpassen. Zodat data.overheid.nl contact met u kan opnemen als wij vragen hebben over de dataset. Bijvoorbeeld: jan.koopmans@gemeenteamsterdam.nl');
  t('Voor welke afdeling werkt u.');
  t('Vul de adresgegevens van het gebouw waarin u werkt.');
  t('Wat voor functie heeft u bij uw organisatie?');
  t('Wie (organsiatie) is de beheerder van waar de dataset te vinden is? Bijvoorbeeld gemeenten zelf of een externe partij zoals Colomby.');
  t('Wie heeft de dataset aangemeld? (orgisatie) Bijvoorbeeld NGR, Colomby of en overheidsorganisatie zelf');

  return $field_instances;
}
