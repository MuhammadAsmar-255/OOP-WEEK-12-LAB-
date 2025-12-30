#pragma once
#include "Car.h"
class SportsCar :private Car{
protected:
    int speed;
public:
    SportsCar();
    SportsCar(string b, int w, string m, int ec, int s);
    void setSpeed(int s);
    int getSpeed();
    void Display();
};

