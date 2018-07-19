# Compiller Flags

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED true)

if(${CMAKE_MAJOR_VERSION}.${CMAKE_MINOR_VERSION} LESS 3.1)
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
endif()

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -pedantic -Wextra -fPIC")
set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -Wl,--no-undefined")
set(CMAKE_SHARED_LINKER_FLAGS "${CMAKE_SHARED_LINKER_FLAGS} -Wl,--no-undefined")

# http tools

cmake_minimum_required(VERSION 2.8.12)

project(http_tools)

include_directories(
  include
  include/http_tools
  src
)

set(headers
  include/http_tools/http_codes.h
  include/http_tools/http_time.h
)

set(src
  src/http_codes.cpp
  src/http_time.cpp
)

set(target http_tools)
add_library(${target} SHARED ${src} ${headers})

target_include_directories(${target} PUBLIC include)
install(TARGETS ${target} LIBRARY DESTINATION lib)

#add_subdirectory(examples)
#add_subdirectory(tests)
