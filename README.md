retebuonvivere
==============
table of contents
* [what is retebuonvivere.org](https://github.com/fonzy85vr/retebuonvivere#what-is-retebuonvivereorg)
* [structure of the project](https://github.com/fonzy85vr/retebuonvivere#structure-of-the-project)
* [developing](https://github.com/fonzy85vr/retebuonvivere#developing)
* [start](https://github.com/fonzy85vr/retebuonvivere#start)
* [demo and production](https://github.com/fonzy85vr/retebuonvivere#demo-and-production)
* [rationale of this project](https://github.com/fonzy85vr/retebuonvivere#rationale-of-the-project)
* [promoters](https://github.com/fonzy85vr/retebuonvivere#promoters)
* [technical staff](https://github.com/fonzy85vr/retebuonvivere#technical-staff)

what is retebuonvivere.org
--------------------------
Basically [retebuonvivere.org][25] is a [drupal][6] website for the community (the network) of the Civil Society and Social Economy Organizations (CSSEOs) of the province of Verona, Italy.
It will then become a drupal distribution (allowing other networks to use it), built on top of [Panopoly][7] base distribution.

structure of the project
------------------------
We use *git submodules* to maintain the different repositories of this project tied under the same tree.
Have a look at `.gitmodules` file for the complete list of submodules repositories, or browse the directory structure from the main repo.

If you wanto to get all submodules:
```Shell
git clone git@github.com:fonzy85vr/retebuonvivere.git
cd retebuonvivere
git submodule init
git submodule update
```

developing
----------
We are going to follow a *code-driven development* workflow for our custom modules and configuration, in order to boost teamworking.

The [developing wiki][4] is the main place for documentation on this.

start
-----
This README is *the* place where to start! This repo is the main repo.

From here you can go to the **[main wiki documentation pages][9]** where you can see retebuonvivere features, which features are already **[done]** (with links to repositories), which features are still missing **[____]**, the priority of each feature and more info.

If you want to **contribute** to this civil society network tool, great! Chose your piece :-) **get involved**.

You can start from the drupal [makefile][5] to build the latest website configuration, or visit the developing wiki (see previous section), or visit the demo site (see next section).

demo and production
-------------------
At [dev-rbv-pan.gotpantheon.com][24] we mantain an outdated test demo. In the demo content we placed contextual links to the wiki pages, in order to facilitate cooperation.

At [www.retebuonvivere.org][25] you can find the production website for the network of Verona, Italy.

rationale of the project
------------------------
«Civil society» and «social economy» organizations (CSSEOs) are non-profit associations, [cooperatives][23], [social enterprises][22], citizens' committees, [ethical purchasing groups][11], foundations, and many more.

CSSEOs have many projects *on the field*, and they cooperate with each other on projects. They can  be associated in networks. Projects target specific problems in the path for improving social, economic, or environmental conditions.

CSSEOs cooperates also with other groups: Government and local Government organizations, and business organizations. 

CSSEOs share some high level (system level) aims/purposes and values: 
* [sustainability][12] («we act to enhance sustainability of the planet»); 
* [happiness][13] («we want and we cooperate in order to have a joyful life»);
* the [commons paradigm][10] («we take care! We don't wait for things to descend from above, top-down. We do it bottom-up. We step forward, and we seek cooperation. This way only, we can achieve a social organization able to maintain sustainability»);
* [social justice][14] («bottom-up, sustainable and joyful also imply the respect of rights, recognizing diversity but pursuing social equality and solidarity»).

CSSEOs are organized bottom-up from the individual CSSEO to local network, up to national, regional, international and global networks. We have also cross-cutting ties. Also projects can have local or broader scopes.

This site is aimed as the main platform, main tool of representation and self-representation of the local level CSSEOs network of the province of Verona, Italy, but in the spirit of open source community software is also aimed at being distributed to other local level networks. 

promoters
---------
This project is promoted mainly by two CSSEOs networks of Verona: [Mag Verona][15] and [Naturalmente Verona][16]. 
Check out [this page][17] about retebuonvivere.org project at Mag's website.
And this [list of posts][18] about retebuonvivere project and events related to retebuonvivere project at Naturalmente Verona's website.

technical staff
---------------
* Sirio Marchi [ohjimijimijimi][19] contributes as drupal supervisor
* Marco Andreoli [fonzy85vr][20] contributed as programmer and Agile project manager
* Miro Marchi [miromarchi][21] contributes as drupal configurator (I'm the anthropologist!) and still main reference for this project
* Roberto Previdi [hariseldon78][26] contributed as javascript programmer for d3js viz
* Lucia Fiorio [linkedin profile][27] contributes in network administration and network growth
* [+ you :-D](https://github.com/fonzy85vr/retebuonvivere#start)


[1]: http://nuvole.org/blog/code-driven-development
[2]: http://nuvole.org/blog/2012/feb/07/hard-and-soft-configuration-drupal-distributions
[3]: http://nuvole.org/blog/2010/aug/24/features-based-development-workflow
[4]: https://github.com/miromarchi/rbv_profile/wiki
[5]: https://github.com/miromarchi/rbv_drupal_make
[6]: https://drupal.org/
[7]: https://drupal.org/project/panopoly

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
[24]: http://dev-rbv-pan.gotpantheon.com/
[25]: http://www.retebuonvivere.org/
[26]: https://github.com/hariseldon78
[27]: http://it.linkedin.com/pub/lucia-fiorio/70/391/ab1/en
