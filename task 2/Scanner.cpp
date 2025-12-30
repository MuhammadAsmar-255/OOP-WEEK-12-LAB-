#include "Scanner.h"

Scanner::Scanner() : scanResolution(""), duplex(false) {}

Scanner::Scanner(string r, bool d) : scanResolution(r), duplex(d) {}

void Scanner::setScanResolution(string scanResolution) {
    this->scanResolution = scanResolution;
}

void Scanner::setDuplex(bool duplex) {
    this->duplex = duplex;
}

string Scanner::getScanResolution() {
    return this->scanResolution;
}

bool Scanner::getDuplex() {
    return this->duplex;
}

void Scanner::display_scanner() {
    cout << "Scan Resolution: " << scanResolution << endl;
    cout << "Duplex: " << (duplex ? "Yes" : "No") << endl;
}
