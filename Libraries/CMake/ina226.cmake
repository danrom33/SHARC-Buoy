# Collect all .c source files in Core/Sr
file(GLOB SRC_FILES "${CMAKE_CURRENT_SOURCE_DIR}/INA226/*.c")

# Add the executable using SRC files
add_library(INA226 
    ${SRC_FILES}
)

# Include headers
target_include_directories(INA226 
    PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/INA226"
)