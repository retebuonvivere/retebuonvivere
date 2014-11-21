api = 2
core = 7.x

; retebuonvivere make file used to update to panopoly 1.5 and core 7.28

projects[drupal][version] = 7.28
; Patch isssue "String offset cast notice in field_invoke_method_multiple()"
projects[drupal][patch][1824820] = https://drupal.org/files/issues/string-offset-cast-1824820-65-D7.patch

; The Panopoly Foundation update 7.x-1.5
projects[panopoly_core][version] = 1.5
projects[panopoly_core][subdir] = panopoly
projects[panopoly_images][version] = 1.5
projects[panopoly_images][subdir] = panopoly
projects[panopoly_theme][version] = 1.5
projects[panopoly_theme][subdir] = panopoly
projects[panopoly_magic][version] = 1.5
projects[panopoly_magic][subdir] = panopoly
projects[panopoly_widgets][version] = 1.5
projects[panopoly_widgets][subdir] = panopoly
projects[panopoly_admin][version] = 1.5
projects[panopoly_admin][subdir] = panopoly
projects[panopoly_users][version] = 1.5
projects[panopoly_users][subdir] = panopoly

; The Panopoly Toolset update 7.x-1.5
projects[panopoly_pages][version] = 1.5
projects[panopoly_pages][subdir] = panopoly
projects[panopoly_wysiwyg][version] = 1.5
projects[panopoly_wysiwyg][subdir] = panopoly
projects[panopoly_search][version] = 1.5
projects[panopoly_search][subdir] = panopoly

; Contrib modules to be downloaded
projects[masonry][version] = 2.0
projects[masonry][subdir] = contrib
projects[masonry_views][version] = 1.0
projects[masonry_views][subdir] = contrib
projects[flag][version] = 3.5
projects[flag][subdir] = contrib

; Contrib modules to be updated
projects[date_ical][version] = 3.1
projects[date_ical][subdir] = contrib
projects[email][version] = 1.3
projects[email][subdir] = contrib
projects[field_collection][version] = 1.0-beta7
projects[field_collection][subdir] = contrib
; projects[entityreference_prepopulate][version] = 1.5
; projects[entityreference_prepopulate][subdir] = contrib
; projects[og][version] = 2.7
; projects[og][subdir] = contrib
; projects[relation][version] = 1.0-rc5
; projects[relation][subdir] = contrib
; patching relation to allow fetch entity by property let's try the new patch
; projects[relation][patch][1302788] = https://drupal.org/files/issues/relation-query_endpoints-1302788-24.patch
; projects[rules][version] = 2.7
; projects[rules][subdir] = contrib

; Themes to be updates
projects[kalatheme][type] = theme
projects[kalatheme][version] = 3.x-dev
projects[kalatheme][subdir] = contrib

; Libraries to be downloaded
libraries[masonry][download][type] = "get"
libraries[masonry][download][url] = "http://desandro.github.io/masonry/jquery.masonry.min.js"
libraries[masonry][directory_name] = "masonry"
libraries[masonry][type] = library

; RBV features to be updated
