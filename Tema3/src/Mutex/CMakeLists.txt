add_library(Mutex STATIC Mutex.cpp)

target_include_directories(Mutex PUBLIC "${PROJECT_SOURCE_DIR}")
target_include_directories(Mutex PUBLIC "${PROJECT_SOURCE_DIR}/Dealership")
target_include_directories(Mutex PUBLIC "${PROJECT_SOURCE_DIR}/Car")
