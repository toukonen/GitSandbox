cmake_minimum_required(VERSION 3.19)

set(CMAKE_C_STANDARS 09)
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_POSITION_INDEPENT_CODE ON)

project (GitSandboxProject)

add_subdirectory(Gtest)
add_subdirectory(HardwareTools)
add_subdirectory(ImageProcessing)
add_subdirectory(ProcessApp)