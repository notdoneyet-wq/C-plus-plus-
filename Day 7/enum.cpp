#include <iostream>
using namespace std;

// const int mon = 0; This can be used for one of the constants, but if you have many you go with enum

// All these are a set of constants under one name day

enum day
{
    sun,
    mon,
    tue,
    wed,        
    thur,
    fri,
    sat
};

int main()
{
    day d;
    d = mon;
    cout << int(d) << endl;
    return 0;
}