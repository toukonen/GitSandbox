#include <gtest/gtest.h>
#include "Measurement/MeasurementService.hpp"
using namespace Measurement;

TEST(MeasurementServiceTests, StartMeasuring_MeasuringStartAndStopCorrectly){
    auto measurementService = MeasurementService();
    measurementService.StartMeasuring();
    EXPECT_EQ( true, measurementService.IsMeasuring() ) << "Wrong measuring state!";
    measurementService.StopMeasuring();
    EXPECT_EQ( false, measurementService.IsMeasuring() ) << "Wrong measuring state!";
}