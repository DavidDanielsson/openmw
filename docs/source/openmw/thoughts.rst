Thoughts and comments
=====================

This document isn't related to the documentation per se, but it contains my
thoughts and comments about the source code as well as explanations for anyone
who is new to C++

Curly brace placement
---------------------
Is correct, but also inconsistent. Sometimes it's placed on the same line as
the statement, sometimes it's placed on the next line. In a lot of places they
aren't needed at all, but that could just be a code style decision

Forward declarations
--------------------
Often you'll find something like (example from apps/openmw/engine.hpp)

.. code-block:: c

   namespace MWWorld
   {
       class World;
   }

At the top of .hpp files. This is known as a forward declaration and can
replace ``#include "mwworld/worldimp.hpp"`` if the type is only used as a
pointer or a reference. So, for example, if the Engine class has a
``MWWorld::World*`` member, the forward declaration means we can avoid the
include directory, which in turn reduces compilation times.

I am a big fan of this forward declarations since compilation times in C++
grow very quickly

Expandability
-------------
Thanks to the MWBase namespace, the code is nicely expandable. The reason why
you would want an abstract class (aka an interface or a purely virtual class)
like this is because it makes the code expandable. It makes it possible for
someone to inherit the class and implement their own logic, and simply replace
the currently used one; if implemented correctly, these could be swapped out at
runtime. This (usually) also means that someone could inherit the
implementation of this class (in this case found in :any:`mechanicsmanager.hpp`
to change some aspect of the class. For instance, override ``commitCrime`` to
add some logic before or after calling ``MechanicsManager::commitCrime``.

Once again this is a fantastic design decision for a game engine, especially an
open source one, to easy expansion and modding
