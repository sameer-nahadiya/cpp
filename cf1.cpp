/*#include <bits/stdc++.h>
using namespace std;

bool issorted(vector<int> &arr, int n)
{
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < arr[i - 1])
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        if (issorted(arr, n) || k >= 2)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}*/
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int maxErrorsInWindow(const vector<int>& errorCounts, int K) {
    int N = errorCounts.size();
    
    // Initial sum of the first window of size K
    long long currentSum = 0;
    for (int i = 0; i < K; ++i) {
        currentSum += errorCounts[i];
    }

    // Initialize maxErrors with the sum of the first window
    long long maxErrors = currentSum;

    // Slide the window across the array
    for (int i = K; i < N; ++i) {
        currentSum += errorCounts[i] - errorCounts[i - K];
        maxErrors = max(maxErrors, currentSum);
    }

    return maxErrors;
}

int main() {
    int N, K;
    
    // Read the size of the error logs list
    cin >> N;
    
    vector<int> errorCounts(N);
    
    // Read the error counts for each second
    for (int i = 0; i < N; ++i) {
        cin >> errorCounts[i];
    }

    // Read the window size
    cin >> K;

    // Calculate and output the maximum number of errors in a K-second window
    cout << maxErrorsInWindow(errorCounts, K) << endl;

    return 0;
}




