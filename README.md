# Sim Racing Analyzer

A C++ telemetry analysis project for sim racing.

The project started as a personal experiment for learning C++ and the STL by applying programming concepts to a real-world problem: analyzing telemetry data from racing simulations.

It is currently a work in progress and is gradually evolving into a more complete telemetry analysis tool.

---

## Current functionality

The analyzer currently loads telemetry data from a CSV file and calculates basic driving statistics.

Current metrics include:

* Maximum speed
* Minimum speed
* Average speed
* Maximum throttle
* Average throttle
* Brake usage
* First braking time
* Number of loaded telemetry points

---

## Example telemetry

The current data model contains:

```text
Time
Speed
Throttle
Brake
```

Telemetry is loaded from CSV files and stored in a `std::vector<TelemetryPoint>` for further analysis.

---

## Project structure

```text
sim-racing-analyzer/
│
├── src/
│   ├── main.cpp
│   ├── analyzer.cpp
│   └── telemetry.cpp
│
├── include/
│   ├── analyzer.h
│   └── telemetry.h
│
├── data/
│   └── <telemetry_data>.csv
│
└── README.md
```

---

## Technologies

* C++
* STL
* File I/O
* CSV parsing
* Algorithms and iterators
* `std::vector`
* `<algorithm>`
* `<numeric>`

---

## Build

Compile the project with:

```bash
g++ src/main.cpp src/analyzer.cpp src/telemetry.cpp -o sim
```

## Run

```bash
./sim data/telemetry.csv
```

---

## Why this project?

This project is primarily a learning project.

Instead of studying C++ and the STL through isolated exercises, I wanted to use them to solve a problem that I actually find interesting.

So... I decided that sim racing provides a useful environment for experimenting with:

* Data processing
* Algorithms
* Performance
* Telemetry
* Visualization
* Real-time data
* Software architecture
* Roadmap

---

## Roadmap

**The project is still in an early stage.**

Planned areas of development include:

### Analysis

* [ ] Improve CSV parsing
* [ ] Add lap and sector analysis
* [ ] Analyze braking zones
* [ ] Analyze throttle application
* [ ] Calculate acceleration and deceleration
* [ ] Compare laps

### Visualization

* [ ] Telemetry visualization

### Simulation support

* [ ] Support telemetry from modern sim racing games
* [ ] Real-time telemetry

### Architecture and development

* [ ] Better project architecture
* [ ] Automated tests
* [ ] CMake build system
* [ ] GUI

---

## Supported simulations

Currently, the project works with custom CSV telemetry data.

Support for telemetry formats or APIs from actual racing simulations will be explored as the project develops.

---

## Status

**Early development / experimental**

The architecture and data model are expected to change as the project grows.

---

## Background

This project began while learning C++ and the STL.

The initial goal was relatively simple:

> Learn C++ by building something related to sim racing.

The long-term goal is to turn that experiment into a useful telemetry analysis tool.

---

_Made as a personal C++ / sim racing project_
