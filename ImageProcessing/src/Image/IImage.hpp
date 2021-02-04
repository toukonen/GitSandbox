#ifndef IIMAGE_HPP
#define IIMAGE_HPP

#include <vector>
#include <memory>

namespace Image { 
typedef std::shared_ptr<unsigned char> RawImage;

class IImage {
    virtual RawImage Raw() = 0;
    virtual int GetWidth() = 0;
    virtual int GetHeight() = 0;
};

}

#endif /* IIMAGE_HPP */