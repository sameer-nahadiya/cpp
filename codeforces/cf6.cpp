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
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        unordered_map<int, int> dp;
        for (int item : arr)
        {
            dp[item]++;
        }
        if (dp.size() == 1)
        {
            cout << "Yes" << endl;
        }
        else if (dp.size() == 2)
        {
            int count1 = -1, count2 = -1, i = 0;
            for (auto it = dp.begin(); i < 2; ++it, ++i)
            {
                if (i == 0)
                {
                    count1 = it->second;
                }
                else
                {
                    count2 = it->second;
                }
            }
            if (abs(count1 - count2) <= 1)
            {
                cout << "Yes" << endl;
            }
            else
            {
                cout << "No" << endl;
            }
        }
        else
        {
            cout << "No" << endl;
        }
    }
    return 0;
}
