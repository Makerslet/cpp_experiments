cmake_minimum_required(VERSION 3.2)

add_executable(custom_tie main.cpp)
target_include_directories(custom_tie PRIVATE ${PROJECT_SOURCE_DIR})