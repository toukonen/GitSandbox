#include "PixelFilter.hpp"

using namespace Filters;

unsigned char PixelFilter::DivisionFilter(unsigned char pixelValue)
{
    pixelValue = pixelValue/2;
    return pixelValue;
}


unsigned char PixelFilter::MaxDivisionFilter(unsigned char pixelValue)
{
    const unsigned char MaxValue = 255;
    pixelValue = (MaxValue+pixelValue)/2;
    return pixelValue;
}

unsigned char PixelFilter::MinDivisionFilter(unsigned char pixelValue)
{
    pixelValue = pixelValue/2;
    return pixelValue;
}

unsigned char PixelFilter::NewFilter(unsigned char pixelValue)
{
    pixelValue = pixelValue*2;
    return pixelValue;
}