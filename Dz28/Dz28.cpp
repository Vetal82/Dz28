#include "LightVehicle.h"
#include "Truck.h"
#include<iostream>
using namespace std;

int main() {
    LightVehicle car("Toyota", "Red", 60, 8);
    car.printInfo();

    Truck truck("MAN", "Blue", 200, 20, 10);
    truck.printInfo();
    cout << "Transportation cost: " << truck.calculateTransportationCost(1.5) << " per ton/km" << endl;

    return 0;
}