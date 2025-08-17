#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the Number: ";
    cin >> n;
int cnt = 0;
while (n>0)
{
   n= n/10;
   cnt+=1;
}

cout<<cnt;
}