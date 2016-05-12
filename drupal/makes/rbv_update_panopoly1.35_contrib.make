api = 2
core = 7.x

; retebuonvivere make file used to update to panopoly 1.35 and some contribs

projects[drupal][version] = 7.43

; The Panopoly Foundation update 7.x-1.35
projects[panopoly_core][version] = 1.35
projects[panopoly_core][subdir] = panopoly
projects[panopoly_images][version] = 1.35
projects[panopoly_images][subdir] = panopoly
projects[panopoly_theme][version] = 1.35
projects[panopoly_theme][subdir] = panopoly
projects[panopoly_magic][version] = 1.35
projects[panopoly_magic][subdir] = panopoly
projects[panopoly_widgets][version] = 1.35
projects[panopoly_widgets][subdir] = panopoly
projects[panopoly_admin][version] = 1.35
projects[panopoly_admin][subdir] = panopoly
projects[panopoly_users][version] = 1.35
projects[panopoly_users][subdir] = panopoly

; The Panopoly Toolset update 7.x-1.35
projects[panopoly_pages][version] = 1.35
projects[panopoly_pages][subdir] = panopoly
projects[panopoly_wysiwyg][version] = 1.35
projects[panopoly_wysiwyg][subdir] = panopoly
projects[panopoly_search][version] = 1.35
projects[panopoly_search][subdir] = panopoly

; Contrib modules to be downloaded
projects[addressfield_tokens][version] = 1.5
projects[addressfield_tokens][subdir] = contrib

; Contrib modules to be updated
projects[addressfield][version] = 1.2
projects[addressfield][subdir] = contrib
projects[masonry][version] = 3.0-beta1
projects[masonry][subdir] = contrib
projects[masonry_views][version] = 3.0
projects[masonry_views][subdir] = contrib

; Contrib modules to be patched (this doesnt work without redownloading the entire modules, which is against panopoly updating practice. I am applying patches manually after update.)
; projects[field_group][patch][2649648] = https://www.drupal.org/files/issues/php7_uniform_variable-2649648-5.patch
; projects[ctools][patch][2635876] = https://www.drupal.org/files/issues/ctools-uniform-variable-syntax-2635876-6.patch

; Themes to be updates

; Libraries to be downloaded
libraries[masonry][download][type] = file
libraries[masonry][download][url] = https://npmcdn.com/masonry-layout@3.3.2/dist/masonry.pkgd.min.js
libraries[masonry][directory_name] = masonry
libraries[masonry][type] = library
libraries[imagesloaded][download][type] = file
libraries[imagesloaded][download][url] = http://imagesloaded.desandro.com/imagesloaded.pkgd.min.js
libraries[imagesloaded][directory_name] = imagesloaded
libraries[imagesloaded][type] = library

; RBV features to be updated
