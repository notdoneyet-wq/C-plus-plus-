// Finding roots of quadratic equation
// x = [ -b +/- sqrt(b^2 - 4ac) ] / 2a

#include <iostream>
#include <cmath>
using namespace std;

int main () {

    float x1,x2,b,a,c;
    cout << "Enter value of b,a,c \n";
    cin >> b >> a >> c;

    x1 = (-b + (sqrt(b*b - 4*a*c))) / 2*a;
    x2 = (-b - (sqrt(b*b - 4*a*c))) / 2*a;

    cout << "Roots of the equation are: \n" << x1 << x2 << endl;
    return 0;
}