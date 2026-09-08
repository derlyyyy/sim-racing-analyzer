#include "../include/telemetry.h"

#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>

std::ostream& operator<<(std::ostream& os, const TelemetryPoint& p) {
    os << "Time: " << p.time
    << " Speed: " << p.speed 
    << " Throttle: " << p.throttle 
    << " Brake: " << p.brake;                                
    return os;
}

std::vector<TelemetryPoint> loadTelemetry(const std::string& filename) {
    std::ifstream file(filename);
    std::vector<TelemetryPoint> telemetry;

    if (!file.is_open()) {
        std::cout << "Open error\n" << std::endl;
        return telemetry;
    }

    std::string line;

    std::getline(file, line);

    while (std::getline(file, line)) {
        std::stringstream ss(line);
        std::string stime, sspeed, sthrottle, sbrake;

        std::getline(ss, stime, ',');
        std::getline(ss, sspeed, ',');
        std::getline(ss, sthrottle, ',');
        std::getline(ss, sbrake);

        telemetry.push_back({
            std::stod(stime),
            std::stod(sspeed),
            std::stoi(sthrottle),
            std::stoi(sbrake)
        });
    } return telemetry;
}