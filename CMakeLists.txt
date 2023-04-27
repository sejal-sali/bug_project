cmake_minimum_required(VERSION 3.24)
project(cpp_bug_project)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(cpp_bug_project
        Board.cpp
        Board.h
        Bug.cpp
        Bug.h
        CA2_Bug_Project.cpp
        Crawler.cpp
        Crawler.h
        Hopper.cpp
        Hopper.h)
