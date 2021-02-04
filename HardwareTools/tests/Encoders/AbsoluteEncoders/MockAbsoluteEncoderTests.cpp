#include <gtest/gtest.h>
#include "../../../src/Encoders/AbsoluteEncoders/MockAbsoluteEncoder.hpp"
using namespace Encoders::AbsoluteEncoders;

TEST(MockAbsoluteEncoderTests, GetPosition_PositionIsCorrectInBeging){
    auto mockAbsoluteEncoder = MockAbsoluteEndoder();
    EXPECT_EQ( 1, mockAbsoluteEncoder.GetPosition()) << "Hello";
}