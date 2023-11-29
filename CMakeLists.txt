cmake_minimum_required(VERSION 3.22) #CMake version check
project(somethingtodo)

set(CMAKE_CPP_STANDARD 11)

find_package(SDL2 REQUIRED)
include_directories(include/${SDL2_INCLUDE_DIRS})

file(GLOB SOURCES "src/*.cpp")
add_executable(somethingtodo ${SOURCES})
target_link_libraries(somethingtodo ${SDL2_LIBRARIES})
