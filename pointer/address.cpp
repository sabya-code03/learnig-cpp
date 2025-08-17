#include<iostream>
using namespace std;
int main()
{
    int c =3;
    cout<<&c<<endl;
    int* p = &c;
    int** q = &p;
    cout<<p;
cout<<endl<<q;
}