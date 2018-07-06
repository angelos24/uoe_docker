<?php
/**
 * @file
 * uoe_profile.pages.inc
 *
 * Pages provided by the uoe_profile module.
 */

/**
 * Page callback providing a listing of profiles a user has been granted editing
 * rights over.
 *
 * @see uoe_profile_menu()
 */
function uoe_profile_profile_listing_form($form, &$form_state, $account) {
  drupal_set_title(t("Other users' profiles @username can edit", array('@username' => format_username($account))), PASS_THROUGH);

  $form['#uid'] = $account->uid;

  $header = array(
    'title' => array('data' => t('Profile page'), 'field' => 'n.title'),
    'status' => array('data' => t('Status'), 'field' => 'n.status'),
    'changed' => array('data' => t('Updated'), 'field' => 'n.changed', 'sort' => 'desc'),
  );

  $profiles = uoe_profile_get_profiles($account, 20, $header);

  $options = array();
  foreach ($profiles as $node) {
    $uri = entity_uri('node', $node);
    $options[$node->nid] = array(
      'title' => array(
        'data' => array(
          '#type' => 'link',
          '#title' => check_plain($node->title),
          '#href' => $uri['path'],
          '#options' => $uri['options'],
          '#suffix' => ' ' . theme('mark', array('type' => node_mark($node->nid, $node->changed))),
        ),
      ),
      'status' => $node->status ? t('published') : t('not published'),
      'changed' => format_date($node->changed, 'short'),
    );
  }

  $form['profiles'] = array(
    '#type' => 'tableselect',
    '#header' => $header,
    '#options' => $options,
    '#empty' => t('No other editable profiles.'),
  );

  if (!empty($options)) {
    $form['remove'] = array(
      '#type' => 'submit',
      '#value' => t('Delete selected'),
      '#submit' => array('uoe_profile_delete_profile_access_submit'),
    );
  }

  $form['pager'] = array('#markup' => theme('pager'));

  $form['manage'] = array(
    '#type' => 'container',
    '#access' => user_access('uoe manage profiles'),
  );

  $form['manage']['heading'] = array(
    '#markup' => '<h3>' . t('Manage editable user profiles') . '</h3><p>' . t('Remove profiles this user can edit by selecting them above and clicking "Delete selected".  Add new user profiles below.') . '<p>',
  );

  $form['manage']['more'] = array(
    '#type' => 'fieldset',
    '#title' => t('Add more user profiles'),
    '#description' => t("To allow this user editing rights to other users' profiles, enter their usernames in the text area below.  When you click submit this will generate a new, unpublished profile page for the user if they don't already have one."),
  );

  $form['manage']['more']['usernames'] = array(
    '#type' => 'textarea',
    '#title' => 'Usernames',
    '#description' => 'Enter usernames one per line and click "Add users" to submit.',
  );

  $form['manage']['more']['add_users'] = array(
    '#type' => 'submit',
    '#value' => t('Add users'),
    '#submit' => array('uoe_profile_add_profile_access_submit'),
  );

  return $form;
}

/**
 * Page callback providing a listing of editors that have been granted editing
 * rights over the profile node.
 *
 * @see uoe_profile_menu()
 */
function uoe_profile_editor_listing_form($form, &$form_state, $node) {
  drupal_set_title(t("Other editors of profile page %title", array('%title' => $node->title)), PASS_THROUGH);

  $form['#nid'] = $node->nid;

  $header = array(
    'name' => t('User'),
  );

  $editors = uoe_profile_get_editors($node, 20);

  $options = array();
  foreach ($editors as $account) {
    $uri = entity_uri('user', $account);
    $options[$account->uid] = array(
      'name' => array(
        'data' => array(
          '#type' => 'link',
          '#title' => check_plain(format_username($account)),
          '#href' => $uri['path'],
          '#options' => $uri['options'],
        ),
      ),
    );
  }

  $form['editors'] = array(
    '#type' => 'tableselect',
    '#header' => $header,
    '#options' => $options,
    '#empty' => t('No other editable profiles.'),
  );

  if (!empty($options)) {
    $form['remove'] = array(
      '#type' => 'submit',
      '#value' => t('Delete selected'),
      '#submit' => array('uoe_profile_delete_editor_access_submit'),
    );
  }

  $form['pager'] = array('#markup' => theme('pager'));

  $form['manage'] = array(
    '#type' => 'container',
    '#access' => user_access('uoe manage profiles'),
  );
  $form['manage']['heading'] = array(
    '#markup' => '<h3>' . t('Manage user profile editors') . '</h3><p>' . t('Remove editors by selecting them above and clicking "Delete selected".  Add new editors below.') . '<p>',
  );

  $form['manage']['more'] = array(
    '#type' => 'fieldset',
    '#title' => t('Add more editors for this profile page'),
    '#description' => t("To allow this user editing rights to other users' profiles, enter usernames in the text area below.  When you click submit, this will generate a new, unpublished profile page for the user if they don't already have one."),
  );

  $form['manage']['more']['usernames'] = array(
    '#type' => 'textarea',
    '#title' => 'Usernames',
    '#description' => 'Enter usernames one per line and click "Add users" to submit.',
  );

  $form['more']['add_users'] = array(
    '#type' => 'submit',
    '#value' => t('Add users'),
    '#submit' => array('uoe_profile_add_editor_access_submit'),
  );

  return $form;
}

