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

2. Download all the necessary modules, themes, libraries and patches (including drupal core and panopoly base distribution) in their right subdirectories with the following command (from inside the folder created, which will become the drupal root):

   `drush make retebuonvivere.make`

3. Download the telephone module separately because it always cause (uncomprehensible) problems in the makefile.

   `drush dl telephone`

4. Create a profiles directory (from drupal root):

   `mkdir profiles`
   
5. Get [retebuonvivere profile][4] with the right folder name, e.g., (from drupal root):

   `git clone git@github.com:miromarchi/rbv_profile.git profiles/retebuonvivere`

5. Create new mySQL db with all permission.

6. Install drupal with retebuonvivere profile with the following command (from drupal root):

   `drush site-install retebuonvivere --account-name=admin --account-pass=admin --db-url=mysql://dbuser:dbpass@localhost/dbname`

7. Now it's quite done, please report issues. You still need to update some contrib modules installed by panopoly:
   `drush up -y entity entityreference field_group features simple_gmap`

8. apply some patches to contrib modules installed by panopoly:

   ```Shell
   cd sites/all/modules/contrib/entity
   wget https://drupal.org/files/php5.5_bitwise_operator_fix-2050775-7_0.patch
   patch -p1 < php5.5_bitwise_operator_fix-2050775-7_0.patch
   ```

   ```Shell
   cd sites/all/modules/contrib/fape
   wget https://drupal.org/files/fape-1846156-5.patch
   patch -p1 fape-1846156-5.patch
   ```

9. Get the RBV features:

   `cd sites/all/modules/features` 
   if not present create the features dir.

   ```Shell
   git clone git@github.com:miromarchi/rbv_com_fields.git
   git clone git@github.com:miromarchi/rbv_org.git
   git clone git@github.com:miromarchi/rbv_project.git
   ```
10. Now you can install (in the order presented above) the features, and you are ready to go.

Documentation
-------------
All the documentation for development (soft/hard configuration, profile, makefile, distributions, ...) is at rbv_profile [wiki][1].

[0]: https://github.com/fonzy85vr/retebuonvivere
[1]: https://github.com/miromarchi/rbv_profile/wiki
[2]: https://drupal.org/project/drush_make
[3]: https://drupal.org/project/drush
[4]: https://github.com/miromarchi/rbv_profile
