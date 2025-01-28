#include<bits/stdc++.h>
using namespace std;

int main(){
    int b;
    cin>>b;
    int m,n;
    cin>>m>>n;
    int keyboards[m];
    int drives[n];
    for(int i=0;i<n;i++){
        cin>>keyboards[i];
    }
    for(int i=0;i<m;i++){
        cin>>drives[i];
    }
    int maxtotalcost= -1;
    for(int i=0;i<n;i++){
        int keyboardscost=keyboards[i];
        for(int j=0;j<=i;j++){
            int drivescost=drives[j];
            int totalcost=keyboardscost+drivescost;
            if(totalcost<=b && totalcost>maxtotalcost){
                maxtotalcost=totalcost;
            } 
        }   
    }
    if(maxtotalcost!=-1){
        cout<<maxtotalcost<<endl;
    }
    else {
    cout<<maxtotalcost;
    }
}