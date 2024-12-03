#include<bits/stdc++.h>

using namespace std;
int socksmerchant(int socks[],int n){
    sort(socks,socks+n);
    int totalpairs=0;
    int coloured_socks=socks[0];
    int count=0;
    for(int i=0;i<n;i++){
        if(socks[i]==coloured_socks){
            count++;
        }
        else {
            totalpairs+= count/2;
            count=1;
            coloured_socks=socks[i];
        }
    }
    totalpairs+=count/2;
    return totalpairs;
}
int main(){
    int n;
    cin>>n;
    int socks[n];
    for(int i=0;i<n;i++){
        cin>>socks[i];
    }    
    cout<<socksmerchant(socks,n)<<endl;
    
    return 0;
}
