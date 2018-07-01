cmake_minimum_required(VERSION 3.10)
project(BasicSort)

set(CMAKE_CXX_STANDARD 11)

include_directories(.)

add_executable(BasicSort
        BubbleSort.h
        InsertionSort.h
        main.cpp
        SelectionSort.h
        ShellSort.h
        SortTestHelper.h
        Student.h)
