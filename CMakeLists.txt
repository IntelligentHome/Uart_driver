
set(CMAKE_SYSTEM_NAME Generic)
cmake_minimum_required(VERSION 2.8)

project(Uart_driver)

include (../External/PlatformDependency.cmake)

set(SOURCES
    Uart_driver.cpp
    UartAvr.cpp
    )

include_directories(
    ../External/include/
    )

add_library(${PROJECT_NAME} STATIC ${SOURCES})
