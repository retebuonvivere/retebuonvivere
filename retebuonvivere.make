core = 7.24
api = 2
projects[] = drupal

; The Panopoly Foundation
projects[panopoly_core][subdir] = panopoly
projects[panopoly_core][patch][2087414] = https://drupal.org/files/issue-2087414.patch
projects[panopoly_images][subdir] = panopoly
projects[panopoly_theme][subdir] = panopoly
projects[panopoly_magic][subdir] = panopoly
projects[panopoly_widgets][subdir] = panopoly
projects[panopoly_admin][subdir] = panopoly
projects[panopoly_users][subdir] = panopoly

; The Panopoly Toolset
projects[panopoly_pages][subdir] = panopoly
projects[panopoly_wysiwyg][subdir] = panopoly
projects[panopoly_search][subdir] = panopoly

; Contrib modules
projects[addressfield][subdir] = contrib
projects[email][subdir] = contrib
projects[entity][subdir] = contrib
projects[entity][patch][2050775] = https://drupal.org/files/php5.5_bitwise_operator_fix-2050775-7_0.patch
projects[entityreference][subdir] = contrib
projects[entityreference_prepopulate][subdir] = contrib
projects[fape][subdir] = contrib
projects[fape][patch][1846156] = https://drupal.org/files/fape-1846156-5.patch
projects[features][subdir] = contrib
projects[field_group][subdir] = contrib
projects[link][subdir] = contrib
; projects[telephone][subdir] = contrib
projects[og][subdir] = contrib
projects[auto_nodetitle][subdir] = contrib
projects[diff][subdir] = contrib
projects[entity_view_mode][subdir] = contrib
projects[rdfa][subdir] = contrib
projects[rdfx][subdir] = contrib
projects[rdfx][patch][1176666] = https://drupal.org/files/find-arc-library-correctly-1176666-14.patch
projects[rules][subdir] = contrib
projects[schemaorg][subdir] = contrib

RBV features
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
projects[rbv_relpro][download][url] = git@github.com:miromarchi/rbv_relpro.git
projects[rbv_relpro][type] = module
projects[rbv_relpro][subdir] = features

; Themes
projects[radix_core][version] = 1.x-dev
projects[radix_core][subdir] = contrib
projects[radix][type] = theme
projects[radix][subdir] = contrib
projects[responsive_bartik][type] = theme
projects[responsive_bartik][subdir] = contrib

; Libraries
libraries[arc][download][type] = file
libraries[arc][download][url] = https://github.com/semsol/arc2/archive/master.zip
libraries[arc][directory_name] = arc
libraries[arc][type] = library

; Profile
projects[rbv_profile][type] = profile
projects[rbv_profile][download][type] = git
projects[rbv_profile][download][url] = git@github.com:miromarchi/rbv_profile.git
