cmake_minimum_required(VERSION 3.31)

project(SmartHouseEmulator C)
set(CMAKE_C_STANDARD 11)

set(CORE_DIR "${CMAKE_SOURCE_DIR}/core")
set(INCLUDE_DIR "${CMAKE_SOURCE_DIR}/include")

set(CORE
    ${CORE_DIR}/SmartHouseCore.c
)
set(INCLUDE
    ${INCLUDE_DIR}/SmartHouseCore.h

)
add_library(core STATIC
    ${CORE}
    ${INCLUDE}
)
add_executable(SmartHouseEmulator main.c)


target_link_libraries(SmartHouseEmulator PRIVATE core)

set_target_properties(SmartHouseEmulator PROPERTIES
        RUNTIME_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}")


target_include_directories(core PUBLIC ${INCLUDE_DIR})
target_include_directories(SmartHouseEmulator PRIVATE ${INCLUDE_DIR})