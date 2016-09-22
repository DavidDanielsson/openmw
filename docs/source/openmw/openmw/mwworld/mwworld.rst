MWWorld
=======
Contains data about the in-game world. The biggest part of this namespace is
the implementation of ``World`` inside ``worldimp.hpp``; this class manages the
game world e.g. weather, water, items, NPCs, the player, time, and also
contains implementations of game logic where interaction with the world is
needed; such as activating objects, casting spells, checking line of sight or
checking if the given object is under water.

Classes
-------
* :doc:`action`
* :doc:`cellpreloader`
* :doc:`cellref`
* :doc:`cellreflist`
* :doc:`cells`
* :doc:`cellstore`
* :doc:`cellvisitors`
* :doc:`class`
* :doc:`containerstore`
* :doc:`contentloader`
* :doc:`customdata`
* :doc:`esmloader`
* :doc:`esmstore`
* :doc:`globals`
* :doc:`inventorystore`
* :doc:`livecellref`
* :doc:`localscripts`
* :doc:`manualref`
* :doc:`player`
* :doc:`projectilemanager`
* :doc:`ptr`
* :doc:`recordcmp`
* :doc:`refdata`
* :doc:`scene`
* :doc:`store`
* :doc:`timestamp`
* :doc:`weather`
* :doc:`worldim`

In-game world representation
----------------------------
The game world is made up of cells, arranged in a two-dimensional grid. Each
cell is 8192 units big and is loaded from storage through the ``ESM::Cell``
class. When loaded it is stored inside a ``CellStore``, which in turn is kept
track of through the ``Cells`` class.

All in-game objects are referenced by using a ``LiveCellRef``. ``Ptr`` is used
to give an absolute pointer to any object, as it contains not only the
``LiveCellRef``, but also the ``CellStore`` where the object resides as well as
the ``ContainerStore`` (if it is inside a container).

Cell lifetime
-------------
All cells are stored on disk inside the game's .esm files. When
``OMW::Engine::prepareEngine`` is called, which in turn creates a new
``MWWorld::World`` instance. When the constructor of ``MWWorld::World`` is
called, the game world is loaded from
