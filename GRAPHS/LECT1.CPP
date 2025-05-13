#include<bits/stdc++.h>
using namespace std;

// int main(){
//     int n,m;
//     cin>>n>>m;
//     //graph here
//     vector<int> adj[n+1];

//     for(int i=0;i<m;i++){
//         int u,v;
//         cin>>u>>v;
//         // agar edge sirf u se v ke taraf hai tho u--->v
//         adj[u].push_back(v);
//         // agar edge sirf v se u ke taraf hai tho v--->u
//         adj[v].push_back(u);
//     }
    
//     return 0;
// }
              // BFS CODE APPLYING ON GRAP
class solution{
    public:
      vector<int>bfsofgraph(int v,vector<int> adj[]){
        int vis[n]={0};
        vis[0]=1;
        queue<int> q;
        q.push(0);
        vector<int> bfs;
        while(!q.empty()){
            int node=q.front();
            q.pop();
            bfs.push_back(node);

            for(auto it : adj[node]){
                if(!vis[it]){
                    vis[it]=1;
                    q.push(it);
                }
            }
        }
        return bfs;
    }
}