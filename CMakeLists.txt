cmake_minimum_required(VERSION "3.21.3")

project(Vitae VERSION 0.0.1)

find_package(SDL2 REQUIRED)
include_directories(${SDL2_INCLUDE_DIRS})

find_package(Curses REQUIRED)
include_directories(${CURSES_INCLUDE_DIR})


set(CMAKE_CXX_STANDARD 17)
file(GLOB SOURCE_FILES src/*.cpp)

add_executable(Vitae ${SOURCE_FILES})
target_link_libraries(Vitae ${CURSES_LIBRARIES})
