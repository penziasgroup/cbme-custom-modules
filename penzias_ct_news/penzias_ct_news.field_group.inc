<?php
/**
 * @file
 * penzias_ct_news.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function penzias_ct_news_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_featured_image|node|news|default';
  $field_group->group_name = 'group_featured_image';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'news';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Featured Image',
    'weight' => '3',
    'children' => array(
      0 => 'field_news_featured_caption',
      1 => 'field_news_featured_image',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Featured Image',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-featured-image field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_featured_image|node|news|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_news_author_source|node|news|default';
  $field_group->group_name = 'group_news_author_source';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'news';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'News Author/Source',
    'weight' => '2',
    'children' => array(
      0 => 'field_news_author',
      1 => 'field_news_source',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'News Author/Source',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-news-author-source field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_news_author_source|node|news|default'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Featured Image');
  t('News Author/Source');

  return $field_groups;
}
