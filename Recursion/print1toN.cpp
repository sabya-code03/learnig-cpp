#include<iostream>
using namespace std;
void print(int x, int n){
    if(x>n)return;
    cout<<x<<endl;
    print(x+1,n);
}
int main(){
    int n ;
    cout<<"entr number :";
    cin>> n;
    print(1,n);
}
//call after work