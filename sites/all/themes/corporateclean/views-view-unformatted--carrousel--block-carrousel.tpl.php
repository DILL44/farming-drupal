<?php

/**
 * @file
 * Default simple view template to display a list of rows.
 *
 * @ingroup views_templates
 */
?>
<?php $count=$i=0;?>
<?php if (!empty($title)): ?>
<h3>
	<?php print $title; ?>
</h3>
<?php endif; ?>
<div id="slideshow">

	<?php foreach ($rows as $id => $row): ?>
	<div class="slider-item">
		<div class="content container_12">
			<div class="grid_12">
				<div
				<?php if ($classes_array[$id]) { print ' class="' . $classes_array[$id] .'"';  } ?>>
					<?php print $row;$count++; ?>
				</div>
			</div>
		</div>
	</div>
	<?php endforeach; ?>
</div>
<div id="slider-controls-wrapper">
	<div id="slider-controls" class="container_12">
		<ul id="slider-navigation">
			<?php while ($i!=$count):?>
			<li><a href="#"></a></li>
			<?php $i++;?>
			<?php endwhile;?>
		</ul>
	</div>
</div>
