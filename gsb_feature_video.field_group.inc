<?php
/**
 * @file
 * gsb_feature_video.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function gsb_feature_video_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_content_wrapper|fieldable_panels_pane|video|default';
  $field_group->group_name = 'group_content_wrapper';
  $field_group->entity_type = 'fieldable_panels_pane';
  $field_group->bundle = 'video';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Content wrapper',
    'weight' => '1',
    'children' => array(
      0 => 'field_body',
      1 => 'field_tile',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Content wrapper',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_content_wrapper|fieldable_panels_pane|video|default'] = $field_group;

  return $export;
}
