MWWorld
=======

Contains data about the in-game world. The biggest part of this namespace is
the implementation of ``World`` inside worldimp.hpp; this class manages the
game world e.g. weather, water, items, NPCs, the player, time, and also
contains implementations of game logic where interaction with the world is
needed; such as activating objects, casting spells, checking line of sight or
checking if the given object is under water.

See also
--------
* :doc:`action`
* :doc:`world`
* :doc:`projectilemanager`
