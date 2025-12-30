#pragma once
#include <iostream>
#include <string>
using namespace std;

class Printer {
protected:
    string printerType;
    int printSpeed;
public:
    Printer();
    Printer(string t, int s);
    void setPrinterType(string printerType);
    void setPrintSpeed(int printSpeed);
    string getPrinterType();
    int getPrintSpeed();
    void display_printer();
};
