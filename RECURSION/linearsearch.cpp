#include <bits/stdc++.h>
using namespace std;

void print(int arr[], int size)
{
    cout << "size of array: " << size << endl;

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
bool linearsearch(int arr[], int size, int key)
{
    print(arr, size);
    // base case
    if (size == 0)
    {
        return false;
    }
    // if(size==1 && arr[0]==key){
    //     return 1;
    // }
    if (arr[0] == key)
    {
        return true;
    }
    return linearsearch(arr + 1, size - 1, key);
}
int main()
{
    int arr[5] = {3, 5, 7, 2, 9};
    int size = 5;
    int key = 9;

    bool ans = linearsearch(arr, size, key);

    if (ans == true)
    {
        cout << "element found" << endl;
    }
    else
    {
        cout << "element not found" << endl;
    }
    return 0;
}