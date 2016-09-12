EsmLoader
=========
Used to fill an ``ESMStore`` with data from files on the hard drive. When
loading is performed, an ``ESMReader`` is created for each file to be loaded
and inserted into ``mEsm``. The store ``mEsm``, however, is just a single
instance.

Note that both ``mEsm`` and ``mStore`` are references and are initialized
through the constructor, filled with useful data when loading, and then used
later in other classes.

See also
--------
:doc:`../../../components/esm/esmreader`
:doc:`esmstore`
