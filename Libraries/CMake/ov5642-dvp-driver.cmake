# Collect all .c source files in Core/Sr
file(GLOB SRC_FILES "${CMAKE_CURRENT_SOURCE_DIR}/ArduCam-OV5642-STM32-Driver/Src/*.c")

# Add the executable using SRC files
add_library(DVP_CAM 
    ${SRC_FILES}
)

# Include headers
target_include_directories(DVP_CAM 
    PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/ArduCam-OV5642-STM32-Driver/Inc"
)

# target_link_libraries(MAIN PUBLIC STM32CUBEL4_HAL)