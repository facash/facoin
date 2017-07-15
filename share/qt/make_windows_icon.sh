#!/bin/bash
# create multiresolution windows icon
ICON_DST=../../src/qt/res/icons/facoin.ico

convert ../../src/qt/res/icons/facoin-16.png ../../src/qt/res/icons/facoin-32.png ../../src/qt/res/icons/facoin-48.png ${ICON_DST}
