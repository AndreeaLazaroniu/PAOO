cmake_minimum_required(VERSION 3.10)

project(S4 VERSION 1.0)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_subdirectory(lib)
add_executable(main.exe main.cxx)
target_link_libraries(main.exe PUBLIC lib)
target_include_directories(main.exe PUBLIC 
                            "${PROJECT_BINARY_DIR}"
                            "${PROJECT_SOUCE_DIR}/lib"
                        )           