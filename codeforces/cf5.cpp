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
        long long sum = 0;
        vector<int> arr(n);
        for (int i = 0; i < n ; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n ; i++)
        {
            sum += arr[i];
        }
        if (sum < 0)~
        {
            cout << -sum << endl;
        }
        else
        {
            cout << "0" << endl;
        }
        return 0;
    }
}