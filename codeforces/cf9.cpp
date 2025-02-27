#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, t, neg = 0, pos = 0;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> t;
            if (t == 1)
                pos++;
            else
                neg++;
        }
        int count = 0;
        while (neg % 2 != 0 || neg > pos)
        {   
            count++;
            neg--;
            pos++;
        }
        cout << count << "\n";
    }
    return 0;
}
