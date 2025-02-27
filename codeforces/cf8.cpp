#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long a, b, turns;
        cin >> a >> b >> turns;
        if (turns % 2 == 0)
        {
            if (a > b)
            {
                cout << "First\n";
            }
            else
            {
                cout << "Second\n";
            }
        }
        else
        {
            if (a >= b)
            {
                cout << "First\n";
            }
            else
            {
                cout << "Second\n";
            }
        }
    }
    return 0;
}
