set(This ProcessAppTests)

include_directories(${ProcessAppProject_INCLUDE_DIRS})

set(Sources
    Measurement/MeasurementServiceTests.cpp
)

add_executable(${This} ${Sources})

target_link_libraries(${This} gtest_main ProcessAppLib)

