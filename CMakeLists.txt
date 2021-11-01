cmake_minimum_required(VERSION "3.21.3")

project(PalaceLife VERSION 0.0.1)

find_package(SDL2 REQUIRED)
include_directories(${SDL2_INCLUDE_DIRS})

set(CMAKE_CXX_STANDARD 17)
file(GLOB SOURCE_FILES src/*.cpp)

add_executable(PalaceLife ${SOURCE_FILES})
