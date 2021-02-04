set(This HardwareToolsTests)

set(Sources
    Encoders/AbsoluteEncoders/MockAbsoluteEncoderTests.cpp
)

add_executable(${This} ${Sources})

target_link_libraries(${This} gtest_main HardwareTools)

