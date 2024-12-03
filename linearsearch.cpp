#include <iostream>
using namespace std;

bool search(int arr[], int size, int key)
{

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    int arr[9] = {2, -2, 25, -20, 5, 4, 8, 67, 9};
    cout << "enter the element to search for:";
    int key;
    cin >> key;
    bool found = search(arr, 10, key);
    if (found)
    {
        cout << "key is present " << endl;
    }
    else
    {
        cout << "key is not present" << endl;
    }
}