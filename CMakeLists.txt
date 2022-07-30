cmake_minimum_required(VERSION 3.20)
project(Module3_Git_Examples C)

set(CMAKE_C_STANDARD 99)

AUX_SOURCE_DIRECTORY(${CMAKE_CURRENT_SOURCE_DIR}/src SOURCES)

#! Project source compilation
add_executable(${PROJECT_NAME} ${SOURCES})
