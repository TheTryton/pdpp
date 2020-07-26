cmake_minimum_required(VERSION 3.8)
project(pdpp)

set_property(GLOBAL PROPERTY USE_FOLDERS ON)

add_library(pdpp INTERFACE)

target_include_directories(pdpp INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}/include)