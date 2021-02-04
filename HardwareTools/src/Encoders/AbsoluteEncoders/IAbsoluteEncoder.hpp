#ifndef IABSOLUTEENCODER_HPP
#define IABSOLUTEENCODER_HPP

namespace Encoders { 
namespace AbsoluteEncoders {

class IAbsoluteEncoder {
    virtual int GetPosition() = 0;
    virtual void Init() = 0;
};

}}

#endif /* IABSOLUTEENCODER_HPP */