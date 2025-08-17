#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Ente rn ::";
    cin >> n;
     int x = 3;
    for (int i = 1; i <= n; i++)
    {
       

        cout << x<<" ";
        x = x*4;
    }
}