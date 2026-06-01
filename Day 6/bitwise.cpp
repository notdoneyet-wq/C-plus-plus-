#include <iostream>
using namespace std;

int main()
{
    int x = 11, y = 7, z, a, b, c;
    z = x & y;
    a = x | y;
    b = x ^ y;
    cout << z << "," << a << "," << b << endl;

    char m = 5, n, p;
    n = m << 1;
    p = ~m;
    cout << int(n) << "," << int(p) << endl;
    return 0;
}