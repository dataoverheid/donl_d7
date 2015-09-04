<div id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>

  <?php print $user_picture; ?>

  <?php print render($title_prefix); ?>
  <?php if (!$page): ?>
    <h2<?php print $title_attributes; ?>><a href="<?php print $node_url; ?>"><?php print $title; ?></a></h2>
  <?php endif; ?>
  <?php print render($title_suffix); ?>

  <?php if ($display_submitted): ?>
    <div class="submitted">
      <?php print $submitted; ?>
    </div>
  <?php endif; ?>

  <div class="content"<?php print $content_attributes; ?>>
    <?php
      // We hide the comments and links now so that we can render them later.
      hide($content['comments']);
      hide($content['links']);
     
      // Specific styling for a "dataverzoek"
      $status = render($content['field_dv_status']);
      $toelichting = render($content['field_dv_toelichting_status']);
      hide($content['field_dv_status']);
      hide($content['field_dv_toelichting_status']);
    ?>
    
    <?php if (isset($status) || isset($toelichting)): ?>
    <fieldset>
      <legend>Status</legend>
      <?php print render($content['field_dv_status']); ?>
      <?php print render($content['field_dv_toelichting_status']); ?>
    </fieldset>
    <?php endif; ?>
   
    <?php   
      print render($content);
    ?>
  </div>

  <?php print render($content['links']); ?>

  <?php print render($content['comments']); ?>

</div>
