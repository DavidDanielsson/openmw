GameContentLoader
=================
A class used to load content from content files, e.g. esm, esp, omwaddon. All
this class does is call ``ContentLoader::load()`` for each ``ContentLoader*``
in ``mLoaders``.

Loaders are added through ``GameContentLoader::addLoader()``

See also
--------
:doc:`esmloader`
