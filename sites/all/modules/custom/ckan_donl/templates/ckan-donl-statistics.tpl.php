<div class="ckan-donl-statistics">
  <span class="total_datasets">
    <?php if (!empty($statistics['total_datasets'])): ?>
      <?php print $statistics['total_datasets']['label']; ?>
      <?php print $statistics['total_datasets']['value']; ?>
    <?php endif; ?>
  </span>
  <span class="last-modification-date">
    <?php if (!empty($statistics['last_modification_date'])): ?>
      <?php print $statistics['last_modification_date']['label']; ?>
      <?php print $statistics['last_modification_date']['value']; ?>
    <?php endif; ?>
  </span>
  <div class="status-datasets">
    <span><?php print $statistics['status_datasets']['label']; ?></span>
    <ul>
      <?php foreach ($statistics['status_datasets']['datasets'] as $dataset): ?>
        <li>
          <?php print $dataset['label']; ?>
          <span><?php print $dataset['value']; ?></span>
        </li>
      <?php endforeach; ?>
    </ul>
  </div>
  <div class="features-datasets">
    <span><?php print $statistics['features_datasets']['label']; ?></span>
    <ul class="left">
      <?php foreach ($statistics['features_datasets']['datasets']['left_column'] as $dataset): ?>
        <li>
          <?php print $dataset['label']; ?>
          <span><?php print $dataset['value']; ?></span>
        </li>
      <?php endforeach; ?>
    </ul>
    <ul class="right">
      <?php foreach ($statistics['features_datasets']['datasets']['right_column'] as $dataset): ?>
        <li>
          <?php print $dataset['label']; ?>
          <span><?php print $dataset['value']; ?></span>
        </li>
      <?php endforeach; ?>
    </ul>
  </div>
  <div class="actions">
    <?php foreach ($statistics['actions'] as $action): ?>
      <a class="<?php print implode(' ', $action['classes']); ?>" href="<?php print $action['url']; ?>"><?php print $action['title']; ?></a>
    <?php endforeach; ?>
  </div>
</div>