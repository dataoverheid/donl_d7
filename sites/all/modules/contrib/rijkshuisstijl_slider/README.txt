
Rijkshuisstijl Slider
---------------------
This module contains the functionality of incorporating a slider formatted in
the rijkshuisstijl. To be 'webrichtlijnen'-proof, the module contains
graceful degradation, so all slides are visible if javascript is disabled.

In his core it's a extension on the bean module, so you can add as many
sliders as you wish. At the moment the jquery animation is very minimal,
but in the future this will be more configurable.

The module should be used alongside the rijkshuisstijl theme.

Usage
-----
  * Add a Rijkshuisstijl slider bean through the "Content" interface,
   i.e. "Admin -> Content -> Block -> Add".

  * You can add as many slides to a slider as you wish by pressing "Add Slide".

  * Go to the "Blocks" interface, i.e. "Admin -> Structure -> Blocks". And move
   the slider block to the region you wish that it appears in.

  * Your block is now visible when you've visit your Drupal site.

Best Practices
--------------
  * The slider contains styling for the Dutch government branding. And should be
   used with the Rijkshuisstijl theme.
