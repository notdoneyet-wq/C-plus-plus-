/*

WAP to offer discounts on total bill Amount

Program should take Total Amount as input and calculate discount

If bill amount < 100: no discount

If bill amount >= 100 and less than 500 then 10% discoundt

If bill amount >= 500 then 20% discount

*/

#include <iostream>
using namespace std;

int main()
{
    double amount, final;
    int category;

    cout << "Enter bill amount: ";
    cin >> amount;

    if (amount < 100)
        category = 1;
    else if (amount < 500)
        category = 2;
    else
        category = 3;

    switch (category)
    {
    case 1:
        final = amount;
        cout << "No discount\n";
        break;

    case 2:
        final = amount - (amount * 0.10);
        cout << "10% discount applied\n";
        break;

    case 3:
        final = amount - (amount * 0.20);
        cout << "20% discount applied\n";
        break;
    }

    cout << "Final bill amount: " << final << endl;

    return 0;
}