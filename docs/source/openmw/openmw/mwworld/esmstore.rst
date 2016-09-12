ESMStore
========
Contains a collection of ``Store``. Each of these stores are of a certain type
of class. The ESMStore is used to keep track of all the different type of ESM
records, and can be used to look up NPCs, weapons, races, scripts, sounds, etc.
Each type of record can be found inside the ``components/esm`` folder.

The actual loading from disk is performed when ``ESMStore::load()`` is called,
which it is from ``ESMLoader::load()``

Loading
-------
When ``ESMStore::load()`` is called, all records from the given
``ESM::ESMReader`` are read and inserted into the correct store given the
record's name. Though, before any loading takes place, a check is performed to
make sure that the file to be loaded's parents have all been loaded.

See also
--------
* :doc:`esmloader`
* :doc:`store`

TODO: Why do some lists need special rules?
TODO: Add link to each ESM record class or page listing all of them
