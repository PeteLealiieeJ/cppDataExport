cmake_minimum_required(VERSION 3.0.2)
project( CppDataExport VERSION "1.0.0")
add_definitions(-std=c++17)

include_directories(include)
add_subdirectory(src)

add_subdirectory(examples)