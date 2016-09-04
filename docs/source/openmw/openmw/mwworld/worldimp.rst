World
=====

The game world and its visual representation

Constructor
-----------

Creates the subsystems needed to create the in-game world: :doc:`the physics
manager <../mwphysics/physicssystem>`, :doc:`the rendering manager
<../mwrender/renderingmanager>`, :doc:`the projectile manager
<projectilemanager>`, :doc:`the weather manager <weathermanager>`, and
:doc:`and the world scene <scene>`. It also loads content from the content
files (e.g. Morrowind.esm, Tribunal.esm, and Bloodmoon.esm). The data is loaded
by creating a :doc:`GameContentLoader <gamecontentloader>` and calling
``loadContentFiles(...)``. It also makes sure all the needed variables are
declared (such as game hour, difficulty, or days passed)

After all content has been loaded from the esm files, the :doc:`ESMStore` can
be initialized by calling ``ESMStore::setUp()``, and the player record can be
inserted ??? (check TODO file)

See also
--------
* :doc:`Physicsmanager <../mwphysics/physicssystem>`
* :doc:`Rendering manager <../mwrender/renderingmanager>`
* :doc:`Projectile manager <projectilemanager>`
* :doc:`Weather manager <weathermanager>`
* :doc:`World scene <scene>`
* :doc:`Game content loader <gamecontentloader>`
