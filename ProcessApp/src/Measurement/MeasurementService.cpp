#include <iostream>
#include <string>
#include <future>
#include <thread>
#include <chrono>

#include "MeasurementService.hpp"
#include "MeasurementCycle.hpp"

bool Measurement::MeasurementService::IsMeasuring(){
    return _isMeasuring;
}

void Measurement::MeasurementService::StartMeasuring(){    

    if(_measuringTask.valid())
    {
        return;
    }
    _isMeasuring = true;
    _measuringTask = std::async(std::launch::async, &MeasurementService::Measure, this);
}

void Measurement::MeasurementService::StopMeasuring(){
    if(!_measuringTask.valid())
    {
        return;
    }
    _isMeasuring = false;
    _measuringTask.get();
}

void Measurement::MeasurementService::InitHardware(){

}

void Measurement::MeasurementService::ReleaseHardwareResources(){

}

bool Measurement::MeasurementService::Measure()
{
    
    while(_isMeasuring)
    {
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }
    return true;
}
