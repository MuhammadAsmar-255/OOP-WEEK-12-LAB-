#include "Circle.h"
#include "Rectangle.h"
#include"Shape.h"

int main() {
    Circle c1("Red", 3.5);
    Rectangle r1("Blue", 4.0, 5.0);

    cout << "Circle Details:" << endl;
    c1.displayCircle();

    cout << "Rectangle Details:" << endl;
    r1.displayRectangle();

    return 0;
}
