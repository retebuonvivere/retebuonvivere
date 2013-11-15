retebuonvivere
==============
table of contents
* [what is retebuonvivere.org](https://github.com/fonzy85vr/retebuonvivere#what-is-retebuonvivereorg)
* [structure of the project](https://github.com/fonzy85vr/retebuonvivere#structure-of-the-project)
* [developing](https://github.com/fonzy85vr/retebuonvivere#developing)
* [start](https://github.com/fonzy85vr/retebuonvivere#start)
* [demo](https://github.com/fonzy85vr/retebuonvivere#demo)
* [rationale of this project](https://github.com/fonzy85vr/retebuonvivere#rationale-of-the-project)
* [promoters](https://github.com/fonzy85vr/retebuonvivere#promoters)
* [technical staff](https://github.com/fonzy85vr/retebuonvivere#technical-staff)

what is retebuonvivere.org
--------------------------
Basically retebuonvivere.org will be a [drupal][6] website for the community (the network) of the civil society and social economy organizations (CSSEO) of the province of Verona, Italy. 

It will then become a drupal distribution (allowing other network to use it), or we can work on top of one of the social distributions out there, e.g. [Open Atrium 2][4] and [Drupal Commons 3][8], or on top of a base distribution as [Panopoly][7].

structure of the project
------------------------
We use *git submodules* to maintain the different repositories of this project tied under the same tree.
Have a look at `.gitmodules` file for the complete list of submodules repositories, or browse the directory structure from the main repo.

developing
----------
We are going to follow a *code-driven development* workflow for our custom modules and configuration, in order to boost teamworking. 
Reference for this can be found at [nuvole.org/blog/code-driven-development][1]. 

Expecially we are going to:
* use [features][3]
* follow the distinction between [soft-configuration and hard-configuration][2]
  * hence using features to store hard-configuration 
  * and installation profile to store soft-configuration.
* We don't yet make use of `hook_update_N()` and `hook_install()`, nor we have a controller feature, only because I (miro) am not capable of implementing these workflow techniques without the help of a programmer.

start
-----
This README is *the* place where to start! This repo is the main repo.

From here you can go to the **[wiki documentation pages][9]** where you can see retebuonvivere features, which features are already **[done]** (with links to repositories), which features are still missing **[____]**, the priority of each feature and more info.

If you want to **contribute** to this civil society network tool, great! Chose your piece :-) **get involved**.

You can start from the drupal [makefile][5] to build the latest website configuration.

demo
----
At [dev-rbvt.gotpantheon.com][24] we mantain an updated test demo. In the demo content we placed contextual links to the wiki pages, in order to facilitate cooperation.

rationale of the project
------------------------
Civil society and social economy organizations (CSSEO) are non-profit associations, [cooperatives][23], [social enterprises][22], citizens' committees, [ethical purchasing groups][11], and many more.

CSSEO have many projects *on the field*, and they cooperate with each other on projects. They can even be associated in networks.

CSSEO cooperates also with other groups: Government and local government organizations, and business organizations. 

CSSEO share some high level (system level) aims/purposes and values: 
* [sustainability][12] (we act to enhance sustainability of the planet); 
* [happiness][13] (we want and we cooperate in order to have a joyful life);
* the [commons paradigm][10] (*we take care*! We don't wait for things to descend from above, top-down. We do it bottom-up. This way only, we can achieve a social organization able to maintain sustainability);
* [social justice][14] (bottom-up, sustainable and joyful also imply the respect of rights, recognizing diversity but pursuing social equality and solidarity).

CSSEO are organized bottom-up from the individual CSO to local network, up to national, regional, international and global networks. We have also cross-cutting ties.

This site is aimed as the main platform, main tool of representation and self-representation of the local level CSSEO network of the province of Verona, Italy, but in the spirit of open source community software is also aimed at being distributed to other local level networks.

Check out the [wiki][9] for more detailed documentation.

promoters
---------
This project is promoted by two CSSEO networks of Verona: [Mag Verona][15] and [Naturalmente Verona][16]. 
Check out [this page][17] about retebuonvivere.org project at Mag's website.
And this [list of posts][18] about retebuonvivere project and events related to retebuonvivere project at Naturalmente Verona's website.

technical staff
---------------
* Sirio Marchi [ohjimijimijimi][19] as drupal supervisor
* Marco Andreoli [fonzy85vr][20] as programmer
* Miro Marchi [miromarchi][21] as drupal configurator (I'm the anthropologist!)
* [+ you :-D](https://github.com/fonzy85vr/retebuonvivere/edit/master/README.md#start)


[1]: http://nuvole.org/blog/code-driven-development
[2]: http://nuvole.org/blog/2012/feb/07/hard-and-soft-configuration-drupal-distributions
[3]: http://nuvole.org/blog/2010/aug/24/features-based-development-workflow
[4]: https://drupal.org/project/openatrium
[5]: https://github.com/miromarchi/rbv_drupal_make
[6]: https://drupal.org/
[7]: https://drupal.org/project/panopoly
[8]: https://drupal.org/project/commons
[9]: https://github.com/fonzy85vr/retebuonvivere/wiki
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
[24]: http://dev-rbvt.gotpantheon.com/
