cmake_minimum_required(VERSION 3.10)

project(MyProject VERSION 1.0)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_subdirectory(Dealership)
add_subdirectory(Car)
add_subdirectory(Mutex)

add_executable(MyProject main.cpp)

target_link_libraries(MyProject PUBLIC Dealership)
target_link_libraries(MyProject PUBLIC Car)
target_link_libraries(MyProject PUBLIC Mutex)

target_include_directories(MyProject PUBLIC 
                            "${PROJECT_SOURCE_DIR}"
                            "${PROJECT_SOURCE_DIR}/Dealership"
                            "${PROJECT_SOURCE_DIR}/Car"
                            "${PROJECT_SOURCE_DIR}/Mutex"
                            )

