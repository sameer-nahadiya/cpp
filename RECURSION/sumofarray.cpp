#include <bits/stdc++.h>
using namespace std;

int arraysum(int arr[], int size, int sum)
{
    // base case
    if (size == 0)
    {
        return sum;
    }
    // if (size == 1)
    // {
    //     return arr[0];
    // }
    sum = sum + arr[0];
    int ans = arraysum(arr + 1, size - 1, sum);
    return ans;
}
int main()
{

    int arr[5] = {3, 5, 7, 2, 10};
    int size = 5;
    int sum = 0;

    int ans = arraysum(arr, size, sum);
    cout << ans << endl;
}