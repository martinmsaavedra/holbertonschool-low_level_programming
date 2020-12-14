#!/bin/bash
wget -P /tmp/ https://raw.github.com/martinmsaavedra/holbertonschool-low_level_programming/master/0x18-dynamic_libraries/librich.so
export LD_PRELOAD=/tmp/librich.so