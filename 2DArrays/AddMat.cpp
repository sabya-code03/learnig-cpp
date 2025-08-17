#include<iostream>
using namespace std;
int main()
{
    int arr1[3][3] = {15,54,542,654,78,12,45,54};
    int arr2[3][3] = {99,15,54,36,5,77,4,58,44};
int arr[3][3];
    for(int i = 0 ; i<3; i++)
    {
        for (int j = 0 ; j<3 ; j++)
        {
            arr[i][j] = arr1[i][j] +arr2[i][j];
            cout<< arr[i][j]<<" ";
        }
        cout<<endl;
       
    }
}