#ifndef MEASUREMENT_CYCLE_H
#define MEASUREMENT_CYCLE_H

#include<memory>
#include "Encoders/AbsoluteEncoders/IAbsoluteEncoder.hpp"
namespace Measurement{

class Ps1MeasurementCycle{
    private:
    std::unique_ptr<Encoders::AbsoluteEncoders::IAbsoluteEncoder> _absoluteEncoder;
    
    public:
    Ps1MeasurementCycle() = delete;
    Ps1MeasurementCycle(std::unique_ptr<Encoders::AbsoluteEncoders::IAbsoluteEncoder>&& absoluteEncoder) : _absoluteEncoder(std::move(absoluteEncoder)){}
    
    void RunCycle();

    private:
};

}

#endif /* MEASUREMENT_CYCLE_H */