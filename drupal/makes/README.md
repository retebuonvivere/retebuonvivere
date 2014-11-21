rbv_drupal_make
===============

Description
-----------
The Drupal make file for retebuonvivere website.

install
-------
To install retebuonvivere website you can start from the latest drupal makefile and build the latest website configuration.

We do it this way (example):
```shell
git clone git@github.com:retebuonvivere/retebuonvivere.git reponame
cd reponame
drush make drupal/makes/retebuonvivere1.13.make sitename
cp -R drupal/profiles/* sitename/profiles/
cp -R drupal/features/ sitename/sites/all/modules/
mkdir sitename/sites/all/themes/custom
cp -R drupal/themes/* sitename/sites/all/themes/custom/
cp -R drupal/libraries/* sitename/sites/all/libraries/
```
Now create a new mySQL db with all permissions
```shell
cd sitename
drush site-install rbv_profile --account-name=admin --account-pass=admin --db-url=mysql://dbuser:dbpass@localhost/dbname
```
