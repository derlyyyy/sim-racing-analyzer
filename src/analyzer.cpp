#include "../include/analyzer.h"

#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>



double getMaxSpeed(const std::vector<TelemetryPoint>& telemetry) {
    if (telemetry.empty()) return 0; 
    auto result = std::max_element(telemetry.begin(), telemetry.end(),
    [](const TelemetryPoint& a, const TelemetryPoint& b) {
        return a.speed < b.speed;
    });
    return result->speed;
}

double getMinSpeed(const std::vector<TelemetryPoint>& telemetry) {
    if (telemetry.empty()) return 0; 
    auto result = std::max_element(telemetry.begin(), telemetry.end(),
    [](const TelemetryPoint& a, const TelemetryPoint& b) {
        return a.speed > b.speed;
    });
    return result->speed;
}

double averageSpeed(const std::vector<TelemetryPoint>& telemetry) {
    if (telemetry.empty()) return 0;
    auto result = std::accumulate(telemetry.begin(), telemetry.end(), 0.0, 
    [](double current_sum, const TelemetryPoint& point) {
        return current_sum + point.speed;
    });
    return result / telemetry.size();
}

size_t getBrakeUsage(const std::vector<TelemetryPoint>& telemetry) {
    if (telemetry.empty()) return 0;
        auto brk = std::count_if(telemetry.begin(), telemetry.end(),
        [](const TelemetryPoint& point) {
            if (point.brake > 0) {
                return true;
            } else return false;
        });
        return brk;
}

size_t maxThrottle(const std::vector<TelemetryPoint>& telemetry) {
    if (telemetry.empty()) return 0;
        auto throttle = std::max_element(telemetry.begin(), telemetry.end(),
        [](const TelemetryPoint& a, const TelemetryPoint& b) {
            return a.throttle < b.throttle;
        });
        return throttle->throttle;
}

double averageThrottle(const std::vector<TelemetryPoint>& telemetry) {
    if (telemetry.empty()) return 0;
    auto result = std::accumulate(telemetry.begin(), telemetry.end(), 0.0, 
    [](double current_sum, const TelemetryPoint& point) {
        return current_sum + point.throttle;
    });
    return result / telemetry.size();
}

double getFirstBrakeTime(const std::vector<TelemetryPoint>& telemetry) {
    if (telemetry.empty()) return 0;
    auto it = std::find_if(telemetry.begin(), telemetry.end(),
    [](const TelemetryPoint& point) {
        return point.brake > 0;
    });
    return it->time;
}

/*double getMaxAcceleration(const std::vector<TelemetryPoint>& telemetry) {
    double max_acc = 0;
    
}*/