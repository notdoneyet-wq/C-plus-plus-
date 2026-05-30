// Sum of n natural numbers
// s = n(n+1)/2

#include <iostream>
using namespace std;

int main()
{
    int n, s;
    cout << "Enter the natural number: \n";
    cin >> n;
    s = n * (n + 1) / 2;
    cout << "Sum of " << n << " natural numbers is: " << s << endl;
    return 0;
}