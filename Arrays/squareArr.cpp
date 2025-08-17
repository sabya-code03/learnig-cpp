#include<iostream>

using namespace std;
int square(int a){
    
   return a*a;
}
int main()
{
    int x[] = {12,45,78,56,89,23,54,69,89};
    int n = sizeof(x)/4;
   int p;
    
    for( int i =0 ; i<n; i++)
    {
   cout<< square(x[i])<<" ";
    }
    
    }
    

