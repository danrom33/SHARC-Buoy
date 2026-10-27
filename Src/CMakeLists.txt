cmake_minimum_required(VERSION 3.10)
project(STM32)

# Build with -DTEST_REPLAY=ON to replay a recorded IMU dataset from SD through the
# event detector instead of running the normal application.
option(TEST_REPLAY "Build IMU dataset replay test harness" OFF)

# Collect all .c source files in Src
file(GLOB SRC_FILES "${CMAKE_SOURCE_DIR}/Src/*.c")

if(TEST_REPLAY)
    # Test sources live outside Src/ so they are never compiled into a normal build
    file(GLOB TEST_FILES "${CMAKE_SOURCE_DIR}/Test/*.c")
endif()

# Add the executable using SRC files
add_executable(MAIN
    ${SRC_FILES}
    ${TEST_FILES}
    ${STARTUP_SCRIPT}
)

# Include headers
target_include_directories(MAIN
    PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}/Inc"
)

if(TEST_REPLAY)
    target_include_directories(MAIN PRIVATE "${CMAKE_SOURCE_DIR}/Test")
    target_compile_definitions(MAIN PRIVATE TEST_REPLAY)
endif()

target_link_libraries(MAIN PUBLIC DVP_CAM)
