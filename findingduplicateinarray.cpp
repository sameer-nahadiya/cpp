#include <iostream>
using namespace std;
const int MAX_SIZE = 100;
int finduniqueno(int arr[], int size)
{
    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}
int main()
{
    int arr[MAX_SIZE];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int uniquenumber=finduniqueno(arr, n);
    cout<<uniquenumber<<endl;
    return 0;
}