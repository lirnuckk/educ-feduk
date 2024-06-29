cmake_minimum_required(VERSION 3.5)
set_target_properties(check_value PROPERTIES
        CXX_STANDARD 17
        CXX_STANDARD_REQUIRED ON)

project(03.hw)

add_executable(check_value check_value.cpp high_sc high_sc.cpp)
