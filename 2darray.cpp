#include <bits/stdc++.h>
using namespace std;

bool ispresent(int arr[][4], int target, int row, int col)
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (target == arr[i][j])
            {
                return 1;
            }
        }
    }
    return 0;
} 

void printsum(int arr[][4], int row, int col)
{
    for (int i = 0; i < 3; i++)
    {
        int sum = 0;
        for (int j = 0; j < 4; j++)
        {
            sum += arr[i][j];
        }
        cout << sum << " ";
    }
}

int largestrowsum(int arr[][4], int row, int col)
{
    int maxi = INT_MIN;
    int rowindex = -1;
    for (int i = 0; i < 3; i++)
    {
        int sum = 0;
        for (int j = 0; j < 4; j++)
        {
            sum += arr[i][j];
        }
        if (sum > maxi)
        {
            maxi = sum;
            rowindex = row;
        }
    }
    cout << "the maximum sum is" <<" "<< maxi << endl;
    return row;
}
int main()
{
    // int arr[3][4]={1,2,3,4,5,6,7,8,9,12,14,15};

    // int arr[3][4]={{1,11,111,1111},{2,22,222,2222},{3,33,333,3333}};
    int arr[3][4];

    cout << "Enter the elements " << endl;
    // taking input -> row wise input
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> arr[i][j];
        }
    }
    // taking input -> col wise input
    // for (int i = 0; i < 4; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cin >> arr[j][i];
    //     }
    // }
    cout << "Printing the output" << endl;
    // print the output
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    // cout<<"enter the element to search"<<endl;
    // int target;
    // cin>>target;

    // if(ispresent(arr,target,3,4)){
    //     cout<<"Element found"<<endl;
    // }
    // else {
    //     cout<<"element not found"<<endl;
    // }

    // printsum(arr,3,4);
    // cout<<endl;
    int ansindex=largestrowsum(arr,3,4);
    cout<<"max row at index"<<" "<<ansindex<<endl;
    return 0;
}