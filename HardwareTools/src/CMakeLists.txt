set(This HardwareTools)

set(Sources
    Encoders/AbsoluteEncoders/MockAbsoluteEncoder.cpp
)

add_library(${This} ${Sources})

target_include_directories (${This} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
