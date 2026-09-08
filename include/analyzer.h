#ifndef ANALYZER_H
#define ANALYZER_H

#include "telemetry.h"
#include <iostream>
#include <vector>

double getMaxSpeed(const std::vector<TelemetryPoint>& telemetry);
double averageSpeed(const std::vector<TelemetryPoint>& telemetry);
double getMinSpeed(const std::vector<TelemetryPoint>& telemetry);
size_t getBrakeUsage(const std::vector<TelemetryPoint>& telemetry);
size_t maxThrottle(const std::vector<TelemetryPoint>& telemetry);
double averageThrottle(const std::vector<TelemetryPoint>& telemetry);
double getFirstBrakeTime(const std::vector<TelemetryPoint>& telemetry);

#endif