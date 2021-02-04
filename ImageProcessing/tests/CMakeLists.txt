set(This ImageProcessingTests)

include_directories(${ImageProcessingProject_INCLUDE_DIRS})

set(Sources
    Image/ImageMockTests.cpp
    Filters/PixelFilterTests.cpp
)

add_executable(${This} ${Sources})

target_link_libraries(${This} gtest_main ImageProcessing)