/**
 * Submit callback for uoe_profile_editor_listing_form.
 *
 * Remove the selected editors from the uoe_profile_access table.
 */
function uoe_profile_delete_editor_access_submit($form, &$form_state) {
  $nid = $form['#nid'];
  $editors = array_keys(array_filter($form_state['values']['editors']));

  db_delete('uoe_profile_access')
    ->condition('nid', $nid)
    ->condition('uid', $editors, 'IN')
    ->execute();
}

/**
 * Submit callback for uoe_profile_profile_listing_form.
 *
 * Remove the selected editors from the uoe_profile_access table.
 */
function uoe_profile_delete_profile_access_submit($form, &$form_state) {
  $uid = $form['#uid'];
  $profiles = array_keys(array_filter($form_state['values']['profiles']));

  db_delete('uoe_profile_access')
    ->condition('uid', $uid)
    ->condition('nid', $profiles, 'IN')
    ->execute();
}

/**
 * Submit callback for uoe_profile_editor_listing_form.
 *
 * Add new editors to the uoe_profile_access table.
 */
function uoe_profile_add_editor_access_submit($form, &$form_state) {
  $nid = $form['#nid'];
  $usernames = uoe_profile_parse_list($form_state['values']['usernames']);

  $operations = array();
  foreach ($usernames as $username) {
    $operations[] = array(
      'uoe_profile_add_editor_access_batch_op',
      array($nid, $username),
    );
  }

  $batch = array(
    'operations' => $operations,
    'finished' => 'uoe_profile_batch_finished',
    'file' => drupal_get_path('module', 'uoe_profile') . '/uoe_profile.pages.inc',
  );

  batch_set($batch);
}

/**
 * Submit callback for uoe_profile_profile_listing_form.
 *
 * Add new editors to the uoe_profile_access table.
 */
function uoe_profile_add_profile_access_submit($form, &$form_state) {
  $profile_uid = $form['#uid'];
  $usernames = uoe_profile_parse_list($form_state['values']['usernames']);

  $operations = array();
  foreach ($usernames as $username) {
    $operations[] = array(
      'uoe_profile_add_profile_access_batch_op',
      array($profile_uid, $username),
    );
  }

  $batch = array(
    'operations' => $operations,
    'finished' => 'uoe_profile_batch_finished',
    'file' => drupal_get_path('module', 'uoe_profile') . '/uoe_profile.pages.inc',
  );

  batch_set($batch);
}


/**
 * Helper function to test if a user exists.  If it doesn't an attempt will be
 * made to create it using the ldap module suite.
 *
 * @param $username
 *   The LDAP username to test.
 * @param $context
 *   The batch context array. Success/failure messages are written to the array.
 *
 * @return
 *   The user object for the found username, FALSE if there is no user for the
 *   provided user.
 */
function uoe_profile_prepare_user($username, &$context) {
  if (empty($username)) {
    return FALSE;
  }

  if ($account = user_load_by_name($username)) {
    return $account;
  }

  // If we have the 'uoe manage profiles' permission and the LDAP modules are
  // enabled, attempt to autogenerate the required user.
  if (module_exists('ldap_authentication') && user_access('uoe manage profiles')) {
    $fake_form_state = array(
      'values' => array(
        'name' => check_plain($username),
        'pass' => user_password(20),
      ),
      'sso_login' => TRUE,
    );

    $account = ldap_authentication_user_login_authenticate_validate(array(), $fake_form_state, TRUE);

    if (empty($account)) {
      $context['results']['warning'][] = t('Could not create user %user', array('%user' => $username));
      return FALSE;
    }
    else {
      $context['results']['info'][] = t('Created user %user', array('%user' => $account->name));
      return $account;
    }
  }

  $context['results']['warning'][] = t('User %user does not exist', array('%user' => $username));
  return FALSE;
}

