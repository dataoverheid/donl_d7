<!DOCTYPE html SYSTEM "about:legacy-compat">

<!--[if IE 8]>
<html xml:lang="nl-NL" class="ie8"><![endif]-->
<!--[if (lt IE 8)|(gt IE 8)|!(IE)]><!-->
<html xml:lang="nl-NL" lang="nl-NL">
<!--<![endif]-->

<head>
  <title><?php print $head_title; ?></title>

  <meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
  <meta charset="UTF-8">
  <meta http-equiv="X-Frame-Options" content="deny">
  <meta name="viewport" content="width=device-width, initial-scale=1">
  <meta http-equiv="X-UA-Compatible" content="IE=edge">

  <?php print $styles; ?>
  <!--[if IE 8]>
  <link rel="stylesheet" href="/<?PHP print drupal_get_path('theme', 'koop2'); ?>/css/IE8.css"/>
  <![endif]-->
  <!--[if IE 8]>
  <link rel="stylesheet" href="/<?PHP print drupal_get_path('theme', 'koop2'); ?>/css/grids-responsive-old-ie-min.css"/>
  <![endif]-->
  <?php
  if ($wrapper = file_stream_wrapper_get_instance_by_uri('public://')) {
    $url = $wrapper->getExternalUrl();
    print '<link rel="stylesheet" href="'.$url.'koop_theme/themes.css" />';
  } ?>
  <?php // Not the nices way to add JS, but its the only way to make these scripts work :( ?>
  <script type="text/javascript" src="/<?PHP print drupal_get_path('theme', 'koop2') ?>/js/jquery-1.11.1.min.js"></script>
  <script type="text/javascript" src="/<?PHP print drupal_get_path('theme', 'koop2') ?>/js/modernizr.custom.js"></script>
  <script type="text/javascript" src="/<?PHP print drupal_get_path('theme', 'koop2') ?>/js/KOOP_webapp.js"></script>
  <?php print $scripts; ?>
  <!--[if lt IE 9]>
  <script src="/<?PHP print drupal_get_path('theme', 'koop2'); ?>/js/respond.min.js"></script>
  <![endif]-->
  <link rel="shortcut icon" href="/<?PHP print drupal_get_path('theme', 'koop2') ?>/images/favicon.ico" type="image/x-icon">
  <link rel="apple-touch-icon-precomposed" href="/<?PHP print drupal_get_path('theme', 'koop2') ?>/images/apple-touch-icon-precomposed.png">
  <link rel="apple-touch-icon" size="72x72" href="/<?PHP print drupal_get_path('theme', 'koop2') ?>/images/apple-touch-icon-72x72.png">
  <link rel="apple-touch-icon" size="114x114" href="/<?PHP print drupal_get_path('theme', 'koop2') ?>/images/apple-touch-icon-114x114.png">
  <link rel="apple-touch-icon" size="144x144" href="/<?PHP print drupal_get_path('theme', 'koop2') ?>/images/apple-touch-icon-144x144.png">
</head>
<body class="drupal <?php print $classes; ?>" <?php print $attributes; ?>>
<?php print $page_top; ?>
<?php print $page; ?>
<?php print $page_bottom; ?>

<script src="/<?PHP print drupal_get_path('theme', 'koop2'); ?>/js/custom/description.js"></script>
<script src="/<?PHP print drupal_get_path('theme', 'koop2'); ?>/js/custom/datacalendar.js"></script>
<script src="/<?PHP print drupal_get_path('theme', 'koop2'); ?>/js/custom/dataverzoek.js"></script>
</body>
</html>
