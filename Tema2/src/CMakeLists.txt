cmake_minimum_required(VERSION 3.10)

project(MyProject VERSION 1.0)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_subdirectory(lib)
add_executable(MyProject main.cpp)
target_link_libraries(MyProject PUBLIC lib)
target_include_directories(MyProject PUBLIC 
                            "${PROJECT_BINARY_DIR}"
                            "${PROJECT_SOUCE_DIR}/lib"
                        )           