/**
 * Helper function to ensure the user has an associated profile page.
 *
 * @param $usernames
 *   An array of submitted usernames.
 * @param $create_profiles
 *   A flag to check and create the profile page as well as the user.
 *
 * @return
 *   The nid of the user's profile page.
 */
function uoe_profile_prepare_profile($account, $context) {
  global $user;

  // Only users with the 'uoe manage profiles' permission are allowed to assign
  // editors and create profile pages for others.
  if (!user_access('uoe manage profiles')) {
    return FALSE;
  }

  if (!is_object($account) || empty($account->uid)) {
    return FALSE;
  }

  if ($nid = uoe_profile_get_node_id($account->uid)) {
    return $nid;
  }

  $surname = $forenames = $title = '';
  $wrapper = entity_metadata_wrapper('user', $account);
  try {
    $title = $wrapper->field_account_display_name->value();
    $surname = $wrapper->field_account_surname->value();
    $forenames = $wrapper->field_account_forenames->value();
  }
  catch (EntityMetadataWrapperException $e) {
  }

  if (empty($title)) {
    $title = t('Profile page for @user', array('@user' => $account->name));
  }

  $node = new stdClass();
  $node->title = $title;
  $node->type = 'uoe_profile';
  node_object_prepare($node);
  $node->language = LANGUAGE_NONE;
  $node->uid = $user->uid;

  $node->field_uoe_contact_family_name[$node->language][]['value'] = $surname;
  $node->field_uoe_contact_given_name[$node->language][]['value'] = $forenames;

  $node->field_uoe_profile_user[$node->language][] = array(
    'target_id' => $account->uid,
    'target_type' => 'user',
  );

  $node->log = t('Profile page created by @user', array('@user' => $user->name));
  $node = node_submit($node);
  node_save($node);

  $context['results']['info'][] = t('Created profile page for user %user', array('%user' => $account->name));

  return $node->nid;
}

/**
 * Batch finished callback.
 */
function uoe_profile_batch_finished($success, $results, $operations) {
  foreach (array('warning', 'info', 'success') as $state) {
    if (!empty($results[$state])) {
      $message = theme('item_list', array('items' => $results[$state]));
      drupal_set_message(filter_xss($message), $state);
    }
  }

  if (!$success) {
    $error_operation = reset($operations);
    drupal_set_message(
      t('An error occurred while processing @operation with arguments: @args',
        array(
          '@operation' => $error_operation[0],
          '@args' => print_r($error_operation[0], TRUE),
        )
      ),
      'error'
    );
  }
}

/**
 * Batch operation to assign an editor to a user profile.  If necessary the
 * editor is created.
 *
 * @param $nid
 *   The profile page node's nid.
 * @param $editor_username
 *   The username of the editor you're giving access to.
 */
function uoe_profile_add_editor_access_batch_op($nid, $editor_username, &$context) {
  if (!$node = node_load($nid)) {
    $context['message'] = t('The profile page (node @nid) no longer exists!', array('@nid' => $nid));
    return;
  }

  if ($editor = uoe_profile_prepare_user($editor_username, $context)) {
    uoe_profile_make_editor($editor, $nid);
    $context['message'] = t('Assigned @editor as an editor for the %title profile page', array('@editor' => $editor->name, '%title' => $node->title));
  }
}

/**
 * Batch operation to assign a user profile to an editor.  If necessary the
 * profile page and/or user is created.
 *
 * @param $editor_uid
 *   The editor's uid
 * @param $profile_username
 *   The username of the user whose profile you are giving editing rights to.
 */
function uoe_profile_add_profile_access_batch_op($editor_uid, $profile_username, &$context) {
  if (!$editor = user_load($editor_uid)) {
    $context['message'] = t('The editor (user %user_id) no longer exists!', array('%user_id' => $editor_uid));
    return;
  }

  if ($account = uoe_profile_prepare_user($profile_username, $context)) {
    if ($nid = uoe_profile_prepare_profile($account, $context)) {
      uoe_profile_make_editor($editor, $nid);
      $context['message'] = t('Assigned @editor as an editor for the %user profile page', array('@editor' => $editor->name, '%user' => $account->name));
    }
  }
}
