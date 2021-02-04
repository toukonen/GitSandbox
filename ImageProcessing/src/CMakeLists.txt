set(This ImageProcessing)

set(Sources
    Image/ImageMock.cpp
    Filters/PixelFilter.cpp
)

add_library(${This} ${Sources})

target_include_directories (${This} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
