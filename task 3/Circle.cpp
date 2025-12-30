#include "Circle.h"

Circle::Circle() : Shape(), radius(0.5) {}

Circle::Circle(string c, double r) : Shape(c), radius(r) {}

void Circle::setRadius(double radius) {
    this->radius = radius;
}

double Circle::getRadius() {
    return radius;
}

void Circle::displayCircle() {
    DisplayColor();
    cout << "Circle Radius: " << radius << endl;
}
