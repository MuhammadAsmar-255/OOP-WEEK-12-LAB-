#include "SportsCar.h"
#include"Car.h"
#include"Vehicle.h"
int main() {
    SportsCar car1("Ferrari", 4, "F8 Tributo", 3900, 340);
    
    cout << "SportsCar 1 details:" << endl;
    car1.Display();
    return 0;
}
