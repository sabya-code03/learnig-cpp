#include <iostream>
using namespace std;
int main()
{
    int cp, sp, prf, ls;
    cout << "Enter Cost price:";
    cin >> cp;
    cout << "Enter sellig price:";
    cin >> sp;
    if (cp > sp)
    {
        ls = cp - sp;
        cout << "The Seller has made loss of :" << ls;
    }
    else if (sp > cp)
    {
        prf = sp - cp;
        cout << "The Seller has made profit of :" << prf;
    }
    else
        cout << "The seller has made neither profit nor loss";
}
