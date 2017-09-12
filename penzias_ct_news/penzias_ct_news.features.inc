<?php
/**
 * @file
 * penzias_ct_news.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function penzias_ct_news_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function penzias_ct_news_image_default_styles() {
  $styles = array();

  // Exported image style: news_feature.
  $styles['news_feature'] = array(
    'label' => 'News Feature',
    'effects' => array(
      7 => array(
        'name' => 'manualcrop_crop_and_scale',
        'data' => array(
          'width' => 715,
          'height' => 415,
          'upscale' => 1,
          'respectminimum' => 1,
          'onlyscaleifcrop' => 0,
          'style_name' => 'news_feature',
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: news_thumb.
  $styles['news_thumb'] = array(
    'label' => 'News Thumb',
    'effects' => array(
      8 => array(
        'name' => 'manualcrop_crop_and_scale',
        'data' => array(
          'width' => 215,
          'height' => 145,
          'upscale' => 1,
          'respectminimum' => 1,
          'onlyscaleifcrop' => 0,
          'style_name' => 'news_thumb',
        ),
        'weight' => 0,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function penzias_ct_news_node_info() {
  $items = array(
    'news' => array(
      'name' => t('News'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

/**
 * Implements hook_paragraphs_info().
 */
function penzias_ct_news_paragraphs_info() {
  $items = array(
    'news_slideshow' => array(
      'name' => 'News Slideshow',
      'bundle' => 'news_slideshow',
      'locked' => '1',
    ),
  );
  return $items;
}
