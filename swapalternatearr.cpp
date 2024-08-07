#include <iostream>
using namespace std;
void printarray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void swapalternate(int arr[], int size)
{
    for (int i = 0; i < size; i += 2)
    {   
        int temp=0;
        if (i + 1 < size)
        {
            temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }
    }
}
int main()
{
    int even[8] = {5, 2, 9, 4, 7, 6, 1, 0};
    swapalternate(even, 8);
    printarray(even, 8);
    cout << endl;
}