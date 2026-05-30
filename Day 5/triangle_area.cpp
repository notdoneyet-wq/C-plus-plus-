// Area of triangle A = (1/2 * b * h)

#include <iostream>
using namespace std;

int main () {
    float b,h,A;
    cout << "Enter the breadth and height\n";
    cin >> b >> h;
    A = (b*h)/2;
    cout << "Area of Triangle is is: \n" << A << endl;

    return 0;
}