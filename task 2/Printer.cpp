#include "Printer.h"

Printer::Printer() : printerType(""), printSpeed(0) {}

Printer::Printer(string t, int s) : printerType(t), printSpeed(s) {}

void Printer::setPrinterType(string printerType) {
    this->printerType = printerType;
}

void Printer::setPrintSpeed(int printSpeed) {
    this->printSpeed = printSpeed;
}

string Printer::getPrinterType() {
    return this->printerType;
}

int Printer::getPrintSpeed() {
    return this->printSpeed;
}

void Printer::display_printer() {
    cout << "Printer Type: " << printerType << endl;
    cout << "Print Speed: " << printSpeed << " ppm" << endl;
}
