api = 2
core = 7.x

; retebuonvivere make file used to update to core 7.30

projects[drupal][version] = 7.30
; Patch sssue "String offset cast notice in field_invoke_method_multiple()" - let's try patch 2 which is to be RTBC
projects[drupal][patch][1824820] = https://www.drupal.org/files/string-offset-cast-1824820-2.patch
