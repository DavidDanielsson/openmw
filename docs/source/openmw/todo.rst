TODO
====

This document is my personal TODO-list. Here I will list things that I will get
around to doing, as well as questions and notes

==============
TODOs
==============

Add doxygen brief to all files about classes

Difference between LiveCellRefBase and LiveCellRef, why is LiveCellRef used
instead of LiveCellRefBase in some places?

Find out what window->renderWorldMap does

components/esm/index.rst
    "flags" in header seems to be unused; is it?
    Save es_format.html or something?

mwworld
    world.rst
        Investigate ESMStore::setUp

        Why is movePlayerRecord called? Don't forget to update mwworld/world.rst!

        What is mSwimHeightScale?

    Finish ProjectileManager by writing about State, MagicBoltState, and
    ProjectileState (see also section?)

    Write about individual actions (and maybe about how to create a custom
    action??)

    Finish writing about PreloadItem in cellpreloader.cpp

    Add see also section to mwworld/cellref, link to esm/cellref

    What is the difference between ESM::CellRef, MWWorld::CellRef, and
    MWWorld::LiveCellRef?

    Finish writing about LiveCellRef

    esmstore.rst
        Why do some lists need special rules?

        Add link to each ESM record inside esmstore.rst
