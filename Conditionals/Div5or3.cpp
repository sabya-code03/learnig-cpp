#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<< "Enter a Number:";
    cin>> num;
    if(num  % 5 == 0 && num % 3 == 0)
    cout<< "The Number is Divisible by both 3 & 5";
    else if (num  % 5 == 0 || num % 3 == 0)
    cout<< "The Number is Divisible by either 3 or 5";
    else cout<< "The Number is  Divisible by neither 3 nor  5";
}