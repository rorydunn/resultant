<div id="custom-footer" class="custom-footer">
  <div class="container">
    <?php
    $i = 0;
    $keys = array_keys($links);?>
      <div class="item">
        <div class="row social-links">
          <?php $link = $links[$keys[0]];?>
          <a target="_blank" href="<?php print ($link['link']['href']);?>" class="icon"><i class="fa fa-github-square fa-4" aria-hidden="true"></i></a>
          <?php $link = $links[$keys[1]];?>
          <a target="_blank" href="<?php print ($link['link']['href']);?>" class="icon"><i class="fa fa-linkedin-square fa-1" aria-hidden="true"></i></a>
        </div>
      </div>
    </div>
</div>
