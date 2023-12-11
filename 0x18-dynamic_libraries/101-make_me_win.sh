#!/bin/bash
wget -P /tmp https://github.com/A-SeRaG/alx-low_level_programming/raw/master/0x18-dynamic_libraries/libgiga.so
export LD_PRELLOAD=/tmp/libgiga.so
