#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << ":Enter a Number :";
    cin >> n;
    if (n % 5 == 0)
        cout << "The Number is divisible by 5";
    else
        cout << "The Number is  not divisible by 5";
}
