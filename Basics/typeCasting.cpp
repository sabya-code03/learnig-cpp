#include <iostream>
using namespace std;
int main()
{
    int x;
    cin >> x;
    float y = (float)x; // typecasting if you give real number in place to integer then float will work
    cout << y / 2;
}