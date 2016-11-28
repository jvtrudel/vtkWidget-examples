cmake_minimum_required(VERSION 3.5)

project(vtkWidgets)

find_package(VTK "7.0" REQUIRED)
include(${VTK_USE_FILE})


add_executable(pointWidget pointwidget/example1.cpp)
target_link_libraries(pointWidget ${VTK_LIBRARIES})

add_executable(lineWidget lineWidget/example1.cpp)
target_link_libraries(lineWidget ${VTK_LIBRARIES})

