/*

Write a program to caculate Net salary

Program should take following as input

1) Basic Salary, 2) Percentage of Allowance, 3) Percentage of Deducaitons.

Net salary = Basic Salary + Basic Salary * Percentage of ALlowances - Basic Salary * Percentage of Deducations.

*/

#include <iostream>
using namespace std;

// variable names in C++ cannot contain spaces. Therfore you cannot use Basic Salary and instead need to use Basic_salary.

int main()
{
    int Basic_Salary, Percentage_of_Allowance, Percentage_of_Deducaitons, Net;

    cout << "Enter you Basic_Salary , Percentage_of_Allowance , Percentage_of_Deducaitons" << endl;

    cin >> Basic_Salary >> Percentage_of_Allowance >> Percentage_of_Deducaitons;

    Net = Basic_Salary + Basic_Salary * Percentage_of_Allowance - Basic_Salary * Percentage_of_Deducaitons;

    cout << "The net salary is: " << Net << endl;

    return 0;
}