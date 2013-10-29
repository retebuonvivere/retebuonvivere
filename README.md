rbv_drupal_make
===============

Description
-----------
The Drupal make file for retebuonvivere website.

Submodule of
------------
This repository is a submodule of [retebuonvivere] [1]

Start
-----
Create a new drupal installation using [drush] [3] from retebuonvivere makefile, following [these] [2] instructions: 

Download all the necessary modules, themes, libraries and patches in their right subdirectories with the following command (`--working-copy` option preserves git directories):
    
    drush make --working-copy retebuonvivere.make sitename

Create new db with all permission.

Install drupal with standard profile with the following command (from drupal root directory 'sitename'):
    
    drush site-install standard --account-name=admin --account-pass=admin --db-url=mysql://dbuser:dbpass@localhost/dbname

Now you need to enable all the modules by hand because we didn't build the profile module yet.

[1]: https://github.com/fonzy85vr/retebuonvivere
[2]: https://drupal.org/project/drush_make
[3]: https://drupal.org/project/drush
