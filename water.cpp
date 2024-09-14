#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int height[n];
    for (int i = 0; i < n; i++)
    {
        cin >> height[i];
    }
    int max = n - 1;
    int min = 0;
    while (min <= max)
    {
        if (height[max] < height[min])
        {
            max--;
        }
        else
        {
            min++;
        }
    }
    int ans = max * max;
    cout << ans;
    return 0;
}