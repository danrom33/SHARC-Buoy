# Collect all .c source files in Core/Sr
file(GLOB SRC_FILES "${CMAKE_CURRENT_SOURCE_DIR}/Inertial-Event-Detection/*.c")

# Add the executable using SRC files
add_library(Inertial-Event-Detection 
    ${SRC_FILES}
)

# Include headers
target_include_directories(Inertial-Event-Detection 
    PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/Inertial-Event-Detection"
)