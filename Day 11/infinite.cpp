#include <iostream>
using namespace std;

int main () {
    int i=0;
    for (;;) {
        cout << i << " Infinite\n" ;
    }
    return 0;
}

// To make it finite 

int main () {
    int i=0;
    for (;;) {
        cout << i << " Finite\n" ;
        i++;
        if (i>100) {
            break;
        }
    }
    return 0;
}