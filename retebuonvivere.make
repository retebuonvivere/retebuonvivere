core = 7.24
api = 2
projects[] = drupal

; retebuonvivere make file

; The Panopoly Foundation
projects[panopoly_core][subdir] = panopoly
projects[panopoly_images][subdir] = panopoly
projects[panopoly_theme][subdir] = panopoly
projects[panopoly_magic][subdir] = panopoly
projects[panopoly_widgets][subdir] = panopoly
projects[panopoly_admin][subdir] = panopoly
; panopoly pane library bug fix patch
projects[panopoly_admin][patch][2155847] = https://drupal.org/files/issues/issue-2155847.patch
projects[panopoly_users][subdir] = panopoly

; The Panopoly Toolset
projects[panopoly_pages][subdir] = panopoly
projects[panopoly_wysiwyg][subdir] = panopoly
projects[panopoly_search][subdir] = panopoly

; Contrib modules
projects[addressfield][subdir] = contrib
projects[advanced_forum][subdir] = contrib
projects[auto_nodetitle][subdir] = contrib
projects[better_exposed_filters][subdir] = contrib
projects[colors][subdir] = contrib
; patching colors to recognize og_groups
projects[colors][patch][1814972] = https://drupal.org/files/og-7.x-2.x_0.patch
projects[d3][subdir] = contrib
; adding d3 dev version to apply bug fix
projects[d3][version] = 1.x-dev
projects[date][subdir] = contrib
projects[date_ical][subdir] = contrib
projects[diff][subdir] = contrib
projects[email][subdir] = contrib
projects[entity][subdir] = contrib
projects[entityreference_autocreate][subdir] = contrib
projects[entityreference_prepopulate][subdir] = contrib
projects[entity_view_mode][subdir] = contrib
projects[features][subdir] = contrib
projects[features][patch][2155945] = https://drupal.org/files/issues/features_strict-warning-menu-links_2155945-3.patch
projects[field_collection][subdir] = contrib
projects[fullcalendar][subdir] = contrib
projects[jquery_expander][subdir] = contrib
projects[graphapi][subdir] = contrib
projects[module_filter][subdir] = contrib
projects[message][subdir] = contrib
projects[message_notify][subdir] = contrib
projects[message_subscribe][subdir] = contrib
projects[og][subdir] = contrib
projects[rdfa][subdir] = contrib
projects[rdfx][subdir] = contrib
; patching rdfx to find arc library
projects[rdfx][patch][1176666] = https://drupal.org/files/find-arc-library-correctly-1176666-14.patch
projects[rules][subdir] = contrib
projects[rules_conditional][subdir] = contrib
projects[relation][subdir] = contrib
; patching relation to allow fetch entity by property
projects[relation][patch][1302788] = https://drupal.org/files/relation-query_endpoints-1302788-16.patch
projects[schemaorg][subdir] = contrib
projects[social_profile_field][subdir] = contrib
projects[subpathauto][subdir] = contrib
projects[telephone][subdir] = contrib
; adding telephone version to skip error
projects[telephone][version] = 1.0-alpha1
projects[unique_field][subdir] = contrib
projects[views_bulk_operations][subdir] = contrib

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
; projects[radix_core][version] = 1.x-dev
; projects[radix_core][subdir] = contrib
; projects[responsive_bartik][type] = theme
; projects[responsive_bartik][subdir] = contrib
projects[kalatheme][type] = theme
projects[kalatheme][subdir] = contrib
projects[rbv_theme_kala][download][type] = git
projects[rbv_theme_kala][download][url] = git@github.com:fonzy85vr/rbv_theme.git
projects[rbv_theme_kala][type] = theme
projects[rbv_theme_kala][subdir] = contrib

; Libraries
libraries[arc][download][type] = file
libraries[arc][download][url] = https://github.com/semsol/arc2/archive/master.zip
libraries[arc][directory_name] = arc
libraries[arc][type] = library
libraries[jquery.expander][download][type] = git
libraries[jquery.expander][download][url] = https://github.com/kswedberg/jquery-expander.git
libraries[jquery.expander][directory_name] = jquery.expander
libraries[jquery.expander][type] = library
libraries[fullcalendar][download][type] = file
libraries[fullcalendar][download][url] = https://github.com/arshaw/fullcalendar/releases/download/v1.6.4/fullcalendar-1.6.4.zip
libraries[fullcalendar][directory_name] = fullcalendar
libraries[fullcalendar][type] = library
libraries[d3][download][type] = "get"
libraries[d3][download][url] = "https://github.com/mbostock/d3/zipball/master"
libraries[d3][directory_name] = "d3"
libraries[d3][destination] = "libraries"

; Profile
projects[rbv_profile][type] = profile
projects[rbv_profile][download][type] = git
projects[rbv_profile][download][url] = git@github.com:miromarchi/rbv_profile.git
