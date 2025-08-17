#include<iostream>
using namespace std;
int main()
{
    int arr[3][4] = {15,54,55,25,58,44,66,54,32,65,74,78};
    int sum = 0;
    for(int i = 0 ; i<3; i++)
    {
        for (int j = 0 ; j<4 ; j++)
        {
           sum += arr[i][j];

        }
        
       
    }
    cout<<sum;
}