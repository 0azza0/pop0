<?php

/**
 * Implements hook_views_data().
 *
 */

function viewshead_views_data() {

  $data['viewshead']['table']['group'] = t('viewshead');

  $data['viewshead']['table']['base'] = array(
     'id' => 'field_viewshead_value',
     'table' => 'node_data_field_viewshead',  
     'field' => 'field_viewshead_value',
     );

  $data['viewshead']['table']['join'] = array(
    '#global' => array(),
  );

  $data['viewshead']['viewshead'] = array(
    'group' => t('Viewshead'),
    'field' => array(
      'title' => t('Viewshead field'),
      'help' => t('To Head.'),
      'handler' => 'viewshead_handler_field_viewshead',
    ),
  );

  return $data;
}

/**
 * Implements hook_views_handlers().
 *
 */

function viewshead_views_handlers() {
  return array(
    'info' => array(
      'path' => drupal_get_path('module','viewshead'),
      ),
    'handlers' => array(
      'viewshead_handler_field_viewshead' => array(
        'parent' => 'views_handler_field',
        ),
       ),
    );
}

?>
