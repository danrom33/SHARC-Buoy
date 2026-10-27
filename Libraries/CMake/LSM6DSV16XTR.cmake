add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/LSM6DSV16XTR)

# Collect all .c source files in Core/Sr
file(GLOB SRC_FILES "${CMAKE_CURRENT_SOURCE_DIR}/LSM6DSV16XTR/*.c")

# Add the executable using SRC files
add_library(LSM6DSV16X
    ${SRC_FILES}
)

# Include headers
target_include_directories(LSM6DSV16X
    PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/LSM6DSV16XTR"
)

target_link_libraries(LSM6DSV16X PUBLIC LSM6DSV16X-PID)