#include<iostream>
using namespace std;
int swap(int& a, int& b)
{
int temp;
temp = a;
a = b;
b= temp;

}
int main()
{
int a=12;
int b=13;
cout<<a<<" "<<b<<endl;
swap(a,b);
cout<<a<<" "<<b;
}