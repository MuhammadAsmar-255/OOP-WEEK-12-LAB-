#include "MegaPrintScan.h"
int main() {
    MegaPrintScan device("Inkjet", 20, "600dpi", true, 350);

    cout << "MegaPrintScan Device Details:" << endl;
    device.DisplayInfo();

    device.setPrice(400);
    device.setPrinterType("Laser");
    device.setPrintSpeed(25);
    device.setScanResolution("1200dpi");
    device.setDuplex(false);

    cout << "\nUpdated Device Details:" << endl;
    device.DisplayInfo();

    return 0;
}
