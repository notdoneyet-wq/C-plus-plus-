// WAP for dividing two numbers, also flag error if 0 is an input.

#include <iostream>
using namespace std;

int main()
{
    double x, y, z;
    cout << "Enter both the numbers: " << endl;
    cin >> x >> y;
    if (y == 0)
    {
        cout << "Division by zero" << endl;
    }
    else
    {
        z = x / y;
        cout << z << endl;
    }
    return 0;
}