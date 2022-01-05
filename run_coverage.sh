#!/bin/bash 
set -eu

if [[ `id -u` -ne 0 ]]
  then sudo apt-get install gcovr
  else apt-get install gcovr
fi

rm -rf build_coverage && mkdir -p build_coverage && cd build_coverage
cmake ../ -DCMAKE_BUILD_TYPE=Debug -DCMAKE_C_FLAGS=--coverage -DCMAKE_CXX_FLAGS=--coverage
make -j4
ctest

rm -rf coverage && mkdir coverage
gcovr -r ../ -e `pwd` -e ".*/test/.*" -e ".*/third_party/.*"
gcovr -r ../ -e `pwd` -e ".*/test/.*" -e ".*/third_party/.*" --html --html-details -o 'coverage/index.html'
