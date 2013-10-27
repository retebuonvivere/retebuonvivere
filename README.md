retebuonvivere
==============

what is retebuonvivere.org
--------------------------
Basically retebuonvivere.org will be a [drupal][6] website for the community of the civil society of the province of Verona, Italy. 
It will then become a drupal distribution, or we can work on top of one of the social distributions out there, e.g. [Open Atrium 2][4] and [Drupal Commons 3][8], or on top of a base distribution as [Panopoly][7].

structure of the project
------------------------
We use *git submodules* to maintain the different repositories of this project tied under the same tree.
Have a look at `.gitmodules` file for the complete list of submodules repositories.

developing
----------
We are going to follow a *code-driven development* workflow for our custom modules and configuration, in order to boost teamworking. 
Reference for this can be found at [nuvole.org/blog/code-driven-development][1]. 

Expecially we are going to:
* use [features][3]
* follow the distinction between [soft-configuration and hard-configuration][2]
  * hence using features to store hard-configuration 
  * and installation profile to store soft-configuration.

start
-----
You can start from the drupal [makefile][5] to build the latest website configuration.
Start from the [wiki documentation pages][] where you can see retebuonvivere features, which features are already **[done]** with links to repositories, which features are still missing **[____]**.
If you want to contribute to this civil society network tool, great! Chose your piece :-) get involved.


this README *todo*
----------------
* Add a section for the rationale of this project

[1]: http://nuvole.org/blog/code-driven-development
[2]: http://nuvole.org/blog/2012/feb/07/hard-and-soft-configuration-drupal-distributions
[3]: http://nuvole.org/blog/2010/aug/24/features-based-development-workflow
[4]: https://drupal.org/project/openatrium
[5]: https://github.com/miromarchi/rbv_drupal_make
[6]: https://drupal.org/
[7]: https://drupal.org/project/panopoly
[8]: https://drupal.org/project/commons
[9]: https://github.com/fonzy85vr/retebuonvivere/wiki
