#include "MockAbsoluteEncoder.hpp"

int Encoders::AbsoluteEncoders::MockAbsoluteEndoder::GetPosition(){
    return _absoluteEncoderPosition + 1;
}
void Encoders::AbsoluteEncoders::MockAbsoluteEndoder::Init(){
    _absoluteEncoderPosition = 0;
}
