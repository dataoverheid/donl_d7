<?php

/**
 * @file
 * This file contains no working PHP code; it exists to provide additional
 * documentation for doxygen as well as to document hooks in the standard
 * Drupal manner.
 */


/**
 * @addtogroup hooks
 * @{
 */

/**
 * Alter the term tree callback that is used for content taxonomy options lists.
 *
 * By default taxonomy_get_tree is used to retrieve the list of terms. It is
 * important that any provided tree callback must have the same function
 * signature as hook_content_taxonomy_tree_callback_alter().
 * For example this hook can be used to exchange the callback with a language
 * specific tree function.
 *
 * @param $tree_callback
 *   The current callback that can be overridden.
 * @param $field
 *   The term reference field info array.
 * @param $vocabulary
 *   The vocabulary object for which the term list should be retrieved. One
 *   field can have multiple vocabularies attached, which leads to multiple
 *   invocations of this function.
 */
function hook_content_taxonomy_tree_callback_alter(&$tree_callback, $field, $vocabulary) {
  if ($vocabulary->machine_name == 'my_voc') {
    $tree_callback = 'my_tree_callback';
  }
}

/**
 * @} End of "addtogroup hooks".
 */
