retebuonvivere
==============

what is retebuonvivere.org
--------------------------
Basically retebuonvivere.org will be a [drupal][6] website for the community of the civil society of the province of Verona, Italy. 
It will then become a drupal distribution, or we can work on top of one of the social distributions out there, e.g. [Open Atrium 2][4], or on top of a base distribution as [Panopoly][7]

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

retebuonvivere.org features
---------------------------
* content type *organization* **[done]** → [go to the repository][9], as an [organic group][8] **[done]**, RDF-mapped for the semantic web **[done]**. Every organization of the civil society can open an account.
* content type *proejct* **[done]** → [go to the repository][10], as a group content, RDF-mapped **[done]**. Every organization can create projects pages for describing their projects.
* taxonomy vocabulary *organization types* **[____]**, RDF-mapped **[____]**, edit by administrators only, suggest-a-new term functionality for all users **[____]**.
* taxonomy vocabulary *relation types* **[____]**, RDF-mapped **[____]**, edit by administrators only, suggest-a-new term functionality for all users **[____]**.
* taxonomy vocabulary *categories/sectors of impact* **[____]**, RDF-mapped **[____]**, edit by administrators only, suggest-a-new term functionality for all users **[____]**.
* section *explore the network* **[done]** → [go to the repository][11], with a list of all organizations and projects **[done]**, filters for taxonomy **[done]**, and search funcionality **[____]**.
* section *map* **[____]**, with all the organizations and projects located on a map.

* content type *relation* **[done]** → [go to the repository][12], as a group content, RDF-mapped **[done]**. Every organization can describe it's collaborative relations with other organizations and with other projects.
* section *see the graph* **[____]**, displaying organizations and projects as nodes and relations as ties, following the graph visualization theory.

* content type *article* **[____]**, as a group content, RDF-mapped **[____]**. Every organization can post news, articles and press review articles.
* section *live the network* **[____]**, with streaming and search and filter funcionalities for all the articles nodes of all the groups.
* section *selected outsource information* **[____]**, with RSS feeds importing **[____]** and filtering **[____]** from sources selected by the organizations.

* content type *event* **[____]**, as a group content, RDF-mapped **[____]**. Every organization can have its own calendar of events **[____]**, and can see the global calendar **[____]** in order to allow collective planning.
* section *calendar* **[____]**, with filter and search functionality for all events of all organizations.

* discussion *forum* **[____]**.

* content type *tool* **[____]**, edit by administrators only, suggest-a-new tool functionality for all users **[____]**. Tools examples: microcredit from local association, fund rising tool from local etical bank, ecc...
* section tools **[____]**, with useful tools which should spread among all organizations.

* content type *book* **[____]**, edit by administrators only, suggest-a-new tool functionality for all users **[____]**.
* section books **[____]**, with books suggested from the civil society organizations for the government of the commons.

* section *SPARQL endpoint* **[____]**, to allow open access of our data in the spirit of linked-open-data.

* project *makefile* **[done]**, → [go to the repository][5]. To build the website from.
* project *profile*  **[____]**. To store soft configuration in, i.e. taxonomy terms.

this README todo
----------------
* Add a section for the rationale of this project

[1]: http://nuvole.org/blog/code-driven-development
[2]: http://nuvole.org/blog/2012/feb/07/hard-and-soft-configuration-drupal-distributions
[3]: http://nuvole.org/blog/2010/aug/24/features-based-development-workflow
[4]: https://drupal.org/project/openatrium
[5]: https://github.com/miromarchi/rbv_drupal_make
[6]: https://drupal.org/
[7]: https://drupal.org/project/panopoly
[8]: https://drupal.org/project/og
[9]: https://github.com/miromarchi/rbv_org
[10]: https://github.com/miromarchi/rbv_project
[11]: https://github.com/miromarchi/rbv_view_explore
[12]: https://github.com/miromarchi/rbv_rel
