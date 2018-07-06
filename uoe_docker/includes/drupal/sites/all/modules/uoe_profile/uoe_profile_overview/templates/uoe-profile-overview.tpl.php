<?php

/**
 * @file
 * This template handles formatting the selected list of user profiles.
 *
 * Variables available:
 * - $list_count: The number of profile lists to display.
 * - $lists: An array of profile lists.  Each list contains:
 * - $list->text: Sanitized text to alongside the list.
 * - $list->sort: A callback URL to change the sorting of the list.
 * - $list->sorted: 'asc' or 'desc' representing the list's current sort order.
 * - $list->rows: An array of row data.  Each row is an associative array
 *                with the following keys:
 * - $row['name']: The name on the user's profile page as a link to the page.
 * - $row['email']: The profile user's email address as a link.
 * - $row['phone']: The profile user's contact phone number.
 * - $row['role']: The profile user's work role.
 */
?>

<?php for ($i = 0; $i < $list_count; $i++): ?>
  <?php if (!empty($lists[$i]->text)): ?>
    <?php print $lists[$i]->text; ?>
    <div class="table-responsive">
      <table class="table table-striped">
        <thead>
          <tr>
  <?php if ($lists[$i]->sort): ?>
            <th><a href="<?php print $lists[$i]->sort; ?>" title="<?php print t("Change sort order"); ?>"><?php print t('Name'); ?>
              <?php if ($lists[$i]->sorted == 'desc'): ?>
                <span class="sr-only">(<?php print t('sorted in descending order'); ?>)</span>
              <?php else: ?>
                <span class="sr-only">(<?php print t('sorted in ascending order'); ?>)</span>
              <?php endif; ?>
            </a></th>
  <?php else: ?>
            <th><?php print t('Name'); ?></th>
  <?php endif; ?>
            <th><?php print t('Role'); ?></th>
            <th><?php print t('Email'); ?></th>
            <th><?php print t('Phone number'); ?></th>
          </tr>
        </thead>
        <tbody>
  <?php endif; ?>

  <?php foreach ($lists[$i]->rows as $row): ?>
          <tr>
            <td>
              <?php print $row['name']; ?>
            </td>
            <td>
              <?php print $row['role']; ?>
            </td>
            <td>
              <?php print $row['email']; ?>
            </td>
            <td>
              <?php print $row['phone']; ?>
            </td>
          </tr>
  <?php endforeach; ?>

  <?php if ($lists[$i]->error): ?>
          <tr class="danger">
            <td colspan="4">
              <?php print $lists[$i]->error; ?>
            </td>
          </tr>
  <?php endif; ?>

  <?php if (($i + 1 == $list_count) || !empty($lists[$i + 1]->text)): ?>
        </tbody>
      </table>
    </div>
  <?php endif; ?>
<?php endfor; ?>
