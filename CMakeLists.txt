cmake_minimum_required(VERSION 3.4)
project(print)
add_library(print STATIC sources/print.cpp)
target_include_directories(print PUBLIC include)
