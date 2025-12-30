#pragma once
#include <iostream>
#include <string>
using namespace std;
class Vehicle {
protected:
    string brand;
    int wheel;
public:
    Vehicle();
    Vehicle(string b, int w);
    void setBrand(string b);
    void setWheel(int w);
    string getBrand();
    int getWheel();
    void display_vehicle();
};
