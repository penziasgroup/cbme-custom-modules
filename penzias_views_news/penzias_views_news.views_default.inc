<?php
/**
 * @file
 * penzias_views_news.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function penzias_views_news_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'news';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'News';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'News';
  $handler->display->display_options['css_class'] = 'news-listing';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'input_required' => 0,
      'text_input_required' => array(
        'text_input_required' => array(
          'value' => 'Select any filter and click on Apply to see results',
          'format' => 'full_html',
        ),
      ),
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
      'secondary_collapse_override' => '0',
    ),
    'field_news_type_tid' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'autosubmit' => 0,
        'is_secondary' => 0,
        'any_label' => 'All News',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
  );
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Featured Image */
  $handler->display->display_options['fields']['field_news_featured_image']['id'] = 'field_news_featured_image';
  $handler->display->display_options['fields']['field_news_featured_image']['table'] = 'field_data_field_news_featured_image';
  $handler->display->display_options['fields']['field_news_featured_image']['field'] = 'field_news_featured_image';
  $handler->display->display_options['fields']['field_news_featured_image']['label'] = '';
  $handler->display->display_options['fields']['field_news_featured_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_news_featured_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_news_featured_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_news_featured_image']['settings'] = array(
    'image_style' => 'news_thumb',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset']['id'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['label'] = 'News Image';
  $handler->display->display_options['fields']['fieldset']['children'] = array(
    0 => 'field_news_external_link_1',
  );
  $handler->display->display_options['fields']['fieldset']['fieldset']['type'] = 'div';
  $handler->display->display_options['fields']['fieldset']['fieldset']['classes'] = 'news-image';
  /* Field: Link: Image */
  $handler->display->display_options['fields']['field_news_external_link_1']['id'] = 'field_news_external_link_1';
  $handler->display->display_options['fields']['field_news_external_link_1']['table'] = 'field_data_field_news_external_link';
  $handler->display->display_options['fields']['field_news_external_link_1']['field'] = 'field_news_external_link';
  $handler->display->display_options['fields']['field_news_external_link_1']['ui_name'] = 'Link: Image';
  $handler->display->display_options['fields']['field_news_external_link_1']['label'] = '';
  $handler->display->display_options['fields']['field_news_external_link_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_news_external_link_1']['alter']['text'] = '<a href="[field_news_external_link_1-url]" target="_blank">[field_news_featured_image]</a>';
  $handler->display->display_options['fields']['field_news_external_link_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_news_external_link_1']['empty'] = '<a href="[path]">[field_news_featured_image]</a>';
  $handler->display->display_options['fields']['field_news_external_link_1']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_news_external_link_1']['type'] = 'link_title_plain';
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset_1']['id'] = 'fieldset_1';
  $handler->display->display_options['fields']['fieldset_1']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset_1']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset_1']['label'] = 'News Content';
  $handler->display->display_options['fields']['fieldset_1']['children'] = array(
    0 => 'field_news_external_link',
    1 => 'fieldset_2',
  );
  $handler->display->display_options['fields']['fieldset_1']['fieldset']['type'] = 'div';
  $handler->display->display_options['fields']['fieldset_1']['fieldset']['classes'] = 'news-content';
  /* Field: Link: Title */
  $handler->display->display_options['fields']['field_news_external_link']['id'] = 'field_news_external_link';
  $handler->display->display_options['fields']['field_news_external_link']['table'] = 'field_data_field_news_external_link';
  $handler->display->display_options['fields']['field_news_external_link']['field'] = 'field_news_external_link';
  $handler->display->display_options['fields']['field_news_external_link']['ui_name'] = 'Link: Title';
  $handler->display->display_options['fields']['field_news_external_link']['label'] = '';
  $handler->display->display_options['fields']['field_news_external_link']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_news_external_link']['alter']['text'] = '<a href="[field_news_external_link-url]" target="_blank">[title]</a>';
  $handler->display->display_options['fields']['field_news_external_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_news_external_link']['element_wrapper_class'] = 'news-title';
  $handler->display->display_options['fields']['field_news_external_link']['empty'] = '<a href="[path]">[title]</a>';
  $handler->display->display_options['fields']['field_news_external_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_news_external_link']['type'] = 'link_plain';
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset_2']['id'] = 'fieldset_2';
  $handler->display->display_options['fields']['fieldset_2']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset_2']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset_2']['label'] = 'Date/Source';
  $handler->display->display_options['fields']['fieldset_2']['children'] = array(
    0 => 'field_news_date',
    1 => 'field_news_source',
  );
  $handler->display->display_options['fields']['fieldset_2']['fieldset']['type'] = 'div';
  $handler->display->display_options['fields']['fieldset_2']['fieldset']['classes'] = 'date-source';
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_news_date']['id'] = 'field_news_date';
  $handler->display->display_options['fields']['field_news_date']['table'] = 'field_data_field_news_date';
  $handler->display->display_options['fields']['field_news_date']['field'] = 'field_news_date';
  $handler->display->display_options['fields']['field_news_date']['label'] = '';
  $handler->display->display_options['fields']['field_news_date']['element_type'] = '0';
  $handler->display->display_options['fields']['field_news_date']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_news_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_news_date']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_news_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Source */
  $handler->display->display_options['fields']['field_news_source']['id'] = 'field_news_source';
  $handler->display->display_options['fields']['field_news_source']['table'] = 'field_data_field_news_source';
  $handler->display->display_options['fields']['field_news_source']['field'] = 'field_news_source';
  $handler->display->display_options['fields']['field_news_source']['label'] = '';
  $handler->display->display_options['fields']['field_news_source']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_news_source']['element_class'] = 'news-source';
  $handler->display->display_options['fields']['field_news_source']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_news_source']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_news_source']['element_wrapper_type'] = '0';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'edit';
  /* Field: Global: Contextual Links */
  $handler->display->display_options['fields']['contextual_links']['id'] = 'contextual_links';
  $handler->display->display_options['fields']['contextual_links']['table'] = 'views';
  $handler->display->display_options['fields']['contextual_links']['field'] = 'contextual_links';
  $handler->display->display_options['fields']['contextual_links']['label'] = '';
  $handler->display->display_options['fields']['contextual_links']['fields'] = array(
    'edit_node' => 'edit_node',
  );
  $handler->display->display_options['fields']['contextual_links']['check_access'] = 0;
  /* Sort criterion: Content: Date (field_news_date) */
  $handler->display->display_options['sorts']['field_news_date_value']['id'] = 'field_news_date_value';
  $handler->display->display_options['sorts']['field_news_date_value']['table'] = 'field_data_field_news_date';
  $handler->display->display_options['sorts']['field_news_date_value']['field'] = 'field_news_date_value';
  $handler->display->display_options['sorts']['field_news_date_value']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'news' => 'news',
  );
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['tid']['expose']['operator_id'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['label'] = 'Has taxonomy term';
  $handler->display->display_options['filters']['tid']['expose']['operator'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['identifier'] = 'tid';
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'news_type';

  /* Display: Current Page */
  $handler = $view->new_display('page', 'Current Page', 'page');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'news' => 'news',
  );
  /* Filter criterion: Content: Date (field_news_date) */
  $handler->display->display_options['filters']['field_news_date_value']['id'] = 'field_news_date_value';
  $handler->display->display_options['filters']['field_news_date_value']['table'] = 'field_data_field_news_date';
  $handler->display->display_options['filters']['field_news_date_value']['field'] = 'field_news_date_value';
  $handler->display->display_options['filters']['field_news_date_value']['granularity'] = 'year';
  $handler->display->display_options['filters']['field_news_date_value']['default_date'] = 'this year';
  /* Filter criterion: Content: News Type (field_news_type) */
  $handler->display->display_options['filters']['field_news_type_tid']['id'] = 'field_news_type_tid';
  $handler->display->display_options['filters']['field_news_type_tid']['table'] = 'field_data_field_news_type';
  $handler->display->display_options['filters']['field_news_type_tid']['field'] = 'field_news_type_tid';
  $handler->display->display_options['filters']['field_news_type_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_news_type_tid']['expose']['operator_id'] = 'field_news_type_tid_op';
  $handler->display->display_options['filters']['field_news_type_tid']['expose']['operator'] = 'field_news_type_tid_op';
  $handler->display->display_options['filters']['field_news_type_tid']['expose']['identifier'] = 'field_news_type_tid';
  $handler->display->display_options['filters']['field_news_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_news_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_news_type_tid']['vocabulary'] = 'news_type';
  $handler->display->display_options['path'] = 'news';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'News';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['news'] = $view;

  return $export;
}
