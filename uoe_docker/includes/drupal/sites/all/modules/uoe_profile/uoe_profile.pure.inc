<?php

/**
 * @file
 * Functions related to requesting and maintaining pure data.
 */

define('UOE_PROFILE_ALL_ENDPOINT', 'http://pure.uwp.is.ed.ac.uk/restapi/v1/publications');
define('UOE_PROFILE_HIGHLIGHTS_ENDPOINT', 'http://pure.uwp.is.ed.ac.uk/restapi/v1/publicationshighlights');
define('UOE_PROFILE_MAX_PUBLICATIONS', 20);


/**
 * Get count of total number of publications.
 *
 * @param $pure_id
 *    The user-supplied PURE user id (unsanitized).
 *
 * @return
 *    The count as returned from PURE webservice.  FALSE is returned if there
 *    is no valid response.
 */
function uoe_profile_get_pure_count($pure_id) {
  // Validate $pure_id as a v4 UUID.
  if (!uoe_profile_validate_pure_id($pure_id)) {
    return;
  }

  $endpoint = UOE_PROFILE_ALL_ENDPOINT . '/count';
  $query = array(
    'authuuid' => $pure_id,
  );
  $endpoint .= '?' . drupal_http_build_query($query);

  $response = file_get_contents($endpoint);

  $count = FALSE;
  if ($response !== FALSE) {
    $response = drupal_json_decode($response);
    if (!is_array($response)) {
      $response = FALSE;
    }
    elseif (!empty($response['count'])) {
      $count = $response['count'];
    }
    // Fix for broken API response: [{count:n}] rather than {count:n}
    elseif (!empty($response[0]['count'])) {
      $count = $response[0]['count'];
    }
  }

  return $count;
}

/**
 * Get list of publications from webservice API.
 *
 * @param $pure_id
 *    The user-supplied PURE user id (un-sanitized).
 * @param $limit
 *    The number of items to return; a parameter for the endpoint.
 * @param $highlights
 *    Boolean indicating whether only highlighted publications should be
 *    returned.  A different endpoint is used for this.
 *
 * @return
 *    The response from the PURE service as an array.  NULL is returned if there
 *    is no response or invalid parameters are supplied.
 */
function uoe_profile_get_pure_data($pure_id, $limit, $highlights = FALSE) {
  // Validate $limit.
  if (!is_numeric($limit) || $limit < 1 || $limit > UOE_PROFILE_MAX_PUBLICATIONS) {
    return;
  }

  // Validate $pure_id as a v4 UUID.
  if (!uoe_profile_validate_pure_id($pure_id)) {
    return;
  }

  $endpoint = $highlights ? UOE_PROFILE_HIGHLIGHTS_ENDPOINT : UOE_PROFILE_ALL_ENDPOINT;
  $query = array(
    'authuuid' => $pure_id,
    'limit' => $limit,
  );
  $endpoint .= '?' . drupal_http_build_query($query);

  // Get the pure data from the microservice endpoint.
  $response = file_get_contents($endpoint);

  if ($response !== FALSE) {
    $response = drupal_json_decode($response);

    if (!is_array($response)) {
      $response = FALSE;
    }
    elseif (!empty($response['error'])) {
      // The endpoint is having problems.  Log the error and remove the content
      // so there's a visible indication of the problem.
      $message = empty($data['error']['message']) ? 'Unknown error' : $data['error']['message'];
      $status = empty($data['error']['status']) ? "\n" : "\nStatus: {$data['error']['status']}\n";
      $stack = empty($data['error']['stack']) ? '' : "Stack: {$data['error']['stack']}";
      drupal_set_message(t('Error from PURE API: %error.  Will try again later.', array('%error' => $message)), 'warning');
      watchdog('uoe_profile', 'PURE API ERROR: %message', array('%message' => "$message$status$stack"), WATCHDOG_ERROR);

      // Clear the response since we've handled the error.
      $response = array();
    }
  }

  return $response;
}

/**
 * Validate a PURE ID.
 *
 * @param $pure_id
 *   The user-supplied PURE user id.
 *
 * @return
 *   TRUE or FALSE depending on whether the supplied ID is a valid v4 UUID.
 */
function uoe_profile_validate_pure_id($pure_id) {
  $pattern = '/^[0-9a-f]{8}-[0-9a-f]{4}-4[0-9a-f]{3}-[89ab][0-9a-f]{3}-[0-9a-f]{12}$/';

  return preg_match($pattern, $pure_id, $matches);
}

/**
 * Update a node with PURE data.
 *
 * @param $node
 *   A node object to update with content from PURE.
 * @param $reset
 *   Boolean to indicate the existing value should be cleared if nothing valid
 *   comes back from the API.
 * @param $allow_save
 *   Boolean to specify whether the updated node object should be saved.
 *
 * @return
 *   Boolean.  Whether the node has been updated should probably be saved if
 *   $allow_save = FALSE.
 */
function uoe_profile_pure_node_update($node, $reset = FALSE, $allow_save = TRUE) {
  $wrapper = entity_metadata_wrapper('node', $node);
  $save_required = FALSE;
  $retry = _uoe_profile_retry_datestamp();

  // Clear out existing content if reset has been requested.
  if ($reset) {
    $wrapper->field_uoe_pure->set('');
    $save_required = TRUE;
  }

  $pure_id = $wrapper->field_uoe_pure_id->value();
  $limit = $wrapper->field_uoe_pure_limit->value();
  $highlights = $wrapper->field_uoe_pure_highlighted->value();

  $all_count = uoe_profile_get_pure_count($pure_id);
  $data = uoe_profile_get_pure_data($pure_id, $limit, $highlights);

  if ($data === FALSE) {
    // Connection to service failed so schedule a retry.
    $wrapper->field_uoe_pure_updated->set($retry);
    $save_required = TRUE;
  }
  else {
    $new_content = theme('uoe_pure_publications', array('data' => $data, 'all_count' => $all_count));
    $wrapper->field_uoe_pure->set($new_content);
    $wrapper->field_uoe_pure_updated->set(REQUEST_TIME);
    $save_required = TRUE;
  }

  if ($save_required && $allow_save) {
    // We are not going to create a new revision of the node...
    $wrapper->revision = FALSE;
    $wrapper->save();
  }

  return $save_required;
}

/**
 * Helper function to return the datestamp to use for retry.
 */
function _uoe_profile_retry_datestamp() {
  // Set retry time to an hour later.
  $expiry = _uoe_profile_expiry_datestamp();
  return $expiry + (60 * 60);
}

/**
 * Helper function to return content expiry timestamp.
 */
function _uoe_profile_expiry_datestamp() {
  // Expiry time is four days.
  return REQUEST_TIME - (60 * 60 * 24 * 4);
}
