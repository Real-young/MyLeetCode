cmake_minimum_required(VERSION 3.8)
project(LearningC__)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp sortTestHelper.h insertionSort.h)
add_executable(LearningC__ ${SOURCE_FILES})