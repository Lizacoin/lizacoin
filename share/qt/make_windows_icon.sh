#!/bin/bash
# create multiresolution windows icon
ICON_DST=../../src/qt/res/icons/lizacoin.ico

convert ../../src/qt/res/icons/lizacoin-16.png ../../src/qt/res/icons/lizacoin-32.png ../../src/qt/res/icons/lizacoin-48.png ${ICON_DST}
