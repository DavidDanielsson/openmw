Action
======

The ``Action`` class, defined in action.hpp, is the base class for actions. An
action is when an actor (doesn't have to be the player) does something which
requires interaction with the in-game world or the GUI, e.g. picking up an
object, opening a door, or reading a book. Each of these actions require an
object to act on (the item to pick up, the door to open, or the book to read),
and an actor who performs the action. When instantiating an action, the source
object is supplied to the constructor (item, door, book), and when
``Action::execute(const Ptr&)`` is called, the actor who perfomed the action is
passed to the function.

Actions in OpenMW
-----------------
* :doc:`Opening the alchemy window <actionalchemy>`
* :doc:`Applying effects to an actor <actionapply>`
* :doc:`Opening/closing a door <actiondoor>`
* :doc:`Eating objects (not drinking potions) <actioneat>`
* :doc:`Equipping items <actionequip>`
* :doc:`Opening containers (or dead NPCs) <actionopen>`
* :doc:`Reading a book <actionread>`
* :doc:`Opening the repair window <actionrepair>`
* :doc:`Opening the soul gem dialog <actionsoulgem>`
* :doc:`Picking up items from the game world <actiontake>`
* :doc:`Talking to NPCs <actiontalk>`
* :doc:`Teleporting actors <actionteleport>`
* :doc:`Activating trapped objects  <actiontrap>`
