api = 2
core = 7.x

; retebuonvivere make file (not tested)

projects[drupal][version] = 7.32
; Patch isssue "String offset cast notice in field_invoke_method_multiple()"
projects[drupal][patch][1824820] = https://www.drupal.org/files/string-offset-cast-1824820-2.patch

; The Panopoly Foundation update 7.x-1.13
projects[panopoly_core][version] = 1.13
projects[panopoly_core][subdir] = panopoly
projects[panopoly_images][version] = 1.13
projects[panopoly_images][subdir] = panopoly
projects[panopoly_theme][version] = 1.13
projects[panopoly_theme][subdir] = panopoly
projects[panopoly_magic][version] = 1.13
projects[panopoly_magic][subdir] = panopoly
projects[panopoly_widgets][version] = 1.13
projects[panopoly_widgets][subdir] = panopoly
projects[panopoly_admin][version] = 1.13
projects[panopoly_admin][subdir] = panopoly
projects[panopoly_users][version] = 1.13
projects[panopoly_users][subdir] = panopoly

; The Panopoly Toolset update 7.x-1.13
projects[panopoly_pages][version] = 1.13
projects[panopoly_pages][subdir] = panopoly
projects[panopoly_wysiwyg][version] = 1.13
projects[panopoly_wysiwyg][subdir] = panopoly
projects[panopoly_search][version] = 1.13
projects[panopoly_search][subdir] = panopoly

; Contrib modules
projects[addressfield][version] = 1.0-beta5
projects[addressfield][subdir] = contrib
projects[administerusersbyrole][version] = 1.0-beta1
projects[administerusersbyrole][subdir] = contrib
projects[advanced_forum][version] = 2.3
projects[advanced_forum][subdir] = contrib
projects[auto_nodetitle][version] = 1.0
projects[auto_nodetitle][subdir] = contrib
projects[colors][version] = 1.0-rc1
projects[colors][subdir] = contrib
; patching colors to recognize og_groups
projects[colors][patch][1814972] = https://drupal.org/files/og-7.x-2.x_0.patch
; adding d3 git version to apply bug fix. Remember that we have modified a file in d3 module. It should be done to allow more graph api fields to be used.
projects[d3][download][type] = git
projects[d3][download][url] = http://git.drupal.org/project/d3.git
projects[d3][type] = module
projects[d3][version] = 1.x
projects[d3][subdir] = contrib
projects[date_ical][version] = 3.2
projects[date_ical][subdir] = contrib
projects[diff][version] = 3.2
projects[diff][subdir] = contrib
projects[email][version] = 1.3
projects[email][subdir] = contrib
projects[entityreference_autocreate][version] = 1.0
projects[entityreference_autocreate][subdir] = contrib
projects[entityreference_prepopulate][version] = 1.5
projects[entityreference_prepopulate][subdir] = contrib
projects[entity_view_mode][version] = 1.0-rc1
projects[entity_view_mode][subdir] = contrib
projects[field_collection][version] = 1.0-beta7
projects[field_collection][subdir] = contrib
projects[fullcalendar][version] = 2.0
projects[fullcalendar][subdir] = contrib
projects[graphapi][version] = 1.x-dev
projects[graphapi][subdir] = contrib
projects[jquery_expander][version] = 1.0
projects[jquery_expander][subdir] = contrib
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
projects[metatag][version] = 1.4
projects[metatag][subdir] = contrib
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
projects[role_delegation][version] = 1.1
projects[role_delegation][subdir] = contrib
projects[rules][version] = 2.6
projects[rules][subdir] = contrib
projects[rules_conditional][version] = 1.0-beta2
projects[rules_conditional][subdir] = contrib
projects[relation][version] = 1.0-rc4
projects[relation][subdir] = contrib
; patching relation to allow fetch entity by property let's try the new patch
; projects[relation][patch][1302788] = https://drupal.org/files/relation-query_endpoints-1302788-16.patch
projects[relation][patch][1302788] = https://drupal.org/files/issues/relation-query_endpoints-1302788-24.patch
projects[schemaorg][version] = 1.0-beta4
projects[schemaorg][subdir] = contrib
projects[smtp][version] = 1.0
projects[smtp][subdir] = contrib
projects[social_profile_field][version] = 1.0-beta3
projects[social_profile_field][subdir] = contrib
projects[spambot][version] = 1.3
projects[spambot][subdir] = contrib
projects[subpathauto][version] = 1.3
projects[subpathauto][subdir] = contrib
projects[telephone][version] = 1.0-alpha1
projects[telephone][subdir] = contrib
projects[unique_field][version] = 1.0-rc1
projects[unique_field][subdir] = contrib

; Themes
projects[kalatheme][type] = theme
projects[kalatheme][version] = 3.0
projects[kalatheme][subdir] = contrib

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
