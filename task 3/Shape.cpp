#include "Shape.h"

Shape::Shape() : color("Black") {}

Shape::Shape(string c) : color(c) {}

void Shape::setColor(string color) {
    this->color = color;
}

string Shape::getColor() {
    return color;
}

void Shape::DisplayColor() {
    cout << "Shape Color: " << color << endl;
}
