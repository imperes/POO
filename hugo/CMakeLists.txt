cmake_minimum_required(VERSION 3.5.0)

project(Hello)

#include_directories(include)

file(GLOB_RECURSE SOURCES "*.cpp")
add_executable(${PROJECT_NAME} ${SOURCES})

