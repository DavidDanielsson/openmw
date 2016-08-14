main
====

The main class sets up the crash catched if ``USE_CRASH_CATCHER`` is defined
(which it is when building for *nix), also cout and cerr are redirected to the log
file.

After the crash handling is set up, the :doc:`Engine` instance used to run the
game is created. If ``parseOptions`` returns true the game is ran by calling
:any:`Engine::go`

============
parseOptions
============
Parses the command-line options (if any). Either returns false (thus not
launching the game) and responds to the given command, or returns true which in
turn leads to :any:`Engine::go` being called, and the game launching.

This function also configures the data directories as well as content files for the engine and sets
options from the config 

========
See also
========
crashcatcher.cpp for more information about the crash catcher. 
