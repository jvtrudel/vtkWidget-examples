cmake_minimum_required(VERSION 3.5)

project(pointWidget)

find_package(VTK "7.0" REQUIRED)
include(${VTK_USE_FILE})

add_executable(pointWidget example1.cpp)
target_link_libraries(pointWidget ${VTK_LIBRARIES})

