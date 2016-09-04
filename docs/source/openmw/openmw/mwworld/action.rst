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
Each action inherits from ``Action`` and is contained inside its own .hpp/.cpp
pair in the ``mwworld`` folder

* Opening the alchemy window ``actionalchemy``
* Applying effects to an actor ``actionapply``
* Opening/closing a door ``actiondoor``
* Eating objects (not drinking potions) ``actioneat``
* Equipping items ``actionequip``
* Opening containers (or dead NPCs) ``actionopen``
* Reading a book ``actionread``
* Opening the repair window ``actionrepair``
* Opening the soul gem dialog ``actionsoulgem``
* Picking up items from the game world ``actiontake``
* Talking to NPCs ``actiontalk``
* Teleporting actors ``actionteleport``
* Activating trapped objects ``actiontrap``
