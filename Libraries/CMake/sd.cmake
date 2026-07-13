# Collect all .c source files in Core/Sr
file(GLOB SRC_FILES "${CMAKE_CURRENT_SOURCE_DIR}/SD-Driver/Src/*.c")

# Add the executable using SRC files
add_library(SD 
    ${SRC_FILES}
)

# Include headers
target_include_directories(SD 
    PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/SD-Driver/Inc"
)