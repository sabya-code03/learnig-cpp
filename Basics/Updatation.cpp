#include <iostream>
using namespace std;

int main()
{
    int x = 5;
    cout << x << endl; // Prints 5
    x = x + 5;         // Updates x to 10
    // x + = 5 samefunction
    cout << x << endl; // Prints 10
    x = x - 6;         // Updates x to 4
                       // x - = 6 samefunction
    cout << x << endl;
    return 0; // Return statement, optional
}
