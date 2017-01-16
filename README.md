# bf3ds [![Build Status](https://travis-ci.org/MineRobber9000/bf3ds.svg?branch=master)](https://travis-ci.org/MineRobber9000/bf3ds)
Brainfuck interpreter for the 3ds.

Goals:
 - to have a brainfuck keyboard
 - to have file import capabilities
 - to actually interpret the brainfuck code

## Dependencies
Requires [devkitARM](http://devkitpro.org/wiki/Getting_Started/devkitARM).

## Building
Run `./build.sh` to build the 3dsx, SMDH, and `version` file. Copy everything from the folder `dist` into a folder on your SD card.

If you want to zip your code, use `./zipdist.sh` after running `./build.sh`.

