#include <gtest/gtest.h>
#include "Filters/PixelFilter.hpp"

using namespace Filters;

const unsigned char PixelValue = 100;

TEST(PixelFilterTests, DivisionFilterReturnCorretValue){
    auto pixelFilter = PixelFilter();
    EXPECT_EQ( pixelFilter.DivisionFilter(PixelValue), 50 ) << "Wrong pixel value!";
}

TEST(PixelFilterTests, MaxDivisionFilterReturnCorretValue){
    auto pixelFilter = PixelFilter();
    EXPECT_EQ( pixelFilter.MaxDivisionFilter(PixelValue), 177 ) << "Wrong pixel value!";
}