#include <iostream>
using namespace std;
int main()
{
    int prst;
    cout << "enter Persentage : ";
    cin >> prst;
    if (prst <= 100)
    {
        if (prst <= 100 && prst > 80)
            cout << "Very Good";
        else if (prst <= 80 && prst > 60)
            cout << "Good";
        else if (prst <= 60 && prst > 40)
            cout << "Average";
        else
            cout << "Fail";
    }
    else
        cout << "Invalid Input";
}