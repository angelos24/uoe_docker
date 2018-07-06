<?php

/**
 * @file
 * Default theme implementation to display a node.
 *
 * Available variables:
 * - $title: the (sanitized) title of the node.
 * - $content: An array of node items. Use render($content) to print them all,
 *   or print a subset such as render($content['field_example']). Use
 *   hide($content['field_example']) to temporarily suppress the printing of a
 *   given element.
 * - $user_picture: The node author's picture from user-picture.tpl.php.
 * - $date: Formatted creation date. Preprocess functions can reformat it by
 *   calling format_date() with the desired parameters on the $created variable.
 * - $name: Themed username of node author output from theme_username().
 * - $node_url: Direct URL of the current node.
 * - $display_submitted: Whether submission information should be displayed.
 * - $submitted: Submission information created from $name and $date during
 *   template_preprocess_node().
 * - $classes: String of classes that can be used to style contextually through
 *   CSS. It can be manipulated through the variable $classes_array from
 *   preprocess functions. The default values can be one or more of the
 *   following:
 *   - node: The current template type; for example, "theming hook".
 *   - node-[type]: The current node type. For example, if the node is a
 *     "Blog entry" it would result in "node-blog". Note that the machine
 *     name will often be in a short form of the human readable label.
 *   - node-teaser: Nodes in teaser form.
 *   - node-preview: Nodes in preview mode.
 *   The following are controlled through the node publishing options.
 *   - node-promoted: Nodes promoted to the front page.
 *   - node-sticky: Nodes ordered above other non-sticky nodes in teaser
 *     listings.
 *   - node-unpublished: Unpublished nodes visible only to administrators.
 * - $title_prefix (array): An array containing additional output populated by
 *   modules, intended to be displayed in front of the main title tag that
 *   appears in the template.
 * - $title_suffix (array): An array containing additional output populated by
 *   modules, intended to be displayed after the main title tag that appears in
 *   the template.
 *
 * Other variables:
 * - $node: Full node object. Contains data that may not be safe.
 * - $type: Node type; for example, story, page, blog, etc.
 * - $comment_count: Number of comments attached to the node.
 * - $uid: User ID of the node author.
 * - $created: Time the node was published formatted in Unix timestamp.
 * - $classes_array: Array of html class attribute values. It is flattened
 *   into a string within the variable $classes.
 * - $zebra: Outputs either "even" or "odd". Useful for zebra striping in
 *   teaser listings.
 * - $id: Position of the node. Increments each time it's output.
 *
 * Node status variables:
 * - $view_mode: View mode; for example, "full", "teaser".
 * - $teaser: Flag for the teaser state (shortcut for $view_mode == 'teaser').
 * - $page: Flag for the full page state.
 * - $promote: Flag for front page promotion state.
 * - $sticky: Flags for sticky post setting.
 * - $status: Flag for published status.
 * - $comment: State of comment settings for the node.
 * - $readmore: Flags true if the teaser content of the node cannot hold the
 *   main body content.
 * - $is_front: Flags true when presented in the front page.
 * - $logged_in: Flags true when the current user is a logged-in member.
 * - $is_admin: Flags true when the current user is an administrator.
 *
 * Field variables: for each field instance attached to the node a corresponding
 * variable is defined; for example, $node->body becomes $body. When needing to
 * access a field's raw values, developers/themers are strongly encouraged to
 * use these variables. Otherwise they will have to explicitly specify the
 * desired field language; for example, $node->body['en'], thus overriding any
 * language negotiation rule that was previously applied.
 *
 * @see template_preprocess()
 * @see template_preprocess_node()
 * @see template_process()
 *
 * @ingroup themeable
 */
?>

