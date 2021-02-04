#ifndef PIXELFILTER_HPP
#define PIXELFILTER_HPP

namespace Filters { 

class PixelFilter {
    private:

    public:
    PixelFilter() = default;
    unsigned char DivisionFilter(unsigned char pixelValue);
    unsigned char MaxDivisionFilter(unsigned char pixelValue);
};

}

#endif /* PIXELFILTER_HPP */