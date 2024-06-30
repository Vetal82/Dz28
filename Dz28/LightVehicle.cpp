#include "LightVehicle.h"
#include <iostream>

LightVehicle::LightVehicle(string brand, string color, double fuelTankVolume, double fuelConsumption)
    : brand(brand), color(color), fuelTankVolume(fuelTankVolume), fuelConsumption(fuelConsumption) {}

void LightVehicle::setBrand(string brand) { this->brand = brand; }
void LightVehicle::setColor(string color) { this->color = color; }
void LightVehicle::setFuelTankVolume(double fuelTankVolume) { this->fuelTankVolume = fuelTankVolume; }
void LightVehicle::setFuelConsumption(double fuelConsumption) { this->fuelConsumption = fuelConsumption; }

string LightVehicle::getBrand() { return brand; }
string LightVehicle::getColor() { return color; }
double LightVehicle::getFuelTankVolume() { return fuelTankVolume; }
double LightVehicle::getFuelConsumption() { return fuelConsumption; }

double LightVehicle::calculateDistance() {
    return (fuelTankVolume / fuelConsumption) * 100;
}

void LightVehicle::printInfo() {
    cout << "Brand: " << brand << endl;
    cout << "Color: " << color << endl;
    cout << "Fuel tank volume: " << fuelTankVolume << " liters" << endl;
    cout << "Fuel consumption: " << fuelConsumption << " liters per 100 km" << endl;
    cout << "Distance: " << calculateDistance() << " km" << endl;
}
