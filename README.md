rbv_drupal_make
===============

Description
-----------
The Drupal make file for retebuonvivere website.

Submodule of
------------
This repository is a submodule of [retebuonvivere][0]

Start
-----
Build a new retebuonvivere panopoly-based installation using [drush][3] from retebuonvivere makefile, following [these][2] instructions: 

1. Create a folder and get the make file e.g. with:
   
   `wget https://github.com/miromarchi/rbv_drupal_make/blob/master/retebuonvivere.make`

2. Download all the necessary modules, themes, libraries and patches (including drupal core and panopoly base distribution) in their right subdirectories with the following command (from inside the folder created which will become the drupal root):

   `drush make retebuonvivere.make`

3. Create new mySQL db with all permission.

4. Create a profiles directory:

   `mkdir profiles`
   
5. Get [retebuonvivere profile][4] with the right folder name, e.g. from inside profiles dir:

   `git clone git@github.com:miromarchi/rbv_profile.git retebuonvivere`

6. Install drupal with retebuonvivere profile with the following command (from drupal root):

   `drush site-install retebuonvivere --account-name=admin --account-pass=admin --db-url=mysql://dbuser:dbpass@localhost/dbname`

Documentation
-------------
All the documentation for development (soft/hard configuration, profile, makefile, distributions, ...) is at rbv_profile [wiki][1].

[0]: https://github.com/fonzy85vr/retebuonvivere
[1]: https://github.com/miromarchi/rbv_profile/wiki
[2]: https://drupal.org/project/drush_make
[3]: https://drupal.org/project/drush
[4]: https://github.com/miromarchi/rbv_profile
