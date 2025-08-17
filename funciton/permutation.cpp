#include<iostream>
using namespace std;
int fact(int x)
{
   
    int f = 1;
    for(int i = 1; i<=x; i++)
    {
         f*=i;
    }
    return f;
}
int main()
{
    int a,b,c,n,r;
    cout<<"Enter n:";
    cin>>n;
    cout<<"Enter r:";
    cin>>r;
    a = fact(n);
   
    c = fact(n-r);
    int permutation = a/c;
    cout<<permutation;
}
