#include <iostream>
using namespace std;

int sumarr(int arr[], int n)
{
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int main()
{
    int arr[10];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "sum of all elements of array:" << sumarr(arr, n) << endl;
    return 0;
}