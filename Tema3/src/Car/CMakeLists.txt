add_library(Car STATIC Car.cpp)

target_include_directories(Car PUBLIC "${PROJECT_SOURCE_DIR}")
target_include_directories(Car PUBLIC "${PROJECT_SOURCE_DIR}/Dealership")
target_include_directories(Car PUBLIC "${PROJECT_SOURCE_DIR}/Mutex")
