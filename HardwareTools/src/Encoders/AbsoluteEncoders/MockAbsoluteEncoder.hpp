#ifndef MOCKABSOLUTEENCODER_HPP
#define MOCKABSOLUTEENCODER_HPP

#include "IAbsoluteEncoder.hpp"
namespace Encoders { 
namespace AbsoluteEncoders {

class MockAbsoluteEndoder : IAbsoluteEncoder {
    private:
    int _absoluteEncoderPosition {0};

    public:
    MockAbsoluteEndoder()=default;
    int GetPosition() override;
    void Init() override ;
};

}}

#endif /* MOCKABSOLUTEENCODER_HPP */ 