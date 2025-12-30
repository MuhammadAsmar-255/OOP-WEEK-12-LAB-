#include "Rectangle.h"

Rectangle::Rectangle() : Shape(), length(0.5), width(0.5) {}

Rectangle::Rectangle(string c, float l, float w) : Shape(c), length(l), width(w) {}

void Rectangle::setLength(float length) {
    this->length = length;
}

void Rectangle::setWidth(float width) {
    this->width = width;
}

float Rectangle::getLength() {
    return length;
}

float Rectangle::getWidth() {
    return width;
}

float Rectangle::CalculateArea() {
    return length * width;
}

void Rectangle::displayRectangle() {
    DisplayColor();
    cout << "Rectangle Length: " << length << endl;
    cout << "Rectangle Width: " << width << endl;
    cout << "Rectangle Area: " << CalculateArea() << endl;
}
