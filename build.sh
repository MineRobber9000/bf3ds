#!/bin/bash
VERSION="2"
rm BF3DS.*
rm -rf dist
make
echo $VERSION > version
mkdir dist
mv BF3DS.3dsx dist
mv BF3DS.smdh dist
mv version dist
