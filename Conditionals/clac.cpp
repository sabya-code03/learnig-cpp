#include<iostream>
using namespace std;
int main()
{
    int n1,n2;
    cin>> n1;
    char op;
    cin>> op;
    cin>> n2;
    if(op == '+') cout<< "The ans :"<<n1+n2;
     if(op == '*') cout<< "The ans :"<<n1*n2;
      if(op == '-') cout<<"The ans :"<< n1-n2;
       if(op == '/') cout<< "The ans :"<<n1/n2;

}