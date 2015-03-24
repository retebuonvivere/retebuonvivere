api = 2
core = 7.x

; retebuonvivere make file

projects[drupal][version] = 7.30
; Patch isssue "String offset cast notice in field_invoke_method_multiple()"
projects[drupal][patch][1824820] = https://www.drupal.org/files/string-offset-cast-1824820-2.patch

; The Panopoly Foundation update 7.x-1.8
projects[panopoly_core][version] = 1.8
projects[panopoly_core][subdir] = panopoly
projects[panopoly_images][version] = 1.8
projects[panopoly_images][subdir] = panopoly
projects[panopoly_theme][version] = 1.8
projects[panopoly_theme][subdir] = panopoly
projects[panopoly_magic][version] = 1.8
projects[panopoly_magic][subdir] = panopoly
projects[panopoly_widgets][version] = 1.8
projects[panopoly_widgets][subdir] = panopoly
projects[panopoly_admin][version] = 1.8
projects[panopoly_admin][subdir] = panopoly
projects[panopoly_users][version] = 1.8
projects[panopoly_users][subdir] = panopoly

; The Panopoly Toolset update 7.x-1.8
projects[panopoly_pages][version] = 1.8
projects[panopoly_pages][subdir] = panopoly
projects[panopoly_wysiwyg][version] = 1.8
projects[panopoly_wysiwyg][subdir] = panopoly
projects[panopoly_search][version] = 1.8
projects[panopoly_search][subdir] = panopoly

; Contrib modules
projects[addressfield][version] = 1.0-beta5
projects[addressfield][subdir] = contrib
projects[advanced_forum][version] = 2.3
projects[advanced_forum][subdir] = contrib
projects[auto_nodetitle][version] = 1.0
projects[auto_nodetitle][subdir] = contrib
projects[better_exposed_filters][version] = 3.0-beta4
projects[better_exposed_filters][subdir] = contrib
projects[colors][version] = 1.0-rc1
projects[colors][subdir] = contrib
; patching colors to recognize og_groups
projects[colors][patch][1814972] = https://drupal.org/files/og-7.x-2.x_0.patch
; adding d3 git version to apply bug fix
projects[d3][download][type] = git
projects[d3][download][url] = http://git.drupal.org/project/d3.git
projects[d3][type] = module
projects[d3][version] = 1.x
projects[d3][subdir] = contrib
projects[date_ical][version] = 3.1
projects[date_ical][subdir] = contrib
projects[diff][version] = 3.2
projects[diff][subdir] = contrib
projects[disable_messages][version] = 1.1
projects[disable_messages][subdir] = contrib
projects[email][version] = 1.3
projects[email][subdir] = contrib
projects[entityreference_autocreate][version] = 1.0
projects[entityreference_autocreate][subdir] = contrib
projects[entityreference_prepopulate][version] = 1.5
projects[entityreference_prepopulate][subdir] = contrib
projects[entity_view_mode][version] = 1.0-rc1
projects[entity_view_mode][subdir] = contrib
projects[features_override][version] = 2.0-rc1
projects[features_override][subdir] = contrib
projects[field_collection][version] = 1.0-beta7
projects[field_collection][subdir] = contrib
projects[fullcalendar][version] = 2.0
projects[fullcalendar][subdir] = contrib
projects[jquery_expander][version] = 1.0
projects[jquery_expander][subdir] = contrib
projects[google_analytics][version] = 2.1
projects[google_analytics][subdir] = contrib
projects[graphapi][version] = 1.x-dev
projects[graphapi][subdir] = contrib
projects[masonry][version] = 2.0
projects[masonry][subdir] = contrib
projects[masonry_views][version] = 1.0
projects[masonry_views][subdir] = contrib
projects[message][version] = 1.9
projects[message][subdir] = contrib
projects[message_notify][version] = 2.5
projects[message_notify][subdir] = contrib
projects[message_subscribe][version] = 1.0-rc2
projects[message_subscribe][subdir] = contrib
projects[flag][version] = 3.5
projects[flag][subdir] = contrib
projects[og][version] = 2.7
projects[og][subdir] = contrib
projects[og][patch][2264759] = https://www.drupal.org/files/issues/group_reference_token-2264759-17.patch
projects[rdfa][version] = 1.x-dev
projects[rdfa][subdir] = contrib
projects[rdfx][version] = 2.0-alpha4
projects[rdfx][subdir] = contrib
; patching rdfx to find arc library
projects[rdfx][patch][1176666] = https://drupal.org/files/find-arc-library-correctly-1176666-14.patch
projects[rules][version] = 2.7
projects[rules][subdir] = contrib
projects[rules_conditional][version] = 1.0-beta2
projects[rules_conditional][subdir] = contrib
projects[relation][version] = 1.0-rc5
projects[relation][subdir] = contrib
; patching relation to allow fetch entity by property let's try the new patch
; projects[relation][patch][1302788] = https://drupal.org/files/relation-query_endpoints-1302788-16.patch
projects[relation][patch][1302788] = https://drupal.org/files/issues/relation-query_endpoints-1302788-24.patch
projects[schemaorg][version] = 1.0-beta4
projects[schemaorg][subdir] = contrib
projects[social_profile_field][version] = 1.0-beta3
projects[social_profile_field][subdir] = contrib
projects[subpathauto][version] = 1.3
projects[subpathauto][subdir] = contrib
projects[telephone][version] = 1.0-alpha1
projects[telephone][subdir] = contrib
projects[unique_field][version] = 1.0-rc1
projects[unique_field][subdir] = contrib

