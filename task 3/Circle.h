#pragma once
#include "Shape.h"
class Circle :protected Shape{
protected:
    double radius;
public:
    Circle();
    Circle(string c, double r);
    void setRadius(double radius);
    double getRadius();
    void displayCircle();
};

