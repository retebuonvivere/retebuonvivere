[![Stories in Ready](https://badge.waffle.io/retebuonvivere/retebuonvivere.png?label=ready&title=Ready)](https://waffle.io/retebuonvivere/retebuonvivere)
retebuonvivere
==============
This fork is the new main repo for www.retebuonvivere.org.

table of contents
* [what is retebuonvivere.org](#what-is-retebuonvivereorg)
* [structure of the project](#structure-of-the-project)
* [developing](#developing)
* [install](#install)
* [demo and production](#demo-and-production)
* [rationale of this project](#rationale-of-the-project)
* [promoters](#promoters)
* [technical staff](#technical-staff)
* [contacts](#contacts)

what is retebuonvivere.org
--------------------------
* [Retebuonvivere.org][25] is a [drupal][6]-based collaboration graph for the community (the network) of the Civil Society and Social Economy Organizations (CSSESBOs) of the province of Verona, Italy.
* It is built on top of [Panopoly][7] base distribution. 
* The code can be cloned to build similar websites
* The specificity of the website is its massive use of network graphs visualizations to render collaboration between organizations (to let people see the big picture).

structure of the project
------------------------
We don't use *git submodules* anymore, so now there is only one repo (this one) and one tree (we changed this to better integrate our workflow with *bountysource*).

developing
----------
We follow a *code-driven development* workflow for our custom modules and configuration, in order to boost teamworking.
If you want to **contribute** to this civil society network tool, great! **Get in touch with us: write to info@retebuonvivere.org**.
We also use [bountysource][30] to give some money to developers who contribute with the issue queue. So, go check it out!

install
-------
To install this drpal website you can start from the latest drupal [makefile][31] and build the latest website configuration.

We do it this way (example):
```shell
git clone git@github.com:retebuonvivere/retebuonvivere.git reponame
cd reponame
drush make drupal/makes/retebuonvivere1.13.make sitename
cp -R drupal/profile/* sitename/profiles/
cp -R drupal/features/* sitename/sites/all/modules/features/
cp -R drupal/themes/* sitename/sites/all/themes/custom/
cp -R drupal/libraries/* sitename/sites/all/libraries/
```
Now create a new mySQL db with all permissions
```shell
cd sitename
drush site-install rbv_profile --account-name=admin --account-pass=admin --db-url=mysql://dbuser:dbpass@localhost/dbname
```
demo and production
-------------------
At [www.retebuonvivere.org][25] you can find the *working production website for the network of Verona, Italy*. Check out particularly www.retebuonvivere.org/rete and www.retebuonvivere.org/rete/meshwork.

rationale of the project
------------------------
[«Civil Society»][4], [«Social Economy»][5] and [Social Business][8] organizations (CSSESBOs :-) are non-profit associations, [cooperatives][23], [social enterprises][22], [social businesses][8], citizens' committees, [ethical purchasing groups][11], foundations, and many more.

CSSESBOs have many projects *on the field*, and they cooperate with each other on projects. They can be associated in networks. Projects target specific problems in the path for improving social, economic, or environmental conditions.

CSSESBOs cooperates also with other groups: Government and local Government organizations, and "traditional" business organizations. 

CSSESBOs share some high level (system level) aims/purposes and values: 
* [sustainability][12] («we act to enhance sustainability of the planet»); 
* [happiness][13] («we want and we cooperate in order to have a joyful life»);
* the [commons paradigm][10] («we take care! We don't wait for things to descend from above, top-down. We do it bottom-up. We step forward, and we seek cooperation. This way only, we can achieve a social organization able to maintain sustainability»);
* [social justice][14] («bottom-up, sustainable and joyful also imply the respect of rights, recognizing diversity but pursuing social equality and solidarity»).

CSSESBOs are organized bottom-up from the individual CSSESBO to local network, up to national, regional, international and global networks. We have also cross-cutting ties. Also, projects can have local or broader scopes.

This site is a representational tool for any local level CSSESBOs network. We maintain a working site [www.retebuonvivere.org][9] which serves the local network of Verona, Italy. In the spirit of open-source community-based software, the code is here to be forked, cloned and used from other networks, and to join forces to create the tools we all need!

promoters
---------
This project is promoted mainly by two CSSESBOs networks of Verona: [Mag Verona][15] and [Naturalmente Verona][16]. Reference person for retevuonvivere at Naturalmente Verona is [Andrea Tronchin][28], at Mag Verona is [Loredana Aldegheri][29]. Thank you!

Check out [this page][17] about retebuonvivere.org project at Mag's website.
And this [list of posts][18] about retebuonvivere project and events related to retebuonvivere project at Naturalmente Verona's website.

technical staff
---------------
Present:
* Miro Marchi [miromarchi][21] contributes as drupal configurator and maintainer for this project. Please bear in mind that I am an anthropology PhD candidate, not a programmer. So be patient please, I'm a newbie! This website is part of my thesis.
* Lucia Fiorio ([linkedin profile][27]) contributes in network administration and network growth
* Sirio Marchi [ohjimijimijimi][19] contributes as drupal and git supervisor

Past:
* Roberto Previdi [hariseldon78][26] contributed as javascript programmer for d3js viz
* Marco Andreoli [fonzy85vr][20] contributed as programmer and Agile project manager

contacts
--------
Get in touch with us:
* write to info@retebuonvivere.org
* website: [www.retebuonvivere.org][9]
* facebook: [facebook.com/retebuonvivere][32]
* google+: [plus.google.com/+RetebuonvivereOrg1][33]


[1]: http://nuvole.org/blog/code-driven-development
[2]: http://nuvole.org/blog/2012/feb/07/hard-and-soft-configuration-drupal-distributions
[3]: http://nuvole.org/blog/2010/aug/24/features-based-development-workflow
[4]: https://en.wikipedia.org/wiki/Civil_society
[5]: https://en.wikipedia.org/wiki/Social_economy
[6]: https://drupal.org/
[7]: https://drupal.org/project/panopoly
[8]: https://en.wikipedia.org/wiki/Social_business
[9]: http://www.retebuonvivere.org/
[10]: https://en.wikipedia.org/wiki/Commons
[11]: https://en.wikipedia.org/wiki/Ethical_purchasing_groups
[12]: https://en.wikipedia.org/wiki/Sustainability
[13]: https://en.wikipedia.org/wiki/Happiness
[14]: https://en.wikipedia.org/wiki/Social_justice
[15]: http://www.magverona.it/
[16]: http://www.naturalmenteverona.org/
[17]: http://www.magverona.it/la-rete-del-buon-vivere-org/
[18]: http://www.naturalmenteverona.org/tag/portale-del-terzo-settore/
[19]: https://github.com/ohjimijimijimi
[20]: https://github.com/fonzy85vr
[21]: https://github.com/miromarchi
[22]: https://en.wikipedia.org/wiki/Social_entrepreneurship
[23]: https://en.wikipedia.org/wiki/Cooperative
[24]: http://dev-rbv-pan.gotpantheon.com/
[25]: http://www.retebuonvivere.org/
[26]: https://github.com/hariseldon78
[27]: http://it.linkedin.com/pub/lucia-fiorio/70/391/ab1/en
[28]: https://www.facebook.com/atronchin
[29]: http://www.magverona.it/testi-e-interventi-di-loredana-aldegheri/
[30]: https://www.bountysource.com/teams/retebuonvivere
[31]: https://github.com/retebuonvivere/retebuonvivere/tree/master/drupal/makes
[32]: https://www.facebook.com/retebuonvivere
[33]: https://plus.google.com/+RetebuonvivereOrg1
