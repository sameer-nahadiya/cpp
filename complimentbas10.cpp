#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the number";
    cin >> n;
    int m = n;
    int mask = 0;
    int a = 1;
    // edge case
    if (n == 0)
        return 1;
    while (m != 0)
    {
        mask = (mask << 1) | 1;
        m = m >> 1;
    }
    int ans = (~n) & mask;
    cout << ans;
}