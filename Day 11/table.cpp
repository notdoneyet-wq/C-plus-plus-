// WAP to create a multiplication table for a given number using loops

// 7 * 8 = 56

#include <iostream>
using namespace std;

// using while loop

int main()
{
    int n, i = 1;
    cout << "Enter the number u want table of: ";
    cin >> n;

    while (i <= 10)
    {
        cout << n << " * " << i << " = " << n * i << endl;
        i++;
    }

    return 0;
}

// using for loop

int main()
{
    int n, i;
    cout << "Enter the number u want table of: ";
    cin >> n;

    for (i = 1; i <= 10; i++)
    {
        cout << n << " * " << i << " = " << n * i << endl;
    }

    return 0;
}