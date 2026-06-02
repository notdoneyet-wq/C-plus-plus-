/*

Total = m1+m2+m3
Avg = Total/3

avg >= 70 : grade A
35  <= avg < 70 : grade B
avg < 35 : grade C

*/

#include <iostream>
using namespace std;

int main()
{
    int m1, m2, m3, avg;
    cout << "Enter all 3 Subject Marks: " << endl;
    cin >> m1 >> m2 >> m3;
    avg = (m1 + m2 + m3) / 3;

    if (avg >= 70)
    {
        cout << "Grade A";
    }
    else
    {
        if (avg >= 35 && avg < 70)
        {
            cout << "Grade B";
        }
        else
        {
            cout << "Grade C";
        }
    }
    return 0;
}