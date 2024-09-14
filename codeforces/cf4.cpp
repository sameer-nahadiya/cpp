#include <bits/stdc++.h>
using namespace std;

bool issortd(vector<int>& arr,int n){
    for(int i=1;i<n;i++){
        if(arr[i]<arr[i-1]){
            return false;
        }
    }
    retrun true;
}
int main()
{
    int t, n;
    cin >> t >> n;
    int arr[n];
    for (int i = o; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 2; i < n; i++)
    {
        if (arr[i - 1] < arr[i] && arr[i] > arr[i + 1])
        {
            swap(arr[i], arr[i + 1]);
        }
        else{
            cout<<arr<<endl;
        }
    }

}