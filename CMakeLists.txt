cmake_minimum_required(VERSION 3.6)
project(cwru_catheter_bayes_tracking)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        include/cwru_catheter_bayes_tracking.hpp
        examples/main.cpp)

add_executable(cwru_catheter_bayes_tracking ${SOURCE_FILES} src/cwrt.cpp)