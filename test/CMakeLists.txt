cmake_minimum_required(VERSION 3.12.0)

project(gha-test VERSION 0.5.8)
message(STATUS "~~~ ${PROJECT_NAME} v${PROJECT_VERSION} ~~~")

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

find_package(Catch2 REQUIRED)

add_compile_options(-Wall
    -Wextra
    -pedantic
    -pedantic-errors
    -Werror
    -Wshadow
    -Wold-style-cast
    -Wnull-dereference
    -Wnon-virtual-dtor
    -Woverloaded-virtual
    )

add_executable(gha-test gha-test.cpp)
target_link_libraries(gha-test PRIVATE Catch2::Catch2WithMain)
