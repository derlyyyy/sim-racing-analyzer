#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>
#include "../include/analyzer.h"
#include "../include/telemetry.h"

void printBanner();

int main(int argc, char* argv[]) {
    if (argc < 2) {
        std::cout << "Usage: program <path_to_csv>";
        return 1; 
    }
        
    auto filename = argv[1];

    printBanner();

    auto telemetry = loadTelemetry(filename);

    double maxSpeed = getMaxSpeed(telemetry);
    double avgSpeed = averageSpeed(telemetry);
    double minSpeed = getMinSpeed(telemetry);
    size_t brakeUsage = getBrakeUsage(telemetry);
    size_t maxThrtl = maxThrottle(telemetry);
    double avgThrottle = averageThrottle(telemetry);
    double getFrstBrkTime = getFirstBrakeTime(telemetry);
    std::cout << std::endl;

    std::cout << "            : Speed : " << '\n';
    std::cout << "  > Maximal speed - " << maxSpeed << '\n';
    std::cout << "  > Minimal speed - " << minSpeed << '\n';
    std::cout << "  > Average speed - " << avgSpeed << '\n' << '\n';

    std::cout << "            : Throttle : " << '\n';
    std::cout << "  > Maximal throttle - " << maxThrtl << '\n';
    std::cout << "  > Average throttle - " << avgThrottle << '\n' << '\n';

    std::cout << "            : Brake : " << '\n';
    std::cout << "  > Brake usage - " << brakeUsage << '\n';
    std::cout << "  > First brake time - " << getFrstBrkTime << '\n' << '\n';

    std::cout << "Loaded telemetry points: " << telemetry.size();

    return 0;
}

void printBanner() {
    std::cout << "\n";
    std::cout << "............................................................\n";
    std::cout << ".                                                          .\n";
    std::cout << ".    _____ _              ____             _               .\n";
    std::cout << ".   / ___/(_)___ ___     / __ \\____ ______(_)___  ____ _  .\n";
    std::cout << ".   \\__ \\/ / __ `__ \\   / /_/ / __ `/ ___/ / __ \\/ __`/.\n";
    std::cout << ".  ___/ / / / / / / /  / _, _/ /_/ / /__/ / / / / /_/ /    .\n";
    std::cout << ". /____/_/_/ /_/ /_/  /_/ |_|\\__,_/\\___/_/_/ /_/\\__, /  .\n";
    std::cout << ".                                              /____/      .\n";
    std::cout << ".                                                          .\n";
    std::cout << ".     ___                __                                .\n";
    std::cout << ".    /   |  ____  ____ _/ /_  ______  ___  _____           .\n";
    std::cout << ".   / /| | / __ \\/ __ `/ / / / /_  / / _ \\/ ___/         .\n";
    std::cout << ".  / ___ |/ / / / /_/ / / /_/ / / /_/  __/ /               .\n";
    std::cout << ". /_/  |_/_/ /_/\\__,_/_/\\__, / /___/\\___/_/             .\n";
    std::cout << ".                      /____/                              .\n";
    std::cout << ".                                                          .\n";
    std::cout << ".                    . . . . . . . . . . . .   v 0.0.1     .\n";
    std::cout << "............................................................\n";
    std::cout << "\n";
}