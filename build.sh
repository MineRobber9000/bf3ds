#!/bin/bash
rm BF3DS.*
rm -rf dist
make
mkdir dist
mv BF3DS.3dsx dist
mv BF3DS.smdh dist
