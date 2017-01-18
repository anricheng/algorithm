cmake_minimum_required(VERSION 3.5)
project(algorithm_lesson)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp sortHelper.h selectSort.h Student.h)
add_executable(algorithm_lesson ${SOURCE_FILES})