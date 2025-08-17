#include<iostream>
using namespace std;
int main()
{
    int a[] = {12,4,5,87,6,41,7};
    int n = sizeof(a)/4;
    for(int i = 0; i<n ; i++)
{
    
    cout<<a[i] <<" ";
}
cout<<endl;
    int front = 0;
    int rear = n-1;
    while (front<rear)
    {
       int temp = a[front];
        a[front] = a[rear];
        a[rear] = temp;
        front ++;
        rear--;
    }
       for(int i = 0; i<n ; i++)
{
    
    cout<<a[i]<<" ";
}
    
}
