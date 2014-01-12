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
  $items['rules_rbv_auto_collaboration_end_date'] = entity_import('rules_config', '{ "rules_rbv_auto_collaboration_end_date" : {
      "LABEL" : "rbv auto collaboration end date",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "rbv" ],
      "REQUIRES" : [ "rules", "rules_conditional" ],
      "ON" : { "node_presave--project" : { "bundle" : "project" } },
      "IF" : [
        { "NOT data_is_empty" : { "data" : [ "node:field-com-date:duration" ] } }
      ],
      "DO" : [
        { "entity_query" : {
            "USING" : {
              "type" : "node",
              "property" : "field_relpro_project",
              "value" : [ "node" ]
            },
            "PROVIDE" : { "entity_fetched" : { "collaborations_fetched" : "Fetched collaborations" } }
          }
        },
        { "LOOP" : {
            "USING" : { "list" : [ "collaborations-fetched" ] },
            "ITEM" : { "collaboration" : "Fetched collaboration list item" },
            "DO" : [
              { "CONDITIONAL" : [
                  {
                    "IF" : { "entity_has_field" : { "entity" : [ "collaboration" ], "field" : "field_com_date" } },
                    "DO" : [
                      { "data_set" : {
                          "data" : [ "collaboration:field-com-date:value2" ],
                          "value" : [ "node:field-com-date:value2" ]
                        }
                      }
                    ]
                  }
                ]
              }
            ]
          }
        }
      ]
    }
  }');
  return $items;
}
