#include <bits/stdc++.h>
using namespace std;

int maximizeprodct(int a, int b, int c)
{   
    int nums[3] = {a, b, c};
    int increment = 5;
    for (int i = 1; i <= 5; i++)
    {
        sort(nums, nums + 3);
        nums[0] += 1;
    }
    int result = nums[0]*nums[1]*nums[2];
    
    return result;
}
int main()
{
    int t;
    cin>>t;
    while(t--){

        int a, b, c;
        cin >> a >> b >> c;
        int result = maximizeprodct(a, b, c);
        cout << result<<endl;
    }
    return 0;
}



