api = 2
core = 7.x

; retebuonvivere make file used to update to panopoly 1.26, core 7.39, rules 2.9, relation 1.0

projects[drupal][version] = 7.39

; The Panopoly Foundation update 7.x-1.26
projects[panopoly_core][version] = 1.26
projects[panopoly_core][subdir] = panopoly
projects[panopoly_images][version] = 1.26
projects[panopoly_images][subdir] = panopoly
projects[panopoly_theme][version] = 1.26
projects[panopoly_theme][subdir] = panopoly
projects[panopoly_magic][version] = 1.26
projects[panopoly_magic][subdir] = panopoly
projects[panopoly_widgets][version] = 1.26
projects[panopoly_widgets][subdir] = panopoly
projects[panopoly_admin][version] = 1.26
projects[panopoly_admin][subdir] = panopoly
projects[panopoly_users][version] = 1.26
projects[panopoly_users][subdir] = panopoly

; The Panopoly Toolset update 7.x-1.26
projects[panopoly_pages][version] = 1.26
projects[panopoly_pages][subdir] = panopoly
projects[panopoly_wysiwyg][version] = 1.26
projects[panopoly_wysiwyg][subdir] = panopoly
projects[panopoly_search][version] = 1.26
projects[panopoly_search][subdir] = panopoly

; Contrib modules to be downloaded

; Contrib modules to be updated
projects[relation][version] = 1.0
projects[relation][subdir] = contrib
; patching relation to allow fetch entity by property (the patch has fuzz 2 and offset 16)
projects[relation][patch][1302788] = https://www.drupal.org/files/issues/relation-query_endpoints-1302788-33.patch
projects[rules][version] = 2.9
projects[rules][subdir] = contrib

; Themes to be updates

; Libraries to be downloaded

; RBV features to be updated
