#include <bits/stdc++.h>
using namespace std;

bool ispossible(vector<int> stalls, int k, int mid)
{
    int cowcount = 1;
    int lastposition = stalls[0];
    for (int i = 0; i < stalls.size(); i++)
    {
        if (stalls[i] - lastposition >= mid)
        {
            cowcount++;
            if (cowcount == k)
            {
                return true;
            }
            lastposition = stalls[i];
        }
    }
    return false;
}
int aggressivecows(vector<int> &stalls; int k)
{
    sort(stalls.begin(), stalls.end());
    int s = 0;
    int n = stalls.size();
    int maxi = -1;
    for (int i = 0; i < n; i++)
    {
        maxi = max(maxi, stalls[i]);
    }
    int e = maxi;
    int ans = -1;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (ispossible(stalls, k, mid))
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}
