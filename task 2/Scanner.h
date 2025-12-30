#pragma once
#include <iostream>
#include <string>
using namespace std;

class Scanner {
protected:
    string scanResolution;
    bool duplex;
public:
    Scanner();
    Scanner(string r, bool d);
    void setScanResolution(string scanResolution);
    void setDuplex(bool duplex);
    string getScanResolution();
    bool getDuplex();
    void display_scanner();
};
