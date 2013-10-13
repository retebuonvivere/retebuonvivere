retebuonvivere
==============

what is retebuonvivere.org
--------------------------
Basically retebuonvivere.org will be a drupal website for the community of the civil society of the province of Verona, Italy. 
It will then become a drupal distribution, or we can work on top of one of the social distributions out there, probably [Open Atrium 2] [4].

structure of the project
------------------------
We use *git submodules* to maintain the different repositories of this project tied under the same tree.
Have a look at `.gitmodules` file for the complete list of submodules repositories.

developing
----------
We are going follow a *code-driven development* workflow for our custom modules and configuration, in order to boost teamwork. 
Reference for this can be found at [nuvole.org/blog/code-driven-development] [1]. 

Expecially we are going to:
* use [features] [3]
* follow the distinction between [soft-configuration and hard-configuration] [2]
  * hence using features to store hard-configuration 
  * and installation profile to store soft-configuration.


[1]: http://nuvole.org/blog/code-driven-development
[2]: http://nuvole.org/blog/2012/feb/07/hard-and-soft-configuration-drupal-distributions
[3]: http://nuvole.org/blog/2010/aug/24/features-based-development-workflow
[4]: https://drupal.org/project/openatrium
