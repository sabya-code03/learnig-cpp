#include<iostream>
using namespace std;
int main()
{
    int a[] = {12,4,5,87,6,41,7};
    int n = sizeof(a)/4;
    int b[n] ;
    for(int i = 0; i<n ; i ++){
        int j = n -i-1; // main function  
        b [i] = a[j];
    }
    for(int i = 0; i<n ; i ++){
        cout<< b[i]<<" ";
    }
}
