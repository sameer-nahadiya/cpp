#include <bits/stdc++.h>
using namespace std;

void merge(int *arr, int s, int e)
{
    int mid = s + (e - s) / 2;
    //int mid=(s+e)/2;
    int len1 = mid - s + 1;
    int len2 = e - mid;
    int *first = new int[len1];
    int *second = new int[len2];
    // copying the values
    int mainarrayindex = s;
    for (int i = 0; i < len1; i++)
    {
        first[i] = arr[mainarrayindex++];
    }
    // copying the values
    mainarrayindex = mid + 1;
    for (int i = 0; i < len2; i++)
    {
        second[i] = arr[mainarrayindex++];
    }
    // merging the arrays
    int index1 = 0;
    int index2 = 0;
    mainarrayindex = s;
    while (index1 < len1 && index2 < len2)
    {
        if (first[index1] < second[index2])
        {   
            arr[mainarrayindex++] = first[index1++];
        }
        else
        {
            arr[mainarrayindex++] = second[index2++];
        }
    }
    while (index1 < len1)
    {
        arr[mainarrayindex++] = first[index1++];
    }
    while (index2 < len2)
    {
        arr[mainarrayindex++] = second[index2++];
    }
    //dynamic memory allocate karne ke baad unhe delete jarur kare warna error de degi
    delete[]first;
    delete []second;
}
void mergesort(int *arr, int s, int e)
{
    // base case
    if (s >= e)
    {
        return;
    }
    int mid = s + (e - s) / 2;
    //int mid=(s+e)/2;
    // sort the left part
    mergesort(arr, s, mid);
    // sort the right part
    mergesort(arr, mid + 1, e);

    // merge them using the merge function

    merge(arr, s, e);
}
int main()
{
    int arr[5] = {3, 5, 2, 18, 9};
    int n = 5;

    mergesort(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}