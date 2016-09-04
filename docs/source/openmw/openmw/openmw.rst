OpenMW
======

The source code for the game itself. ``main.cpp`` contains the program's entry
point, and :doc:`engine` is what takes all of the components and subfolders and
ties them together to create the OpenMW game.

Each subfolder contains a well-defined subsystem, except for the mwbase folder
which contains a colleciton of interfaces (pure virtual/abstract classes). These
interfaces are then implemented in one of the other subdirectories

Subsystems
----------

.. toctree::
   :maxdepth: 2
   :caption: Subsystems

  mwclass/mwclass
  mwdialogue/mwdialogue
  mwgui/mwgui
  mwinput/mwinput
  mwmechanics/mwmechanics
  mwphysics/mwphysics
  mwrender/mwrender
  mwscript/mwscript
  mwsound/mwsound
  mwstate/mwstate
  mwworld/mwworld

See also
========
:doc:`engine`

Indices and tables
==================

* :ref:`genindex`
* :ref:`search`
