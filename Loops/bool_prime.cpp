#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the Number: ";
    cin >> n;
    int a = 1;
bool flag = true;
    for (int i = 2; i <= n / 2; i++)
    {
        if(n%i == 0){
            flag = false;
            break;
        }
    }
    if(flag == true) cout<<"Prime";
    else cout<<"composite";
}