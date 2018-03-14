#!/bin/bash

set -e  # exit immediately on error
set -x  # display all commands

git submodule update --init --recursive

(cd third_party && bash ./insatll_dependency.sh)

./autoinstall.sh
make 
make install

cd plugin

make 
make install