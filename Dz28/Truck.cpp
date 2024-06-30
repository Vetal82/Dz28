#include "Truck.h"
#include <iostream>

Truck::Truck(string brand, string color, double fuelTankVolume, double fuelConsumption, double cargoCapacity)
    : LightVehicle(brand, color, fuelTankVolume, fuelConsumption), cargoCapacity(cargoCapacity) {}

void Truck::setCargoCapacity(double cargoCapacity) { this->cargoCapacity = cargoCapacity; }
double Truck::getCargoCapacity() { return cargoCapacity; }

double Truck::calculateTransportationCost(double fuelPrice) {
    return ((getFuelConsumption() / 100) * fuelPrice) / cargoCapacity;
}

void Truck::printInfo() {
    LightVehicle::printInfo();
    cout << "Cargo capacity: " << cargoCapacity << " tons" << endl;
}

Truck::~Truck() {}
