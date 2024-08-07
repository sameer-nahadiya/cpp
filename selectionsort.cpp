#include <bits/stdc++.h>
using namespace std;
void selection_sort(int arr[], int n)
{
    for (int i = 0; i <= n; i++)
    {
        int min = i;
        for (int j = i; j <= n - 1; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        int temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }
}
void bubble_sort(int arr[], int n)
{
    for (int i = n - 1; i >= 1; i--)
    {
        for (int j = 0; j <= i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {   
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                //swap(arr[j + 1], arr[j]);
            }
        }
    }   
}
void insertions_sort(int arr[], int n)
{
    for (int i = 1; i <= n - 1; i++)
    {
        int j = i;
        while (j > 0 && (arr[j - 1] > arr[j]))
        {
            //swap(arr[j - 1], arr[j]);
            int temp=arr[j-1];
            arr[j-1]=arr[j];
            arr[j]=temp;   
            j--;
        }
    }
}
int main()
{
    int n;
    cout << "enter the number:";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    /*selection_sort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] <<endl;
    }
    bubble_sort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }*/
    insertions_sort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}

