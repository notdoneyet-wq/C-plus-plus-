#include <iostream>
using namespace std;

int main()
{
    int i = 5;
    int a = i++;
    int b = ++i;
    int j = 2 * a + 4 * b;
    cout << i << " " << j << endl;
    return 0;
}