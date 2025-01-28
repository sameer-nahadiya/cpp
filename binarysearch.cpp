#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    // int mid = (start + end) / 2;
    //  agar kis test case me bahut bade values aa jae tho yeah mid ka formula kaam nahi aayega
    //  tho iske jagah hame niche wala formula use karna padega

    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        //mid = (start + end) / 2; // same here
        mid = start + (end - start) / 2;
    }
    return -1;
}
int main()
{
    int even[6] = {2, 4, 6, 8, 10, 12};
    int index = binarySearch(even, 6, 12);

    cout << "index of the number is:" << index << endl;
    return 0;
}