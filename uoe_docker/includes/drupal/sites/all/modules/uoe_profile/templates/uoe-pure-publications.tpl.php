<?php

/**
 * @file
 * This template handles formatting the list of publications taken from PURE.
 *
 * Variables available:
 * - $publication_count: A count of all publications the author has.
 * - $all_publications: A URL to all publications on ERE.
 * - $publications: An array of publications.  Each publication contains:
 * - $publication->url: A URL to the publication details on ERE.
 * - $publication->published: Machine-readable datetime for when published.
 * - $publication->published_display: Human-readable date published.
 * - $publication->title: Title for the publication.
 * - $publication->pages: The number of pages in the publication (in brackets).
 * - $publication->journal: Journal details.
 * - $publication->author: Author name.
 * - $publication->doi: Document object identifier in URL form.
 */
?>

<?php if (!empty($publications)): ?>
  <ul class="profile-publications">
  <?php foreach ($publications as $publication): ?>

    <li itemscope itemtype="http://schema.org/CreativeWork">
      <cite>
        <?php if (!empty($publication->url)): ?>
        <a href="<?php print $publication->url; ?>" title="view on Edinburgh Research Explorer">
        <?php endif; ?>
          <span itemprop="name"><?php print $publication->title; ?></span>
        <?php if (!empty($publication->url)): ?>
        </a>
        <?php endif; ?>
      </cite>
      <?php print $publication->pages; ?>
      <span itemprop="author"><?php print $publication->author; ?></span>
      <?php if ($publication->published): ?>
        <time datetime="<?php print $publication->published; ?>" itemprop="datePublished"><?php print $publication->published_display; ?></time>
      <?php endif; ?>
      <?php if (!empty($publication->journal)): ?>
        <?php print t('In'); ?>:
        <?php print $publication->journal; ?>
      <?php endif; ?>
      <?php if (!empty($publication->doi)): ?>
        <br><abbr title="<?php print t("Digital object identifier"); ?>"><?php print t('DOI'); ?></abbr>:
        <a href="<?php print $publication->doi; ?>" itemprop="url"><?php print $publication->doi; ?></a>
      <?php endif; ?>
    </li>

  <?php endforeach; ?>
  </ul>
<?php endif; ?>

<?php if (!empty($all_publications)): ?>
  <p>
    <a href="<?php print $all_publications; ?>">
      <?php print format_plural($publication_count, 'View publication on Research Explorer', 'View all @count publications on Research Explorer'); ?>
    </a>
  </p>
<?php endif; ?>
