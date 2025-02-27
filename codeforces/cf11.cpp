#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> points(n);
        for (int i = 0; i < n; i++)
        {
            cin >> points[i];
        }

        int start = 0;
        for (int i = 1; i < n; i++)
        {
            start = max(start, points[i] - points[i - 1]);
        }
        if (start > 2)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}