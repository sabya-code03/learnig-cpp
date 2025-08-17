#include <iostream>
using namespace std;
int main()
{
    int x = 9, y = 5;
    cout << x % y << endl;    /// remainder ; which is remain after division
    cout << x % (-y) << endl; // output 4
    cout << (-x) % y;         // output -4
                              // a%(-b)=a%b
                              //(-a)%b=-[a%b]       //compiler will consider this
}