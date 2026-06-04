// WAP to add,sub,multiply,divide two numbers using switch. provide a menu

#include <iostream>
using namespace std;

int main()
{
    cout << "Menu\n";
    cout << "1) Add\n" << "2) Subtract\n" << "3) Multiply\n" << "4) Divide\n";

    int option;
    cout << "Enter your choice";
    cin >> option;
    float a, b, c;
    cin >> a >> b;

    switch (option)
    {
    case 1:
        c = a + b;
        break;
    case 2:
        c = a - b;
        break;
    case 3:
        c = a * b;
        break;
    case 4:
        c = a / b;
        break;
    default:
        cout << "invalid option";
    }
    cout << "Result is: " << c << endl;

    return 0;
}