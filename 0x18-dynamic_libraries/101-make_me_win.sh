#!/bin/bash
wget -O ../libinject.so https://github.com/martinmsaavedra/holbertonschool-low_level_programming/raw/master/0x18-dynamic_libraries/librich.so
export LD_PRELOAD=../librich.so ./gm