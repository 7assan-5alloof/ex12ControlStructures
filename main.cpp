#include <iostream>

using namespace std;

int main()
{
    cout << "Press Ctrl-C to stop" << endl;
    while(1)
    {
        int salary;
        cout << "Please enter your monthly salary: ";
        cin >> salary;
        int tax;
        if (salary > 9999) tax = salary * .4;
        else if (salary > 7999) tax = salary * .3;
        else if (salary > 4999) tax = salary * .2;
        else
        {
            cout << "Salary not applicable" << endl;
            continue;
        }
        cout << tax << endl;
    }
    return 0;
}
