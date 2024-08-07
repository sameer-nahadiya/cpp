#include <bits/stdc++.h>
using namespace std;

vector<int> findarraysum(vector<int> nums, int n, vector<int> nums2, int m)
{
    int carry = 0;
    int i = n - 1;
    int j = m - 1;
    vector<int> ans;
    while (i >= 0 && j >= 0)
    {
        int val1 = nums[i];
        int val2 = nums2[j];
        int sum = val1 + val2 + carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
        i--;
        j--;
    }
    while (i >= 0)
    {
        int sum = nums[i] + carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
        i--;
    }
    while (j >= 0)
    {
        int sum = nums2[j] + carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
        j--;
    }
    while (carry != 0)
    {
        int sum = carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
    }
    reverse(ans.begin(),ans.end());
    return ans;
}

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> nums(n);
    vector<int> nums2(m);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> nums2[i];
    }
    vector<int> result = findarraysum(nums, n, nums2, m);
    for (int i : result)
    {
        cout << i;
    }

    return 0;
}