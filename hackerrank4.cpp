// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     int hash[13] = {0};
//     for (int i = 0; i < n; i++)
//     {
//         hash[arr[i]] += 1;
//     }

//     int q;
//     cin >> q;
//     while (q--)
//     {
//         int number;
//         cin >> number;
//         cout << hash[number] << endl;
//     }

//     return 0;
// }
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    vector<int>hash(n+1,0);
    for(int i=0;i<n;i++){
        hash[nums[i]]+=1;
        if(hash[i]==2){
            cout<<hash[i];
        }
    }


}
