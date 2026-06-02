#include <iostream>
using namespace std;

int main()
{
    int x, y;
    cout << "Enter value of x and y: " << endl;
    cin >> x >> y;
    if (x % 2 == 0)
    {
        cout << x << " is even" << endl;
    }
    else
    {
        cout << y << " is even" << endl;
    }

    return 0;
}