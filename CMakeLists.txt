cmake_minimum_required(VERSION 3.2)

project(ris_c)

include_directories(include)

file(GLOB SOURCES "src/*.c")

add_library(ris_c ${SOURCES})

file (GLOB TESTS "tests/*.c")

add_executable(tests ${TESTS})
target_link_libraries(tests ris_c)
