#include <bits/stdc++.h>
using namespace std;
void display(vector<int>& a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    vector<int> v1;
    v1.push_back(1);
    v1.push_back(5);
    v1.push_back(4);
    v1.push_back(3);
    v1.push_back(9);

    display(v1);
    cout << endl;
    int s=0;
    int e=v1.size()-1;
    
    while(s<=e){
        int temp=v1[s];
        v1[s]=v1[e];
        v1[e]=temp;
        s++;
        e--;
    }
    display(v1);
    cout << endl;
}