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

TEST(PixelFilterTests, MinDivisionFilterReturnCorretValue){
    auto pixelFilter = PixelFilter();
    EXPECT_EQ( pixelFilter.MinDivisionFilter(PixelValue), 50 ) << "Wrong pixel value!";
}

TEST(PixelFilterTests, NewFilterReturnCorretValue){
    auto pixelFilter = PixelFilter();
    EXPECT_EQ( pixelFilter.NewFilter(PixelValue), 200 ) << "Wrong pixel value!";
}