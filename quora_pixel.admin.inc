<?php

/**
 * @file
 * Administrative page callbacks for the Quora Pixel module.
 */

/**
 * Implements hook_admin_settings() for module settings configuration.
 */
function quora_pixel_admin_settings_form($form_state) {
  $form = array();

  $form['quora_pixel_id'] = array(
    '#type' => 'textfield',
    '#title' => t('Pixel ID'),
    '#required' => TRUE,
    '#default_value' => variable_get('quora_pixel_id'),
  );

  $form['quora_pixel_exclude_admin_paths'] = array(
    '#type' => 'checkbox',
    '#title' => t('Exclude from admin pages'),
    '#description' => t('The pixel tracking code will not be added to admin pages.'),
    '#default_value' => variable_get('quora_pixel_exclude_admin_paths', 1),
  );

  // Role specific visibility configurations.
  $roles = user_roles();
  $role_options = array();
  foreach ($roles as $rid => $name) {
    $role_options[$rid] = $name;
  }
  $form['quora_pixel_roles'] = array(
    '#type' => 'checkboxes',
    '#title' => t('Remove Quora Pixel for specific roles'),
    '#default_value' => variable_get('quora_pixel_roles', array()),
    '#options' => $role_options,
    '#description' => t('Remove script only for the selected role(s). If none of the roles are selected, all roles will have the Quora Pixel. Otherwise, any roles selected here will NOT have the script.'),
  );

  return system_settings_form($form);
}
