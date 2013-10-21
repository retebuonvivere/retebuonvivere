; This file was auto-generated by drush make
core = 7.x

api = 2
projects[] = drupal

; Modules
projects[views_bulk_operations][subdir] = "contrib"

projects[addressfield][subdir] = "contrib"

projects[auto_nodetitle][subdir] = "contrib"

projects[ctools][subdir] = "contrib"

projects[date][subdir] = "contrib"

projects[diff][subdir] = "contrib"

projects[email][subdir] = "contrib"

projects[entity][subdir] = "contrib"

projects[entityreference][subdir] = "contrib"

projects[rdfx][subdir] = "contrib"
projects[rdfx][patch][1176666] = https://drupal.org/files/find-arc-library-correctly-1176666-14.patch

projects[features][subdir] = "contrib"

projects[field_group][subdir] = "contrib"

projects[libraries][subdir] = "contrib"

projects[module_filter][subdir] = "contrib"

projects[og][subdir] = "contrib"

projects[pathauto][subdir] = "contrib"

projects[rdfa][subdir] = "contrib"

projects[schemaorg][subdir] = "contrib"

projects[strongarm][subdir] = "contrib"

projects[telephone][subdir] = "contrib"

projects[token][subdir] = "contrib"

projects[views][subdir] = "contrib"

; RBV Features
projects[rbv_com_fields][download][type] = "git"
projects[rbv_com_fields][download][url] = "git@github.com:miromarchi/rbv_com_fields.git"
projects[rbv_com_fields][type] = "module"
projects[rbv_com_fields][subdir] = "features"

projects[rbv_org][download][type] = "git"
projects[rbv_org][download][url] = "git@github.com:miromarchi/rbv_org.git"
projects[rbv_org][type] = "module"
projects[rbv_org][subdir] = "features"

projects[rbv_project][download][type] = "git"
projects[rbv_project][download][url] = "git@github.com:miromarchi/rbv_project.git"
projects[rbv_project][type] = "module"
projects[rbv_project][subdir] = "features"

projects[rbv_rel][download][type] = "git"
projects[rbv_rel][download][url] = "git@github.com:miromarchi/rbv_rel.git"
projects[rbv_rel][type] = "module"
projects[rbv_rel][subdir] = "features"

projects[rbv_view_explore][download][type] = "git"
projects[rbv_view_explore][download][url] = "git@github.com:miromarchi/rbv_view_explore"
projects[rbv_view_explore][type] = "module"
projects[rbv_view_explore][subdir] = "features"

projects[rbv_view_rel][download][type] = "git"
projects[rbv_view_rel][download][url] = "git@github.com:miromarchi/rbv_view_rel"
projects[rbv_view_rel][type] = "module"
projects[rbv_view_rel][subdir] = "features"

; Libraries
libraries[arc][download][type] = "file"
libraries[arc][download][url] = "https://github.com/semsol/arc2/archive/master.zip"
libraries[arc][directory_name] = "arc"
libraries[arc][type] = "library"

; Themes
projects[responsive_bartik][version] = "1.x"
