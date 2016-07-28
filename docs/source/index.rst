
Welcome to OpenMW's documentation!
=====================================

Note for any documentation writers
----------------------------------

Leave a note in :doc:`unfinished` if you start a section and then commit your
work while it's unfinished, as to not forget that it's unfinished, and also
opening up the possibility for someone else to finish it.

Folder layout
----------

OpenMW is divided into many foldlers. For developers, the most important
folders are: apps, docs, and files.


Apps
----
Each subfolder inside the apps folder contains a separate application (an
executable file). You can click the name of each application below to go to
that application's documentation page.

* :doc:`bsatool`
* :doc:`esmtool`
* :doc:`essimporter`
* :doc:`mwiniimporter`
* :doc:`launcher`
* :doc:`wizard`
* :doc:`opencs`
* :doc:`openmw`

Components
----------
Each subfolder contains a different component. A component is a self-sufficient
piece (or pieces) of code that may be used from multiple locations, e.g. OpenMW
and OpenCS.

Example components are ``to_utf8`` which is used to convert text from some
encoding into utf8, and ``files`` which keeps track of directory paths in a
OS-agnostic manner

* :doc:`bsa`
* :doc:`compiler`
* :doc:`config`
* :doc:`contentselector`
* :doc:`esm`
* :doc:`esmterrain`
* :doc:`fallback`
* :doc:`files`
* :doc:`fontloader`
* :doc:`interpreter`
* :doc:`loadinglisterner`
* :doc:`misc`
* :doc:`myguiplatform`
* :doc:`nif`
* :doc:`nifbullet`
* :doc:`nifosg`
* :doc:`process`
* :doc:`resource`
* :doc:`sceneutil`
* :doc:`sdlutil`
* :doc:`settings`
* :doc:`shader`
* :doc:`terrain`
* :doc:`to_utf8`
* :doc:`translation`
* :doc:`vfs`
* :doc:`widgets`

Indices and tables
==================

* :ref:`genindex`
* :ref:`search`

