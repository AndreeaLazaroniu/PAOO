cmake_minimum_required(VERSION 3.10)
project(lab VERSION 1.0)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)
add_subdirectory(src)
add_executable(exe main.cxx)
target_link_libraries(exe PUBLIC lib_class)
target_include_directories(exe PUBLIC 
                            "${PROJECT_BINARY_DIR}"
                            "${PROJECT_SOUCE_DIR}/lib"
                        )           