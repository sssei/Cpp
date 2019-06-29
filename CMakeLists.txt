# set cmake version
cmake_minimum_required(VERSION 3.0)

# set project name
project(Cpp)

# set compiler
include(CheckCXXCompilerFlag)
CHECK_CXX_COMPILER_FLAG("-std=gnu++14" COMPILER_SUPPORTS_CXX14)
if(COMPILER_SUPPORTS_CXX14)
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=gnu++14")
else()
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=gnu++11")
endif()
message("Compiler:\n\t${CMAKE_CXX_COMPILER}")

# add directory which contains CMakeLists.txt
add_subdirectory(day1)
add_subdirectory(day2)
