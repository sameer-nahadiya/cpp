#include<bits/stdc++.h>
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
        int oddCount = 0, evenCount = 0;
        int oddSum = 0, evenSum = 0;
        
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            
            if (arr[i] % 2 == 0)
            {
                evenSum += arr[i];
                evenCount++;
            }
            else
            {
                oddSum += arr[i];
                oddCount++;
            }
        }
        if ((evenSum == 0 && n % 2 != 0) || oddCount % 2 != 0)
        {
            cout << "NO\n";
        }
        else
        {
            cout << "YES\n";
        }
    }
    
    return 0;
}
