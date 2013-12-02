<?php
/**
 * @file
 * rbv_relpro.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function rbv_relpro_default_rules_configuration() {
  $items = array();
  $items['rules_rbv_add_collaboration_to_own_projects'] = entity_import('rules_config', '{ "rules_rbv_add_collaboration_to_own_projects" : {
      "LABEL" : "rbv add collaboration to own projects",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "rbv" ],
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_insert--project" : { "bundle" : "project" } },
      "DO" : [
        { "entity_create" : {
            "USING" : {
              "type" : "node",
              "param_type" : "collaboration",
              "param_title" : "[node:field-rel-source:title] collabora a [node:field-relpro-project:title]",
              "param_author" : [ "site:current-user" ]
            },
            "PROVIDE" : { "entity_created" : { "created_collaboration_own_project" : "Created entity collaboration to own project" } }
          }
        },
        { "data_set" : {
            "data" : [ "created-collaboration-own-project:field-rel-source" ],
            "value" : [ "node:og-group-ref:0" ]
          }
        },
        { "data_set" : {
            "data" : [ "created-collaboration-own-project:field-relpro-project" ],
            "value" : [ "node" ]
          }
        }
      ]
    }
  }');
  return $items;
}
