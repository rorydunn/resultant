<?php
?>

    <div class="sharp thumbnail ready">
      <div class="next">
        <?php print render($fields['field_image']->content); ?>
        <div class="topic"><?php print render($fields['field_tags']->content); ?></div>
        <div class="caption">
            <div>
              <?php print render($fields['title']->content); ?>
              <?php print render($fields['created']->content); ?>
              <?php print render($fields['teaser']->content); ?>
            </div>
            <div class="read-more">
              <?php print render($fields['title_1']->content); ?>
            </div>
        </div>
      </div>
    </div>
