MWClass
=======

Contains implementations of ``MWWorld::Class``. Each class represents a type of
in-game object e.g. book, lockpick, or door.

When the ``OMW::Engine`` instance is created, the constructor calls
``MWClass::registerClasses()``, which in turn calls each classes'
``registerSelf()`` function; this function creates a new instance (which is the
only instance) of the class and adds it to the static member variable
``Class::sClasses``. When initialization is done, ``Class::sClasses`` contains
one instance of each class in the mwclass directory, and they can only be
accessed through the static function ``Class::get(const std::string)``,
effectively making the classes static.

The "static" instance of the class is used to retrieve general data about the
object type, e.g. armor rating, tool tip info, or the inventory icon. No dynamic
data is contained in the instance. When the object is to be used in-game, a
``LiveCellRefBase`` is instantiated, and any per-instance data is stored inside
either the ``LiveCellRefBase::mRef``, or the ``LiveCellRefBase::mData``
member variable.

See also
--------
:doc:`ptr`
