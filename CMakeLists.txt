cmake_minimum_required(VERSION 3.18.0)
project(odd)

add_subdirectory(even)

set(SOURCE_FILES test.c)


add_executable(evenTest ${SOURCE_FILES})
target_link_libraries(evenTest PUBLIC even)
