/*

d = bsq - 4ac
if d = 0 real and equal roots
if d< 0 imaginary roots
if d>0 real and distinct roots

*/

#include <iostream>
using namespace std;

int main()
{
    float a, b, c, d, r1, r2;
    cout << "Enter values of a, b and c" << endl;
    cin >> a >> b >> c;

    d = b * b - 4 * a * c;
    if (d == 0)
    {
        cout << "Roots are real and equal" << endl;
        cout << (-b / 2 * a);
    }
    else
    {
        if (d > 0)
        {
            cout << "Roots are real and identical" << endl;
            r1 = (-b + d) / 2 * a;
            r2 = (-b - d) / 2 * a;
            cout << r1 << "," << r2;
        }
        else
        {
            cout << "Roots are imaginary" << endl;
        }
    }
    return 0;
}