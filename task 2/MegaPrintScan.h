#pragma once
#include "Printer.h"
#include "Scanner.h"
class MegaPrintScan : public Printer, public Scanner {
protected:
    int price;
public:
    MegaPrintScan();
    MegaPrintScan(string pT, int pS, string r, bool d, int pr);
    void setPrice(int price);
    int getPrice();
    void DisplayInfo();
};
