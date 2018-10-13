cmake_minimum_required (VERSION 2.8)
project(winkForVREP C)
find_package (Threads)

file(GLOB_RECURSE SOURCEFILES src/*.c)

add_executable(${PROJECT_NAME} ${SOURCEFILES})
target_include_directories(${PROJECT_NAME} PRIVATE include)

add_definitions (-DNON_MATLAB_PARSING)
add_definitions (-DMAX_EXT_API_CONNECTIONS=255)
add_definitions (-DDO_NOT_USE_SHARED_MEMORY)

target_link_libraries (${PROJECT_NAME} ${CMAKE_THREAD_LIBS_INIT})
