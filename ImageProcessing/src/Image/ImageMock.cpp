#include "ImageMock.hpp"

using namespace Image;

struct Releaser{
    void operator()(RawImage* rawImage){
        // for (auto &line : rawImage) 
        // {
        //     _rawImage.
        // }

    };

};

ImageMock::ImageMock(int height, int width)
{
    _height = height;
    _width = width;
    _rawImage = RawImage(new unsigned char[_height*_width], std::default_delete<unsigned char[]>());
    //for(int i=0; i<_rawImage)
}

RawImage ImageMock::Raw(){
    return RawImage();
}

int ImageMock::GetWidth()
{
    return _width;
}

int ImageMock::GetHeight()
{
    return _height;
}