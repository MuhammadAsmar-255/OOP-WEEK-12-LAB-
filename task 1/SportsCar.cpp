#include "SportsCar.h"

SportsCar::SportsCar() : Car() {
    speed = 1000;
}

SportsCar::SportsCar(string b, int w, string m, int ec, int s) : Car(b, w, m, ec) {
    speed = s;
}

void SportsCar::setSpeed(int s) { speed = s; }
int SportsCar::getSpeed() { return speed; }

void SportsCar::Display() {
    display_Car();
    cout << "Top Speed: " << speed << " Kmh" << endl;
}
