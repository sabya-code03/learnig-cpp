#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the Number: ";
    cin >> n;
    int a =1;
 
    for (int i = 2; i <= n / 2; i++)
    {
       

        if (n % i == 0)
        {
           a =0;
        }
        
    }
    if (n == 1)
        {
            cout << n << "is neither prime nor composite";
        }
        else if(a == 0) cout<<n<< " is composite";
        else if(a==1) cout<<n<<" is prime";
}