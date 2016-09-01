OpenMW
======

The source code for the game itself. main.cpp contains the program's entry
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

  mwclass
  mwdialogue
  mwgui
  mwinput
  mwmechanics
  mwphysics
  mwrender
  mwscript
  mwsound
  mwstate
  mwworld

.. .. autodoxygenfile:: engine.hpp
..   :project: openmw

Indices and tables
==================

* :ref:`genindex`
* :ref:`search`
