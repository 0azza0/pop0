<?php

/**
 * A handler field that has its rendered content directed to the head tag of the page.
 * 
 * @ingroup views_field_handlers
 */

class viewshead_handler_field_viewshead extends views_handler_field {

  function query() {
    // empty function says "dont modify the query"
  }

  function allow_advanced_render() {
     return TRUE;
    }

  function option_definition() {
    $options = parent::option_definition();

    $options['tohead'] = array(
      'contains' => array(
        'headto' => array('default' => TRUE),
        'metaname_value' => array('default' => FALSE),
        'metaname_delimiter' => array('default' => ','),
       ),
     );
    $options['exclude'] = array('default' => TRUE);

    $options['alter'] = array(
      'contains' => array(
        'alter_text' => array('default' => TRUE),
      ),
    );

    return $options;
    }

 function options_form(&$form,&$form_state) {
   parent::options_form($form, $form_state);

   $form['tohead']['#weight'] = -10;
   $form['tohead']['headto'] = array (
     '#title' => t('Invoke the Viewshead processor with this field data.'),
     '#weight' => -10,
     '#type' => 'checkbox',
     '#description' => t('Invoke the Viewshead processor, prempts anything else that might happen to this field data.'),
     '#default_value' => TRUE,
    );
    $form['tohead']['metaname_value'] = array(
      '#type' => 'textfield',
      '#weight' => -9,
      '#title' => t('Send to viewshead processor as this key-name'),
      '#default_value' => $this->options['tohead']['metaname_value'],
      '#description' => t('Display this output in head within this key'),
    );

    $form['tohead']['metaname_delimiter'] = array(
      '#type' => 'textfield',
      '#weight' => -8,
      '#title' => t('Put these in a delimited list, deliminated by this delimiter, leave blank to leave whole.'),
      '#default_value' => $this->options['tohead']['metaname_delimiter'],
      '#description' => t('Display this output in HEAD as another meta-keyword'),
    );

     $form['alter']['alter_text'] = array(
       '#type' => 'checkbox',
       '#title' => t('Rewrite the output of this field, required.'),
       '#description' => t('Viewshead field requires tokens or text in this field.'),
       '#default_value' => $this->options['alter']['alter_text'],
      );

    unset($form['alter']['make_link']);
    unset($form['alter']['path']);
    unset($form['alter']['target']);
    unset($form['alter']['link_class']);
    unset($form['alter']['alt']);
    unset($form['alter']['prefix']);
    unset($form['alter']['trim']);
    unset($form['alter']['max_length']);
    unset($form['alter']['word_boundary']);
    unset($form['alter']['ellipsis']);
    unset($form['alter']['strip_tags']);
    unset($form['alter']['html']);
    unset($form['alter']['suffix']);
//    unset($form['alter']['text']['#dependency']);
//    unset($form['alter']['text']['#process']);

    unset($form['empty']);
    unset($form['label']);
    unset($form['exclude']);
    unset($form['hide_empty']);
    unset($form['empty_zero']);
  }

// Here goes nothin.
/*
  function render($values) {
    if(!empty $this->options['tohead']) {
      $tokens = $this->get_render_tokens($this->options['alter']);
*/      


}

?>

