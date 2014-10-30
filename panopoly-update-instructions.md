# in order to update to panopoly 1.13 (as an example) do
* update rbv_update_panopoly1.11.make file with 1.13 versions
```make
api = 2
core = 7.x

; retebuonvivere make file used to update to panopoly 1.13 and core 7.32

projects[drupal][version] = 7.32
; Patch sssue "String offset cast notice in field_invoke_method_multiple()" - let's try patch 2 which is to be RTBC
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

; Contrib modules to be downloaded

; Contrib modules to be updated

; Themes to be updates

; Libraries to be downloaded

; RBV features to be updated
```

* run <code>drush make --working-copy path_to_drupal_make/rbv_update_panopoly1.13.make .</code> from drupal root dir.
* <code>cd tmp/</code>
* <code>drush dl panopoly</code>
* <code>meld sites/all/modules/contrib/linkit/ ~/tmp/panopoly-7.x-1.13/profiles/panopoly/modules/contrib/linkit</code>
* if they are different: 
  * <code>rm -rf sites/all/modules/contrib/linkit</code>
  * and <code>cp -R ~/tmp/panopoly-7.x-1.13/profiles/panopoly/modules/contrib/linkit sites/all/modules/contrib/linkit</code>
* <code>drush updb</code>

