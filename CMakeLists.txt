cmake_minimum_required(VERSION 3.4)
project(Chess)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Staunton.cpp Staunton.h commons.h Board.cpp Board.h)
add_executable(Chess ${SOURCE_FILES})