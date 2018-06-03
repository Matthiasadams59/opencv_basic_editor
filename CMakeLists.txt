cmake_minimum_required(VERSION 3.10)
project(opencv_basic_editor)

set(CMAKE_CXX_STANDARD 11)

find_package( OpenCV REQUIRED )
include_directories(${OpenCV_INCLUDE_DIRS})

add_executable(opencv_basic_editor face_recognition.cpp)
target_link_libraries( opencv_basic_editor ${OpenCV_LIBS})