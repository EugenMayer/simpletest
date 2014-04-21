<?php

/**
 * @file
 * smtp_library implementation for simpletest.
 */

/**
 * Capture e-mail message during testing.
 *
 * Code copied from TestingMailSystem in mail.sending.inc (Drupal 7). Placed in
 * this file to ensure not loaded until in testing mode, to ensure no conflicts
 * with other implementations like devel.
 *
 * @param $message
 *   An e-mail message.
 */
