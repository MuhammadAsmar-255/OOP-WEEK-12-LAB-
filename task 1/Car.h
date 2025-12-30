#pragma once
#include "Vehicle.h"
class Car : protected Vehicle{
protected:
    string model;
    int engineCapacity;
public:
    Car();
    Car(string b, int w, string m, int ec);
    void setModel(string m);
    void setEngineCapacity(int ec);
    string getModel();
    int getEngineCapacity();
    void display_Car();
};

