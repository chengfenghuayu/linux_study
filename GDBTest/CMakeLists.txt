cmake_minimum_required (VERSION 2.8)

SET(CMAKE_BUILD_TYPE "Debug")  
SET(CMAKE_CXX_FLAGS_DEBUG "$ENV{CXXFLAGS} -O0 -Wall -g2 -ggdb")  
SET(CMAKE_CXX_FLAGS_RELEASE "$ENV{CXXFLAGS} -O3 -Wall")  

project(GDBtest)

aux_source_directory(. DIR_SRCS)


add_executable(factor ${DIR_SRCS})


