cmake_minimum_required (VERSION 2.8.11)
project (a-star)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(OpenCV_DIR /usr/local/share/OpenCV)
find_package(OpenCV REQUIRED)

include_directories(source ${OpenCV_INCLUDE_DIRS})
add_library(a-star source/AStar.cpp)

add_executable(main main.cpp)
target_link_libraries(main a-star ${OpenCV_LIBS})
