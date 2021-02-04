#ifndef IMAGE_MOCK_HPP
#define IMAGE_MOCK_HPP

#include "IImage.hpp"

namespace Image { 
    

class ImageMock : IImage {
    private:
    RawImage _rawImage;   
    int _width{0};
    int _height{0}; 

    public:
    ImageMock() = delete;
    ImageMock(int height, int width);

    RawImage Raw();
    int GetWidth();
    int GetHeight();
};

}

#endif /* IMAGE_MOCK_HPP */