#include<iostream>
using namespace std;
int main()
{
    int arr[3][2] = {{15,54},{542,654},{78,98}};
    for(int j = 0 ; j<2; j++)
    {
        for (int i = 0 ; i<3 ; i++)
        {
            cout<< arr[i][j]<<" ";
        }
        cout<<endl;
       
    }
}