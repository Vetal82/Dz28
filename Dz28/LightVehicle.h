#pragma once
#ifndef LIGHTVEHICLE_H
#define LIGHTVEHICLE_H

#include <string>

using namespace std;

class LightVehicle {
protected:
    string brand;
    string color;
    double fuelTankVolume; // in liters
    double fuelConsumption; // in liters per 100 km

public:
    LightVehicle(string brand, string color, double fuelTankVolume, double fuelConsumption);
    void setBrand(string brand);
    void setColor(string color);
    void setFuelTankVolume(double fuelTankVolume);
    void setFuelConsumption(double fuelConsumption);

    string getBrand();
    string getColor();
    double getFuelTankVolume();
    double getFuelConsumption();

    double calculateDistance();
    void printInfo();
};

#endif // LIGHTVEHICLE_H

