#include<iostream>
using namespace std;
int main()
{
    int x[] = {12,45,78,56,89,23,54,69,8946547};
    int n = sizeof(x)/4;
    //int mx = x[0];
    int mx = INT8_MIN;
    for( int i =0 ; i<n; i++)
    {
        if (x[i]> mx) mx = x[i]; // for max
    }
cout<<mx;
}