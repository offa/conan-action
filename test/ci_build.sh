#!/bin/bash

set -ex

pipx install ninja

mkdir "test/build"
cd "test/build"

conan install \
    -of . \
    --build=missing \
    -s compiler.cppstd=20 \
    -s build_type=Release \
    -c "tools.cmake.cmaketoolchain:generator=Ninja" \
    ..

cmake --preset conan-release ..
cmake --build . -j

./gha-test
