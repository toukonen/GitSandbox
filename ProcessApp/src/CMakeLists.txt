set(This ProcessApp)

set(Sources
    main.cpp
    Measurement/MeasurementService.cpp
    Measurement/MeasurementCycle.cpp
)

include_directories(${HardwareToolsProject_INCLUDE_DIRS})
include_directories(${ImageProcessingProject_INCLUDE_DIRS})

add_library(${This}Lib ${Sources}) # build library for unit test
add_executable(${This} ${Sources})

target_include_directories (${This} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})