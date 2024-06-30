#ifndef TRUCK_H
#define TRUCK_H

#include "LightVehicle.h"

using namespace std;

class Truck : public LightVehicle {
private:
    double cargoCapacity; // in tons

public:
    Truck(string brand, string color, double fuelTankVolume, double fuelConsumption, double cargoCapacity);
    void setCargoCapacity(double cargoCapacity);
    double getCargoCapacity();

    double calculateTransportationCost(double fuelPrice);
    void printInfo();
    ~Truck();
};

#endif // TRUCK_H

