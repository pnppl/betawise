BetaWise
========
Tools to create applets for the AlphaSmart NEO / NEO2.

**IMPORTANT**: Back up all documents first! Use of the debug tools applet
allows modifying memory, performing I/O, and calling arbitrary routines. A
system reset may be required after certain operations. A bricked unit could
also result from indiscriminate use. Proceed at your own risk!

Compiling
---------
Any `m68k-elf` gcc cross compiler should work. On Windows, I have successfully
used [MinGW GCC for M68K](https://sourceforge.net/projects/mingw-gcc-68k-elf/).

Installing
----------
Using [Neo Manager](https://support.renaissance.com/techkb/techkb/13002475e.asp):
* File → Add to Applet List... → select DebugTool.OS3KApp
* SmartApplets tab → select Debugging Tool → Add
* Send List tab → Send

Usage
-----
**B**, **L**, and **W** get and set bytes, words, and longs respectively (leave off second argument to get/peek)
**S** works the same but is for strings; start/end quotes are added automatically
**R** displays command registers (accepts no arguments)
**C** executes a system call

Type any of the above with no arguments for a syntax example.

Both **ctrl+C** and **escape** interrupt.

Work in Progress
----------------
Much research and work is still needed:
* Improve stdio compatibility
* Make betawise static library for easier linking
* Investigate different statuses from `ProcessMessage`
* Find and document timer functions and messages
* Find and document graphic drawing routines
* Find and document non-message keyboard functions
* Eliminate need to put global data into a structure

Contributions welcome!
