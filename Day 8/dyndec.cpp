#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 5;

    if (true){
        int c;
        c = a + b;
        cout << c << endl;
    }

    for (int i = 0; i < 10; i++) {
        cout << i << endl;
    }

// this i declared will stay in the for bracket only and once executed it will be removed from the main stack unlike a and b which remains in the main stack.


    return 0;
}