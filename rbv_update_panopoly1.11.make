api = 2
core = 7.x

; retebuonvivere make file used to update to panopoly 1.11 and core 7.31

projects[drupal][version] = 7.31
; Patch sssue &quot;String offset cast notice in field_invoke_method_multiple()&quot; - let&#39;s try patch 2 which is to be RTBC
projects[drupal][patch][1824820] = https://www.drupal.org/files/string-offset-cast-1824820-2.patch

; The Panopoly Foundation update 7.x-1.11
projects[panopoly_core][version] = 1.11
projects[panopoly_core][subdir] = panopoly
projects[panopoly_images][version] = 1.11
projects[panopoly_images][subdir] = panopoly
projects[panopoly_theme][version] = 1.11
projects[panopoly_theme][subdir] = panopoly
projects[panopoly_magic][version] = 1.11
projects[panopoly_magic][subdir] = panopoly
projects[panopoly_widgets][version] = 1.11
projects[panopoly_widgets][subdir] = panopoly
projects[panopoly_admin][version] = 1.11
projects[panopoly_admin][subdir] = panopoly
projects[panopoly_users][version] = 1.11
projects[panopoly_users][subdir] = panopoly

; The Panopoly Toolset update 7.x-1.11
projects[panopoly_pages][version] = 1.11
projects[panopoly_pages][subdir] = panopoly
projects[panopoly_wysiwyg][version] = 1.11
projects[panopoly_wysiwyg][subdir] = panopoly
projects[panopoly_search][version] = 1.11
projects[panopoly_search][subdir] = panopoly

; Contrib modules to be downloaded

; Contrib modules to be updated

; Themes to be updates

; Libraries to be downloaded

; RBV features to be updated
