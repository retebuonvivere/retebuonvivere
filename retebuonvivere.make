core = 7.x
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
projects[profiler_builder][subdir] = "contrib"

projects[addressfield][subdir] = "contrib"

projects[email][subdir] = "contrib"

projects[entityreference_prepopulate][subdir] = "contrib"

projects[link][subdir] = "contrib"

projects[telephone][subdir] = "contrib"

projects[og][subdir] = "contrib"

projects[auto_nodetitle][subdir] = "contrib"

projects[diff][subdir] = "contrib"

projects[entity_view_mode][subdir] = "contrib"

projects[rdfa][subdir] = "contrib"

projects[rdfx][subdir] = "contrib"
projects[rdfx][patch][1176666] = https://drupal.org/files/find-arc-library-correctly-1176666-14.patch

projects[rules][subdir] = "contrib"

projects[schemaorg][subdir] = "contrib"

; RBV features
; projects[rbv_com_fields][download][type] = "git"
; projects[rbv_com_fields][download][url] = "git@github.com:miromarchi/rbv_com_fields.git"
; projects[rbv_com_fields][type] = "module"
; projects[rbv_com_fields][subdir] = "features"

; projects[rbv_org][download][type] = "git"
; projects[rbv_org][download][url] = "git@github.com:miromarchi/rbv_org.git"
; projects[rbv_org][type] = "module"
; projects[rbv_org][subdir] = "features"

; projects[rbv_project][download][type] = "git"
; projects[rbv_project][download][url] = "git@github.com:miromarchi/rbv_project.git"
; projects[rbv_project][type] = "module"
; projects[rbv_project][subdir] = "features"


; Themes
; radix 1.x as in Panopoly theme suggestion
projects[radix][type] = theme
projects[radix][download][type] = git
projects[radix][download][revision] = b873330
projects[radix][download][branch] = 7.x-1.x

; responsive_bartik
projects[responsive_bartik][type] = "theme"
projects[responsive_bartik][subdir] = "contrib"

; Libraries
; arc
libraries[arc][download][type] = "file"
libraries[arc][download][url] = "https://github.com/semsol/arc2/archive/master.zip"
libraries[arc][directory_name] = "arc"
libraries[arc][type] = "library"

; Profile
projects[retebuonvivere][type] = profile
projects[retebuonvivere][download][type] = git
projects[retebuonvivere][download][url] = git@github.com:miromarchi/rbv_profile.git
