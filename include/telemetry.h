#ifndef TELEMETRY_H
#define TELEMETRY_H

#include <iostream>
#include <vector>
#include <string>

class TelemetryPoint {
public:
    double time;
    double speed;
    int throttle;
    int brake;
};

std::ostream& operator<<(std::ostream& os, const TelemetryPoint& p);

std::vector<TelemetryPoint> loadTelemetry(const std::string& filename);

#endif