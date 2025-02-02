#include <bits/stdc++.h>
using namespace std;
bool binarysearch(int *arr, int s, int e, int key)
{
    // base case
    if (s > e)
    {
        return false;
    }
    if (arr[0] == key)
    {
        return true;
    }
    int mid = (s + e) / 2;
    if (arr[mid] < key)
    {
        return binarysearch(arr, mid + 1, e, key);
    }
    else
    {
        return binarysearch(arr, s, mid - 1, key);
    }
}
int main()
{
    int arr[6] = {2, 5, 7, 9, 10, 19};
    int size = 6;
    int s = 0;
    int e = size - 1;
    //
    int key = 9;

    bool ans = binarysearch(arr, s, e, key);
    if (ans==true)
    {
        cout << "element found" << endl;
    }
    else
    {
        cout << "Element not found" << endl;
    }
    return 0;
}

/* bool issorted(int arr[], int size)
{
    // base case
    if (size == 0 || size == 1)
    {
        return true;
    }
    if (arr[0] > arr[1])
    {
        return false;
    }
    else
    {
        bool remainingpart = issorted(arr + 1, size - 1);
        return remainingpart;
    }
}
int main()
{
    int arr[5] = {1, 3, 5, 7, 9};
    int size = 5;

    bool ans = issorted(arr, size);
    if (ans == true)
    {
        cout << "array is sorted "<<endl;
    }
    else
    {
        cout << "array is not sorted"<<endl;
    }
    return 0;
}*/
