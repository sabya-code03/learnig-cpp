#include <iostream>
using namespace std;
int main()
{
    int x, y;
    cout << "Enter x Coordinate :";
    cin >> x;
    cout << "Enter y Coordinate :";
    cin >> y;
    if (x == 0)
    {
        if (y == 0)
            cout << "The point is At the center";
        else
            cout << "The point is on y axis";
    }
    else if (x > 0)
    {
        if (y > 0)
            cout << "The point is At 1st Quadrant";
        else if (y < 0)
            cout << "The point is At 4th Quadrant";
        else
            cout << "The point is on x axis";
    }
    else
    {
        if (y > 0)
            cout << "The point is At 2nd Quadrant";
        else if (y < 0)
            cout << "The point is At 3rd Quadrant";
        else
            cout << "The point is on x axis";
    }
}