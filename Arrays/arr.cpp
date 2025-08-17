#include<iostream>
using namespace std;
int main()
{
    int x[] = {5,56,8,14};
    for(int i=0 ; i<=3 ; i++){
        cout << x[i]<<" ";
    }
    cout<<endl;
    x[2]=100;
     for(int i=0 ; i<=3 ; i++){
        cout << x[i]<<" ";
    }
}