<div itemtype="http://schema.org/Person" itemscope="">
  <meta itemprop="url" content="<?php print $node_url; ?>" />
  <?php if ($uoe_contact_given_name): ?>
  <meta itemprop="givenName" content="<?php print "$uoe_contact_given_name $uoe_contact_middle_name"; ?>" />
  <?php endif; ?>
  <?php if ($uoe_contact_family_name): ?>
  <meta itemprop="familyName" content="<?php print $uoe_contact_family_name; ?>" />
  <?php endif; ?>
  <?php if ($uoe_contact_prefix): ?>
  <meta itemprop="honorificPrefix" content="<?php print $uoe_contact_prefix; ?>" />
  <?php endif; ?>
  <?php if ($uoe_contact_awards): ?>
  <meta itemprop="honorificSuffix" content="<?php print $uoe_contact_awards; ?>" />
  <?php endif; ?>

  <?php if ($uoe_contact_role): ?>
    <p class="lead" itemprop="jobTitle"><?php print $uoe_contact_role; ?></p>
  <?php endif; ?>

  <article>
    <div class="row">

      <div id="uoe-profile-body" class="profile-article col-xs-12 col-sm-12 col-md-6 col-lg-7" itemprop="description">
      <div class="uoe-profile-body">


        <section class="panel uoe-contact">
        <div class="panel-body">
          <div class="row">
          <div class="col-xs-12 col-sm-4 col-md-4" itemprop="image">
            <?php print $uoe_profile_picture; ?>
          </div>
          <div class="col-xs-12 col-sm-8 col-md-8">
            <?php if ($uoe_contact_org_1 || $uoe_contact_org_2 || $uoe_contact_org_3): ?>
              <ul class="organizations" itemtype="http://schema.org/Organization" itemscope="" itemprop="affiliation">
                <?php if ($uoe_contact_org_1): ?><li itemprop="legalName"><?php print $uoe_contact_org_1; ?></li><?php endif; ?>
                <?php if ($uoe_contact_org_2): ?><li itemprop="legalName"><?php print $uoe_contact_org_2; ?></li><?php endif; ?>
                <?php if ($uoe_contact_org_3): ?><li itemprop="legalName"><?php print $uoe_contact_org_3; ?></li><?php endif; ?>
              </ul>
            <?php endif; ?>

            <ul>
            <?php if ($uoe_contact_work_phone): ?>
            <li>
              <span class="glyphicon glyphicon-phone-alt"></span>
              Tel: <a itemprop="telephone" class="tel" href="tel:<?php print $uoe_contact_work_phone; ?>"><?php print $uoe_contact_work_phone; ?></a>
            </li>
            <?php endif; ?>
            <?php print $uoe_contact_point_PHN; ?>
            <?php print $uoe_contact_point_MOB; ?>
            <?php if ($uoe_contact_fax): ?>
            <li>
              <span class="glyphicon glyphicon-phone-alt"></span>
              Fax: <a itemprop="faxNumber" class="fax" href="fax:<?php print $uoe_contact_fax; ?>"><?php print $uoe_contact_fax; ?></a>
            </li>
            <?php endif; ?>
            <?php if ($uoe_contact_email): ?>
            <li>
              <span class="glyphicon glyphicon-envelope"></span>
              Email: <a itemprop="email" class="email" href="mailto:<?php print $uoe_contact_email; ?>"><?php print $uoe_contact_email; ?></a>
            </li>
            <?php endif; ?>
            <?php print $uoe_contact_point_WEB; ?>
            <?php print $uoe_contact_point_SOC; ?>
            </ul>
          </div>
          </div>
        </div>
        </section>

      </div>
      </div>


      <div class="profile-aside col-xs-12 col-sm-12 col-md-6 col-lg-5">
      <div class="uoe-profile-information">
      <?php if ($website_link): ?>
        <div class="panel panel-default uoe-profile-business-units-wrapper">
          <?php print $website_link; ?>
        </div>
      <?php endif; ?>

      <?php if ($uoe_contact_address || $uoe_contact_locality || $uoe_contact_postcode): ?>
        <div class="panel panel-default uoe-profile-address-wrapper"> <span class="glyphicon glyphicon-map-marker" aria-hidden="true"></span>
          <dl class="profile-address" itemprop="address" itemscope="" itemtype="http://schema.org/PostalAddress">
          <dt><?php print t('Street'); ?></dt>
          <dd itemprop="streetAddress">
              <?php print $uoe_contact_address; ?>
          </dd>
          <dt><?php print t('City'); ?></dt>
          <dd itemprop="addressLocality"><?php print $uoe_contact_locality; ?></dd>
          <dt><?php print t('Post code'); ?></dt>
          <dd itemprop="postalCode"><?php print $uoe_contact_postcode; ?></dd>
          </dl>
        </div>
      <?php endif; ?>

      <?php if ($uoe_contact_address_2 || $uoe_contact_locality_2 || $uoe_contact_postcode_2): ?>
        <div class="panel panel-default uoe-profile-address-wrapper"> <span class="glyphicon glyphicon-map-marker" aria-hidden="true"></span>
          <dl class="profile-address" itemprop="address" itemscope="" itemtype="http://schema.org/PostalAddress">
          <dt><?php print t('Street'); ?></dt>
          <dd itemprop="streetAddress">
              <?php print $uoe_contact_address_2; ?>
          </dd>
          <dt><?php print t('City'); ?></dt>
          <dd itemprop="addressLocality"><?php print $uoe_contact_locality_2; ?></dd>
          <dt><?php print t('Post code'); ?></dt>
          <dd itemprop="postalCode"><?php print $uoe_contact_postcode_2; ?></dd>
          </dl>
        </div>
      <?php endif; ?>

      <?php if ($uoe_contact_times): ?>
        <div class="panel panel-default uoe-profile-availability-wrapper"> <span class="glyphicon glyphicon-time" aria-hidden="true"></span>
          <ul class="availability-detail">
            <li><?php print $uoe_contact_times; ?></li>
          </ul>
        </div>
      <?php endif; ?>

      </div>
      </div>

    </div><!-- end row -->
  </article>


  <section class="uoe-profile-accordion-wrapper">
  <div class="panel-group" id="uoe-profile-accordion">
    <?php if ($uoe_biography || $uoe_cv || $uoe_qualifications || $uoe_affiliations): ?>
    <div class="panel panel-primary">
      <div class="panel-heading">
      <h4 class="panel-title">
      <a data-toggle="collapse" data-parent="#uoe-profile-accordion" href="#collapse-biography" aria-expanded="true" class="collapse"><?php print t('Biography'); ?></a>
      </h4>
    </div>
    <div id="collapse-biography" class="panel-collapse collapse in">
      <div class="panel-body">
      <?php if ($uoe_biography): ?>
        <h4><?php print t('Biography'); ?></h4>
        <?php print $uoe_biography; ?>
      <?php endif; ?>

      <?php if ($uoe_cv): ?>
        <h4><?php print t('CV'); ?></h4>
        <?php print $uoe_cv; ?>
      <?php endif; ?>

      <?php if ($uoe_qualifications): ?>
      <h4><?php print t('Qualifications'); ?></h4>
      <?php print $uoe_qualifications; ?>
      <?php endif; ?>

      <?php if ($uoe_affiliations): ?>
      <h4><?php print t('Responsibilities & affiliations'); ?></h4>
      <?php print $uoe_affiliations; ?>
      <?php endif; ?>

      </div>
    </div>
    </div>
    <?php endif; ?>

    <?php if ($uoe_ug_teaching || $uoe_pg_teaching || $uoe_phd_enquiries || $uoe_supervision || $uoe_current_supervised || $uoe_supervised_past): ?>
    <div class="panel panel-primary">
    <div class="panel-heading">
      <h4 class="panel-title">
      <a data-toggle="collapse" data-parent="#uoe-profile-accordion" href="#collapse-teaching" aria-expanded="false" class="collapse"><?php print t('Teaching & PhD supervision'); ?></a>
      </h4>
    </div>
    <div id="collapse-teaching" class="panel-collapse collapse">
      <div class="panel-body">

      <?php if ($uoe_ug_teaching): ?>
      <h4><?php print t('Undergraduate teaching'); ?></h4>
      <?php print $uoe_ug_teaching; ?>
      <?php endif; ?>

      <?php if ($uoe_pg_teaching): ?>
      <h4><?php print t('Postgraduate teaching'); ?></h4>
      <?php print $uoe_pg_teaching; ?>
      <?php endif; ?>

      <?php if ($uoe_phd_enquiries): ?>
      <h4><?php print t('Open to PhD supervision enquiries?'); ?></h4>
      <p><?php print $uoe_phd_enquiries; ?></p>
      <?php endif; ?>

      <?php if ($uoe_supervision): ?>
      <h4><?php print t('Areas of interest for supervision'); ?></h4>
      <?php print $uoe_supervision; ?>
      <?php endif; ?>

      <?php if ($uoe_current_supervised): ?>
      <h4><?php print t('Current PhD students supervised'); ?></h4>
      <?php print $uoe_current_supervised; ?>
      <?php endif; ?>

      <?php if ($uoe_supervised_past): ?>
      <h4><?php print t('Past PhD students supervised'); ?></h4>
      <?php print $uoe_supervised_past; ?>
      <?php endif; ?>

      </div>
     </div>
    </div>
    <?php endif; ?>


    <?php if ($uoe_interests || $uoe_current_interests || $uoe_past_interests || $uoe_knowledge || $affiliation_link): ?>
    <div class="panel panel-primary">
    <div class="panel-heading">
      <h4 class="panel-title">
      <a data-toggle="collapse" data-parent="#uoe-profile-accordion" href="#collapse-research" aria-expanded="false" class="collapse"><?php print t('Research'); ?></a>
      </h4>
    </div>
    <div id="collapse-research" class="panel-collapse collapse">
      <div class="panel-body">

      <?php if ($uoe_interests): ?>
      <h4><?php print t('Research summary'); ?></h4>
      <?php print $uoe_interests; ?>
      <?php endif; ?>

      <?php if ($uoe_current_interests): ?>
      <h4><?php print t('Current research interests'); ?></h4>
      <?php print $uoe_current_interests; ?>
      <?php endif; ?>

      <?php if ($uoe_past_interests): ?>
      <h4><?php print t('Past research interests'); ?></h4>
      <?php print $uoe_past_interests; ?>
      <?php endif; ?>

      <?php if ($uoe_knowledge): ?>
      <h4><?php print t('Knowledge exchange'); ?></h4>
      <?php print $uoe_knowledge; ?>
      <?php endif; ?>

      <?php if ($affiliation_link): ?>
      <h4><?php print t('Affiliated research centres'); ?></h4>
      <?php print $affiliation_link; ?>
      <?php endif; ?>

      </div>
    </div>
    </div>
    <?php endif; ?>


    <?php if ($uoe_project_activity || $uoe_current_grants || $uoe_previous_grants): ?>
    <div class="panel panel-primary">
    <div class="panel-heading">
      <h4 class="panel-title">
      <a data-toggle="collapse" data-parent="#uoe-profile-accordion" href="#collapse-projects" aria-expanded="false" class="collapse"><?php print t('Projects'); ?></a>
      </h4>
    </div>
    <div id="collapse-projects" class="panel-collapse collapse">
      <div class="panel-body">

      <?php if ($uoe_project_activity): ?>
      <h4><?php print t('Summary'); ?></h4>
      <?php print $uoe_project_activity; ?>
      <?php endif; ?>

      <?php if ($uoe_current_grants): ?>
      <h4><?php print t('Current project grants'); ?></h4>
      <?php print $uoe_current_grants; ?>
      <?php endif; ?>

      <?php if ($uoe_previous_grants): ?>
      <h4><?php print t('Past project grants'); ?></h4>
      <?php print $uoe_previous_grants; ?>
      <?php endif; ?>

      </div>
    </div>
    </div>
    <?php endif; ?>

    <?php if (trim($uoe_pure)): ?>
    <div class="panel panel-primary">
    <div class="panel-heading">
      <h4 class="panel-title">
      <a data-toggle="collapse" data-parent="#uoe-profile-accordion" href="#collapse-publications" aria-expanded="false" class="collapse">Publications</a>
      </h4>
    </div>
    <div id="collapse-publications" class="panel-collapse collapse">
      <div class="panel-body">

        <?php print $uoe_pure; ?>

      </div>
    </div>
    </div>
    <?php endif; ?>


    <?php if ($uoe_video || $uoe_video_link || $uoe_public_media): ?>
    <div class="panel panel-primary">
    <div class="panel-heading">
      <h4 class="panel-title">
      <a data-toggle="collapse" data-parent="#uoe-profile-accordion" href="#collapse-media" aria-expanded="false" class="collapse"><?php print t('Media'); ?></a>
      </h4>
    </div>
    <div id="collapse-media" class="panel-collapse collapse">
      <div class="panel-body">

      <?php if ($uoe_video): ?>
      <?php print $uoe_video; ?>
      <?php endif; ?>

      <?php if ($uoe_video_link): ?>
      <h4><?php print t('More video'); ?></h4>
      <?php print $uoe_video_link; ?>
      <?php endif; ?>

      <?php if ($uoe_public_media): ?>
      <h4><?php print t('In the media'); ?></h4>
      <?php print $uoe_public_media; ?>
      <?php endif; ?>

      </div>
    </div>
    </div>
    <?php endif; ?>

    <?php if ($uoe_group_heading_1 && $uoe_group_content_1): ?>
    <div class="panel panel-primary">
    <div class="panel-heading">
      <h4 class="panel-title">
      <a data-toggle="collapse" data-parent="#uoe-profile-accordion" href="#collapse-publisher-defined-1" aria-expanded="false" class="collapse"><?php print $uoe_group_heading_1; ?></a>
      </h4>
    </div>
    <div id="collapse-publisher-defined-1" class="panel-collapse collapse">
      <div class="panel-body">
        <?php print $uoe_group_content_1; ?>
      </div>
    </div>
    </div>
    <?php endif; ?>

    <?php if ($uoe_group_heading_2 && $uoe_group_content_2): ?>
    <div class="panel panel-primary">
    <div class="panel-heading">
      <h4 class="panel-title">
      <a data-toggle="collapse" data-parent="#uoe-profile-accordion" href="#collapse-publisher-defined-2" aria-expanded="false" class="collapse"><?php print $uoe_group_heading_2; ?></a>
      </h4>
    </div>
    <div id="collapse-publisher-defined-2" class="panel-collapse collapse">
      <div class="panel-body">
        <?php print $uoe_group_content_2; ?>
      </div>
    </div>
    </div>
    <?php endif; ?>

    </div><!-- end #uoe-profile-accordion -->
  </section><!-- end uoe-profile-accordion -->

</div>
