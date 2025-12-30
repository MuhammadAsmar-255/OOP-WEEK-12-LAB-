#include "Car.h"

Car::Car() : Vehicle() {
    model = "";
    engineCapacity = 0;
}

Car::Car(string b, int w, string m, int ec) : Vehicle(b, w) {
    model = m;
    engineCapacity = ec;
}

void Car::setModel(string m) { model = m; }
void Car::setEngineCapacity(int ec) { engineCapacity = ec; }
string Car::getModel() { return model; }
int Car::getEngineCapacity() { return engineCapacity; }

void Car::display_Car() {
    display_vehicle();
    cout << "Car Model: " << model << endl;
    cout << "Engine Capacity: " << engineCapacity << " cc" << endl;
}
