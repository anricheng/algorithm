cmake_minimum_required(VERSION 3.5)
project(cppLearn)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp zhou.h)
add_executable(cppLearn ${SOURCE_FILES} zhou.h)