; RBV features
projects[rbv_com_fields][download][type] = git
projects[rbv_com_fields][download][url] = git@github.com:miromarchi/rbv_com_fields.git
projects[rbv_com_fields][type] = module
projects[rbv_com_fields][subdir] = features
projects[rbv_org][download][type] = git
projects[rbv_org][download][url] = git@github.com:miromarchi/rbv_org.git
projects[rbv_org][type] = module
projects[rbv_org][subdir] = features
projects[rbv_project][download][type] = git
projects[rbv_project][download][url] = git@github.com:miromarchi/rbv_project.git
projects[rbv_project][type] = module
projects[rbv_project][subdir] = features
projects[rbv_relpro][download][type] = git
projects[rbv_relpro][download][url] = git@github.com:miromarchi/rbv_relpro.git
projects[rbv_relpro][type] = module
projects[rbv_relpro][subdir] = features
projects[rbv_event][download][type] = git
projects[rbv_event][download][url] = git@github.com:miromarchi/rbv_event.git
projects[rbv_event][type] = module
projects[rbv_event][subdir] = features
projects[rbv_pages][download][type] = git
projects[rbv_pages][download][url] = git@github.com:miromarchi/rbv_pages.git
projects[rbv_pages][type] = module
projects[rbv_pages][subdir] = features
projects[rbv_view_graph][download][type] = git
projects[rbv_view_graph][download][url] = git@github.com:miromarchi/rbv_view_graph.git
projects[rbv_view_graph][type] = module
projects[rbv_view_graph][subdir] = features
projects[rbv_view_explore][download][type] = git
projects[rbv_view_explore][download][url] = git@github.com:miromarchi/rbv_view_explore.git
projects[rbv_view_explore][type] = module
projects[rbv_view_explore][subdir] = features
projects[rbv_relation][download][type] = git
projects[rbv_relation][download][url] = git@github.com:miromarchi/rbv_relation.git
projects[rbv_relation][type] = module
projects[rbv_relation][subdir] = features

; Themes
projects[kalatheme][type] = theme
projects[kalatheme][version] = 3.0-rc3
projects[kalatheme][subdir] = contrib
projects[rbv_kala_default][download][type] = git
projects[rbv_kala_default][download][url] = git@github.com:miromarchi/rbv_kala_default.git
projects[rbv_kala_default][type] = theme
projects[rbv_kala_default][subdir] = custom

; Libraries
libraries[arc][download][type] = file
libraries[arc][download][url] = https://github.com/semsol/arc2/archive/master.zip
libraries[arc][directory_name] = arc
libraries[arc][type] = library
libraries[d3][download][type] = "get"
libraries[d3][download][url] = "https://github.com/mbostock/d3/zipball/master"
libraries[d3][directory_name] = "d3"
libraries[d3][type] = library
libraries[d3][destination] = "libraries"
libraries[fullcalendar][download][type] = file
libraries[fullcalendar][download][url] = https://github.com/arshaw/fullcalendar/releases/download/v1.6.4/fullcalendar-1.6.4.zip
libraries[fullcalendar][directory_name] = fullcalendar
libraries[fullcalendar][type] = library
libraries[jquery.expander][download][type] = git
libraries[jquery.expander][download][url] = https://github.com/kswedberg/jquery-expander.git
libraries[jquery.expander][directory_name] = jquery.expander
libraries[jquery.expander][type] = library
libraries[masonry][download][type] = "get"
libraries[masonry][download][url] = "http://desandro.github.io/masonry/jquery.masonry.min.js"
libraries[masonry][directory_name] = "masonry"
libraries[masonry][type] = library
libraries[rbv_kala_default_bootstrap][download][type] = git
libraries[rbv_kala_default_bootstrap][download][url] = git@github.com:miromarchi/rbv_kala_default_bootstrap.git
libraries[rbv_kala_default_bootstrap][directory_name] = rbv_kala_default_bootstrap
libraries[rbv_kala_default_bootstrap][type] = library

; Profile
projects[rbv_profile][type] = profile
projects[rbv_profile][download][type] = git
projects[rbv_profile][download][url] = git@github.com:miromarchi/rbv_profile.git
