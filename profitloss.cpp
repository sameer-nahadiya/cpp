#include <iostream>
using namespace std;
int main()
{
    int sp, cp;
    cout << "enter sp";
    cin >> sp;
    cout << "enter cp";
    cin >> cp;
    if (sp > cp)
        cout << "profit";
    else if (sp < cp)
    {
         cout << "loss";
    }
    else if (sp = cp)
    {
         cout << "no loss no profit";
    }
}