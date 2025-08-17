#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the Number: ";
    cin >> n;
    int sum = 0;
    while (n>0)
    {
       int x = n%10;
       n = n/10;
       sum+=x;
    }
    cout<<sum;

    
}
