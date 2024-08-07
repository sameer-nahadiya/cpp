#include <iostream>
#include <limits>
using namespace std;
int main()
{
    int x, INT_MAX;
    cout << "enter the number";
    cin >> x;
    {
        int ans = 0;
        while (x != 0)
        {
            int digit = x % 10;
            x = x / 10;
            if (ans > INT_MAX / 10)
            {
                return 0;
            }
            ans = ans *10+ digit;
            cout << ans;
        }
        return ans;
    }
}