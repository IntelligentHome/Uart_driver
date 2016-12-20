
set(CMAKE_SYSTEM_NAME Generic)
cmake_minimum_required(VERSION 2.8)

project(Uart_driver)

include (../External/PlatformDependency.cmake)

set (SOURCES
    Uart_driver.cpp
    )

if (${_TARGET_PLATFORM} STREQUAL "AVR")

    set (SOURCES
        ${SOURCES}
        UartAvr.cpp
        )

elseif (${_TARGET_PLATFORM} STREQUAL "RASPBERRYPI")

endif()

include_directories(
    ../External/include/
    )

add_library(${PROJECT_NAME} STATIC ${SOURCES})
