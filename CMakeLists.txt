cmake_minimum_required(VERSION 3.7)
project(Shapes)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Point.cpp Point.h Rectangle.cpp Rectangle.h Shape.cpp Shape.h Square.cpp Square.h Cuboid.cpp Cuboid.h)
add_executable(Shapes ${SOURCE_FILES})