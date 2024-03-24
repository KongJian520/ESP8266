cmake_minimum_required(VERSION 3.10)
project(MyProject)

set(CMAKE_CXX_STANDARD 14)

add_executable(MyProject ./src/*)

add_library(MyLibrary STATIC IMPORTED)
set_target_properties(MyLibrary PROPERTIES
        IMPORTED_LOCATION C:/Users/12933/.platformio/packages/framework-arduinoespressif8266/libraries/libMyLibrary.a
)

# 链接库
target_link_libraries(MyProject MyLibrary)

include_directories(${CMAKE_SOURCE_DIR})
