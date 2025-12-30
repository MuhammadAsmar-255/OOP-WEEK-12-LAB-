#include "Vehicle.h"

Vehicle::Vehicle() {
    brand = "";
    wheel = 0;
}

Vehicle::Vehicle(string b, int w) {
    brand = b;
    wheel = w;
}

void Vehicle::setBrand(string b) { brand = b; }
void Vehicle::setWheel(int w) { wheel = w; }
string Vehicle::getBrand() { return brand; }
int Vehicle::getWheel() { return wheel; }

void Vehicle::display_vehicle() {
    cout << "Vehicle Brand: " << brand << endl;
    cout << "Number of Wheels: " << wheel << endl;
}
