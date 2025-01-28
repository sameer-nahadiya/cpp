#include <bits/stdc++.h>
using namespace std;

int counting(int n)
{
    // base case
    // if (n == 0)
    // {
    //     return 0;
    // }
    if (n<= 0)
    {
        return 0;
    }
    cout << n << " ";
    return counting(n - 1);
}

int main()
{
    int n;
    cout << "enter the number:";
    cin >> n;

    int ans = counting(n);

    cout << ans << " ";
}
