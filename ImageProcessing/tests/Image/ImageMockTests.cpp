#include <gtest/gtest.h>
#include "Image/ImageMock.hpp"

using namespace Image;

const int Height = 480;
const int Width = 620;

TEST(ImageMockTests, Raw_RawImageHasData){
    auto imageMock = ImageMock(Height,Width);
    auto rawImage = imageMock.Raw();
    EXPECT_EQ( imageMock.GetHeight(), Height ) << "Wrong image size!";
    EXPECT_EQ( imageMock.GetWidth(), Width ) << "Wrong image size!";
}