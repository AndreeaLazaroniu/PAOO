add_library(Dealership STATIC Dealership.cpp)

target_include_directories(Dealership PUBLIC "${PROJECT_SOURCE_DIR}")
target_include_directories(Dealership PUBLIC "${PROJECT_SOURCE_DIR}/Car")
target_include_directories(Dealership PUBLIC "${PROJECT_SOURCE_DIR}/Mutex")