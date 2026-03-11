#!/bin/bash

set -ex

mkdir "test/build"
cd "test/build"

conan install .. -of . --build=missing
cmake --preset conan-release  ..
make -j

./gha-test
