#!/bin/bash
TARGET="bf3ds"
if [-x build]; then
    rm build/*
else
    mkdir build
fi
cmake -DCMAKE_TOOLCHAIN_FILE=DevkitArm3DS.cmake
make
rm $TARGET
mv $TARGET.* build
