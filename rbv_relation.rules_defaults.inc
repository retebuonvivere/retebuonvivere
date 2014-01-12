<?php
/**
 * @file
 * rbv_relation.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function rbv_relation_default_rules_configuration() {
  $items = array();
  $items['rules_rbv_auto_relation'] = entity_import('rules_config', '{ "rules_rbv_auto_relation" : {
      "LABEL" : "rbv auto relation",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "rbv" ],
      "REQUIRES" : [ "rules", "rules_conditional" ],
      "ON" : { "node_insert--collaboration" : { "bundle" : "collaboration" } },
      "DO" : [
        { "entity_query" : {
            "USING" : {
              "type" : "node",
              "property" : "field_relpro_project",
              "value" : [ "node:field-relpro-project" ]
            },
            "PROVIDE" : { "entity_fetched" : { "collaborations_fetched" : "Collaborations fetched from project field" } }
          }
        },
        { "LOOP" : {
            "USING" : { "list" : [ "collaborations-fetched" ] },
            "ITEM" : { "collaboration" : "Fetched collaboration list item" },
            "DO" : [
              { "CONDITIONAL" : [
                  {
                    "IF" : { "entity_has_field" : { "entity" : [ "collaboration" ], "field" : "field_rel_source" } },
                    "DO" : [
                      { "variable_add" : {
                          "USING" : { "type" : "list\\u003Centity\\u003E", "value" : [ "" ] },
                          "PROVIDE" : { "variable_added" : { "endpoints_list" : "list of endpoints for the relation to be created" } }
                        }
                      },
                      { "list_add" : {
                          "list" : [ "endpoints-list" ],
                          "item" : [ "node:field-rel-source" ],
                          "unique" : 1
                        }
                      },
                      { "list_add" : {
                          "list" : [ "endpoints-list" ],
                          "item" : [ "collaboration:field-rel-source" ],
                          "unique" : 1
                        }
                      },
                      { "entity_create" : {
                          "USING" : {
                            "type" : "relation",
                            "param_relation_type" : "cooperates_with",
                            "param_endpoints" : [ "endpoints-list" ]
                          },
                          "PROVIDE" : { "entity_created" : { "relation_created" : "Created relation from endpoint list" } }
                        }
                      },
                      { "entity_save" : { "data" : [ "relation-created" ], "immediate" : 1 } },
                      { "CONDITIONAL" : [
                          {
                            "IF" : { "NOT data_is" : {
                                "data" : [ "node:field-rel-source" ],
                                "value" : [ "collaboration:field-rel-source" ]
                              }
                            },
                            "DO" : [
                              { "entity_query" : {
                                  "USING" : {
                                    "type" : "relation",
                                    "property" : "endpoints",
                                    "value" : [ "endpoints-list" ]
                                  },
                                  "PROVIDE" : { "entity_fetched" : { "relation_fetched" : "Fetched relation from endpont list" } }
                                }
                              },
                              { "CONDITIONAL" : [
                                  {
                                    "IF" : { "entity_has_field" : {
                                        "entity" : [ "relation-fetched:0" ],
                                        "field" : "field_rel_collaborations"
                                      }
                                    },
                                    "DO" : [
                                      { "list_add" : {
                                          "list" : [ "relation-fetched:0:field-rel-collaborations" ],
                                          "item" : [ "node:field-relpro-project" ],
                                          "unique" : 1
                                        }
                                      },
                                      { "drupal_message" : { "message" : "Le organizzazioni [node:field_rel_source] e [collaboration:field_rel_source] hanno una relazione di cooperazione tra loro: \\u003Ca href=\\u0022[relation-fetched:0:url]\\u0022\\u003ERelazione [relation-fetched:0:rid]\\u003C\\/a\\u003E. Questa relazione \\u00e8 basata sulle collaborazioni ai progetti [relation-fetched:0:field_rel_collaborations].\\r\\n" } }
                                    ]
                                  }
                                ]
                              }
                            ]
                          }
                        ]
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
