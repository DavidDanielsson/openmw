Cell Preloader
==============

As the player moves around in the world, surrounding cells and fast travel
locations are continuously preloaded (if the setting is enabled) to shorted
loading times when the player enters it. When a preload request is made by
calling ``CellPreloader::preload`` The ``CellPreloader`` updates the given
cell's timestamp if it has already been loaded, or it creates a new
``PreloadItem`` and adds it to the work queue.

A worker thread running in the background then goes through all the items in
the work queue and loads each cell one at a time, removing them from the queue
before performing the actual loading.

All numeric member variables are set from the config file. The variables are
found under the Cells section.

Cache Management
----------------
When a preload request is made the current timestamp is saved in the
corresponding ``PreloadEntry::mTimeStamp`` entry, this timestamp is then used
to decide whether or not to remove the entry when needed.

An entry is removed in two scenarios:

1. If the size of the cache exceeds ``mMaxCacheSize`` and another preload
   request is made, the oldest cell is found and removed as long as it has
   existed for more than a certain number of seconds.   
2. No cell preload request has been made for a given cell for ``mExpiryDelay``
   seconds and ``CellPreloader::updateCache`` is called (which is called every
   frame); but only if the size of the cache exceeds ``mMinCacheSize``

PreloadItem
-----------
TODO

See also
--------
* :doc:`default settings files <../../setings-default>`
