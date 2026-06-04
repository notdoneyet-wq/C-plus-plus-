// check for leap year


#include <iostream>
using namespace std;

int main () {
    int year;
    cout << "Enter the year you want to check: \n";
    cin >> year;
    
    if (year % 4 == 0) {
        cout << "Its a leap year";
    }
    else {
        cout << "It isnt a leap year\n";
    }
    return 0;
}