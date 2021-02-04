#ifndef MEASUREMENTSERVICE
#define MEASUREMENTSERVICE

#include <future>

namespace Measurement{

class MeasurementService{
    private:
    std::future<bool> _measuringTask;
    bool _isMeasuring{false};
    bool Measure();

    public:
    MeasurementService() = default;
    
    bool IsMeasuring();
    void StartMeasuring();
    void StopMeasuring();
    void InitHardware();
    void ReleaseHardwareResources();
};

}

#endif /* MEASUREMENTSERVICE */