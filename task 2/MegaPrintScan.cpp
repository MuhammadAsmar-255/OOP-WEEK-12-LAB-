#include "MegaPrintScan.h"

MegaPrintScan::MegaPrintScan() : Printer(), Scanner(), price(0) {}

MegaPrintScan::MegaPrintScan(string pT, int pS, string r, bool d, int pr)
    : Printer(pT, pS), Scanner(r, d), price(pr) {
}

void MegaPrintScan::setPrice(int price) {
    this->price = price;
}

int MegaPrintScan::getPrice() {
    return this->price;
}

void MegaPrintScan::DisplayInfo() {
    Printer::display_printer();
    Scanner::display_scanner();
    cout << "Price: $" << price << endl;
}
