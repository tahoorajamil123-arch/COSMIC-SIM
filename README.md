# COSMIC-SIM: Environmental Telemetry System

An ESP32-based micro-chamber monitoring unit designed to stream real-time temperature and humidity metrics via a DHT22 sensor. Built as an iterative engineering project for university and maker portfolio submissions.

## System Architecture
* **Microcontroller:** ESP32 Dev Module
* **Sensor:** DHT22 (GPIO 15)
* **Framework:** Arduino C++ (`DHT.h`)

## Development & Iteration Log
* **Phase 1 (Virtual Schematic):** Circuit designed and verified in Wokwi simulator.
* **Phase 2 (Firmware Verification):** Validated offline compilation via local Arduino IDE using standard Adafruit DHT libraries.

## Circuit Schematic
* **Wokwi Live Simulation:** [View Interactive Circuit Model](https://wokwi.com/projects/474037195943520257)

## Code Structure
* `/src`: Production firmware code.
* `/docs`: Circuit schematics, simulation logs, and documentation images.
