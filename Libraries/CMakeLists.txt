include(${CMAKE_CURRENT_SOURCE_DIR}/CMake/stm32cubel4.cmake)
include(${CMAKE_CURRENT_SOURCE_DIR}/CMake/fatfs.cmake)
include(${CMAKE_CURRENT_SOURCE_DIR}/CMake/sd.cmake)
include(${CMAKE_CURRENT_SOURCE_DIR}/CMake/spi_cam.cmake)

target_link_libraries(STM32CUBEL4_FATFS PUBLIC STM32CUBEL4_HAL)
target_link_libraries(SD PUBLIC STM32CUBEL4_FATFS)
target_link_libraries(SPI_CAM PUBLIC SD)