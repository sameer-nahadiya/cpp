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
        int e = *min_element(arr.begin(), arr.end());

        if (arr[0] != e)
        {
            cout << "NO" << endl;
        }
        else
            cout << "Yes" << endl;
    }
}