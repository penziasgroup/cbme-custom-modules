<?php
/**
 * @file
 * penzias_ct_events.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function penzias_ct_events_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_date|node|event|teaser';
  $field_group->group_name = 'group_date';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Date',
    'weight' => '0',
    'children' => array(
      0 => 'field_event_date',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Date',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-date field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_date|node|event|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_event_buttons|node|event|default';
  $field_group->group_name = 'group_event_buttons';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_event_info';
  $field_group->data = array(
    'label' => 'Buttons',
    'weight' => '10',
    'children' => array(
      0 => 'field_registration_url',
      1 => 'add_this',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Buttons',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-event-buttons field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_event_buttons|node|event|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_event_buttons|node|event|feature_card';
  $field_group->group_name = 'group_event_buttons';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'feature_card';
  $field_group->parent_name = 'group_event_info';
  $field_group->data = array(
    'label' => 'Buttons',
    'weight' => '7',
    'children' => array(
      0 => 'field_registration_url',
      1 => 'add_this',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Buttons',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-event-buttons field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_event_buttons|node|event|feature_card'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_event_buttons|node|event|teaser';
  $field_group->group_name = 'group_event_buttons';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'teaser';
  $field_group->parent_name = 'group_event_info';
  $field_group->data = array(
    'label' => 'Buttons',
    'weight' => '5',
    'children' => array(
      0 => 'field_registration_url',
      1 => 'add_this',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Buttons',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-event-buttons field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_event_buttons|node|event|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_event_image|node|event|default';
  $field_group->group_name = 'group_event_image';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Event Image',
    'weight' => '0',
    'children' => array(
      0 => 'field_event_image',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Event Image',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-event-image field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_event_image|node|event|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_event_image|node|event|feature_card';
  $field_group->group_name = 'group_event_image';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'feature_card';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Event Image',
    'weight' => '0',
    'children' => array(
      0 => 'field_event_image',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Event Image',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-event-image field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_event_image|node|event|feature_card'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_event_info|node|event|default';
  $field_group->group_name = 'group_event_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Event Info',
    'weight' => '1',
    'children' => array(
      0 => 'body',
      1 => 'field_event_date',
      2 => 'field_speaker_bio',
      3 => 'title',
      4 => 'back_to',
      5 => 'group_time_location',
      6 => 'group_speaker_info',
      7 => 'group_event_buttons',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Event Info',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-event-info field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_event_info|node|event|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_event_info|node|event|feature_card';
  $field_group->group_name = 'group_event_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'feature_card';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Event Info',
    'weight' => '1',
    'children' => array(
      0 => 'body',
      1 => 'title',
      2 => 'group_speaker_info',
      3 => 'group_time_location',
      4 => 'group_event_buttons',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Event Info',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-event-info field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_event_info|node|event|feature_card'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_event_info|node|event|teaser';
  $field_group->group_name = 'group_event_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Event Info',
    'weight' => '1',
    'children' => array(
      0 => 'title',
      1 => 'group_speaker_info',
      2 => 'group_time_location',
      3 => 'group_event_buttons',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Event Info',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-event-info field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_event_info|node|event|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_speaker_info|node|event|default';
  $field_group->group_name = 'group_speaker_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_event_info';
  $field_group->data = array(
    'label' => 'Speaker Info',
    'weight' => '5',
    'children' => array(
      0 => 'field_speaker_name',
      1 => 'field_speaker_affiliation',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Speaker Info',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-speaker-info field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_speaker_info|node|event|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_speaker_info|node|event|feature_card';
  $field_group->group_name = 'group_speaker_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'feature_card';
  $field_group->parent_name = 'group_event_info';
  $field_group->data = array(
    'label' => 'Speaker Info',
    'weight' => '4',
    'children' => array(
      0 => 'field_speaker_name',
      1 => 'field_speaker_affiliation',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Speaker Info',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-speaker-info field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_speaker_info|node|event|feature_card'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_speaker_info|node|event|teaser';
  $field_group->group_name = 'group_speaker_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'teaser';
  $field_group->parent_name = 'group_event_info';
  $field_group->data = array(
    'label' => 'Speaker Info',
    'weight' => '3',
    'children' => array(
      0 => 'field_speaker_name',
      1 => 'field_speaker_affiliation',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Speaker Info',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-speaker-info field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_speaker_info|node|event|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_time_location|node|event|default';
  $field_group->group_name = 'group_time_location';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_event_info';
  $field_group->data = array(
    'label' => 'Time Location',
    'weight' => '7',
    'children' => array(
      0 => 'field_location',
      1 => 'time_only',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Time Location',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-time-location field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_time_location|node|event|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_time_location|node|event|feature_card';
  $field_group->group_name = 'group_time_location';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'feature_card';
  $field_group->parent_name = 'group_event_info';
  $field_group->data = array(
    'label' => 'Time Location',
    'weight' => '5',
    'children' => array(
      0 => 'field_location',
      1 => 'field_event_date',
      2 => 'time_only',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Time Location',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-time-location field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_time_location|node|event|feature_card'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_time_location|node|event|teaser';
  $field_group->group_name = 'group_time_location';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'teaser';
  $field_group->parent_name = 'group_event_info';
  $field_group->data = array(
    'label' => 'Time Location',
    'weight' => '4',
    'children' => array(
      0 => 'field_location',
      1 => 'time_only',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Time Location',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-time-location field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_time_location|node|event|teaser'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Buttons');
  t('Date');
  t('Event Image');
  t('Event Info');
  t('Speaker Info');
  t('Time Location');

  return $field_groups;
}
