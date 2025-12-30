#pragma once
#include <iostream>
#include <string>
using namespace std;
class Shape {
protected:
    string color;
public:
    Shape();
    Shape(string c);
    void setColor(string color);
    string getColor();
    void DisplayColor();
};
