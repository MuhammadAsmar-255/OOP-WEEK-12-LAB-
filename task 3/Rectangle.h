#pragma once
#include "Shape.h"
class Rectangle :public Shape{
protected:
    float length;
    float width;
public:
    Rectangle();
    Rectangle(string c, float l, float w);
    void setLength(float length);
    void setWidth(float width);
    float getLength();
    float getWidth();
    float CalculateArea();
    void displayRectangle();
};

